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

// Function: LockOn_aimAtTarget
// Address: 0x2f5468 - 0x2f5508
void LockOn_aimAtTarget_0x2f5468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LockOn_aimAtTarget_0x2f5468");
#endif

    switch (ctx->pc) {
        case 0x2f548cu: goto label_2f548c;
        case 0x2f549cu: goto label_2f549c;
        case 0x2f54acu: goto label_2f54ac;
        case 0x2f54dcu: goto label_2f54dc;
        case 0x2f54e4u: goto label_2f54e4;
        case 0x2f54f0u: goto label_2f54f0;
        default: break;
    }

    ctx->pc = 0x2f5468u;

    // 0x2f5468: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2f5468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2f546c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2f546cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2f5470: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f5470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5474: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2f5474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2f5478: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f5478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f547c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2f547cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2f5480: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f5480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f5484: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2F5484u;
    SET_GPR_U32(ctx, 31, 0x2F548Cu);
    ctx->pc = 0x2F5488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5484u;
    // 0x2f5488: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2F5484u, 0x2F548Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F548Cu;
label_2f548c:
    // 0x2f548c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x2f548cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f5490: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f5490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5494: 0xc0bd562  jal         func_2F5588
    ctx->pc = 0x2F5494u;
    SET_GPR_U32(ctx, 31, 0x2F549Cu);
    ctx->pc = 0x2F5498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5494u;
    // 0x2f5498: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5588u, 0x2F5494u, 0x2F549Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F549Cu;
label_2f549c:
    // 0x2f549c: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x2f549cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f54a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f54a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f54a4: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2F54A4u;
    SET_GPR_U32(ctx, 31, 0x2F54ACu);
    ctx->pc = 0x2F54A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F54A4u;
    // 0x2f54a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2F54A4u, 0x2F54ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F54ACu;
label_2f54ac:
    // 0x2f54ac: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2f54acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f54b0: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2f54b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f54b4: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2f54b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f54b8: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2f54b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f54bc: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x2f54bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f54c0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f54c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f54c4: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2f54c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f54c8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f54c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f54cc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2f54ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f54d0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2f54d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f54d4: 0xc0ad7f2  jal         func_2B5FC8
    ctx->pc = 0x2F54D4u;
    SET_GPR_U32(ctx, 31, 0x2F54DCu);
    ctx->pc = 0x2F54D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F54D4u;
    // 0x2f54d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FC8u, 0x2F54D4u, 0x2F54DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F54DCu;
label_2f54dc:
    // 0x2f54dc: 0xc0bfac6  jal         func_2FEB18
    ctx->pc = 0x2F54DCu;
    SET_GPR_U32(ctx, 31, 0x2F54E4u);
    ctx->pc = 0x2F54E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F54DCu;
    // 0x2f54e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB18u, 0x2F54DCu, 0x2F54E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F54E4u;
label_2f54e4:
    // 0x2f54e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f54e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f54e8: 0xc0ad7f2  jal         func_2B5FC8
    ctx->pc = 0x2F54E8u;
    SET_GPR_U32(ctx, 31, 0x2F54F0u);
    ctx->pc = 0x2F54ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F54E8u;
    // 0x2f54ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FC8u, 0x2F54E8u, 0x2F54F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F54F0u;
label_2f54f0:
    // 0x2f54f0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2f54f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f54f4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2f54f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f54f8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2f54f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f54fc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f54fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f5500: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5500u;
        // 0x2f5504: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5508u;
}
