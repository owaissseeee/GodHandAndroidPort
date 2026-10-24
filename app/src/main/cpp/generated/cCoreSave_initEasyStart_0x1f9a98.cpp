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

// Function: cCoreSave_initEasyStart
// Address: 0x1f9a98 - 0x1f9ad0
void cCoreSave_initEasyStart_0x1f9a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_initEasyStart_0x1f9a98");
#endif

    switch (ctx->pc) {
        case 0x1f9ab0u: goto label_1f9ab0;
        case 0x1f9abcu: goto label_1f9abc;
        default: break;
    }

    ctx->pc = 0x1f9a98u;

    // 0x1f9a98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f9a9c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1f9a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f9aa0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f9aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f9aa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f9aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f9aa8: 0xc07eb8a  jal         func_1FAE28
    ctx->pc = 0x1F9AA8u;
    SET_GPR_U32(ctx, 31, 0x1F9AB0u);
    ctx->pc = 0x1F9AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9AA8u;
    // 0x1f9aac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAE28u, 0x1F9AA8u, 0x1F9AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9AB0u;
label_1f9ab0:
    // 0x1f9ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9ab4: 0xc07e852  jal         func_1FA148
    ctx->pc = 0x1F9AB4u;
    SET_GPR_U32(ctx, 31, 0x1F9ABCu);
    ctx->pc = 0x1F9AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9AB4u;
    // 0x1f9ab8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA148u, 0x1F9AB4u, 0x1F9ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9ABCu;
label_1f9abc:
    // 0x1f9abc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f9abcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9AC4u;
        // 0x1f9ac8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9ACCu;
    // 0x1f9acc: 0x0  nop
    ctx->pc = 0x1f9accu;
    // NOP
    ctx->pc = 0x1f9ad0u;
}
