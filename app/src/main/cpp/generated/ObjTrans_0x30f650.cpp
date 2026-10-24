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

// Function: ObjTrans
// Address: 0x30f650 - 0x30f8b0
void ObjTrans_0x30f650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ObjTrans_0x30f650");
#endif

    switch (ctx->pc) {
        case 0x30f650u: goto label_30f650;
        case 0x30f654u: goto label_30f654;
        case 0x30f658u: goto label_30f658;
        case 0x30f65cu: goto label_30f65c;
        case 0x30f660u: goto label_30f660;
        case 0x30f664u: goto label_30f664;
        case 0x30f668u: goto label_30f668;
        case 0x30f66cu: goto label_30f66c;
        case 0x30f670u: goto label_30f670;
        case 0x30f674u: goto label_30f674;
        case 0x30f678u: goto label_30f678;
        case 0x30f67cu: goto label_30f67c;
        case 0x30f680u: goto label_30f680;
        case 0x30f684u: goto label_30f684;
        case 0x30f688u: goto label_30f688;
        case 0x30f68cu: goto label_30f68c;
        case 0x30f690u: goto label_30f690;
        case 0x30f694u: goto label_30f694;
        case 0x30f698u: goto label_30f698;
        case 0x30f69cu: goto label_30f69c;
        case 0x30f6a0u: goto label_30f6a0;
        case 0x30f6a4u: goto label_30f6a4;
        case 0x30f6a8u: goto label_30f6a8;
        case 0x30f6acu: goto label_30f6ac;
        case 0x30f6b0u: goto label_30f6b0;
        case 0x30f6b4u: goto label_30f6b4;
        case 0x30f6b8u: goto label_30f6b8;
        case 0x30f6bcu: goto label_30f6bc;
        case 0x30f6c0u: goto label_30f6c0;
        case 0x30f6c4u: goto label_30f6c4;
        case 0x30f6c8u: goto label_30f6c8;
        case 0x30f6ccu: goto label_30f6cc;
        case 0x30f6d0u: goto label_30f6d0;
        case 0x30f6d4u: goto label_30f6d4;
        case 0x30f6d8u: goto label_30f6d8;
        case 0x30f6dcu: goto label_30f6dc;
        case 0x30f6e0u: goto label_30f6e0;
        case 0x30f6e4u: goto label_30f6e4;
        case 0x30f6e8u: goto label_30f6e8;
        case 0x30f6ecu: goto label_30f6ec;
        case 0x30f6f0u: goto label_30f6f0;
        case 0x30f6f4u: goto label_30f6f4;
        case 0x30f6f8u: goto label_30f6f8;
        case 0x30f6fcu: goto label_30f6fc;
        case 0x30f700u: goto label_30f700;
        case 0x30f704u: goto label_30f704;
        case 0x30f708u: goto label_30f708;
        case 0x30f70cu: goto label_30f70c;
        case 0x30f710u: goto label_30f710;
        case 0x30f714u: goto label_30f714;
        case 0x30f718u: goto label_30f718;
        case 0x30f71cu: goto label_30f71c;
        case 0x30f720u: goto label_30f720;
        case 0x30f724u: goto label_30f724;
        case 0x30f728u: goto label_30f728;
        case 0x30f72cu: goto label_30f72c;
        case 0x30f730u: goto label_30f730;
        case 0x30f734u: goto label_30f734;
        case 0x30f738u: goto label_30f738;
        case 0x30f73cu: goto label_30f73c;
        case 0x30f740u: goto label_30f740;
        case 0x30f744u: goto label_30f744;
        case 0x30f748u: goto label_30f748;
        case 0x30f74cu: goto label_30f74c;
        case 0x30f750u: goto label_30f750;
        case 0x30f754u: goto label_30f754;
        case 0x30f758u: goto label_30f758;
        case 0x30f75cu: goto label_30f75c;
        case 0x30f760u: goto label_30f760;
        case 0x30f764u: goto label_30f764;
        case 0x30f768u: goto label_30f768;
        case 0x30f76cu: goto label_30f76c;
        case 0x30f770u: goto label_30f770;
        case 0x30f774u: goto label_30f774;
        case 0x30f778u: goto label_30f778;
        case 0x30f77cu: goto label_30f77c;
        case 0x30f780u: goto label_30f780;
        case 0x30f784u: goto label_30f784;
        case 0x30f788u: goto label_30f788;
        case 0x30f78cu: goto label_30f78c;
        case 0x30f790u: goto label_30f790;
        case 0x30f794u: goto label_30f794;
        case 0x30f798u: goto label_30f798;
        case 0x30f79cu: goto label_30f79c;
        case 0x30f7a0u: goto label_30f7a0;
        case 0x30f7a4u: goto label_30f7a4;
        case 0x30f7a8u: goto label_30f7a8;
        case 0x30f7acu: goto label_30f7ac;
        case 0x30f7b0u: goto label_30f7b0;
        case 0x30f7b4u: goto label_30f7b4;
        case 0x30f7b8u: goto label_30f7b8;
        case 0x30f7bcu: goto label_30f7bc;
        case 0x30f7c0u: goto label_30f7c0;
        case 0x30f7c4u: goto label_30f7c4;
        case 0x30f7c8u: goto label_30f7c8;
        case 0x30f7ccu: goto label_30f7cc;
        case 0x30f7d0u: goto label_30f7d0;
        case 0x30f7d4u: goto label_30f7d4;
        case 0x30f7d8u: goto label_30f7d8;
        case 0x30f7dcu: goto label_30f7dc;
        case 0x30f7e0u: goto label_30f7e0;
        case 0x30f7e4u: goto label_30f7e4;
        case 0x30f7e8u: goto label_30f7e8;
        case 0x30f7ecu: goto label_30f7ec;
        case 0x30f7f0u: goto label_30f7f0;
        case 0x30f7f4u: goto label_30f7f4;
        case 0x30f7f8u: goto label_30f7f8;
        case 0x30f7fcu: goto label_30f7fc;
        case 0x30f800u: goto label_30f800;
        case 0x30f804u: goto label_30f804;
        case 0x30f808u: goto label_30f808;
        case 0x30f80cu: goto label_30f80c;
        case 0x30f810u: goto label_30f810;
        case 0x30f814u: goto label_30f814;
        case 0x30f818u: goto label_30f818;
        case 0x30f81cu: goto label_30f81c;
        case 0x30f820u: goto label_30f820;
        case 0x30f824u: goto label_30f824;
        case 0x30f828u: goto label_30f828;
        case 0x30f82cu: goto label_30f82c;
        case 0x30f830u: goto label_30f830;
        case 0x30f834u: goto label_30f834;
        case 0x30f838u: goto label_30f838;
        case 0x30f83cu: goto label_30f83c;
        case 0x30f840u: goto label_30f840;
        case 0x30f844u: goto label_30f844;
        case 0x30f848u: goto label_30f848;
        case 0x30f84cu: goto label_30f84c;
        case 0x30f850u: goto label_30f850;
        case 0x30f854u: goto label_30f854;
        case 0x30f858u: goto label_30f858;
        case 0x30f85cu: goto label_30f85c;
        case 0x30f860u: goto label_30f860;
        case 0x30f864u: goto label_30f864;
        case 0x30f868u: goto label_30f868;
        case 0x30f86cu: goto label_30f86c;
        case 0x30f870u: goto label_30f870;
        case 0x30f874u: goto label_30f874;
        case 0x30f878u: goto label_30f878;
        case 0x30f87cu: goto label_30f87c;
        case 0x30f880u: goto label_30f880;
        case 0x30f884u: goto label_30f884;
        case 0x30f888u: goto label_30f888;
        case 0x30f88cu: goto label_30f88c;
        case 0x30f890u: goto label_30f890;
        case 0x30f894u: goto label_30f894;
        case 0x30f898u: goto label_30f898;
        case 0x30f89cu: goto label_30f89c;
        case 0x30f8a0u: goto label_30f8a0;
        case 0x30f8a4u: goto label_30f8a4;
        case 0x30f8a8u: goto label_30f8a8;
        case 0x30f8acu: goto label_30f8ac;
        default: break;
    }

    ctx->pc = 0x30f650u;

label_30f650:
    // 0x30f650: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x30f650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_30f654:
    // 0x30f654: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x30f654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
label_30f658:
    // 0x30f658: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x30f658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_30f65c:
    // 0x30f65c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x30f65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_30f660:
    // 0x30f660: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x30f660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_30f664:
    // 0x30f664: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x30f664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_30f668:
    // 0x30f668: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x30f668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_30f66c:
    // 0x30f66c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x30f66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_30f670:
    // 0x30f670: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x30f670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_30f674:
    // 0x30f674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30f674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30f678:
    // 0x30f678: 0x8c434c30  lw          $v1, 0x4C30($v0)
    ctx->pc = 0x30f678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19504)));
label_30f67c:
    // 0x30f67c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x30f67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_30f680:
    // 0x30f680: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x30f680u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_30f684:
    // 0x30f684: 0x12240080  beq         $s1, $a0, . + 4 + (0x80 << 2)
label_30f688:
    if (ctx->pc == 0x30F688u) {
        ctx->pc = 0x30F688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F684u;
        // 0x30f688: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F68Cu;
        goto label_30f68c;
    }
    ctx->pc = 0x30F684u;
    {
        const bool branch_taken_0x30f684 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        ctx->pc = 0x30F688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F684u;
        // 0x30f688: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f684) {
            ctx->pc = 0x30F888u;
            goto label_30f888;
        }
    }
    ctx->pc = 0x30F68Cu;
label_30f68c:
    // 0x30f68c: 0x3c140075  lui         $s4, 0x75
    ctx->pc = 0x30f68cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)117 << 16));
label_30f690:
    // 0x30f690: 0x3c130075  lui         $s3, 0x75
    ctx->pc = 0x30f690u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)117 << 16));
label_30f694:
    // 0x30f694: 0x3c120075  lui         $s2, 0x75
    ctx->pc = 0x30f694u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)117 << 16));
label_30f698:
    // 0x30f698: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x30f698u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
label_30f69c:
    // 0x30f69c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x30f69cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30f6a0:
    // 0x30f6a0: 0x8ca40250  lw          $a0, 0x250($a1)
    ctx->pc = 0x30f6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
label_30f6a4:
    // 0x30f6a4: 0x4810057  bgez        $a0, . + 4 + (0x57 << 2)
label_30f6a8:
    if (ctx->pc == 0x30F6A8u) {
        ctx->pc = 0x30F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F6A4u;
        // 0x30f6a8: 0x30828000  andi        $v0, $a0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F6ACu;
        goto label_30f6ac;
    }
    ctx->pc = 0x30F6A4u;
    {
        const bool branch_taken_0x30f6a4 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x30F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F6A4u;
        // 0x30f6a8: 0x30828000  andi        $v0, $a0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f6a4) {
            ctx->pc = 0x30F804u;
            goto label_30f804;
        }
    }
    ctx->pc = 0x30F6ACu;
label_30f6ac:
    // 0x30f6ac: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x30f6acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
label_30f6b0:
    // 0x30f6b0: 0x861024  and         $v0, $a0, $a2
    ctx->pc = 0x30f6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_30f6b4:
    // 0x30f6b4: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
label_30f6b8:
    if (ctx->pc == 0x30F6B8u) {
        ctx->pc = 0x30F6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F6B4u;
        // 0x30f6b8: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F6BCu;
        goto label_30f6bc;
    }
    ctx->pc = 0x30F6B4u;
    {
        const bool branch_taken_0x30f6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F6B4u;
        // 0x30f6b8: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f6b4) {
            ctx->pc = 0x30F7E8u;
            goto label_30f7e8;
        }
    }
    ctx->pc = 0x30F6BCu;
label_30f6bc:
    // 0x30f6bc: 0x94a202fe  lhu         $v0, 0x2FE($a1)
    ctx->pc = 0x30f6bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 766)));
label_30f6c0:
    // 0x30f6c0: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_30f6c4:
    if (ctx->pc == 0x30F6C4u) {
        ctx->pc = 0x30F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F6C0u;
        // 0x30f6c4: 0x8e424c58  lw          $v0, 0x4C58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F6C8u;
        goto label_30f6c8;
    }
    ctx->pc = 0x30F6C0u;
    {
        const bool branch_taken_0x30f6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F6C0u;
        // 0x30f6c4: 0x8e424c58  lw          $v0, 0x4C58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f6c0) {
            ctx->pc = 0x30F750u;
            goto label_30f750;
        }
    }
    ctx->pc = 0x30F6C8u;
label_30f6c8:
    // 0x30f6c8: 0x8e824c38  lw          $v0, 0x4C38($s4)
    ctx->pc = 0x30f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 19512)));
label_30f6cc:
    // 0x30f6cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x30f6ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30f6d0:
    // 0x30f6d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30f6d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30f6d4:
    // 0x30f6d4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x30f6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_30f6d8:
    // 0x30f6d8: 0xc0c4b6e  jal         func_312DB8
label_30f6dc:
    if (ctx->pc == 0x30F6DCu) {
        ctx->pc = 0x30F6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F6D8u;
        // 0x30f6dc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F6E0u;
        goto label_30f6e0;
    }
    ctx->pc = 0x30F6D8u;
    SET_GPR_U32(ctx, 31, 0x30F6E0u);
    ctx->pc = 0x30F6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F6D8u;
    // 0x30f6dc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312DB8u, 0x30F6D8u, 0x30F6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F6E0u;
label_30f6e0:
    // 0x30f6e0: 0x8e904c38  lw          $s0, 0x4C38($s4)
    ctx->pc = 0x30f6e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 19512)));
label_30f6e4:
    // 0x30f6e4: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x30f6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_30f6e8:
    // 0x30f6e8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x30f6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_30f6ec:
    // 0x30f6ec: 0x10a60005  beq         $a1, $a2, . + 4 + (0x5 << 2)
label_30f6f0:
    if (ctx->pc == 0x30F6F0u) {
        ctx->pc = 0x30F6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F6ECu;
        // 0x30f6f0: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F6F4u;
        goto label_30f6f4;
    }
    ctx->pc = 0x30F6ECu;
    {
        const bool branch_taken_0x30f6ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x30F6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F6ECu;
        // 0x30f6f0: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f6ec) {
            ctx->pc = 0x30F704u;
            goto label_30f704;
        }
    }
    ctx->pc = 0x30F6F4u;
label_30f6f4:
    // 0x30f6f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30f6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30f6f8:
    // 0x30f6f8: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x30f6f8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_30f6fc:
    // 0x30f6fc: 0xc0e947d  jal         func_3A51F4
label_30f700:
    if (ctx->pc == 0x30F700u) {
        ctx->pc = 0x30F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F6FCu;
        // 0x30f700: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F704u;
        goto label_30f704;
    }
    ctx->pc = 0x30F6FCu;
    SET_GPR_U32(ctx, 31, 0x30F704u);
    ctx->pc = 0x30F700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F6FCu;
    // 0x30f700: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F4u, 0x30F6FCu, 0x30F704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F704u;
label_30f704:
    // 0x30f704: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x30f704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_30f708:
    // 0x30f708: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x30f708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30f70c:
    // 0x30f70c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30f70cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30f710:
    // 0x30f710: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x30f710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_30f714:
    // 0x30f714: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x30f714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_30f718:
    // 0x30f718: 0x8e634c50  lw          $v1, 0x4C50($s3)
    ctx->pc = 0x30f718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 19536)));
label_30f71c:
    // 0x30f71c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x30f71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_30f720:
    // 0x30f720: 0xc0c4b6e  jal         func_312DB8
label_30f724:
    if (ctx->pc == 0x30F724u) {
        ctx->pc = 0x30F724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F720u;
        // 0x30f724: 0x8c650008  lw          $a1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F728u;
        goto label_30f728;
    }
    ctx->pc = 0x30F720u;
    SET_GPR_U32(ctx, 31, 0x30F728u);
    ctx->pc = 0x30F724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F720u;
    // 0x30f724: 0x8c650008  lw          $a1, 0x8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312DB8u, 0x30F720u, 0x30F728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F728u;
label_30f728:
    // 0x30f728: 0x8e704c50  lw          $s0, 0x4C50($s3)
    ctx->pc = 0x30f728u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 19536)));
label_30f72c:
    // 0x30f72c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30f72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30f730:
    // 0x30f730: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x30f730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_30f734:
    // 0x30f734: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x30f734u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_30f738:
    // 0x30f738: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_30f73c:
    if (ctx->pc == 0x30F73Cu) {
        ctx->pc = 0x30F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F738u;
        // 0x30f73c: 0x24850004  addiu       $a1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F740u;
        goto label_30f740;
    }
    ctx->pc = 0x30F738u;
    {
        const bool branch_taken_0x30f738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F738u;
        // 0x30f73c: 0x24850004  addiu       $a1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f738) {
            ctx->pc = 0x30F794u;
            goto label_30f794;
        }
    }
    ctx->pc = 0x30F740u;
label_30f740:
    // 0x30f740: 0x10a60011  beq         $a1, $a2, . + 4 + (0x11 << 2)
label_30f744:
    if (ctx->pc == 0x30F744u) {
        ctx->pc = 0x30F744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F740u;
        // 0x30f744: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F748u;
        goto label_30f748;
    }
    ctx->pc = 0x30F740u;
    {
        const bool branch_taken_0x30f740 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x30F744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F740u;
        // 0x30f744: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f740) {
            ctx->pc = 0x30F788u;
            goto label_30f788;
        }
    }
    ctx->pc = 0x30F748u;
label_30f748:
    // 0x30f748: 0x1000000d  b           . + 4 + (0xD << 2)
label_30f74c:
    if (ctx->pc == 0x30F74Cu) {
        ctx->pc = 0x30F74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F748u;
        // 0x30f74c: 0x63083  sra         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F750u;
        goto label_30f750;
    }
    ctx->pc = 0x30F748u;
    {
        const bool branch_taken_0x30f748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F748u;
        // 0x30f74c: 0x63083  sra         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f748) {
            ctx->pc = 0x30F780u;
            goto label_30f780;
        }
    }
    ctx->pc = 0x30F750u;
label_30f750:
    // 0x30f750: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x30f750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30f754:
    // 0x30f754: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30f754u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30f758:
    // 0x30f758: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x30f758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_30f75c:
    // 0x30f75c: 0xc0c4b6e  jal         func_312DB8
label_30f760:
    if (ctx->pc == 0x30F760u) {
        ctx->pc = 0x30F760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F75Cu;
        // 0x30f760: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F764u;
        goto label_30f764;
    }
    ctx->pc = 0x30F75Cu;
    SET_GPR_U32(ctx, 31, 0x30F764u);
    ctx->pc = 0x30F760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F75Cu;
    // 0x30f760: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312DB8u, 0x30F75Cu, 0x30F764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F764u;
label_30f764:
    // 0x30f764: 0x8e504c58  lw          $s0, 0x4C58($s2)
    ctx->pc = 0x30f764u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19544)));
label_30f768:
    // 0x30f768: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x30f768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_30f76c:
    // 0x30f76c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x30f76cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_30f770:
    // 0x30f770: 0x10a60005  beq         $a1, $a2, . + 4 + (0x5 << 2)
label_30f774:
    if (ctx->pc == 0x30F774u) {
        ctx->pc = 0x30F774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F770u;
        // 0x30f774: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F778u;
        goto label_30f778;
    }
    ctx->pc = 0x30F770u;
    {
        const bool branch_taken_0x30f770 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x30F774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F770u;
        // 0x30f774: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f770) {
            ctx->pc = 0x30F788u;
            goto label_30f788;
        }
    }
    ctx->pc = 0x30F778u;
label_30f778:
    // 0x30f778: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30f778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30f77c:
    // 0x30f77c: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x30f77cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_30f780:
    // 0x30f780: 0xc0e947d  jal         func_3A51F4
label_30f784:
    if (ctx->pc == 0x30F784u) {
        ctx->pc = 0x30F784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F780u;
        // 0x30f784: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F788u;
        goto label_30f788;
    }
    ctx->pc = 0x30F780u;
    SET_GPR_U32(ctx, 31, 0x30F788u);
    ctx->pc = 0x30F784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F780u;
    // 0x30f784: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F4u, 0x30F780u, 0x30F788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F788u;
label_30f788:
    // 0x30f788: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x30f788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_30f78c:
    // 0x30f78c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x30f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_30f790:
    // 0x30f790: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x30f790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_30f794:
    // 0x30f794: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x30f794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30f798:
    // 0x30f798: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_30f79c:
    if (ctx->pc == 0x30F79Cu) {
        ctx->pc = 0x30F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F798u;
        // 0x30f79c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F7A0u;
        goto label_30f7a0;
    }
    ctx->pc = 0x30F798u;
    {
        const bool branch_taken_0x30f798 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F798u;
        // 0x30f79c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f798) {
            ctx->pc = 0x30F7B4u;
            goto label_30f7b4;
        }
    }
    ctx->pc = 0x30F7A0u;
label_30f7a0:
    // 0x30f7a0: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x30f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_30f7a4:
    // 0x30f7a4: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x30f7a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_30f7a8:
    // 0x30f7a8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x30f7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_30f7ac:
    // 0x30f7ac: 0x60f809  jalr        $v1
label_30f7b0:
    if (ctx->pc == 0x30F7B0u) {
        ctx->pc = 0x30F7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F7ACu;
        // 0x30f7b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F7B4u;
        goto label_30f7b4;
    }
    ctx->pc = 0x30F7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x30F7B4u);
        ctx->pc = 0x30F7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F7ACu;
        // 0x30f7b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F7ACu, 0x30F7B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30F7B4u;
label_30f7b4:
    // 0x30f7b4: 0x8eb04c30  lw          $s0, 0x4C30($s5)
    ctx->pc = 0x30f7b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 19504)));
label_30f7b8:
    // 0x30f7b8: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x30f7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_30f7bc:
    // 0x30f7bc: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x30f7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_30f7c0:
    // 0x30f7c0: 0x10a60005  beq         $a1, $a2, . + 4 + (0x5 << 2)
label_30f7c4:
    if (ctx->pc == 0x30F7C4u) {
        ctx->pc = 0x30F7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F7C0u;
        // 0x30f7c4: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F7C8u;
        goto label_30f7c8;
    }
    ctx->pc = 0x30F7C0u;
    {
        const bool branch_taken_0x30f7c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x30F7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F7C0u;
        // 0x30f7c4: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f7c0) {
            ctx->pc = 0x30F7D8u;
            goto label_30f7d8;
        }
    }
    ctx->pc = 0x30F7C8u;
label_30f7c8:
    // 0x30f7c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30f7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30f7cc:
    // 0x30f7cc: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x30f7ccu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_30f7d0:
    // 0x30f7d0: 0xc0e947d  jal         func_3A51F4
label_30f7d4:
    if (ctx->pc == 0x30F7D4u) {
        ctx->pc = 0x30F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F7D0u;
        // 0x30f7d4: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F7D8u;
        goto label_30f7d8;
    }
    ctx->pc = 0x30F7D0u;
    SET_GPR_U32(ctx, 31, 0x30F7D8u);
    ctx->pc = 0x30F7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F7D0u;
    // 0x30f7d4: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F4u, 0x30F7D0u, 0x30F7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F7D8u;
label_30f7d8:
    // 0x30f7d8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x30f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_30f7dc:
    // 0x30f7dc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x30f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_30f7e0:
    // 0x30f7e0: 0x10000025  b           . + 4 + (0x25 << 2)
label_30f7e4:
    if (ctx->pc == 0x30F7E4u) {
        ctx->pc = 0x30F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F7E0u;
        // 0x30f7e4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F7E8u;
        goto label_30f7e8;
    }
    ctx->pc = 0x30F7E0u;
    {
        const bool branch_taken_0x30f7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F7E0u;
        // 0x30f7e4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f7e0) {
            ctx->pc = 0x30F878u;
            goto label_30f878;
        }
    }
    ctx->pc = 0x30F7E8u;
label_30f7e8:
    // 0x30f7e8: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x30f7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_30f7ec:
    // 0x30f7ec: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_30f7f0:
    if (ctx->pc == 0x30F7F0u) {
        ctx->pc = 0x30F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F7ECu;
        // 0x30f7f0: 0x861025  or          $v0, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F7F4u;
        goto label_30f7f4;
    }
    ctx->pc = 0x30F7ECu;
    {
        const bool branch_taken_0x30f7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F7ECu;
        // 0x30f7f0: 0x861025  or          $v0, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f7ec) {
            ctx->pc = 0x30F7F8u;
            goto label_30f7f8;
        }
    }
    ctx->pc = 0x30F7F4u;
label_30f7f4:
    // 0x30f7f4: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x30f7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_30f7f8:
    // 0x30f7f8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x30f7f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_30f7fc:
    // 0x30f7fc: 0x1000001e  b           . + 4 + (0x1E << 2)
label_30f800:
    if (ctx->pc == 0x30F800u) {
        ctx->pc = 0x30F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F7FCu;
        // 0x30f800: 0xaca20250  sw          $v0, 0x250($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F804u;
        goto label_30f804;
    }
    ctx->pc = 0x30F7FCu;
    {
        const bool branch_taken_0x30f7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F7FCu;
        // 0x30f800: 0xaca20250  sw          $v0, 0x250($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f7fc) {
            ctx->pc = 0x30F878u;
            goto label_30f878;
        }
    }
    ctx->pc = 0x30F804u;
label_30f804:
    // 0x30f804: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_30f808:
    if (ctx->pc == 0x30F808u) {
        ctx->pc = 0x30F808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F804u;
        // 0x30f808: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F80Cu;
        goto label_30f80c;
    }
    ctx->pc = 0x30F804u;
    {
        const bool branch_taken_0x30f804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f804) {
            ctx->pc = 0x30F808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F804u;
            // 0x30f808: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F878u;
            goto label_30f878;
        }
    }
    ctx->pc = 0x30F80Cu;
label_30f80c:
    // 0x30f80c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x30f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_30f810:
    // 0x30f810: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x30f810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_30f814:
    // 0x30f814: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x30f814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_30f818:
    // 0x30f818: 0xaca20250  sw          $v0, 0x250($a1)
    ctx->pc = 0x30f818u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 592), GPR_U32(ctx, 2));
label_30f81c:
    // 0x30f81c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x30f81cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30f820:
    // 0x30f820: 0x8ca20250  lw          $v0, 0x250($a1)
    ctx->pc = 0x30f820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
label_30f824:
    // 0x30f824: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x30f824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_30f828:
    // 0x30f828: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_30f82c:
    if (ctx->pc == 0x30F82Cu) {
        ctx->pc = 0x30F82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F828u;
        // 0x30f82c: 0x8ca20214  lw          $v0, 0x214($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F830u;
        goto label_30f830;
    }
    ctx->pc = 0x30F828u;
    {
        const bool branch_taken_0x30f828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f828) {
            ctx->pc = 0x30F82Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F828u;
            // 0x30f82c: 0x8ca20214  lw          $v0, 0x214($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F864u;
            goto label_30f864;
        }
    }
    ctx->pc = 0x30F830u;
label_30f830:
    // 0x30f830: 0x90a502fd  lbu         $a1, 0x2FD($a1)
    ctx->pc = 0x30f830u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 765)));
label_30f834:
    // 0x30f834: 0xc0b0c64  jal         func_2C3190
label_30f838:
    if (ctx->pc == 0x30F838u) {
        ctx->pc = 0x30F838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F834u;
        // 0x30f838: 0x26c4ea60  addiu       $a0, $s6, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F83Cu;
        goto label_30f83c;
    }
    ctx->pc = 0x30F834u;
    SET_GPR_U32(ctx, 31, 0x30F83Cu);
    ctx->pc = 0x30F838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F834u;
    // 0x30f838: 0x26c4ea60  addiu       $a0, $s6, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3190u, 0x30F834u, 0x30F83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F83Cu;
label_30f83c:
    // 0x30f83c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_30f840:
    if (ctx->pc == 0x30F840u) {
        ctx->pc = 0x30F840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F83Cu;
        // 0x30f840: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F844u;
        goto label_30f844;
    }
    ctx->pc = 0x30F83Cu;
    {
        const bool branch_taken_0x30f83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f83c) {
            ctx->pc = 0x30F840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F83Cu;
            // 0x30f840: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F878u;
            goto label_30f878;
        }
    }
    ctx->pc = 0x30F844u;
label_30f844:
    // 0x30f844: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x30f844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30f848:
    // 0x30f848: 0x8ca20214  lw          $v0, 0x214($a1)
    ctx->pc = 0x30f848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_30f84c:
    // 0x30f84c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x30f84cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_30f850:
    // 0x30f850: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x30f850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_30f854:
    // 0x30f854: 0x60f809  jalr        $v1
label_30f858:
    if (ctx->pc == 0x30F858u) {
        ctx->pc = 0x30F858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F854u;
        // 0x30f858: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F85Cu;
        goto label_30f85c;
    }
    ctx->pc = 0x30F854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x30F85Cu);
        ctx->pc = 0x30F858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F854u;
        // 0x30f858: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F854u, 0x30F85Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30F85Cu;
label_30f85c:
    // 0x30f85c: 0x10000006  b           . + 4 + (0x6 << 2)
label_30f860:
    if (ctx->pc == 0x30F860u) {
        ctx->pc = 0x30F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F85Cu;
        // 0x30f860: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F864u;
        goto label_30f864;
    }
    ctx->pc = 0x30F85Cu;
    {
        const bool branch_taken_0x30f85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F85Cu;
        // 0x30f860: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f85c) {
            ctx->pc = 0x30F878u;
            goto label_30f878;
        }
    }
    ctx->pc = 0x30F864u;
label_30f864:
    // 0x30f864: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x30f864u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_30f868:
    // 0x30f868: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x30f868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_30f86c:
    // 0x30f86c: 0x60f809  jalr        $v1
label_30f870:
    if (ctx->pc == 0x30F870u) {
        ctx->pc = 0x30F870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F86Cu;
        // 0x30f870: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F874u;
        goto label_30f874;
    }
    ctx->pc = 0x30F86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x30F874u);
        ctx->pc = 0x30F870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F86Cu;
        // 0x30f870: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F86Cu, 0x30F874u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30F874u;
label_30f874:
    // 0x30f874: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x30f874u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_30f878:
    // 0x30f878: 0x8ea24c30  lw          $v0, 0x4C30($s5)
    ctx->pc = 0x30f878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 19504)));
label_30f87c:
    // 0x30f87c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x30f87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_30f880:
    // 0x30f880: 0x5623ff87  bnel        $s1, $v1, . + 4 + (-0x79 << 2)
label_30f884:
    if (ctx->pc == 0x30F884u) {
        ctx->pc = 0x30F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F880u;
        // 0x30f884: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F888u;
        goto label_30f888;
    }
    ctx->pc = 0x30F880u;
    {
        const bool branch_taken_0x30f880 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x30f880) {
            ctx->pc = 0x30F884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F880u;
            // 0x30f884: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f6a0;
        }
    }
    ctx->pc = 0x30F888u;
label_30f888:
    // 0x30f888: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x30f888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_30f88c:
    // 0x30f88c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x30f88cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_30f890:
    // 0x30f890: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x30f890u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_30f894:
    // 0x30f894: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x30f894u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30f898:
    // 0x30f898: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x30f898u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30f89c:
    // 0x30f89c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x30f89cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30f8a0:
    // 0x30f8a0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x30f8a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30f8a4:
    // 0x30f8a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30f8a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30f8a8:
    // 0x30f8a8: 0x3e00008  jr          $ra
label_30f8ac:
    if (ctx->pc == 0x30F8ACu) {
        ctx->pc = 0x30F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F8A8u;
        // 0x30f8ac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F8B0u;
        goto label_fallthrough_0x30f8a8;
    }
    ctx->pc = 0x30F8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F8A8u;
        // 0x30f8ac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F8A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x30f8a8:
    ctx->pc = 0x30F8B0u;
}
