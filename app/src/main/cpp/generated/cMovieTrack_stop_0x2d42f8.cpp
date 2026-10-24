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

// Function: cMovieTrack_stop
// Address: 0x2d42f8 - 0x2d4340
void cMovieTrack_stop_0x2d42f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMovieTrack_stop_0x2d42f8");
#endif

    switch (ctx->pc) {
        case 0x2d431cu: goto label_2d431c;
        case 0x2d4330u: goto label_2d4330;
        default: break;
    }

    ctx->pc = 0x2d42f8u;

    // 0x2d42f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d42f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d42fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d42fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d4300: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d4300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d4304: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d4304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4308: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d4308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d430c: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D430Cu;
    {
        const bool branch_taken_0x2d430c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d430c) {
            ctx->pc = 0x2D4310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D430Cu;
            // 0x2d4310: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4334u;
            goto label_2d4334;
        }
    }
    ctx->pc = 0x2D4314u;
    // 0x2d4314: 0xc0d16e2  jal         func_345B88
    ctx->pc = 0x2D4314u;
    SET_GPR_U32(ctx, 31, 0x2D431Cu);
    ctx->pc = 0x345B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345B88u, 0x2D4314u, 0x2D431Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D431Cu;
label_2d431c:
    // 0x2d431c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D431Cu;
    {
        const bool branch_taken_0x2d431c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d431c) {
            ctx->pc = 0x2D4320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D431Cu;
            // 0x2d4320: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4334u;
            goto label_2d4334;
        }
    }
    ctx->pc = 0x2D4324u;
    // 0x2d4324: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d4324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4328: 0xc0d17d2  jal         func_345F48
    ctx->pc = 0x2D4328u;
    SET_GPR_U32(ctx, 31, 0x2D4330u);
    ctx->pc = 0x2D432Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4328u;
    // 0x2d432c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345F48u, 0x2D4328u, 0x2D4330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4330u;
label_2d4330:
    // 0x2d4330: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d4330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d4334:
    // 0x2d4334: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d4334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4338: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4338u;
        // 0x2d433c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4340u;
}
