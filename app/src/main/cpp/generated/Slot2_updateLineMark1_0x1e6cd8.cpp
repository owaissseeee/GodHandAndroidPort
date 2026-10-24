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

// Function: Slot2_updateLineMark1
// Address: 0x1e6cd8 - 0x1e6d48
void Slot2_updateLineMark1_0x1e6cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_updateLineMark1_0x1e6cd8");
#endif

    switch (ctx->pc) {
        case 0x1e6d28u: goto label_1e6d28;
        case 0x1e6d3cu: goto label_1e6d3c;
        default: break;
    }

    ctx->pc = 0x1e6cd8u;

    // 0x1e6cd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6cdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6ce0: 0x948303e2  lhu         $v1, 0x3E2($a0)
    ctx->pc = 0x1e6ce0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 994)));
    // 0x1e6ce4: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x1e6ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1e6ce8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E6CE8u;
    {
        const bool branch_taken_0x1e6ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6CE8u;
        // 0x1e6cec: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6ce8) {
            ctx->pc = 0x1E6D3Cu;
            goto label_1e6d3c;
        }
    }
    ctx->pc = 0x1E6CF0u;
    // 0x1e6cf0: 0x30623fff  andi        $v0, $v1, 0x3FFF
    ctx->pc = 0x1e6cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1e6cf4: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x1e6cf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e6cf8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E6CF8u;
    {
        const bool branch_taken_0x1e6cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6CF8u;
        // 0x1e6cfc: 0xa48303e2  sh          $v1, 0x3E2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 994), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6cf8) {
            ctx->pc = 0x1E6D3Cu;
            goto label_1e6d3c;
        }
    }
    ctx->pc = 0x1E6D00u;
    // 0x1e6d00: 0x31027  nor         $v0, $zero, $v1
    ctx->pc = 0x1e6d00u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1e6d04: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1e6d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1e6d08: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1e6d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e6d0c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1e6d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e6d10: 0x30434000  andi        $v1, $v0, 0x4000
    ctx->pc = 0x1e6d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1e6d14: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6D14u;
    {
        const bool branch_taken_0x1e6d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D14u;
        // 0x1e6d18: 0xa48203e2  sh          $v0, 0x3E2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 994), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6d14) {
            ctx->pc = 0x1E6D30u;
            goto label_1e6d30;
        }
    }
    ctx->pc = 0x1E6D1Cu;
    // 0x1e6d1c: 0x8c8403c8  lw          $a0, 0x3C8($a0)
    ctx->pc = 0x1e6d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 968)));
    // 0x1e6d20: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6D20u;
    SET_GPR_U32(ctx, 31, 0x1E6D28u);
    ctx->pc = 0x1E6D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D20u;
    // 0x1e6d24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6D20u, 0x1E6D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6D28u;
label_1e6d28:
    // 0x1e6d28: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6D28u;
    {
        const bool branch_taken_0x1e6d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D28u;
        // 0x1e6d2c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6d28) {
            ctx->pc = 0x1E6D40u;
            goto label_1e6d40;
        }
    }
    ctx->pc = 0x1E6D30u;
label_1e6d30:
    // 0x1e6d30: 0x8c8403c8  lw          $a0, 0x3C8($a0)
    ctx->pc = 0x1e6d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 968)));
    // 0x1e6d34: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6D34u;
    SET_GPR_U32(ctx, 31, 0x1E6D3Cu);
    ctx->pc = 0x1E6D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D34u;
    // 0x1e6d38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6D34u, 0x1E6D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6D3Cu;
label_1e6d3c:
    // 0x1e6d3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6d40:
    // 0x1e6d40: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D40u;
        // 0x1e6d44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6D48u;
}
