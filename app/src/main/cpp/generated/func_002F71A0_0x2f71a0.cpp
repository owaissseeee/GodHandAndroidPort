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

// Function: func_002F71A0
// Address: 0x2f71a0 - 0x2f7240
void func_002F71A0_0x2f71a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F71A0_0x2f71a0");
#endif

    switch (ctx->pc) {
        case 0x2f71ccu: goto label_2f71cc;
        case 0x2f71fcu: goto label_2f71fc;
        case 0x2f7208u: goto label_2f7208;
        case 0x2f7214u: goto label_2f7214;
        default: break;
    }

    ctx->pc = 0x2f71a0u;

    // 0x2f71a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f71a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2f71a4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2f71a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2f71a8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2f71a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2f71ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f71acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f71b0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2f71b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2f71b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f71b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f71b8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2f71b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2f71bc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2f71bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f71c0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f71c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f71c4: 0xc0ad8c4  jal         func_2B6310
    ctx->pc = 0x2F71C4u;
    SET_GPR_U32(ctx, 31, 0x2F71CCu);
    ctx->pc = 0x2F71C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F71C4u;
    // 0x2f71c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6310u, 0x2F71C4u, 0x2F71CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F71CCu;
label_2f71cc:
    // 0x2f71cc: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2f71ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f71d0: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2f71d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f71d4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2f71d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f71d8: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2f71d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f71dc: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x2f71dcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f71e0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f71e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f71e4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2f71e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f71e8: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2f71e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f71ec: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2f71ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f71f0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2f71f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f71f4: 0xc0ad8a2  jal         func_2B6288
    ctx->pc = 0x2F71F4u;
    SET_GPR_U32(ctx, 31, 0x2F71FCu);
    ctx->pc = 0x2F71F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F71F4u;
    // 0x2f71f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x2F71F4u, 0x2F71FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F71FCu;
label_2f71fc:
    // 0x2f71fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f71fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7200: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2F7200u;
    SET_GPR_U32(ctx, 31, 0x2F7208u);
    ctx->pc = 0x2F7204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7200u;
    // 0x2f7204: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2F7200u, 0x2F7208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7208u;
label_2f7208:
    // 0x2f7208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f720c: 0xc0ad8a2  jal         func_2B6288
    ctx->pc = 0x2F720Cu;
    SET_GPR_U32(ctx, 31, 0x2F7214u);
    ctx->pc = 0x2F7210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F720Cu;
    // 0x2f7210: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x2F720Cu, 0x2F7214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7214u;
label_2f7214:
    // 0x2f7214: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2f7214u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f7218: 0xfa640000  sqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2f7218u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f721c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2f721cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7220: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2f7220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f7224: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2f7224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f7228: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2f7228u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f722c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2f722cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f7230: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f7230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f7234: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7234u;
        // 0x2f7238: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F723Cu;
    // 0x2f723c: 0x0  nop
    ctx->pc = 0x2f723cu;
    // NOP
    ctx->pc = 0x2f7240u;
}
