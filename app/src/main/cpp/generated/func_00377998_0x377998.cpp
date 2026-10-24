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

// Function: func_00377998
// Address: 0x377998 - 0x3779d0
void func_00377998_0x377998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00377998_0x377998");
#endif

    switch (ctx->pc) {
        case 0x3779a8u: goto label_3779a8;
        default: break;
    }

    ctx->pc = 0x377998u;

    // 0x377998: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x377998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x37799c: 0x2443e590  addiu       $v1, $v0, -0x1A70
    ctx->pc = 0x37799cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960528));
    // 0x3779a0: 0x24640380  addiu       $a0, $v1, 0x380
    ctx->pc = 0x3779a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x3779a4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3779a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x76E590u));
label_3779a8:
    // 0x3779a8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3779A8u;
    {
        const bool branch_taken_0x3779a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3779a8) {
            ctx->pc = 0x3779ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3779A8u;
            // 0x3779ac: 0x24630070  addiu       $v1, $v1, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3779B8u;
            goto label_3779b8;
        }
    }
    ctx->pc = 0x3779B0u;
    // 0x3779b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3779B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3779B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3779B0u;
        // 0x3779b4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3779B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3779B8u;
label_3779b8:
    // 0x3779b8: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x3779b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3779bc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3779BCu;
    {
        const bool branch_taken_0x3779bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3779bc) {
            ctx->pc = 0x3779C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3779BCu;
            // 0x3779c0: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3779A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3779a8;
        }
    }
    ctx->pc = 0x3779C4u;
    // 0x3779c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3779C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3779C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3779C4u;
        // 0x3779c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3779C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3779CCu;
    // 0x3779cc: 0x0  nop
    ctx->pc = 0x3779ccu;
    // NOP
    ctx->pc = 0x3779d0u;
}
