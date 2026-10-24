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

// Function: func_00172570
// Address: 0x172570 - 0x172850
void func_00172570_0x172570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00172570_0x172570");
#endif

    switch (ctx->pc) {
        case 0x172570u: goto label_172570;
        case 0x172574u: goto label_172574;
        case 0x172578u: goto label_172578;
        case 0x17257cu: goto label_17257c;
        case 0x172580u: goto label_172580;
        case 0x172584u: goto label_172584;
        case 0x172588u: goto label_172588;
        case 0x17258cu: goto label_17258c;
        case 0x172590u: goto label_172590;
        case 0x172594u: goto label_172594;
        case 0x172598u: goto label_172598;
        case 0x17259cu: goto label_17259c;
        case 0x1725a0u: goto label_1725a0;
        case 0x1725a4u: goto label_1725a4;
        case 0x1725a8u: goto label_1725a8;
        case 0x1725acu: goto label_1725ac;
        case 0x1725b0u: goto label_1725b0;
        case 0x1725b4u: goto label_1725b4;
        case 0x1725b8u: goto label_1725b8;
        case 0x1725bcu: goto label_1725bc;
        case 0x1725c0u: goto label_1725c0;
        case 0x1725c4u: goto label_1725c4;
        case 0x1725c8u: goto label_1725c8;
        case 0x1725ccu: goto label_1725cc;
        case 0x1725d0u: goto label_1725d0;
        case 0x1725d4u: goto label_1725d4;
        case 0x1725d8u: goto label_1725d8;
        case 0x1725dcu: goto label_1725dc;
        case 0x1725e0u: goto label_1725e0;
        case 0x1725e4u: goto label_1725e4;
        case 0x1725e8u: goto label_1725e8;
        case 0x1725ecu: goto label_1725ec;
        case 0x1725f0u: goto label_1725f0;
        case 0x1725f4u: goto label_1725f4;
        case 0x1725f8u: goto label_1725f8;
        case 0x1725fcu: goto label_1725fc;
        case 0x172600u: goto label_172600;
        case 0x172604u: goto label_172604;
        case 0x172608u: goto label_172608;
        case 0x17260cu: goto label_17260c;
        case 0x172610u: goto label_172610;
        case 0x172614u: goto label_172614;
        case 0x172618u: goto label_172618;
        case 0x17261cu: goto label_17261c;
        case 0x172620u: goto label_172620;
        case 0x172624u: goto label_172624;
        case 0x172628u: goto label_172628;
        case 0x17262cu: goto label_17262c;
        case 0x172630u: goto label_172630;
        case 0x172634u: goto label_172634;
        case 0x172638u: goto label_172638;
        case 0x17263cu: goto label_17263c;
        case 0x172640u: goto label_172640;
        case 0x172644u: goto label_172644;
        case 0x172648u: goto label_172648;
        case 0x17264cu: goto label_17264c;
        case 0x172650u: goto label_172650;
        case 0x172654u: goto label_172654;
        case 0x172658u: goto label_172658;
        case 0x17265cu: goto label_17265c;
        case 0x172660u: goto label_172660;
        case 0x172664u: goto label_172664;
        case 0x172668u: goto label_172668;
        case 0x17266cu: goto label_17266c;
        case 0x172670u: goto label_172670;
        case 0x172674u: goto label_172674;
        case 0x172678u: goto label_172678;
        case 0x17267cu: goto label_17267c;
        case 0x172680u: goto label_172680;
        case 0x172684u: goto label_172684;
        case 0x172688u: goto label_172688;
        case 0x17268cu: goto label_17268c;
        case 0x172690u: goto label_172690;
        case 0x172694u: goto label_172694;
        case 0x172698u: goto label_172698;
        case 0x17269cu: goto label_17269c;
        case 0x1726a0u: goto label_1726a0;
        case 0x1726a4u: goto label_1726a4;
        case 0x1726a8u: goto label_1726a8;
        case 0x1726acu: goto label_1726ac;
        case 0x1726b0u: goto label_1726b0;
        case 0x1726b4u: goto label_1726b4;
        case 0x1726b8u: goto label_1726b8;
        case 0x1726bcu: goto label_1726bc;
        case 0x1726c0u: goto label_1726c0;
        case 0x1726c4u: goto label_1726c4;
        case 0x1726c8u: goto label_1726c8;
        case 0x1726ccu: goto label_1726cc;
        case 0x1726d0u: goto label_1726d0;
        case 0x1726d4u: goto label_1726d4;
        case 0x1726d8u: goto label_1726d8;
        case 0x1726dcu: goto label_1726dc;
        case 0x1726e0u: goto label_1726e0;
        case 0x1726e4u: goto label_1726e4;
        case 0x1726e8u: goto label_1726e8;
        case 0x1726ecu: goto label_1726ec;
        case 0x1726f0u: goto label_1726f0;
        case 0x1726f4u: goto label_1726f4;
        case 0x1726f8u: goto label_1726f8;
        case 0x1726fcu: goto label_1726fc;
        case 0x172700u: goto label_172700;
        case 0x172704u: goto label_172704;
        case 0x172708u: goto label_172708;
        case 0x17270cu: goto label_17270c;
        case 0x172710u: goto label_172710;
        case 0x172714u: goto label_172714;
        case 0x172718u: goto label_172718;
        case 0x17271cu: goto label_17271c;
        case 0x172720u: goto label_172720;
        case 0x172724u: goto label_172724;
        case 0x172728u: goto label_172728;
        case 0x17272cu: goto label_17272c;
        case 0x172730u: goto label_172730;
        case 0x172734u: goto label_172734;
        case 0x172738u: goto label_172738;
        case 0x17273cu: goto label_17273c;
        case 0x172740u: goto label_172740;
        case 0x172744u: goto label_172744;
        case 0x172748u: goto label_172748;
        case 0x17274cu: goto label_17274c;
        case 0x172750u: goto label_172750;
        case 0x172754u: goto label_172754;
        case 0x172758u: goto label_172758;
        case 0x17275cu: goto label_17275c;
        case 0x172760u: goto label_172760;
        case 0x172764u: goto label_172764;
        case 0x172768u: goto label_172768;
        case 0x17276cu: goto label_17276c;
        case 0x172770u: goto label_172770;
        case 0x172774u: goto label_172774;
        case 0x172778u: goto label_172778;
        case 0x17277cu: goto label_17277c;
        case 0x172780u: goto label_172780;
        case 0x172784u: goto label_172784;
        case 0x172788u: goto label_172788;
        case 0x17278cu: goto label_17278c;
        case 0x172790u: goto label_172790;
        case 0x172794u: goto label_172794;
        case 0x172798u: goto label_172798;
        case 0x17279cu: goto label_17279c;
        case 0x1727a0u: goto label_1727a0;
        case 0x1727a4u: goto label_1727a4;
        case 0x1727a8u: goto label_1727a8;
        case 0x1727acu: goto label_1727ac;
        case 0x1727b0u: goto label_1727b0;
        case 0x1727b4u: goto label_1727b4;
        case 0x1727b8u: goto label_1727b8;
        case 0x1727bcu: goto label_1727bc;
        case 0x1727c0u: goto label_1727c0;
        case 0x1727c4u: goto label_1727c4;
        case 0x1727c8u: goto label_1727c8;
        case 0x1727ccu: goto label_1727cc;
        case 0x1727d0u: goto label_1727d0;
        case 0x1727d4u: goto label_1727d4;
        case 0x1727d8u: goto label_1727d8;
        case 0x1727dcu: goto label_1727dc;
        case 0x1727e0u: goto label_1727e0;
        case 0x1727e4u: goto label_1727e4;
        case 0x1727e8u: goto label_1727e8;
        case 0x1727ecu: goto label_1727ec;
        case 0x1727f0u: goto label_1727f0;
        case 0x1727f4u: goto label_1727f4;
        case 0x1727f8u: goto label_1727f8;
        case 0x1727fcu: goto label_1727fc;
        case 0x172800u: goto label_172800;
        case 0x172804u: goto label_172804;
        case 0x172808u: goto label_172808;
        case 0x17280cu: goto label_17280c;
        case 0x172810u: goto label_172810;
        case 0x172814u: goto label_172814;
        case 0x172818u: goto label_172818;
        case 0x17281cu: goto label_17281c;
        case 0x172820u: goto label_172820;
        case 0x172824u: goto label_172824;
        case 0x172828u: goto label_172828;
        case 0x17282cu: goto label_17282c;
        case 0x172830u: goto label_172830;
        case 0x172834u: goto label_172834;
        case 0x172838u: goto label_172838;
        case 0x17283cu: goto label_17283c;
        case 0x172840u: goto label_172840;
        case 0x172844u: goto label_172844;
        case 0x172848u: goto label_172848;
        case 0x17284cu: goto label_17284c;
        default: break;
    }

    ctx->pc = 0x172570u;

label_172570:
    // 0x172570: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x172570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_172574:
    // 0x172574: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x172574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_172578:
    // 0x172578: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x172578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_17257c:
    // 0x17257c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x17257cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_172580:
    // 0x172580: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x172580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_172584:
    // 0x172584: 0xc0b6dac  jal         func_2DB6B0
label_172588:
    if (ctx->pc == 0x172588u) {
        ctx->pc = 0x172588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172584u;
        // 0x172588: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17258Cu;
        goto label_17258c;
    }
    ctx->pc = 0x172584u;
    SET_GPR_U32(ctx, 31, 0x17258Cu);
    ctx->pc = 0x172588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172584u;
    // 0x172588: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x172584u, 0x17258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17258Cu;
label_17258c:
    // 0x17258c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17258cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_172590:
    // 0x172590: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x172590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_172594:
    // 0x172594: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x172594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_172598:
    // 0x172598: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x172598u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_17259c:
    // 0x17259c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x17259cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1725a0:
    // 0x1725a0: 0xa0f809  jalr        $a1
label_1725a4:
    if (ctx->pc == 0x1725A4u) {
        ctx->pc = 0x1725A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1725A0u;
        // 0x1725a4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1725A8u;
        goto label_1725a8;
    }
    ctx->pc = 0x1725A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1725A8u);
        ctx->pc = 0x1725A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1725A0u;
        // 0x1725a4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1725A0u, 0x1725A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1725A8u;
label_1725a8:
    // 0x1725a8: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x1725a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_1725ac:
    // 0x1725ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1725acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1725b0:
    // 0x1725b0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1725b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1725b4:
    // 0x1725b4: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1725b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1725b8:
    // 0x1725b8: 0x40f809  jalr        $v0
label_1725bc:
    if (ctx->pc == 0x1725BCu) {
        ctx->pc = 0x1725BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1725B8u;
        // 0x1725bc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1725C0u;
        goto label_1725c0;
    }
    ctx->pc = 0x1725B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1725C0u);
        ctx->pc = 0x1725BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1725B8u;
        // 0x1725bc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1725B8u, 0x1725C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1725C0u;
label_1725c0:
    // 0x1725c0: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1725c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_1725c4:
    // 0x1725c4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1725c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1725c8:
    // 0x1725c8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1725c8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1725cc:
    // 0x1725cc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1725ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1725d0:
    // 0x1725d0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1725d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1725d4:
    // 0x1725d4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1725d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1725d8:
    // 0x1725d8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1725d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1725dc:
    // 0x1725dc: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1725dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1725e0:
    // 0x1725e0: 0xc07df8a  jal         func_1F7E28
label_1725e4:
    if (ctx->pc == 0x1725E4u) {
        ctx->pc = 0x1725E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1725E0u;
        // 0x1725e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1725E8u;
        goto label_1725e8;
    }
    ctx->pc = 0x1725E0u;
    SET_GPR_U32(ctx, 31, 0x1725E8u);
    ctx->pc = 0x1725E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1725E0u;
    // 0x1725e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x1725E0u, 0x1725E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1725E8u;
label_1725e8:
    // 0x1725e8: 0x0  nop
    ctx->pc = 0x1725e8u;
    // NOP
label_1725ec:
    // 0x1725ec: 0x0  nop
    ctx->pc = 0x1725ecu;
    // NOP
label_1725f0:
    // 0x1725f0: 0x46000084  c1          0x84
    ctx->pc = 0x1725f0u;
    ctx->f[2] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
label_1725f4:
    // 0x1725f4: 0x46021032  c.eq.s      $f2, $f2
    ctx->pc = 0x1725f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1725f8:
    // 0x1725f8: 0x0  nop
    ctx->pc = 0x1725f8u;
    // NOP
label_1725fc:
    // 0x1725fc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_172600:
    if (ctx->pc == 0x172600u) {
        ctx->pc = 0x172604u;
        goto label_172604;
    }
    ctx->pc = 0x1725FCu;
    {
        const bool branch_taken_0x1725fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1725fc) {
            ctx->pc = 0x172610u;
            goto label_172610;
        }
    }
    ctx->pc = 0x172604u;
label_172604:
    // 0x172604: 0xc0e8910  jal         func_3A2440
label_172608:
    if (ctx->pc == 0x172608u) {
        ctx->pc = 0x172608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172604u;
        // 0x172608: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17260Cu;
        goto label_17260c;
    }
    ctx->pc = 0x172604u;
    SET_GPR_U32(ctx, 31, 0x17260Cu);
    ctx->pc = 0x172608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172604u;
    // 0x172608: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x172604u, 0x17260Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17260Cu;
label_17260c:
    // 0x17260c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x17260cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_172610:
    // 0x172610: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x172610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_172614:
    // 0x172614: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x172614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_172618:
    // 0x172618: 0x0  nop
    ctx->pc = 0x172618u;
    // NOP
label_17261c:
    // 0x17261c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x17261cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_172620:
    // 0x172620: 0x0  nop
    ctx->pc = 0x172620u;
    // NOP
label_172624:
    // 0x172624: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_172628:
    if (ctx->pc == 0x172628u) {
        ctx->pc = 0x17262Cu;
        goto label_17262c;
    }
    ctx->pc = 0x172624u;
    {
        const bool branch_taken_0x172624 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172624) {
            ctx->pc = 0x172668u;
            goto label_172668;
        }
    }
    ctx->pc = 0x17262Cu;
label_17262c:
    // 0x17262c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x17262cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_172630:
    // 0x172630: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x172630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_172634:
    // 0x172634: 0x0  nop
    ctx->pc = 0x172634u;
    // NOP
label_172638:
    // 0x172638: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x172638u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17263c:
    // 0x17263c: 0x0  nop
    ctx->pc = 0x17263cu;
    // NOP
label_172640:
    // 0x172640: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_172644:
    if (ctx->pc == 0x172644u) {
        ctx->pc = 0x172648u;
        goto label_172648;
    }
    ctx->pc = 0x172640u;
    {
        const bool branch_taken_0x172640 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x172640) {
            ctx->pc = 0x172664u;
            goto label_172664;
        }
    }
    ctx->pc = 0x172648u;
label_172648:
    // 0x172648: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x172648u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_17264c:
    // 0x17264c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x17264cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_172650:
    // 0x172650: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x172650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_172654:
    // 0x172654: 0x0  nop
    ctx->pc = 0x172654u;
    // NOP
label_172658:
    // 0x172658: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x172658u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
label_17265c:
    // 0x17265c: 0x10000002  b           . + 4 + (0x2 << 2)
label_172660:
    if (ctx->pc == 0x172660u) {
        ctx->pc = 0x172664u;
        goto label_172664;
    }
    ctx->pc = 0x17265Cu;
    {
        const bool branch_taken_0x17265c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17265c) {
            ctx->pc = 0x172668u;
            goto label_172668;
        }
    }
    ctx->pc = 0x172664u;
label_172664:
    // 0x172664: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x172664u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_172668:
    // 0x172668: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x172668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_17266c:
    // 0x17266c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17266cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_172670:
    // 0x172670: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x172670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_172674:
    // 0x172674: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x172674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_172678:
    // 0x172678: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x172678u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_17267c:
    // 0x17267c: 0x86230d94  lh          $v1, 0xD94($s1)
    ctx->pc = 0x17267cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 3476)));
label_172680:
    // 0x172680: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x172680u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_172684:
    // 0x172684: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172684u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_172688:
    // 0x172688: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x172688u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_17268c:
    // 0x17268c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17268cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_172690:
    // 0x172690: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x172690u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_172694:
    // 0x172694: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
label_172698:
    if (ctx->pc == 0x172698u) {
        ctx->pc = 0x172698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172694u;
        // 0x172698: 0xa6220d94  sh          $v0, 0xD94($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 3476), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17269Cu;
        goto label_17269c;
    }
    ctx->pc = 0x172694u;
    {
        const bool branch_taken_0x172694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x172694) {
            ctx->pc = 0x172698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172694u;
            // 0x172698: 0xa6220d94  sh          $v0, 0xD94($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 3476), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17269Cu;
            goto label_17269c;
        }
    }
    ctx->pc = 0x17269Cu;
label_17269c:
    // 0x17269c: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x17269cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
label_1726a0:
    // 0x1726a0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1726a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_1726a4:
    // 0x1726a4: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
label_1726a8:
    if (ctx->pc == 0x1726A8u) {
        ctx->pc = 0x1726A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1726A4u;
        // 0x1726a8: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1726ACu;
        goto label_1726ac;
    }
    ctx->pc = 0x1726A4u;
    {
        const bool branch_taken_0x1726a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1726A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1726A4u;
        // 0x1726a8: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1726a4) {
            ctx->pc = 0x172838u;
            goto label_172838;
        }
    }
    ctx->pc = 0x1726ACu;
label_1726ac:
    // 0x1726ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1726acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1726b0:
    // 0x1726b0: 0x24420eb0  addiu       $v0, $v0, 0xEB0
    ctx->pc = 0x1726b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3760));
label_1726b4:
    // 0x1726b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1726b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1726b8:
    // 0x1726b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1726b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1726bc:
    // 0x1726bc: 0x800008  jr          $a0
label_1726c0:
    if (ctx->pc == 0x1726C0u) {
        ctx->pc = 0x1726C4u;
        goto label_1726c4;
    }
    ctx->pc = 0x1726BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1726C4u: goto label_1726c4;
            case 0x1726D4u: goto label_1726d4;
            case 0x172700u: goto label_172700;
            case 0x17276Cu: goto label_17276c;
            case 0x17279Cu: goto label_17279c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1726BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1726C4u;
label_1726c4:
    // 0x1726c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1726c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1726c8:
    // 0x1726c8: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1726c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1726cc:
    // 0x1726cc: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x1726ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_1726d0:
    // 0x1726d0: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1726d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1726d4:
    // 0x1726d4: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1726d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_1726d8:
    // 0x1726d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1726d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1726dc:
    // 0x1726dc: 0x0  nop
    ctx->pc = 0x1726dcu;
    // NOP
label_1726e0:
    // 0x1726e0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1726e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1726e4:
    // 0x1726e4: 0x0  nop
    ctx->pc = 0x1726e4u;
    // NOP
label_1726e8:
    // 0x1726e8: 0x45000053  bc1f        . + 4 + (0x53 << 2)
label_1726ec:
    if (ctx->pc == 0x1726ECu) {
        ctx->pc = 0x1726ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1726E8u;
        // 0x1726ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1726F0u;
        goto label_1726f0;
    }
    ctx->pc = 0x1726E8u;
    {
        const bool branch_taken_0x1726e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1726ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1726E8u;
        // 0x1726ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1726e8) {
            ctx->pc = 0x172838u;
            goto label_172838;
        }
    }
    ctx->pc = 0x1726F0u;
label_1726f0:
    // 0x1726f0: 0xa6200d94  sh          $zero, 0xD94($s1)
    ctx->pc = 0x1726f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 3476), (uint16_t)GPR_U32(ctx, 0));
label_1726f4:
    // 0x1726f4: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x1726f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_1726f8:
    // 0x1726f8: 0x1000004e  b           . + 4 + (0x4E << 2)
label_1726fc:
    if (ctx->pc == 0x1726FCu) {
        ctx->pc = 0x1726FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1726F8u;
        // 0x1726fc: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172700u;
        goto label_172700;
    }
    ctx->pc = 0x1726F8u;
    {
        const bool branch_taken_0x1726f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1726FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1726F8u;
        // 0x1726fc: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1726f8) {
            ctx->pc = 0x172834u;
            goto label_172834;
        }
    }
    ctx->pc = 0x172700u;
label_172700:
    // 0x172700: 0x96220d94  lhu         $v0, 0xD94($s1)
    ctx->pc = 0x172700u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 3476)));
label_172704:
    // 0x172704: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x172704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_172708:
    // 0x172708: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x172708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_17270c:
    // 0x17270c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17270cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_172710:
    // 0x172710: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x172710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_172714:
    // 0x172714: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x172714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_172718:
    // 0x172718: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x172718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_17271c:
    // 0x17271c: 0xa6220d94  sh          $v0, 0xD94($s1)
    ctx->pc = 0x17271cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 3476), (uint16_t)GPR_U32(ctx, 2));
label_172720:
    // 0x172720: 0x31403  sra         $v0, $v1, 16
    ctx->pc = 0x172720u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 16));
label_172724:
    // 0x172724: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_172728:
    // 0x172728: 0x0  nop
    ctx->pc = 0x172728u;
    // NOP
label_17272c:
    // 0x17272c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17272cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_172730:
    // 0x172730: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x172730u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
label_172734:
    // 0x172734: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x172734u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_172738:
    // 0x172738: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x172738u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17273c:
    // 0x17273c: 0x0  nop
    ctx->pc = 0x17273cu;
    // NOP
label_172740:
    // 0x172740: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_172744:
    if (ctx->pc == 0x172744u) {
        ctx->pc = 0x172744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172740u;
        // 0x172744: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x172748u;
        goto label_172748;
    }
    ctx->pc = 0x172740u;
    {
        const bool branch_taken_0x172740 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172740) {
            ctx->pc = 0x172744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172740u;
            // 0x172744: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x172748u;
            goto label_172748;
        }
    }
    ctx->pc = 0x172748u;
label_172748:
    // 0x172748: 0x2842003d  slti        $v0, $v0, 0x3D
    ctx->pc = 0x172748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
label_17274c:
    // 0x17274c: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_172750:
    if (ctx->pc == 0x172750u) {
        ctx->pc = 0x172750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17274Cu;
        // 0x172750: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x172754u;
        goto label_172754;
    }
    ctx->pc = 0x17274Cu;
    {
        const bool branch_taken_0x17274c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17274Cu;
        // 0x172750: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17274c) {
            ctx->pc = 0x172838u;
            goto label_172838;
        }
    }
    ctx->pc = 0x172754u;
label_172754:
    // 0x172754: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x172754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_172758:
    // 0x172758: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x172758u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_17275c:
    // 0x17275c: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x17275cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_172760:
    // 0x172760: 0xae20024c  sw          $zero, 0x24C($s1)
    ctx->pc = 0x172760u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 0));
label_172764:
    // 0x172764: 0x10000034  b           . + 4 + (0x34 << 2)
label_172768:
    if (ctx->pc == 0x172768u) {
        ctx->pc = 0x172768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172764u;
        // 0x172768: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17276Cu;
        goto label_17276c;
    }
    ctx->pc = 0x172764u;
    {
        const bool branch_taken_0x172764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172764u;
        // 0x172768: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172764) {
            ctx->pc = 0x172838u;
            goto label_172838;
        }
    }
    ctx->pc = 0x17276Cu;
label_17276c:
    // 0x17276c: 0x3c014190  lui         $at, 0x4190
    ctx->pc = 0x17276cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16784 << 16));
label_172770:
    // 0x172770: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x172770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_172774:
    // 0x172774: 0x0  nop
    ctx->pc = 0x172774u;
    // NOP
label_172778:
    // 0x172778: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x172778u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17277c:
    // 0x17277c: 0x0  nop
    ctx->pc = 0x17277cu;
    // NOP
label_172780:
    // 0x172780: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
label_172784:
    if (ctx->pc == 0x172784u) {
        ctx->pc = 0x172784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172780u;
        // 0x172784: 0xae20024c  sw          $zero, 0x24C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172788u;
        goto label_172788;
    }
    ctx->pc = 0x172780u;
    {
        const bool branch_taken_0x172780 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x172784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172780u;
        // 0x172784: 0xae20024c  sw          $zero, 0x24C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172780) {
            ctx->pc = 0x172838u;
            goto label_172838;
        }
    }
    ctx->pc = 0x172788u;
label_172788:
    // 0x172788: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x172788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_17278c:
    // 0x17278c: 0xa6200d94  sh          $zero, 0xD94($s1)
    ctx->pc = 0x17278cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 3476), (uint16_t)GPR_U32(ctx, 0));
label_172790:
    // 0x172790: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x172790u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_172794:
    // 0x172794: 0x10000027  b           . + 4 + (0x27 << 2)
label_172798:
    if (ctx->pc == 0x172798u) {
        ctx->pc = 0x172798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172794u;
        // 0x172798: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17279Cu;
        goto label_17279c;
    }
    ctx->pc = 0x172794u;
    {
        const bool branch_taken_0x172794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172794u;
        // 0x172798: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172794) {
            ctx->pc = 0x172834u;
            goto label_172834;
        }
    }
    ctx->pc = 0x17279Cu;
label_17279c:
    // 0x17279c: 0x96220d94  lhu         $v0, 0xD94($s1)
    ctx->pc = 0x17279cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 3476)));
label_1727a0:
    // 0x1727a0: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1727a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_1727a4:
    // 0x1727a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1727a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1727a8:
    // 0x1727a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1727a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1727ac:
    // 0x1727ac: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1727acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1727b0:
    // 0x1727b0: 0xa6220d94  sh          $v0, 0xD94($s1)
    ctx->pc = 0x1727b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 3476), (uint16_t)GPR_U32(ctx, 2));
label_1727b4:
    // 0x1727b4: 0x31403  sra         $v0, $v1, 16
    ctx->pc = 0x1727b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 16));
label_1727b8:
    // 0x1727b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1727b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1727bc:
    // 0x1727bc: 0x0  nop
    ctx->pc = 0x1727bcu;
    // NOP
label_1727c0:
    // 0x1727c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1727c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1727c4:
    // 0x1727c4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1727c4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_1727c8:
    // 0x1727c8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1727c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1727cc:
    // 0x1727cc: 0x0  nop
    ctx->pc = 0x1727ccu;
    // NOP
label_1727d0:
    // 0x1727d0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1727d4:
    if (ctx->pc == 0x1727D4u) {
        ctx->pc = 0x1727D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1727D0u;
        // 0x1727d4: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1727D8u;
        goto label_1727d8;
    }
    ctx->pc = 0x1727D0u;
    {
        const bool branch_taken_0x1727d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1727d0) {
            ctx->pc = 0x1727D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1727D0u;
            // 0x1727d4: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1727D8u;
            goto label_1727d8;
        }
    }
    ctx->pc = 0x1727D8u;
label_1727d8:
    // 0x1727d8: 0x2842003d  slti        $v0, $v0, 0x3D
    ctx->pc = 0x1727d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
label_1727dc:
    // 0x1727dc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1727e0:
    if (ctx->pc == 0x1727E0u) {
        ctx->pc = 0x1727E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1727DCu;
        // 0x1727e0: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1727E4u;
        goto label_1727e4;
    }
    ctx->pc = 0x1727DCu;
    {
        const bool branch_taken_0x1727dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1727E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1727DCu;
        // 0x1727e0: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1727dc) {
            ctx->pc = 0x172800u;
            goto label_172800;
        }
    }
    ctx->pc = 0x1727E4u;
label_1727e4:
    // 0x1727e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1727e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1727e8:
    // 0x1727e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1727e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1727ec:
    // 0x1727ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1727ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1727f0:
    // 0x1727f0: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x1727f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_1727f4:
    // 0x1727f4: 0xe620024c  swc1        $f0, 0x24C($s1)
    ctx->pc = 0x1727f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
label_1727f8:
    // 0x1727f8: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1727f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1727fc:
    // 0x1727fc: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1727fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_172800:
    // 0x172800: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x172800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_172804:
    // 0x172804: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x172804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_172808:
    // 0x172808: 0x0  nop
    ctx->pc = 0x172808u;
    // NOP
label_17280c:
    // 0x17280c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x17280cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_172810:
    // 0x172810: 0x0  nop
    ctx->pc = 0x172810u;
    // NOP
label_172814:
    // 0x172814: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_172818:
    if (ctx->pc == 0x172818u) {
        ctx->pc = 0x172818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172814u;
        // 0x172818: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17281Cu;
        goto label_17281c;
    }
    ctx->pc = 0x172814u;
    {
        const bool branch_taken_0x172814 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x172818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172814u;
        // 0x172818: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172814) {
            ctx->pc = 0x172838u;
            goto label_172838;
        }
    }
    ctx->pc = 0x17281Cu;
label_17281c:
    // 0x17281c: 0x96220d94  lhu         $v0, 0xD94($s1)
    ctx->pc = 0x17281cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 3476)));
label_172820:
    // 0x172820: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x172820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_172824:
    // 0x172824: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x172824u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_172828:
    // 0x172828: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x172828u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_17282c:
    // 0x17282c: 0xa22402f5  sb          $a0, 0x2F5($s1)
    ctx->pc = 0x17282cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
label_172830:
    // 0x172830: 0xa6230d94  sh          $v1, 0xD94($s1)
    ctx->pc = 0x172830u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 3476), (uint16_t)GPR_U32(ctx, 3));
label_172834:
    // 0x172834: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x172834u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_172838:
    // 0x172838: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x172838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17283c:
    // 0x17283c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17283cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_172840:
    // 0x172840: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x172840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_172844:
    // 0x172844: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x172844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_172848:
    // 0x172848: 0x3e00008  jr          $ra
label_17284c:
    if (ctx->pc == 0x17284Cu) {
        ctx->pc = 0x17284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172848u;
        // 0x17284c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172850u;
        goto label_fallthrough_0x172848;
    }
    ctx->pc = 0x172848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172848u;
        // 0x17284c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x172848:
    ctx->pc = 0x172850u;
}
