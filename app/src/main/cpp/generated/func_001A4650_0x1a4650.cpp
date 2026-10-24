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

// Function: func_001A4650
// Address: 0x1a4650 - 0x1a47f8
void func_001A4650_0x1a4650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A4650_0x1a4650");
#endif

    switch (ctx->pc) {
        case 0x1a4650u: goto label_1a4650;
        case 0x1a4654u: goto label_1a4654;
        case 0x1a4658u: goto label_1a4658;
        case 0x1a465cu: goto label_1a465c;
        case 0x1a4660u: goto label_1a4660;
        case 0x1a4664u: goto label_1a4664;
        case 0x1a4668u: goto label_1a4668;
        case 0x1a466cu: goto label_1a466c;
        case 0x1a4670u: goto label_1a4670;
        case 0x1a4674u: goto label_1a4674;
        case 0x1a4678u: goto label_1a4678;
        case 0x1a467cu: goto label_1a467c;
        case 0x1a4680u: goto label_1a4680;
        case 0x1a4684u: goto label_1a4684;
        case 0x1a4688u: goto label_1a4688;
        case 0x1a468cu: goto label_1a468c;
        case 0x1a4690u: goto label_1a4690;
        case 0x1a4694u: goto label_1a4694;
        case 0x1a4698u: goto label_1a4698;
        case 0x1a469cu: goto label_1a469c;
        case 0x1a46a0u: goto label_1a46a0;
        case 0x1a46a4u: goto label_1a46a4;
        case 0x1a46a8u: goto label_1a46a8;
        case 0x1a46acu: goto label_1a46ac;
        case 0x1a46b0u: goto label_1a46b0;
        case 0x1a46b4u: goto label_1a46b4;
        case 0x1a46b8u: goto label_1a46b8;
        case 0x1a46bcu: goto label_1a46bc;
        case 0x1a46c0u: goto label_1a46c0;
        case 0x1a46c4u: goto label_1a46c4;
        case 0x1a46c8u: goto label_1a46c8;
        case 0x1a46ccu: goto label_1a46cc;
        case 0x1a46d0u: goto label_1a46d0;
        case 0x1a46d4u: goto label_1a46d4;
        case 0x1a46d8u: goto label_1a46d8;
        case 0x1a46dcu: goto label_1a46dc;
        case 0x1a46e0u: goto label_1a46e0;
        case 0x1a46e4u: goto label_1a46e4;
        case 0x1a46e8u: goto label_1a46e8;
        case 0x1a46ecu: goto label_1a46ec;
        case 0x1a46f0u: goto label_1a46f0;
        case 0x1a46f4u: goto label_1a46f4;
        case 0x1a46f8u: goto label_1a46f8;
        case 0x1a46fcu: goto label_1a46fc;
        case 0x1a4700u: goto label_1a4700;
        case 0x1a4704u: goto label_1a4704;
        case 0x1a4708u: goto label_1a4708;
        case 0x1a470cu: goto label_1a470c;
        case 0x1a4710u: goto label_1a4710;
        case 0x1a4714u: goto label_1a4714;
        case 0x1a4718u: goto label_1a4718;
        case 0x1a471cu: goto label_1a471c;
        case 0x1a4720u: goto label_1a4720;
        case 0x1a4724u: goto label_1a4724;
        case 0x1a4728u: goto label_1a4728;
        case 0x1a472cu: goto label_1a472c;
        case 0x1a4730u: goto label_1a4730;
        case 0x1a4734u: goto label_1a4734;
        case 0x1a4738u: goto label_1a4738;
        case 0x1a473cu: goto label_1a473c;
        case 0x1a4740u: goto label_1a4740;
        case 0x1a4744u: goto label_1a4744;
        case 0x1a4748u: goto label_1a4748;
        case 0x1a474cu: goto label_1a474c;
        case 0x1a4750u: goto label_1a4750;
        case 0x1a4754u: goto label_1a4754;
        case 0x1a4758u: goto label_1a4758;
        case 0x1a475cu: goto label_1a475c;
        case 0x1a4760u: goto label_1a4760;
        case 0x1a4764u: goto label_1a4764;
        case 0x1a4768u: goto label_1a4768;
        case 0x1a476cu: goto label_1a476c;
        case 0x1a4770u: goto label_1a4770;
        case 0x1a4774u: goto label_1a4774;
        case 0x1a4778u: goto label_1a4778;
        case 0x1a477cu: goto label_1a477c;
        case 0x1a4780u: goto label_1a4780;
        case 0x1a4784u: goto label_1a4784;
        case 0x1a4788u: goto label_1a4788;
        case 0x1a478cu: goto label_1a478c;
        case 0x1a4790u: goto label_1a4790;
        case 0x1a4794u: goto label_1a4794;
        case 0x1a4798u: goto label_1a4798;
        case 0x1a479cu: goto label_1a479c;
        case 0x1a47a0u: goto label_1a47a0;
        case 0x1a47a4u: goto label_1a47a4;
        case 0x1a47a8u: goto label_1a47a8;
        case 0x1a47acu: goto label_1a47ac;
        case 0x1a47b0u: goto label_1a47b0;
        case 0x1a47b4u: goto label_1a47b4;
        case 0x1a47b8u: goto label_1a47b8;
        case 0x1a47bcu: goto label_1a47bc;
        case 0x1a47c0u: goto label_1a47c0;
        case 0x1a47c4u: goto label_1a47c4;
        case 0x1a47c8u: goto label_1a47c8;
        case 0x1a47ccu: goto label_1a47cc;
        case 0x1a47d0u: goto label_1a47d0;
        case 0x1a47d4u: goto label_1a47d4;
        case 0x1a47d8u: goto label_1a47d8;
        case 0x1a47dcu: goto label_1a47dc;
        case 0x1a47e0u: goto label_1a47e0;
        case 0x1a47e4u: goto label_1a47e4;
        case 0x1a47e8u: goto label_1a47e8;
        case 0x1a47ecu: goto label_1a47ec;
        case 0x1a47f0u: goto label_1a47f0;
        case 0x1a47f4u: goto label_1a47f4;
        default: break;
    }

    ctx->pc = 0x1a4650u;

label_1a4650:
    // 0x1a4650: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a4650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1a4654:
    // 0x1a4654: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1a4654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1a4658:
    // 0x1a4658: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1a4658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1a465c:
    // 0x1a465c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a465cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1a4660:
    // 0x1a4660: 0xc0693c6  jal         func_1A4F18
label_1a4664:
    if (ctx->pc == 0x1A4664u) {
        ctx->pc = 0x1A4664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4660u;
        // 0x1a4664: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4668u;
        goto label_1a4668;
    }
    ctx->pc = 0x1A4660u;
    SET_GPR_U32(ctx, 31, 0x1A4668u);
    ctx->pc = 0x1A4664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4660u;
    // 0x1a4664: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F18u, 0x1A4660u, 0x1A4668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4668u;
label_1a4668:
    // 0x1a4668: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
label_1a466c:
    if (ctx->pc == 0x1A466Cu) {
        ctx->pc = 0x1A4670u;
        goto label_1a4670;
    }
    ctx->pc = 0x1A4668u;
    {
        const bool branch_taken_0x1a4668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4668) {
            ctx->pc = 0x1A47D8u;
            goto label_1a47d8;
        }
    }
    ctx->pc = 0x1A4670u;
label_1a4670:
    // 0x1a4670: 0x92020762  lbu         $v0, 0x762($s0)
    ctx->pc = 0x1a4670u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1890)));
label_1a4674:
    // 0x1a4674: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
label_1a4678:
    if (ctx->pc == 0x1A4678u) {
        ctx->pc = 0x1A467Cu;
        goto label_1a467c;
    }
    ctx->pc = 0x1A4674u;
    {
        const bool branch_taken_0x1a4674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4674) {
            ctx->pc = 0x1A47D8u;
            goto label_1a47d8;
        }
    }
    ctx->pc = 0x1A467Cu;
label_1a467c:
    // 0x1a467c: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x1a467cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1a4680:
    // 0x1a4680: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1a4680u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1a4684:
    // 0x1a4684: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1a4684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1a4688:
    // 0x1a4688: 0x40f809  jalr        $v0
label_1a468c:
    if (ctx->pc == 0x1A468Cu) {
        ctx->pc = 0x1A468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4688u;
        // 0x1a468c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4690u;
        goto label_1a4690;
    }
    ctx->pc = 0x1A4688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4690u);
        ctx->pc = 0x1A468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4688u;
        // 0x1a468c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4688u, 0x1A4690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4690u;
label_1a4690:
    // 0x1a4690: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1a4690u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1a4694:
    // 0x1a4694: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1a4694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a4698:
    // 0x1a4698: 0xc0b6dac  jal         func_2DB6B0
label_1a469c:
    if (ctx->pc == 0x1A469Cu) {
        ctx->pc = 0x1A46A0u;
        goto label_1a46a0;
    }
    ctx->pc = 0x1A4698u;
    SET_GPR_U32(ctx, 31, 0x1A46A0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1A4698u, 0x1A46A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A46A0u;
label_1a46a0:
    // 0x1a46a0: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x1a46a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_1a46a4:
    // 0x1a46a4: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1a46a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1a46a8:
    // 0x1a46a8: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x1a46a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1a46ac:
    // 0x1a46ac: 0xa0f809  jalr        $a1
label_1a46b0:
    if (ctx->pc == 0x1A46B0u) {
        ctx->pc = 0x1A46B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A46ACu;
        // 0x1a46b0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A46B4u;
        goto label_1a46b4;
    }
    ctx->pc = 0x1A46ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1A46B4u);
        ctx->pc = 0x1A46B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A46ACu;
        // 0x1a46b0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A46ACu, 0x1A46B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A46B4u;
label_1a46b4:
    // 0x1a46b4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1a46b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1a46b8:
    // 0x1a46b8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1a46b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a46bc:
    // 0x1a46bc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1a46bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a46c0:
    // 0x1a46c0: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1a46c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a46c4:
    // 0x1a46c4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1a46c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a46c8:
    // 0x1a46c8: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x1a46c8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_1a46cc:
    // 0x1a46cc: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1a46ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a46d0:
    // 0x1a46d0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a46d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a46d4:
    // 0x1a46d4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1a46d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a46d8:
    // 0x1a46d8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1a46d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1a46dc:
    // 0x1a46dc: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1a46dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_1a46e0:
    // 0x1a46e0: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1a46e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a46e4:
    // 0x1a46e4: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x1a46e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1a46e8:
    // 0x1a46e8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1a46e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1a46ec:
    // 0x1a46ec: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1a46ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a46f0:
    // 0x1a46f0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1a46f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1a46f4:
    // 0x1a46f4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1a46f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a46f8:
    // 0x1a46f8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1a46f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1a46fc:
    // 0x1a46fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a46fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4700:
    // 0x1a4700: 0x0  nop
    ctx->pc = 0x1a4700u;
    // NOP
label_1a4704:
    // 0x1a4704: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a4704u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4708:
    // 0x1a4708: 0x0  nop
    ctx->pc = 0x1a4708u;
    // NOP
label_1a470c:
    // 0x1a470c: 0x45000032  bc1f        . + 4 + (0x32 << 2)
label_1a4710:
    if (ctx->pc == 0x1A4710u) {
        ctx->pc = 0x1A4714u;
        goto label_1a4714;
    }
    ctx->pc = 0x1A470Cu;
    {
        const bool branch_taken_0x1a470c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a470c) {
            ctx->pc = 0x1A47D8u;
            goto label_1a47d8;
        }
    }
    ctx->pc = 0x1A4714u;
label_1a4714:
    // 0x1a4714: 0xc07df8a  jal         func_1F7E28
label_1a4718:
    if (ctx->pc == 0x1A4718u) {
        ctx->pc = 0x1A471Cu;
        goto label_1a471c;
    }
    ctx->pc = 0x1A4714u;
    SET_GPR_U32(ctx, 31, 0x1A471Cu);
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x1A4714u, 0x1A471Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A471Cu;
label_1a471c:
    // 0x1a471c: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x1a471cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
label_1a4720:
    // 0x1a4720: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a4720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a4724:
    // 0x1a4724: 0x0  nop
    ctx->pc = 0x1a4724u;
    // NOP
label_1a4728:
    // 0x1a4728: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a4728u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a472c:
    // 0x1a472c: 0x0  nop
    ctx->pc = 0x1a472cu;
    // NOP
label_1a4730:
    // 0x1a4730: 0x45000029  bc1f        . + 4 + (0x29 << 2)
label_1a4734:
    if (ctx->pc == 0x1A4734u) {
        ctx->pc = 0x1A4738u;
        goto label_1a4738;
    }
    ctx->pc = 0x1A4730u;
    {
        const bool branch_taken_0x1a4730 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a4730) {
            ctx->pc = 0x1A47D8u;
            goto label_1a47d8;
        }
    }
    ctx->pc = 0x1A4738u;
label_1a4738:
    // 0x1a4738: 0xc0b6dac  jal         func_2DB6B0
label_1a473c:
    if (ctx->pc == 0x1A473Cu) {
        ctx->pc = 0x1A4740u;
        goto label_1a4740;
    }
    ctx->pc = 0x1A4738u;
    SET_GPR_U32(ctx, 31, 0x1A4740u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1A4738u, 0x1A4740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4740u;
label_1a4740:
    // 0x1a4740: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x1a4740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_1a4744:
    // 0x1a4744: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1a4744u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1a4748:
    // 0x1a4748: 0x8c65008c  lw          $a1, 0x8C($v1)
    ctx->pc = 0x1a4748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1a474c:
    // 0x1a474c: 0xa0f809  jalr        $a1
label_1a4750:
    if (ctx->pc == 0x1A4750u) {
        ctx->pc = 0x1A4750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A474Cu;
        // 0x1a4750: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4754u;
        goto label_1a4754;
    }
    ctx->pc = 0x1A474Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1A4754u);
        ctx->pc = 0x1A4750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A474Cu;
        // 0x1a4750: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A474Cu, 0x1A4754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4754u;
label_1a4754:
    // 0x1a4754: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x1a4754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a4758:
    // 0x1a4758: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a475c:
    // 0x1a475c: 0x3c013fa7  lui         $at, 0x3FA7
    ctx->pc = 0x1a475cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16295 << 16));
label_1a4760:
    // 0x1a4760: 0x34218d36  ori         $at, $at, 0x8D36
    ctx->pc = 0x1a4760u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36150);
label_1a4764:
    // 0x1a4764: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a4764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a4768:
    // 0x1a4768: 0xc0b68b4  jal         func_2DA2D0
label_1a476c:
    if (ctx->pc == 0x1A476Cu) {
        ctx->pc = 0x1A476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4768u;
        // 0x1a476c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4770u;
        goto label_1a4770;
    }
    ctx->pc = 0x1A4768u;
    SET_GPR_U32(ctx, 31, 0x1A4770u);
    ctx->pc = 0x1A476Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4768u;
    // 0x1a476c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA2D0u, 0x1A4768u, 0x1A4770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4770u;
label_1a4770:
    // 0x1a4770: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1a4774:
    if (ctx->pc == 0x1A4774u) {
        ctx->pc = 0x1A4778u;
        goto label_1a4778;
    }
    ctx->pc = 0x1A4770u;
    {
        const bool branch_taken_0x1a4770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4770) {
            ctx->pc = 0x1A47D8u;
            goto label_1a47d8;
        }
    }
    ctx->pc = 0x1A4778u;
label_1a4778:
    // 0x1a4778: 0xc0693c4  jal         func_1A4F10
label_1a477c:
    if (ctx->pc == 0x1A477Cu) {
        ctx->pc = 0x1A477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4778u;
        // 0x1a477c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4780u;
        goto label_1a4780;
    }
    ctx->pc = 0x1A4778u;
    SET_GPR_U32(ctx, 31, 0x1A4780u);
    ctx->pc = 0x1A477Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4778u;
    // 0x1a477c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F10u, 0x1A4778u, 0x1A4780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4780u;
label_1a4780:
    // 0x1a4780: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1a4784:
    if (ctx->pc == 0x1A4784u) {
        ctx->pc = 0x1A4784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4780u;
        // 0x1a4784: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4788u;
        goto label_1a4788;
    }
    ctx->pc = 0x1A4780u;
    {
        const bool branch_taken_0x1a4780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4780u;
        // 0x1a4784: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4780) {
            ctx->pc = 0x1A47B4u;
            goto label_1a47b4;
        }
    }
    ctx->pc = 0x1A4788u;
label_1a4788:
    // 0x1a4788: 0x3c08001a  lui         $t0, 0x1A
    ctx->pc = 0x1a4788u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)26 << 16));
label_1a478c:
    // 0x1a478c: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x1a478cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
label_1a4790:
    // 0x1a4790: 0x25084b90  addiu       $t0, $t0, 0x4B90
    ctx->pc = 0x1a4790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19344));
label_1a4794:
    // 0x1a4794: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a4794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a4798:
    // 0x1a4798: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1a4798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1a479c:
    // 0x1a479c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a479cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a47a0:
    // 0x1a47a0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1a47a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a47a4:
    // 0x1a47a4: 0xc07de16  jal         func_1F7858
label_1a47a8:
    if (ctx->pc == 0x1A47A8u) {
        ctx->pc = 0x1A47A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A47A4u;
        // 0x1a47a8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A47ACu;
        goto label_1a47ac;
    }
    ctx->pc = 0x1A47A4u;
    SET_GPR_U32(ctx, 31, 0x1A47ACu);
    ctx->pc = 0x1A47A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A47A4u;
    // 0x1a47a8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1A47A4u, 0x1A47ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A47ACu;
label_1a47ac:
    // 0x1a47ac: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a47b0:
    if (ctx->pc == 0x1A47B0u) {
        ctx->pc = 0x1A47B4u;
        goto label_1a47b4;
    }
    ctx->pc = 0x1A47ACu;
    {
        const bool branch_taken_0x1a47ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a47ac) {
            ctx->pc = 0x1A47D8u;
            goto label_1a47d8;
        }
    }
    ctx->pc = 0x1A47B4u;
label_1a47b4:
    // 0x1a47b4: 0x3c08001a  lui         $t0, 0x1A
    ctx->pc = 0x1a47b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)26 << 16));
label_1a47b8:
    // 0x1a47b8: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x1a47b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
label_1a47bc:
    // 0x1a47bc: 0x25084bb0  addiu       $t0, $t0, 0x4BB0
    ctx->pc = 0x1a47bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19376));
label_1a47c0:
    // 0x1a47c0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a47c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a47c4:
    // 0x1a47c4: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x1a47c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1a47c8:
    // 0x1a47c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a47c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a47cc:
    // 0x1a47cc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1a47ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a47d0:
    // 0x1a47d0: 0xc07de16  jal         func_1F7858
label_1a47d4:
    if (ctx->pc == 0x1A47D4u) {
        ctx->pc = 0x1A47D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A47D0u;
        // 0x1a47d4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A47D8u;
        goto label_1a47d8;
    }
    ctx->pc = 0x1A47D0u;
    SET_GPR_U32(ctx, 31, 0x1A47D8u);
    ctx->pc = 0x1A47D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A47D0u;
    // 0x1a47d4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1A47D0u, 0x1A47D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A47D8u;
label_1a47d8:
    // 0x1a47d8: 0xc0693ce  jal         func_1A4F38
label_1a47dc:
    if (ctx->pc == 0x1A47DCu) {
        ctx->pc = 0x1A47DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A47D8u;
        // 0x1a47dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A47E0u;
        goto label_1a47e0;
    }
    ctx->pc = 0x1A47D8u;
    SET_GPR_U32(ctx, 31, 0x1A47E0u);
    ctx->pc = 0x1A47DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A47D8u;
    // 0x1a47dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F38u, 0x1A47D8u, 0x1A47E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A47E0u;
label_1a47e0:
    // 0x1a47e0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1a47e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a47e4:
    // 0x1a47e4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1a47e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a47e8:
    // 0x1a47e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a47e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a47ec:
    // 0x1a47ec: 0x3e00008  jr          $ra
label_1a47f0:
    if (ctx->pc == 0x1A47F0u) {
        ctx->pc = 0x1A47F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A47ECu;
        // 0x1a47f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A47F4u;
        goto label_1a47f4;
    }
    ctx->pc = 0x1A47ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A47F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A47ECu;
        // 0x1a47f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A47ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A47F4u;
label_1a47f4:
    // 0x1a47f4: 0x0  nop
    ctx->pc = 0x1a47f4u;
    // NOP
    ctx->pc = 0x1a47f8u;
}
