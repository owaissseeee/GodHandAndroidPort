#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Slot2_updateLineMark2
// Address: 0x1e6da0 - 0x1e6e10
void Slot2_updateLineMark2_0x1e6da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_updateLineMark2_0x1e6da0");
#endif

    switch (ctx->pc) {
        case 0x1e6df0u: goto label_1e6df0;
        case 0x1e6e04u: goto label_1e6e04;
        default: break;
    }

    ctx->pc = 0x1e6da0u;

    // 0x1e6da0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6da8: 0x948303e4  lhu         $v1, 0x3E4($a0)
    ctx->pc = 0x1e6da8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 996)));
    // 0x1e6dac: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x1e6dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1e6db0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E6DB0u;
    {
        const bool branch_taken_0x1e6db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6DB0u;
        // 0x1e6db4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6db0) {
            ctx->pc = 0x1E6E04u;
            goto label_1e6e04;
        }
    }
    ctx->pc = 0x1E6DB8u;
    // 0x1e6db8: 0x30623fff  andi        $v0, $v1, 0x3FFF
    ctx->pc = 0x1e6db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1e6dbc: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x1e6dbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e6dc0: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E6DC0u;
    {
        const bool branch_taken_0x1e6dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6DC0u;
        // 0x1e6dc4: 0xa48303e4  sh          $v1, 0x3E4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 996), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6dc0) {
            ctx->pc = 0x1E6E04u;
            goto label_1e6e04;
        }
    }
    ctx->pc = 0x1E6DC8u;
    // 0x1e6dc8: 0x31027  nor         $v0, $zero, $v1
    ctx->pc = 0x1e6dc8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1e6dcc: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1e6dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1e6dd0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1e6dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e6dd4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1e6dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e6dd8: 0x30434000  andi        $v1, $v0, 0x4000
    ctx->pc = 0x1e6dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1e6ddc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6DDCu;
    {
        const bool branch_taken_0x1e6ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6DDCu;
        // 0x1e6de0: 0xa48203e4  sh          $v0, 0x3E4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 996), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6ddc) {
            ctx->pc = 0x1E6DF8u;
            goto label_1e6df8;
        }
    }
    ctx->pc = 0x1E6DE4u;
    // 0x1e6de4: 0x8c8403c8  lw          $a0, 0x3C8($a0)
    ctx->pc = 0x1e6de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 968)));
    // 0x1e6de8: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6DE8u;
    SET_GPR_U32(ctx, 31, 0x1E6DF0u);
    ctx->pc = 0x1E6DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6DE8u;
    // 0x1e6dec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6DE8u, 0x1E6DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6DF0u;
label_1e6df0:
    // 0x1e6df0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6DF0u;
    {
        const bool branch_taken_0x1e6df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6DF0u;
        // 0x1e6df4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6df0) {
            ctx->pc = 0x1E6E08u;
            goto label_1e6e08;
        }
    }
    ctx->pc = 0x1E6DF8u;
label_1e6df8:
    // 0x1e6df8: 0x8c8403c8  lw          $a0, 0x3C8($a0)
    ctx->pc = 0x1e6df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 968)));
    // 0x1e6dfc: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6DFCu;
    SET_GPR_U32(ctx, 31, 0x1E6E04u);
    ctx->pc = 0x1E6E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6DFCu;
    // 0x1e6e00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6DFCu, 0x1E6E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6E04u;
label_1e6e04:
    // 0x1e6e04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6e08:
    // 0x1e6e08: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E08u;
        // 0x1e6e0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6E10u;
}
