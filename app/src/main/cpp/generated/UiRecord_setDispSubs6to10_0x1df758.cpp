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

// Function: UiRecord_setDispSubs6to10
// Address: 0x1df758 - 0x1df7d0
void UiRecord_setDispSubs6to10_0x1df758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UiRecord_setDispSubs6to10_0x1df758");
#endif

    switch (ctx->pc) {
        case 0x1df77cu: goto label_1df77c;
        case 0x1df78cu: goto label_1df78c;
        case 0x1df79cu: goto label_1df79c;
        case 0x1df7acu: goto label_1df7ac;
        case 0x1df7bcu: goto label_1df7bc;
        default: break;
    }

    ctx->pc = 0x1df758u;

    // 0x1df758: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1df758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1df75c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1df75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1df760: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1df760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1df764: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1df764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df768: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1df768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df76c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1df76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1df770: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1df770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df774: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DF774u;
    SET_GPR_U32(ctx, 31, 0x1DF77Cu);
    ctx->pc = 0x1DF778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF774u;
    // 0x1df778: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DF774u, 0x1DF77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF77Cu;
label_1df77c:
    // 0x1df77c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df780: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1df780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df784: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DF784u;
    SET_GPR_U32(ctx, 31, 0x1DF78Cu);
    ctx->pc = 0x1DF788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF784u;
    // 0x1df788: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DF784u, 0x1DF78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF78Cu;
label_1df78c:
    // 0x1df78c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df790: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1df790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df794: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DF794u;
    SET_GPR_U32(ctx, 31, 0x1DF79Cu);
    ctx->pc = 0x1DF798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF794u;
    // 0x1df798: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DF794u, 0x1DF79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF79Cu;
label_1df79c:
    // 0x1df79c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df7a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1df7a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df7a4: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DF7A4u;
    SET_GPR_U32(ctx, 31, 0x1DF7ACu);
    ctx->pc = 0x1DF7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF7A4u;
    // 0x1df7a8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DF7A4u, 0x1DF7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF7ACu;
label_1df7ac:
    // 0x1df7ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df7b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1df7b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df7b4: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DF7B4u;
    SET_GPR_U32(ctx, 31, 0x1DF7BCu);
    ctx->pc = 0x1DF7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF7B4u;
    // 0x1df7b8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DF7B4u, 0x1DF7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF7BCu;
label_1df7bc:
    // 0x1df7bc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1df7bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df7c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1df7c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df7c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1df7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7C8u;
        // 0x1df7cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF7D0u;
}
