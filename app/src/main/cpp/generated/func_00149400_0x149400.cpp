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

// Function: func_00149400
// Address: 0x149400 - 0x149488
void func_00149400_0x149400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00149400_0x149400");
#endif

    switch (ctx->pc) {
        case 0x149420u: goto label_149420;
        case 0x149430u: goto label_149430;
        case 0x149448u: goto label_149448;
        case 0x149460u: goto label_149460;
        default: break;
    }

    ctx->pc = 0x149400u;

    // 0x149400: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x149400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x149404: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x149404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x149408: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x149408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14940c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14940cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x149410: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x149410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x149414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149418: 0xc0524de  jal         func_149378
    ctx->pc = 0x149418u;
    SET_GPR_U32(ctx, 31, 0x149420u);
    ctx->pc = 0x14941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149418u;
    // 0x14941c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149378u, 0x149418u, 0x149420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149420u;
label_149420:
    // 0x149420: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x149420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149424: 0x24040480  addiu       $a0, $zero, 0x480
    ctx->pc = 0x149424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    // 0x149428: 0xc0aa5b0  jal         func_2A96C0
    ctx->pc = 0x149428u;
    SET_GPR_U32(ctx, 31, 0x149430u);
    ctx->pc = 0x14942Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149428u;
    // 0x14942c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A96C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A96C0u, 0x149428u, 0x149430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149430u;
label_149430:
    // 0x149430: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x149430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x149434: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x149434u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149438: 0x8c663cf0  lw          $a2, 0x3CF0($v1)
    ctx->pc = 0x149438u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C3CF0u));
    // 0x14943c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14943cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149440: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x149440u;
    SET_GPR_U32(ctx, 31, 0x149448u);
    ctx->pc = 0x149444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149440u;
    // 0x149444: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x149440u, 0x149448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149448u;
label_149448:
    // 0x149448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14944c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x14944cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149450: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x149450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149454: 0x24060480  addiu       $a2, $zero, 0x480
    ctx->pc = 0x149454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    // 0x149458: 0xc0aa5b6  jal         func_2A96D8
    ctx->pc = 0x149458u;
    SET_GPR_U32(ctx, 31, 0x149460u);
    ctx->pc = 0x14945Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149458u;
    // 0x14945c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A96D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A96D8u, 0x149458u, 0x149460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149460u;
label_149460:
    // 0x149460: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x149460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x149464: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x149464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
    // 0x149468: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x149468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
    // 0x14946c: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x14946cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x149470: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x149470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149474: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x149474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149478: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x149478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14947c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14947cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149480: 0x3e00008  jr          $ra
    ctx->pc = 0x149480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149480u;
        // 0x149484: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149488u;
}
