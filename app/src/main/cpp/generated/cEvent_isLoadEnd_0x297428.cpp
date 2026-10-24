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

// Function: cEvent_isLoadEnd
// Address: 0x297428 - 0x297450
void cEvent_isLoadEnd_0x297428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEvent_isLoadEnd_0x297428");
#endif

    switch (ctx->pc) {
        case 0x297440u: goto label_297440;
        default: break;
    }

    ctx->pc = 0x297428u;

    // 0x297428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29742c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x29742cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x297430: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x297430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x297434: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x297434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x297438: 0xc080426  jal         func_201098
    ctx->pc = 0x297438u;
    SET_GPR_U32(ctx, 31, 0x297440u);
    ctx->pc = 0x29743Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297438u;
    // 0x29743c: 0x24443f20  addiu       $a0, $v0, 0x3F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201098u, 0x297438u, 0x297440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297440u;
label_297440:
    // 0x297440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297444: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x297444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x297448: 0x3e00008  jr          $ra
    ctx->pc = 0x297448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297448u;
        // 0x29744c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297450u;
}
