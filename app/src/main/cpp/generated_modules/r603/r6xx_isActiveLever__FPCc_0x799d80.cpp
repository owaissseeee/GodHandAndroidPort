#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r603_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r603
{
// Function: r6xx_isActiveLever__FPCc
// Address: 0x799d80 - 0x799e00
void r6xx_isActiveLever__FPCc_0x799d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r6xx_isActiveLever__FPCc_0x799d80");
#endif

    switch (ctx->pc) {
        case 0x799da8u: goto label_799da8;
        case 0x799dd8u: goto label_799dd8;
        case 0x799de8u: goto label_799de8;
        default: break;
    }

    ctx->pc = 0x799d80u;

    // 0x799d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x799d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x799d84: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x799d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x799d88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799d8c: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x799d8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x799d90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d94: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x799d94u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799d98: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x799D98u;
    {
        const bool branch_taken_0x799d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D98u;
        // 0x799d9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d98) {
            ctx->pc = 0x799DD0u;
            goto label_799dd0;
        }
    }
    ctx->pc = 0x799DA0u;
    // 0x799da0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x799da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799da4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799da4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799da8:
    // 0x799da8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799da8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799dac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799dacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799db0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799db4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799db8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799db8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799dbc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799DBCu;
    {
        const bool branch_taken_0x799dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DBCu;
        // 0x799dc0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799dbc) {
            ctx->pc = 0x799DD0u;
            goto label_799dd0;
        }
    }
    ctx->pc = 0x799DC4u;
    // 0x799dc4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799dc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799dc8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799DC8u;
    {
        const bool branch_taken_0x799dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799dc8) {
            ctx->pc = 0x799DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799DC8u;
            // 0x799dcc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799da8;
        }
    }
    ctx->pc = 0x799DD0u;
label_799dd0:
    // 0x799dd0: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799DD0u;
    SET_GPR_U32(ctx, 31, 0x799DD8u);
    ctx->pc = 0x799DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DD0u;
    // 0x799dd4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799DD0u, 0x799DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DD8u;
label_799dd8:
    // 0x799dd8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x799DD8u;
    {
        const bool branch_taken_0x799dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799dd8) {
            ctx->pc = 0x799DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799DD8u;
            // 0x799ddc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799DF0u;
            goto label_799df0;
        }
    }
    ctx->pc = 0x799DE0u;
    // 0x799de0: 0xc0693c6  jal         func_1A4F18
    ctx->pc = 0x799DE0u;
    SET_GPR_U32(ctx, 31, 0x799DE8u);
    ctx->pc = 0x799DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DE0u;
    // 0x799de4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F18u, 0x799DE0u, 0x799DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DE8u;
label_799de8:
    // 0x799de8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x799DE8u;
    {
        const bool branch_taken_0x799de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DE8u;
        // 0x799dec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799de8) {
            ctx->pc = 0x799DF4u;
            goto label_799df4;
        }
    }
    ctx->pc = 0x799DF0u;
label_799df0:
    // 0x799df0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799df4:
    // 0x799df4: 0x3e00008  jr          $ra
    ctx->pc = 0x799DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DF4u;
        // 0x799df8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799DFCu;
    // 0x799dfc: 0x0  nop
    ctx->pc = 0x799dfcu;
    // NOP
    ctx->pc = 0x799e00u;
}
} // namespace gh_r603
