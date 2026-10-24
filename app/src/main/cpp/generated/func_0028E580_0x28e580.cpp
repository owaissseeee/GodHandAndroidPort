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

// Function: func_0028E580
// Address: 0x28e580 - 0x28e7c8
void func_0028E580_0x28e580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028E580_0x28e580");
#endif

    switch (ctx->pc) {
        case 0x28e580u: goto label_28e580;
        case 0x28e584u: goto label_28e584;
        case 0x28e588u: goto label_28e588;
        case 0x28e58cu: goto label_28e58c;
        case 0x28e590u: goto label_28e590;
        case 0x28e594u: goto label_28e594;
        case 0x28e598u: goto label_28e598;
        case 0x28e59cu: goto label_28e59c;
        case 0x28e5a0u: goto label_28e5a0;
        case 0x28e5a4u: goto label_28e5a4;
        case 0x28e5a8u: goto label_28e5a8;
        case 0x28e5acu: goto label_28e5ac;
        case 0x28e5b0u: goto label_28e5b0;
        case 0x28e5b4u: goto label_28e5b4;
        case 0x28e5b8u: goto label_28e5b8;
        case 0x28e5bcu: goto label_28e5bc;
        case 0x28e5c0u: goto label_28e5c0;
        case 0x28e5c4u: goto label_28e5c4;
        case 0x28e5c8u: goto label_28e5c8;
        case 0x28e5ccu: goto label_28e5cc;
        case 0x28e5d0u: goto label_28e5d0;
        case 0x28e5d4u: goto label_28e5d4;
        case 0x28e5d8u: goto label_28e5d8;
        case 0x28e5dcu: goto label_28e5dc;
        case 0x28e5e0u: goto label_28e5e0;
        case 0x28e5e4u: goto label_28e5e4;
        case 0x28e5e8u: goto label_28e5e8;
        case 0x28e5ecu: goto label_28e5ec;
        case 0x28e5f0u: goto label_28e5f0;
        case 0x28e5f4u: goto label_28e5f4;
        case 0x28e5f8u: goto label_28e5f8;
        case 0x28e5fcu: goto label_28e5fc;
        case 0x28e600u: goto label_28e600;
        case 0x28e604u: goto label_28e604;
        case 0x28e608u: goto label_28e608;
        case 0x28e60cu: goto label_28e60c;
        case 0x28e610u: goto label_28e610;
        case 0x28e614u: goto label_28e614;
        case 0x28e618u: goto label_28e618;
        case 0x28e61cu: goto label_28e61c;
        case 0x28e620u: goto label_28e620;
        case 0x28e624u: goto label_28e624;
        case 0x28e628u: goto label_28e628;
        case 0x28e62cu: goto label_28e62c;
        case 0x28e630u: goto label_28e630;
        case 0x28e634u: goto label_28e634;
        case 0x28e638u: goto label_28e638;
        case 0x28e63cu: goto label_28e63c;
        case 0x28e640u: goto label_28e640;
        case 0x28e644u: goto label_28e644;
        case 0x28e648u: goto label_28e648;
        case 0x28e64cu: goto label_28e64c;
        case 0x28e650u: goto label_28e650;
        case 0x28e654u: goto label_28e654;
        case 0x28e658u: goto label_28e658;
        case 0x28e65cu: goto label_28e65c;
        case 0x28e660u: goto label_28e660;
        case 0x28e664u: goto label_28e664;
        case 0x28e668u: goto label_28e668;
        case 0x28e66cu: goto label_28e66c;
        case 0x28e670u: goto label_28e670;
        case 0x28e674u: goto label_28e674;
        case 0x28e678u: goto label_28e678;
        case 0x28e67cu: goto label_28e67c;
        case 0x28e680u: goto label_28e680;
        case 0x28e684u: goto label_28e684;
        case 0x28e688u: goto label_28e688;
        case 0x28e68cu: goto label_28e68c;
        case 0x28e690u: goto label_28e690;
        case 0x28e694u: goto label_28e694;
        case 0x28e698u: goto label_28e698;
        case 0x28e69cu: goto label_28e69c;
        case 0x28e6a0u: goto label_28e6a0;
        case 0x28e6a4u: goto label_28e6a4;
        case 0x28e6a8u: goto label_28e6a8;
        case 0x28e6acu: goto label_28e6ac;
        case 0x28e6b0u: goto label_28e6b0;
        case 0x28e6b4u: goto label_28e6b4;
        case 0x28e6b8u: goto label_28e6b8;
        case 0x28e6bcu: goto label_28e6bc;
        case 0x28e6c0u: goto label_28e6c0;
        case 0x28e6c4u: goto label_28e6c4;
        case 0x28e6c8u: goto label_28e6c8;
        case 0x28e6ccu: goto label_28e6cc;
        case 0x28e6d0u: goto label_28e6d0;
        case 0x28e6d4u: goto label_28e6d4;
        case 0x28e6d8u: goto label_28e6d8;
        case 0x28e6dcu: goto label_28e6dc;
        case 0x28e6e0u: goto label_28e6e0;
        case 0x28e6e4u: goto label_28e6e4;
        case 0x28e6e8u: goto label_28e6e8;
        case 0x28e6ecu: goto label_28e6ec;
        case 0x28e6f0u: goto label_28e6f0;
        case 0x28e6f4u: goto label_28e6f4;
        case 0x28e6f8u: goto label_28e6f8;
        case 0x28e6fcu: goto label_28e6fc;
        case 0x28e700u: goto label_28e700;
        case 0x28e704u: goto label_28e704;
        case 0x28e708u: goto label_28e708;
        case 0x28e70cu: goto label_28e70c;
        case 0x28e710u: goto label_28e710;
        case 0x28e714u: goto label_28e714;
        case 0x28e718u: goto label_28e718;
        case 0x28e71cu: goto label_28e71c;
        case 0x28e720u: goto label_28e720;
        case 0x28e724u: goto label_28e724;
        case 0x28e728u: goto label_28e728;
        case 0x28e72cu: goto label_28e72c;
        case 0x28e730u: goto label_28e730;
        case 0x28e734u: goto label_28e734;
        case 0x28e738u: goto label_28e738;
        case 0x28e73cu: goto label_28e73c;
        case 0x28e740u: goto label_28e740;
        case 0x28e744u: goto label_28e744;
        case 0x28e748u: goto label_28e748;
        case 0x28e74cu: goto label_28e74c;
        case 0x28e750u: goto label_28e750;
        case 0x28e754u: goto label_28e754;
        case 0x28e758u: goto label_28e758;
        case 0x28e75cu: goto label_28e75c;
        case 0x28e760u: goto label_28e760;
        case 0x28e764u: goto label_28e764;
        case 0x28e768u: goto label_28e768;
        case 0x28e76cu: goto label_28e76c;
        case 0x28e770u: goto label_28e770;
        case 0x28e774u: goto label_28e774;
        case 0x28e778u: goto label_28e778;
        case 0x28e77cu: goto label_28e77c;
        case 0x28e780u: goto label_28e780;
        case 0x28e784u: goto label_28e784;
        case 0x28e788u: goto label_28e788;
        case 0x28e78cu: goto label_28e78c;
        case 0x28e790u: goto label_28e790;
        case 0x28e794u: goto label_28e794;
        case 0x28e798u: goto label_28e798;
        case 0x28e79cu: goto label_28e79c;
        case 0x28e7a0u: goto label_28e7a0;
        case 0x28e7a4u: goto label_28e7a4;
        case 0x28e7a8u: goto label_28e7a8;
        case 0x28e7acu: goto label_28e7ac;
        case 0x28e7b0u: goto label_28e7b0;
        case 0x28e7b4u: goto label_28e7b4;
        case 0x28e7b8u: goto label_28e7b8;
        case 0x28e7bcu: goto label_28e7bc;
        case 0x28e7c0u: goto label_28e7c0;
        case 0x28e7c4u: goto label_28e7c4;
        default: break;
    }

    ctx->pc = 0x28e580u;

label_28e580:
    // 0x28e580: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x28e580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_28e584:
    // 0x28e584: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x28e584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_28e588:
    // 0x28e588: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x28e588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_28e58c:
    // 0x28e58c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x28e58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_28e590:
    // 0x28e590: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x28e590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_28e594:
    // 0x28e594: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x28e594u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28e598:
    // 0x28e598: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x28e598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_28e59c:
    // 0x28e59c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28e59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_28e5a0:
    // 0x28e5a0: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x28e5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
label_28e5a4:
    // 0x28e5a4: 0x90620014  lbu         $v0, 0x14($v1)
    ctx->pc = 0x28e5a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
label_28e5a8:
    // 0x28e5a8: 0x1053007f  beq         $v0, $s3, . + 4 + (0x7F << 2)
label_28e5ac:
    if (ctx->pc == 0x28E5ACu) {
        ctx->pc = 0x28E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E5A8u;
        // 0x28e5ac: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E5B0u;
        goto label_28e5b0;
    }
    ctx->pc = 0x28E5A8u;
    {
        const bool branch_taken_0x28e5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x28E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E5A8u;
        // 0x28e5ac: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e5a8) {
            ctx->pc = 0x28E7A8u;
            goto label_28e7a8;
        }
    }
    ctx->pc = 0x28E5B0u;
label_28e5b0:
    // 0x28e5b0: 0xc0a3ece  jal         func_28FB38
label_28e5b4:
    if (ctx->pc == 0x28E5B4u) {
        ctx->pc = 0x28E5B8u;
        goto label_28e5b8;
    }
    ctx->pc = 0x28E5B0u;
    SET_GPR_U32(ctx, 31, 0x28E5B8u);
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x28E5B0u, 0x28E5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E5B8u;
label_28e5b8:
    // 0x28e5b8: 0x1053007c  beq         $v0, $s3, . + 4 + (0x7C << 2)
label_28e5bc:
    if (ctx->pc == 0x28E5BCu) {
        ctx->pc = 0x28E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E5B8u;
        // 0x28e5bc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E5C0u;
        goto label_28e5c0;
    }
    ctx->pc = 0x28E5B8u;
    {
        const bool branch_taken_0x28e5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x28E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E5B8u;
        // 0x28e5bc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e5b8) {
            ctx->pc = 0x28E7ACu;
            goto label_28e7ac;
        }
    }
    ctx->pc = 0x28E5C0u;
label_28e5c0:
    // 0x28e5c0: 0xc0b6dac  jal         func_2DB6B0
label_28e5c4:
    if (ctx->pc == 0x28E5C4u) {
        ctx->pc = 0x28E5C8u;
        goto label_28e5c8;
    }
    ctx->pc = 0x28E5C0u;
    SET_GPR_U32(ctx, 31, 0x28E5C8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x28E5C0u, 0x28E5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E5C8u;
label_28e5c8:
    // 0x28e5c8: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x28e5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_28e5cc:
    // 0x28e5cc: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x28e5ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_28e5d0:
    // 0x28e5d0: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x28e5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_28e5d4:
    // 0x28e5d4: 0xa0f809  jalr        $a1
label_28e5d8:
    if (ctx->pc == 0x28E5D8u) {
        ctx->pc = 0x28E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E5D4u;
        // 0x28e5d8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E5DCu;
        goto label_28e5dc;
    }
    ctx->pc = 0x28E5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x28E5DCu);
        ctx->pc = 0x28E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E5D4u;
        // 0x28e5d8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E5D4u, 0x28E5DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E5DCu;
label_28e5dc:
    // 0x28e5dc: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x28e5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_28e5e0:
    // 0x28e5e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28e5e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e5e4:
    // 0x28e5e4: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x28e5e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_28e5e8:
    // 0x28e5e8: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x28e5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_28e5ec:
    // 0x28e5ec: 0x40f809  jalr        $v0
label_28e5f0:
    if (ctx->pc == 0x28E5F0u) {
        ctx->pc = 0x28E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E5ECu;
        // 0x28e5f0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E5F4u;
        goto label_28e5f4;
    }
    ctx->pc = 0x28E5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E5F4u);
        ctx->pc = 0x28E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E5ECu;
        // 0x28e5f0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E5ECu, 0x28E5F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E5F4u;
label_28e5f4:
    // 0x28e5f4: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x28e5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
label_28e5f8:
    // 0x28e5f8: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x28e5f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_28e5fc:
    // 0x28e5fc: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x28e5fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_28e600:
    // 0x28e600: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x28e600u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_28e604:
    // 0x28e604: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x28e604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_28e608:
    // 0x28e608: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x28e608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_28e60c:
    // 0x28e60c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x28e60cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_28e610:
    // 0x28e610: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x28e610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_28e614:
    // 0x28e614: 0xc0b6dac  jal         func_2DB6B0
label_28e618:
    if (ctx->pc == 0x28E618u) {
        ctx->pc = 0x28E61Cu;
        goto label_28e61c;
    }
    ctx->pc = 0x28E614u;
    SET_GPR_U32(ctx, 31, 0x28E61Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x28E614u, 0x28E61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E61Cu;
label_28e61c:
    // 0x28e61c: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x28e61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_28e620:
    // 0x28e620: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x28e620u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_28e624:
    // 0x28e624: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x28e624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_28e628:
    // 0x28e628: 0xa0f809  jalr        $a1
label_28e62c:
    if (ctx->pc == 0x28E62Cu) {
        ctx->pc = 0x28E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E628u;
        // 0x28e62c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E630u;
        goto label_28e630;
    }
    ctx->pc = 0x28E628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x28E630u);
        ctx->pc = 0x28E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E628u;
        // 0x28e62c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E628u, 0x28E630u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E630u;
label_28e630:
    // 0x28e630: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x28e630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_28e634:
    // 0x28e634: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28e634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e638:
    // 0x28e638: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x28e638u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_28e63c:
    // 0x28e63c: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x28e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_28e640:
    // 0x28e640: 0x40f809  jalr        $v0
label_28e644:
    if (ctx->pc == 0x28E644u) {
        ctx->pc = 0x28E644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E640u;
        // 0x28e644: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E648u;
        goto label_28e648;
    }
    ctx->pc = 0x28E640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E648u);
        ctx->pc = 0x28E644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E640u;
        // 0x28e644: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E640u, 0x28E648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E648u;
label_28e648:
    // 0x28e648: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x28e648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28e64c:
    // 0x28e64c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x28e64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28e650:
    // 0x28e650: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28e650u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_28e654:
    // 0x28e654: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x28e654u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_28e658:
    // 0x28e658: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x28e658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_28e65c:
    // 0x28e65c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28e65cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28e660:
    // 0x28e660: 0x0  nop
    ctx->pc = 0x28e660u;
    // NOP
label_28e664:
    // 0x28e664: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x28e664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28e668:
    // 0x28e668: 0x0  nop
    ctx->pc = 0x28e668u;
    // NOP
label_28e66c:
    // 0x28e66c: 0x4500004f  bc1f        . + 4 + (0x4F << 2)
label_28e670:
    if (ctx->pc == 0x28E670u) {
        ctx->pc = 0x28E670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E66Cu;
        // 0x28e670: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E674u;
        goto label_28e674;
    }
    ctx->pc = 0x28E66Cu;
    {
        const bool branch_taken_0x28e66c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28E670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E66Cu;
        // 0x28e670: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e66c) {
            ctx->pc = 0x28E7ACu;
            goto label_28e7ac;
        }
    }
    ctx->pc = 0x28E674u;
label_28e674:
    // 0x28e674: 0xc07df8a  jal         func_1F7E28
label_28e678:
    if (ctx->pc == 0x28E678u) {
        ctx->pc = 0x28E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E674u;
        // 0x28e678: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E67Cu;
        goto label_28e67c;
    }
    ctx->pc = 0x28E674u;
    SET_GPR_U32(ctx, 31, 0x28E67Cu);
    ctx->pc = 0x28E678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E674u;
    // 0x28e678: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x28E674u, 0x28E67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E67Cu;
label_28e67c:
    // 0x28e67c: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x28e67cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_28e680:
    // 0x28e680: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28e680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28e684:
    // 0x28e684: 0x0  nop
    ctx->pc = 0x28e684u;
    // NOP
label_28e688:
    // 0x28e688: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x28e688u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28e68c:
    // 0x28e68c: 0x0  nop
    ctx->pc = 0x28e68cu;
    // NOP
label_28e690:
    // 0x28e690: 0x45000046  bc1f        . + 4 + (0x46 << 2)
label_28e694:
    if (ctx->pc == 0x28E694u) {
        ctx->pc = 0x28E694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E690u;
        // 0x28e694: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E698u;
        goto label_28e698;
    }
    ctx->pc = 0x28E690u;
    {
        const bool branch_taken_0x28e690 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28E694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E690u;
        // 0x28e694: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e690) {
            ctx->pc = 0x28E7ACu;
            goto label_28e7ac;
        }
    }
    ctx->pc = 0x28E698u;
label_28e698:
    // 0x28e698: 0xc0b6dac  jal         func_2DB6B0
label_28e69c:
    if (ctx->pc == 0x28E69Cu) {
        ctx->pc = 0x28E6A0u;
        goto label_28e6a0;
    }
    ctx->pc = 0x28E698u;
    SET_GPR_U32(ctx, 31, 0x28E6A0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x28E698u, 0x28E6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E6A0u;
label_28e6a0:
    // 0x28e6a0: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x28e6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_28e6a4:
    // 0x28e6a4: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x28e6a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_28e6a8:
    // 0x28e6a8: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x28e6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_28e6ac:
    // 0x28e6ac: 0xa0f809  jalr        $a1
label_28e6b0:
    if (ctx->pc == 0x28E6B0u) {
        ctx->pc = 0x28E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E6ACu;
        // 0x28e6b0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E6B4u;
        goto label_28e6b4;
    }
    ctx->pc = 0x28E6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x28E6B4u);
        ctx->pc = 0x28E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E6ACu;
        // 0x28e6b0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E6ACu, 0x28E6B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E6B4u;
label_28e6b4:
    // 0x28e6b4: 0xc0b6dac  jal         func_2DB6B0
label_28e6b8:
    if (ctx->pc == 0x28E6B8u) {
        ctx->pc = 0x28E6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E6B4u;
        // 0x28e6b8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E6BCu;
        goto label_28e6bc;
    }
    ctx->pc = 0x28E6B4u;
    SET_GPR_U32(ctx, 31, 0x28E6BCu);
    ctx->pc = 0x28E6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E6B4u;
    // 0x28e6b8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x28E6B4u, 0x28E6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E6BCu;
label_28e6bc:
    // 0x28e6bc: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x28e6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_28e6c0:
    // 0x28e6c0: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x28e6c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_28e6c4:
    // 0x28e6c4: 0x8c65008c  lw          $a1, 0x8C($v1)
    ctx->pc = 0x28e6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_28e6c8:
    // 0x28e6c8: 0xa0f809  jalr        $a1
label_28e6cc:
    if (ctx->pc == 0x28E6CCu) {
        ctx->pc = 0x28E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E6C8u;
        // 0x28e6cc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E6D0u;
        goto label_28e6d0;
    }
    ctx->pc = 0x28E6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x28E6D0u);
        ctx->pc = 0x28E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E6C8u;
        // 0x28e6cc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E6C8u, 0x28E6D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E6D0u;
label_28e6d0:
    // 0x28e6d0: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x28e6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_28e6d4:
    // 0x28e6d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28e6d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e6d8:
    // 0x28e6d8: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x28e6d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_28e6dc:
    // 0x28e6dc: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x28e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_28e6e0:
    // 0x28e6e0: 0x40f809  jalr        $v0
label_28e6e4:
    if (ctx->pc == 0x28E6E4u) {
        ctx->pc = 0x28E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E6E0u;
        // 0x28e6e4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E6E8u;
        goto label_28e6e8;
    }
    ctx->pc = 0x28E6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E6E8u);
        ctx->pc = 0x28E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E6E0u;
        // 0x28e6e4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E6E0u, 0x28E6E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E6E8u;
label_28e6e8:
    // 0x28e6e8: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x28e6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_28e6ec:
    // 0x28e6ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28e6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28e6f0:
    // 0x28e6f0: 0x3c013ff5  lui         $at, 0x3FF5
    ctx->pc = 0x28e6f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16373 << 16));
label_28e6f4:
    // 0x28e6f4: 0x3421be0b  ori         $at, $at, 0xBE0B
    ctx->pc = 0x28e6f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48651);
label_28e6f8:
    // 0x28e6f8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x28e6f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_28e6fc:
    // 0x28e6fc: 0xc0b68b4  jal         func_2DA2D0
label_28e700:
    if (ctx->pc == 0x28E700u) {
        ctx->pc = 0x28E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E6FCu;
        // 0x28e700: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E704u;
        goto label_28e704;
    }
    ctx->pc = 0x28E6FCu;
    SET_GPR_U32(ctx, 31, 0x28E704u);
    ctx->pc = 0x28E700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E6FCu;
    // 0x28e700: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA2D0u, 0x28E6FCu, 0x28E704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E704u;
label_28e704:
    // 0x28e704: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_28e708:
    if (ctx->pc == 0x28E708u) {
        ctx->pc = 0x28E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E704u;
        // 0x28e708: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E70Cu;
        goto label_28e70c;
    }
    ctx->pc = 0x28E704u;
    {
        const bool branch_taken_0x28e704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E704u;
        // 0x28e708: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e704) {
            ctx->pc = 0x28E7ACu;
            goto label_28e7ac;
        }
    }
    ctx->pc = 0x28E70Cu;
label_28e70c:
    // 0x28e70c: 0xc0b6dac  jal         func_2DB6B0
label_28e710:
    if (ctx->pc == 0x28E710u) {
        ctx->pc = 0x28E714u;
        goto label_28e714;
    }
    ctx->pc = 0x28E70Cu;
    SET_GPR_U32(ctx, 31, 0x28E714u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x28E70Cu, 0x28E714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E714u;
label_28e714:
    // 0x28e714: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x28e714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_28e718:
    // 0x28e718: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x28e718u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_28e71c:
    // 0x28e71c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x28e71cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_28e720:
    // 0x28e720: 0xa0f809  jalr        $a1
label_28e724:
    if (ctx->pc == 0x28E724u) {
        ctx->pc = 0x28E724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E720u;
        // 0x28e724: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E728u;
        goto label_28e728;
    }
    ctx->pc = 0x28E720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x28E728u);
        ctx->pc = 0x28E724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E720u;
        // 0x28e724: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E720u, 0x28E728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E728u;
label_28e728:
    // 0x28e728: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x28e728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_28e72c:
    // 0x28e72c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28e72cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e730:
    // 0x28e730: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x28e730u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_28e734:
    // 0x28e734: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x28e734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_28e738:
    // 0x28e738: 0x40f809  jalr        $v0
label_28e73c:
    if (ctx->pc == 0x28E73Cu) {
        ctx->pc = 0x28E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E738u;
        // 0x28e73c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E740u;
        goto label_28e740;
    }
    ctx->pc = 0x28E738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E740u);
        ctx->pc = 0x28E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E738u;
        // 0x28e73c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E738u, 0x28E740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E740u;
label_28e740:
    // 0x28e740: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x28e740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
label_28e744:
    // 0x28e744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28e748:
    // 0x28e748: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28e748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e74c:
    // 0x28e74c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x28e74cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_28e750:
    // 0x28e750: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x28e750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_28e754:
    // 0x28e754: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28e754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e758:
    // 0x28e758: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x28e758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_28e75c:
    // 0x28e75c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28e75cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e760:
    // 0x28e760: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x28e760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_28e764:
    // 0x28e764: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x28e764u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_28e768:
    // 0x28e768: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28e768u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e76c:
    // 0x28e76c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x28e76cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e770:
    // 0x28e770: 0xc04c784  jal         func_131E10
label_28e774:
    if (ctx->pc == 0x28E774u) {
        ctx->pc = 0x28E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E770u;
        // 0x28e774: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E778u;
        goto label_28e778;
    }
    ctx->pc = 0x28E770u;
    SET_GPR_U32(ctx, 31, 0x28E778u);
    ctx->pc = 0x28E774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E770u;
    // 0x28e774: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x28E770u, 0x28E778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E778u;
label_28e778:
    // 0x28e778: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_28e77c:
    if (ctx->pc == 0x28E77Cu) {
        ctx->pc = 0x28E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E778u;
        // 0x28e77c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E780u;
        goto label_28e780;
    }
    ctx->pc = 0x28E778u;
    {
        const bool branch_taken_0x28e778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E778u;
        // 0x28e77c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e778) {
            ctx->pc = 0x28E7ACu;
            goto label_28e7ac;
        }
    }
    ctx->pc = 0x28E780u;
label_28e780:
    // 0x28e780: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x28e780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_28e784:
    // 0x28e784: 0x3c080029  lui         $t0, 0x29
    ctx->pc = 0x28e784u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)41 << 16));
label_28e788:
    // 0x28e788: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x28e788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
label_28e78c:
    // 0x28e78c: 0x2508e7c8  addiu       $t0, $t0, -0x1838
    ctx->pc = 0x28e78cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961096));
label_28e790:
    // 0x28e790: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x28e790u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28e794:
    // 0x28e794: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x28e794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_28e798:
    // 0x28e798: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28e798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28e79c:
    // 0x28e79c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28e79cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e7a0:
    // 0x28e7a0: 0xc07de16  jal         func_1F7858
label_28e7a4:
    if (ctx->pc == 0x28E7A4u) {
        ctx->pc = 0x28E7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E7A0u;
        // 0x28e7a4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E7A8u;
        goto label_28e7a8;
    }
    ctx->pc = 0x28E7A0u;
    SET_GPR_U32(ctx, 31, 0x28E7A8u);
    ctx->pc = 0x28E7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E7A0u;
    // 0x28e7a4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x28E7A0u, 0x28E7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E7A8u;
label_28e7a8:
    // 0x28e7a8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x28e7a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_28e7ac:
    // 0x28e7ac: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x28e7acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_28e7b0:
    // 0x28e7b0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x28e7b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_28e7b4:
    // 0x28e7b4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x28e7b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28e7b8:
    // 0x28e7b8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28e7b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_28e7bc:
    // 0x28e7bc: 0x3e00008  jr          $ra
label_28e7c0:
    if (ctx->pc == 0x28E7C0u) {
        ctx->pc = 0x28E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E7BCu;
        // 0x28e7c0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E7C4u;
        goto label_28e7c4;
    }
    ctx->pc = 0x28E7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E7BCu;
        // 0x28e7c0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E7BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E7C4u;
label_28e7c4:
    // 0x28e7c4: 0x0  nop
    ctx->pc = 0x28e7c4u;
    // NOP
    ctx->pc = 0x28e7c8u;
}
