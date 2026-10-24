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

// Function: cSnd_SeLoadNo
// Address: 0x2cb6a0 - 0x2cb6e0
void cSnd_SeLoadNo_0x2cb6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_SeLoadNo_0x2cb6a0");
#endif

    switch (ctx->pc) {
        case 0x2cb6bcu: goto label_2cb6bc;
        case 0x2cb6ccu: goto label_2cb6cc;
        default: break;
    }

    ctx->pc = 0x2cb6a0u;

    // 0x2cb6a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cb6a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2cb6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2cb6a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cb6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cb6ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2cb6acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb6b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cb6b4: 0xc0b312e  jal         func_2CC4B8
    ctx->pc = 0x2CB6B4u;
    SET_GPR_U32(ctx, 31, 0x2CB6BCu);
    ctx->pc = 0x2CB6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB6B4u;
    // 0x2cb6b8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4B8u, 0x2CB6B4u, 0x2CB6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB6BCu;
label_2cb6bc:
    // 0x2cb6bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cb6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb6c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2cb6c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb6c4: 0xc0b3dbe  jal         func_2CF6F8
    ctx->pc = 0x2CB6C4u;
    SET_GPR_U32(ctx, 31, 0x2CB6CCu);
    ctx->pc = 0x2CB6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB6C4u;
    // 0x2cb6c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF6F8u, 0x2CB6C4u, 0x2CB6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB6CCu;
label_2cb6cc:
    // 0x2cb6cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2cb6ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb6d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cb6d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb6d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB6D8u;
        // 0x2cb6dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB6E0u;
}
