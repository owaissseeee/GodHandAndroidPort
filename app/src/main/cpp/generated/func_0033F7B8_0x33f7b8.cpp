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

// Function: func_0033F7B8
// Address: 0x33f7b8 - 0x33f850
void func_0033F7B8_0x33f7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033F7B8_0x33f7b8");
#endif

    switch (ctx->pc) {
        case 0x33f7c8u: goto label_33f7c8;
        case 0x33f7d0u: goto label_33f7d0;
        case 0x33f7d8u: goto label_33f7d8;
        case 0x33f7e0u: goto label_33f7e0;
        case 0x33f7e8u: goto label_33f7e8;
        case 0x33f7f0u: goto label_33f7f0;
        case 0x33f7f8u: goto label_33f7f8;
        case 0x33f800u: goto label_33f800;
        default: break;
    }

    ctx->pc = 0x33f7b8u;

    // 0x33f7b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33f7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33f7bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33f7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33f7c0: 0xc0cef46  jal         func_33BD18
    ctx->pc = 0x33F7C0u;
    SET_GPR_U32(ctx, 31, 0x33F7C8u);
    ctx->pc = 0x33BD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BD18u, 0x33F7C0u, 0x33F7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F7C8u;
label_33f7c8:
    // 0x33f7c8: 0xc0cef4c  jal         func_33BD30
    ctx->pc = 0x33F7C8u;
    SET_GPR_U32(ctx, 31, 0x33F7D0u);
    ctx->pc = 0x33BD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BD30u, 0x33F7C8u, 0x33F7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F7D0u;
label_33f7d0:
    // 0x33f7d0: 0xc0cef52  jal         func_33BD48
    ctx->pc = 0x33F7D0u;
    SET_GPR_U32(ctx, 31, 0x33F7D8u);
    ctx->pc = 0x33BD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BD48u, 0x33F7D0u, 0x33F7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F7D8u;
label_33f7d8:
    // 0x33f7d8: 0xc0cef58  jal         func_33BD60
    ctx->pc = 0x33F7D8u;
    SET_GPR_U32(ctx, 31, 0x33F7E0u);
    ctx->pc = 0x33BD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BD60u, 0x33F7D8u, 0x33F7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F7E0u;
label_33f7e0:
    // 0x33f7e0: 0xc0cef5e  jal         func_33BD78
    ctx->pc = 0x33F7E0u;
    SET_GPR_U32(ctx, 31, 0x33F7E8u);
    ctx->pc = 0x33BD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BD78u, 0x33F7E0u, 0x33F7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F7E8u;
label_33f7e8:
    // 0x33f7e8: 0xc0cef64  jal         func_33BD90
    ctx->pc = 0x33F7E8u;
    SET_GPR_U32(ctx, 31, 0x33F7F0u);
    ctx->pc = 0x33BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BD90u, 0x33F7E8u, 0x33F7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F7F0u;
label_33f7f0:
    // 0x33f7f0: 0xc0cef6a  jal         func_33BDA8
    ctx->pc = 0x33F7F0u;
    SET_GPR_U32(ctx, 31, 0x33F7F8u);
    ctx->pc = 0x33BDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BDA8u, 0x33F7F0u, 0x33F7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F7F8u;
label_33f7f8:
    // 0x33f7f8: 0xc0cef70  jal         func_33BDC0
    ctx->pc = 0x33F7F8u;
    SET_GPR_U32(ctx, 31, 0x33F800u);
    ctx->pc = 0x33BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BDC0u, 0x33F7F8u, 0x33F800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F800u;
label_33f800:
    // 0x33f800: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33f800u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33f804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f808: 0x3e00008  jr          $ra
    ctx->pc = 0x33F808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F808u;
        // 0x33f80c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F810u;
    // 0x33f810: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x33f810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33f814: 0x0  nop
    ctx->pc = 0x33f814u;
    // NOP
    // 0x33f818: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x33f818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33f81c: 0x0  nop
    ctx->pc = 0x33f81cu;
    // NOP
    // 0x33f820: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x33f820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33f824: 0x0  nop
    ctx->pc = 0x33f824u;
    // NOP
    // 0x33f828: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x33f828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33f82c: 0x0  nop
    ctx->pc = 0x33f82cu;
    // NOP
    // 0x33f830: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x33f830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33f834: 0x0  nop
    ctx->pc = 0x33f834u;
    // NOP
    // 0x33f838: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x33f838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33f83c: 0x0  nop
    ctx->pc = 0x33f83cu;
    // NOP
    // 0x33f840: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x33f840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33f844: 0x0  nop
    ctx->pc = 0x33f844u;
    // NOP
    // 0x33f848: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x33f848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33f84c: 0x0  nop
    ctx->pc = 0x33f84cu;
    // NOP
    ctx->pc = 0x33f850u;
}
