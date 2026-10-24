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

// Function: Slot2_updateMarkAt4A8
// Address: 0x1e3dd0 - 0x1e3e40
void Slot2_updateMarkAt4A8_0x1e3dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_updateMarkAt4A8_0x1e3dd0");
#endif

    switch (ctx->pc) {
        case 0x1e3e20u: goto label_1e3e20;
        case 0x1e3e34u: goto label_1e3e34;
        default: break;
    }

    ctx->pc = 0x1e3dd0u;

    // 0x1e3dd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e3dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e3dd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3dd8: 0x948304a8  lhu         $v1, 0x4A8($a0)
    ctx->pc = 0x1e3dd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1192)));
    // 0x1e3ddc: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x1e3ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1e3de0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E3DE0u;
    {
        const bool branch_taken_0x1e3de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3DE0u;
        // 0x1e3de4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3de0) {
            ctx->pc = 0x1E3E34u;
            goto label_1e3e34;
        }
    }
    ctx->pc = 0x1E3DE8u;
    // 0x1e3de8: 0x30623fff  andi        $v0, $v1, 0x3FFF
    ctx->pc = 0x1e3de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1e3dec: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x1e3decu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e3df0: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E3DF0u;
    {
        const bool branch_taken_0x1e3df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3DF0u;
        // 0x1e3df4: 0xa48304a8  sh          $v1, 0x4A8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1192), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3df0) {
            ctx->pc = 0x1E3E34u;
            goto label_1e3e34;
        }
    }
    ctx->pc = 0x1E3DF8u;
    // 0x1e3df8: 0x31027  nor         $v0, $zero, $v1
    ctx->pc = 0x1e3df8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1e3dfc: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1e3dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1e3e00: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1e3e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e3e04: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1e3e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e3e08: 0x30434000  andi        $v1, $v0, 0x4000
    ctx->pc = 0x1e3e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1e3e0c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E3E0Cu;
    {
        const bool branch_taken_0x1e3e0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E0Cu;
        // 0x1e3e10: 0xa48204a8  sh          $v0, 0x4A8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1192), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3e0c) {
            ctx->pc = 0x1E3E28u;
            goto label_1e3e28;
        }
    }
    ctx->pc = 0x1E3E14u;
    // 0x1e3e14: 0x8c840430  lw          $a0, 0x430($a0)
    ctx->pc = 0x1e3e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1072)));
    // 0x1e3e18: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3E18u;
    SET_GPR_U32(ctx, 31, 0x1E3E20u);
    ctx->pc = 0x1E3E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3E18u;
    // 0x1e3e1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3E18u, 0x1E3E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3E20u;
label_1e3e20:
    // 0x1e3e20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E3E20u;
    {
        const bool branch_taken_0x1e3e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E20u;
        // 0x1e3e24: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3e20) {
            ctx->pc = 0x1E3E38u;
            goto label_1e3e38;
        }
    }
    ctx->pc = 0x1E3E28u;
label_1e3e28:
    // 0x1e3e28: 0x8c840430  lw          $a0, 0x430($a0)
    ctx->pc = 0x1e3e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1072)));
    // 0x1e3e2c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3E2Cu;
    SET_GPR_U32(ctx, 31, 0x1E3E34u);
    ctx->pc = 0x1E3E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3E2Cu;
    // 0x1e3e30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3E2Cu, 0x1E3E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3E34u;
label_1e3e34:
    // 0x1e3e34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e3e38:
    // 0x1e3e38: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E38u;
        // 0x1e3e3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3E40u;
}
