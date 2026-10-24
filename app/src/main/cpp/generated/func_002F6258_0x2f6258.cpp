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

// Function: func_002F6258
// Address: 0x2f6258 - 0x2f62f8
void func_002F6258_0x2f6258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F6258_0x2f6258");
#endif

    switch (ctx->pc) {
        case 0x2f6284u: goto label_2f6284;
        case 0x2f62b4u: goto label_2f62b4;
        case 0x2f62c0u: goto label_2f62c0;
        case 0x2f62ccu: goto label_2f62cc;
        default: break;
    }

    ctx->pc = 0x2f6258u;

    // 0x2f6258: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f6258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2f625c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2f625cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2f6260: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2f6260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2f6264: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f6264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6268: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2f6268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2f626c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f626cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6270: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2f6270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2f6274: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2f6274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6278: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f6278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f627c: 0xc0ad8c4  jal         func_2B6310
    ctx->pc = 0x2F627Cu;
    SET_GPR_U32(ctx, 31, 0x2F6284u);
    ctx->pc = 0x2F6280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F627Cu;
    // 0x2f6280: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6310u, 0x2F627Cu, 0x2F6284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6284u;
label_2f6284:
    // 0x2f6284: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2f6284u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f6288: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2f6288u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f628c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2f628cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f6290: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2f6290u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f6294: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x2f6294u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f6298: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f6298u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f629c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2f629cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f62a0: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2f62a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f62a4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2f62a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f62a8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2f62a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f62ac: 0xc0ad8a2  jal         func_2B6288
    ctx->pc = 0x2F62ACu;
    SET_GPR_U32(ctx, 31, 0x2F62B4u);
    ctx->pc = 0x2F62B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F62ACu;
    // 0x2f62b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x2F62ACu, 0x2F62B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F62B4u;
label_2f62b4:
    // 0x2f62b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f62b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f62b8: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2F62B8u;
    SET_GPR_U32(ctx, 31, 0x2F62C0u);
    ctx->pc = 0x2F62BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F62B8u;
    // 0x2f62bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2F62B8u, 0x2F62C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F62C0u;
label_2f62c0:
    // 0x2f62c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f62c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f62c4: 0xc0ad8a2  jal         func_2B6288
    ctx->pc = 0x2F62C4u;
    SET_GPR_U32(ctx, 31, 0x2F62CCu);
    ctx->pc = 0x2F62C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F62C4u;
    // 0x2f62c8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x2F62C4u, 0x2F62CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F62CCu;
label_2f62cc:
    // 0x2f62cc: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2f62ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f62d0: 0xfa640000  sqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2f62d0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f62d4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2f62d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f62d8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2f62d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f62dc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2f62dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f62e0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2f62e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f62e4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2f62e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f62e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f62e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f62ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2F62ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F62F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F62ECu;
        // 0x2f62f0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F62ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F62F4u;
    // 0x2f62f4: 0x0  nop
    ctx->pc = 0x2f62f4u;
    // NOP
    ctx->pc = 0x2f62f8u;
}
