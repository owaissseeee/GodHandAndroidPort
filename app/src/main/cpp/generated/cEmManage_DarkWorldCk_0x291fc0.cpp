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

// Function: cEmManage_DarkWorldCk
// Address: 0x291fc0 - 0x291fd8
void cEmManage_DarkWorldCk_0x291fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_DarkWorldCk_0x291fc0");
#endif

    ctx->pc = 0x291fc0u;

    // 0x291fc0: 0x90820518  lbu         $v0, 0x518($a0)
    ctx->pc = 0x291fc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1304)));
    // 0x291fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x291FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291FC4u;
        // 0x291fc8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291FCCu;
    // 0x291fcc: 0x0  nop
    ctx->pc = 0x291fccu;
    // NOP
    // 0x291fd0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x291fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x291fd4: 0x0  nop
    ctx->pc = 0x291fd4u;
    // NOP
    ctx->pc = 0x291fd8u;
}
