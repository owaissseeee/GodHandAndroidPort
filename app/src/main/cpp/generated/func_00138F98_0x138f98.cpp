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

// Function: func_00138F98
// Address: 0x138f98 - 0x138fc8
void func_00138F98_0x138f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00138F98_0x138f98");
#endif

    switch (ctx->pc) {
        case 0x138fb8u: goto label_138fb8;
        default: break;
    }

    ctx->pc = 0x138f98u;

    // 0x138f98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x138f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x138f9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138fa0: 0x8c821028  lw          $v0, 0x1028($a0)
    ctx->pc = 0x138fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4136)));
    // 0x138fa4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x138fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x138fa8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x138FA8u;
    {
        const bool branch_taken_0x138fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138FA8u;
        // 0x138fac: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138fa8) {
            ctx->pc = 0x138FB8u;
            goto label_138fb8;
        }
    }
    ctx->pc = 0x138FB0u;
    // 0x138fb0: 0xc04e180  jal         func_138600
    ctx->pc = 0x138FB0u;
    SET_GPR_U32(ctx, 31, 0x138FB8u);
    ctx->pc = 0x138FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138FB0u;
    // 0x138fb4: 0x8c44aff0  lw          $a0, -0x5010($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138600u, 0x138FB0u, 0x138FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138FB8u;
label_138fb8:
    // 0x138fb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x138FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138FBCu;
        // 0x138fc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138FC4u;
    // 0x138fc4: 0x0  nop
    ctx->pc = 0x138fc4u;
    // NOP
    ctx->pc = 0x138fc8u;
}
