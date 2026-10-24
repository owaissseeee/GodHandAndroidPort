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

// Function: InitField214AndSubfields_17D638
// Address: 0x17d638 - 0x17d680
void InitField214AndSubfields_17D638_0x17d638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitField214AndSubfields_17D638_0x17d638");
#endif

    switch (ctx->pc) {
        case 0x17d660u: goto label_17d660;
        case 0x17d66cu: goto label_17d66c;
        default: break;
    }

    ctx->pc = 0x17d638u;

    // 0x17d638: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17d638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17d63c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x17d63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x17d640: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17d640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17d644: 0x24421f20  addiu       $v0, $v0, 0x1F20
    ctx->pc = 0x17d644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7968));
    // 0x17d648: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17d648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17d64c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17d64cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d650: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17d650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d654: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17d654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d658: 0xc05f7e2  jal         func_17DF88
    ctx->pc = 0x17D658u;
    SET_GPR_U32(ctx, 31, 0x17D660u);
    ctx->pc = 0x17D65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D658u;
    // 0x17d65c: 0xae020214  sw          $v0, 0x214($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DF88u, 0x17D658u, 0x17D660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D660u;
label_17d660:
    // 0x17d660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17d660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d664: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x17D664u;
    SET_GPR_U32(ctx, 31, 0x17D66Cu);
    ctx->pc = 0x17D668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D664u;
    // 0x17d668: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x17D664u, 0x17D66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D66Cu;
label_17d66c:
    // 0x17d66c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17d66cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d670: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17d670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d674: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d678: 0x3e00008  jr          $ra
    ctx->pc = 0x17D678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D678u;
        // 0x17d67c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D680u;
}
