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

// Function: func_00336980
// Address: 0x336980 - 0x3369d0
void func_00336980_0x336980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00336980_0x336980");
#endif

    switch (ctx->pc) {
        case 0x3369b8u: goto label_3369b8;
        default: break;
    }

    ctx->pc = 0x336980u;

    // 0x336980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x336980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x336984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x336984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x336988: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x336988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33698c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33698Cu;
    {
        const bool branch_taken_0x33698c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x336990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33698Cu;
        // 0x336990: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33698c) {
            ctx->pc = 0x3369B0u;
            goto label_3369b0;
        }
    }
    ctx->pc = 0x336994u;
    // 0x336994: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x336994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x336998: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x336998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33699c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33699cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3369a0: 0x24a551b8  addiu       $a1, $a1, 0x51B8
    ctx->pc = 0x3369a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20920));
    // 0x3369a4: 0x80cd8cc  j           func_336330
    ctx->pc = 0x3369A4u;
    ctx->pc = 0x3369A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3369A4u;
    // 0x3369a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336330u, 0x3369A4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3369ACu;
    // 0x3369ac: 0x0  nop
    ctx->pc = 0x3369acu;
    // NOP
label_3369b0:
    // 0x3369b0: 0xc0cd8ba  jal         func_3362E8
    ctx->pc = 0x3369B0u;
    SET_GPR_U32(ctx, 31, 0x3369B8u);
    ctx->pc = 0x3362E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3362E8u, 0x3369B0u, 0x3369B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3369B8u;
label_3369b8:
    // 0x3369b8: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3369b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3369bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3369bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3369c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3369c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3369c4: 0x80cd8c0  j           func_336300
    ctx->pc = 0x3369C4u;
    ctx->pc = 0x3369C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3369C4u;
    // 0x3369c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336300u, 0x3369C4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3369CCu;
    // 0x3369cc: 0x0  nop
    ctx->pc = 0x3369ccu;
    // NOP
    ctx->pc = 0x3369d0u;
}
