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

// Function: TimerUSec2BusClock
// Address: 0x3b7638 - 0x3b76b8
void TimerUSec2BusClock_0x3b7638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TimerUSec2BusClock_0x3b7638");
#endif

    switch (ctx->pc) {
        case 0x3b7694u: goto label_3b7694;
        default: break;
    }

    ctx->pc = 0x3b7638u;

    // 0x3b7638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b7638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b763c: 0x3c0208ca  lui         $v0, 0x8CA
    ctx->pc = 0x3b763cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2250 << 16));
    // 0x3b7640: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b7640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b7644: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b7644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7648: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b7648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b764c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3b764cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7650: 0x72020019  multu1      $zero, $s0, $v0
    ctx->pc = 0x3b7650u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 16) * (uint64_t)GPR_U32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3b7654: 0x820019  multu       $a0, $v0
    ctx->pc = 0x3b7654u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3b7658: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x3b7658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x3b765c: 0x34a54240  ori         $a1, $a1, 0x4240
    ctx->pc = 0x3b765cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16960);
    // 0x3b7660: 0x70008010  mfhi1       $s0
    ctx->pc = 0x3b7660u;
    SET_GPR_U64(ctx, 16, ctx->hi1);
    // 0x3b7664: 0x3012  mflo        $a2
    ctx->pc = 0x3b7664u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3b7668: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x3b7668u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3b766c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x3b766cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3b7670: 0x2010  mfhi        $a0
    ctx->pc = 0x3b7670u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3b7674: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3b7674u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x3b7678: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3b7678u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3b767c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x3b767cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x3b7680: 0x70003012  mflo1       $a2
    ctx->pc = 0x3b7680u;
    SET_GPR_U64(ctx, 6, ctx->lo1);
    // 0x3b7684: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x3b7684u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3b7688: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3b7688u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x3b768c: 0xc0ee3a2  jal         func_3B8E88
    ctx->pc = 0x3B768Cu;
    SET_GPR_U32(ctx, 31, 0x3B7694u);
    ctx->pc = 0x3B7690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B768Cu;
    // 0x3b7690: 0x2068025  or          $s0, $s0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8E88u, 0x3B768Cu, 0x3B7694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7694u;
label_3b7694:
    // 0x3b7694: 0x202102d  daddu       $v0, $s0, $v0
    ctx->pc = 0x3b7694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3b7698: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b7698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b769c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b769cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b76a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B76A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B76A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B76A0u;
        // 0x3b76a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B76A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B76A8u;
    // 0x3b76a8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3b76a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3b76ac: 0x0  nop
    ctx->pc = 0x3b76acu;
    // NOP
    // 0x3b76b0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3b76b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3b76b4: 0x0  nop
    ctx->pc = 0x3b76b4u;
    // NOP
    ctx->pc = 0x3b76b8u;
}
