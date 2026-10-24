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

// Function: func_0027B7C0
// Address: 0x27b7c0 - 0x27b810
void func_0027B7C0_0x27b7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027B7C0_0x27b7c0");
#endif

    switch (ctx->pc) {
        case 0x27b7e8u: goto label_27b7e8;
        case 0x27b7f0u: goto label_27b7f0;
        case 0x27b7fcu: goto label_27b7fc;
        default: break;
    }

    ctx->pc = 0x27b7c0u;

    // 0x27b7c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27b7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27b7c4: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x27b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x27b7c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27b7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x27b7cc: 0x244281a8  addiu       $v0, $v0, -0x7E58
    ctx->pc = 0x27b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934952));
    // 0x27b7d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27b7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27b7d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27b7d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b7d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27b7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27b7dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27b7dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b7e0: 0xc0aa12a  jal         func_2A84A8
    ctx->pc = 0x27B7E0u;
    SET_GPR_U32(ctx, 31, 0x27B7E8u);
    ctx->pc = 0x27B7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B7E0u;
    // 0x27b7e4: 0xae020214  sw          $v0, 0x214($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A84A8u, 0x27B7E0u, 0x27B7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B7E8u;
label_27b7e8:
    // 0x27b7e8: 0xc09eecc  jal         func_27BB30
    ctx->pc = 0x27B7E8u;
    SET_GPR_U32(ctx, 31, 0x27B7F0u);
    ctx->pc = 0x27B7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B7E8u;
    // 0x27b7ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BB30u, 0x27B7E8u, 0x27B7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B7F0u;
label_27b7f0:
    // 0x27b7f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b7f4: 0xc0a3ae2  jal         func_28EB88
    ctx->pc = 0x27B7F4u;
    SET_GPR_U32(ctx, 31, 0x27B7FCu);
    ctx->pc = 0x27B7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B7F4u;
    // 0x27b7f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB88u, 0x27B7F4u, 0x27B7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B7FCu;
label_27b7fc:
    // 0x27b7fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27b7fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27b800: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27b800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27b804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b808: 0x3e00008  jr          $ra
    ctx->pc = 0x27B808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B808u;
        // 0x27b80c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B810u;
}
