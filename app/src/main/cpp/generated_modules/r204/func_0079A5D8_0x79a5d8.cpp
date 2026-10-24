#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r204_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r204
{
// Function: func_0079A5D8
// Address: 0x79a5d8 - 0x79a828
void func_0079A5D8_0x79a5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A5D8_0x79a5d8");
#endif

    switch (ctx->pc) {
        case 0x79a5d8u: goto label_79a5d8;
        case 0x79a5dcu: goto label_79a5dc;
        case 0x79a5e0u: goto label_79a5e0;
        case 0x79a5e4u: goto label_79a5e4;
        case 0x79a5e8u: goto label_79a5e8;
        case 0x79a5ecu: goto label_79a5ec;
        case 0x79a5f0u: goto label_79a5f0;
        case 0x79a5f4u: goto label_79a5f4;
        case 0x79a5f8u: goto label_79a5f8;
        case 0x79a5fcu: goto label_79a5fc;
        case 0x79a600u: goto label_79a600;
        case 0x79a604u: goto label_79a604;
        case 0x79a608u: goto label_79a608;
        case 0x79a60cu: goto label_79a60c;
        case 0x79a610u: goto label_79a610;
        case 0x79a614u: goto label_79a614;
        case 0x79a618u: goto label_79a618;
        case 0x79a61cu: goto label_79a61c;
        case 0x79a620u: goto label_79a620;
        case 0x79a624u: goto label_79a624;
        case 0x79a628u: goto label_79a628;
        case 0x79a62cu: goto label_79a62c;
        case 0x79a630u: goto label_79a630;
        case 0x79a634u: goto label_79a634;
        case 0x79a638u: goto label_79a638;
        case 0x79a63cu: goto label_79a63c;
        case 0x79a640u: goto label_79a640;
        case 0x79a644u: goto label_79a644;
        case 0x79a648u: goto label_79a648;
        case 0x79a64cu: goto label_79a64c;
        case 0x79a650u: goto label_79a650;
        case 0x79a654u: goto label_79a654;
        case 0x79a658u: goto label_79a658;
        case 0x79a65cu: goto label_79a65c;
        case 0x79a660u: goto label_79a660;
        case 0x79a664u: goto label_79a664;
        case 0x79a668u: goto label_79a668;
        case 0x79a66cu: goto label_79a66c;
        case 0x79a670u: goto label_79a670;
        case 0x79a674u: goto label_79a674;
        case 0x79a678u: goto label_79a678;
        case 0x79a67cu: goto label_79a67c;
        case 0x79a680u: goto label_79a680;
        case 0x79a684u: goto label_79a684;
        case 0x79a688u: goto label_79a688;
        case 0x79a68cu: goto label_79a68c;
        case 0x79a690u: goto label_79a690;
        case 0x79a694u: goto label_79a694;
        case 0x79a698u: goto label_79a698;
        case 0x79a69cu: goto label_79a69c;
        case 0x79a6a0u: goto label_79a6a0;
        case 0x79a6a4u: goto label_79a6a4;
        case 0x79a6a8u: goto label_79a6a8;
        case 0x79a6acu: goto label_79a6ac;
        case 0x79a6b0u: goto label_79a6b0;
        case 0x79a6b4u: goto label_79a6b4;
        case 0x79a6b8u: goto label_79a6b8;
        case 0x79a6bcu: goto label_79a6bc;
        case 0x79a6c0u: goto label_79a6c0;
        case 0x79a6c4u: goto label_79a6c4;
        case 0x79a6c8u: goto label_79a6c8;
        case 0x79a6ccu: goto label_79a6cc;
        case 0x79a6d0u: goto label_79a6d0;
        case 0x79a6d4u: goto label_79a6d4;
        case 0x79a6d8u: goto label_79a6d8;
        case 0x79a6dcu: goto label_79a6dc;
        case 0x79a6e0u: goto label_79a6e0;
        case 0x79a6e4u: goto label_79a6e4;
        case 0x79a6e8u: goto label_79a6e8;
        case 0x79a6ecu: goto label_79a6ec;
        case 0x79a6f0u: goto label_79a6f0;
        case 0x79a6f4u: goto label_79a6f4;
        case 0x79a6f8u: goto label_79a6f8;
        case 0x79a6fcu: goto label_79a6fc;
        case 0x79a700u: goto label_79a700;
        case 0x79a704u: goto label_79a704;
        case 0x79a708u: goto label_79a708;
        case 0x79a70cu: goto label_79a70c;
        case 0x79a710u: goto label_79a710;
        case 0x79a714u: goto label_79a714;
        case 0x79a718u: goto label_79a718;
        case 0x79a71cu: goto label_79a71c;
        case 0x79a720u: goto label_79a720;
        case 0x79a724u: goto label_79a724;
        case 0x79a728u: goto label_79a728;
        case 0x79a72cu: goto label_79a72c;
        case 0x79a730u: goto label_79a730;
        case 0x79a734u: goto label_79a734;
        case 0x79a738u: goto label_79a738;
        case 0x79a73cu: goto label_79a73c;
        case 0x79a740u: goto label_79a740;
        case 0x79a744u: goto label_79a744;
        case 0x79a748u: goto label_79a748;
        case 0x79a74cu: goto label_79a74c;
        case 0x79a750u: goto label_79a750;
        case 0x79a754u: goto label_79a754;
        case 0x79a758u: goto label_79a758;
        case 0x79a75cu: goto label_79a75c;
        case 0x79a760u: goto label_79a760;
        case 0x79a764u: goto label_79a764;
        case 0x79a768u: goto label_79a768;
        case 0x79a76cu: goto label_79a76c;
        case 0x79a770u: goto label_79a770;
        case 0x79a774u: goto label_79a774;
        case 0x79a778u: goto label_79a778;
        case 0x79a77cu: goto label_79a77c;
        case 0x79a780u: goto label_79a780;
        case 0x79a784u: goto label_79a784;
        case 0x79a788u: goto label_79a788;
        case 0x79a78cu: goto label_79a78c;
        case 0x79a790u: goto label_79a790;
        case 0x79a794u: goto label_79a794;
        case 0x79a798u: goto label_79a798;
        case 0x79a79cu: goto label_79a79c;
        case 0x79a7a0u: goto label_79a7a0;
        case 0x79a7a4u: goto label_79a7a4;
        case 0x79a7a8u: goto label_79a7a8;
        case 0x79a7acu: goto label_79a7ac;
        case 0x79a7b0u: goto label_79a7b0;
        case 0x79a7b4u: goto label_79a7b4;
        case 0x79a7b8u: goto label_79a7b8;
        case 0x79a7bcu: goto label_79a7bc;
        case 0x79a7c0u: goto label_79a7c0;
        case 0x79a7c4u: goto label_79a7c4;
        case 0x79a7c8u: goto label_79a7c8;
        case 0x79a7ccu: goto label_79a7cc;
        case 0x79a7d0u: goto label_79a7d0;
        case 0x79a7d4u: goto label_79a7d4;
        case 0x79a7d8u: goto label_79a7d8;
        case 0x79a7dcu: goto label_79a7dc;
        case 0x79a7e0u: goto label_79a7e0;
        case 0x79a7e4u: goto label_79a7e4;
        case 0x79a7e8u: goto label_79a7e8;
        case 0x79a7ecu: goto label_79a7ec;
        case 0x79a7f0u: goto label_79a7f0;
        case 0x79a7f4u: goto label_79a7f4;
        case 0x79a7f8u: goto label_79a7f8;
        case 0x79a7fcu: goto label_79a7fc;
        case 0x79a800u: goto label_79a800;
        case 0x79a804u: goto label_79a804;
        case 0x79a808u: goto label_79a808;
        case 0x79a80cu: goto label_79a80c;
        case 0x79a810u: goto label_79a810;
        case 0x79a814u: goto label_79a814;
        case 0x79a818u: goto label_79a818;
        case 0x79a81cu: goto label_79a81c;
        case 0x79a820u: goto label_79a820;
        case 0x79a824u: goto label_79a824;
        default: break;
    }

    ctx->pc = 0x79a5d8u;

label_79a5d8:
    // 0x79a5d8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x79a5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_79a5dc:
    // 0x79a5dc: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x79a5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_79a5e0:
    // 0x79a5e0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x79a5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_79a5e4:
    // 0x79a5e4: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79a5e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
label_79a5e8:
    // 0x79a5e8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x79a5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_79a5ec:
    // 0x79a5ec: 0x3c110075  lui         $s1, 0x75
    ctx->pc = 0x79a5ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)117 << 16));
label_79a5f0:
    // 0x79a5f0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x79a5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_79a5f4:
    // 0x79a5f4: 0x3c12007a  lui         $s2, 0x7A
    ctx->pc = 0x79a5f4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
label_79a5f8:
    // 0x79a5f8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x79a5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_79a5fc:
    // 0x79a5fc: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x79a5fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_79a600:
    // 0x79a600: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x79a600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_79a604:
    // 0x79a604: 0x3c14007a  lui         $s4, 0x7A
    ctx->pc = 0x79a604u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
label_79a608:
    // 0x79a608: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x79a608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_79a60c:
    // 0x79a60c: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x79a60cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
label_79a610:
    // 0x79a610: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x79a610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_79a614:
    // 0x79a614: 0x3c160074  lui         $s6, 0x74
    ctx->pc = 0x79a614u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)116 << 16));
label_79a618:
    // 0x79a618: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x79a618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_79a61c:
    // 0x79a61c: 0x3c170058  lui         $s7, 0x58
    ctx->pc = 0x79a61cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)88 << 16));
label_79a620:
    // 0x79a620: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79a620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79a624:
    // 0x79a624: 0x10000006  b           . + 4 + (0x6 << 2)
label_79a628:
    if (ctx->pc == 0x79A628u) {
        ctx->pc = 0x79A628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A624u;
        // 0x79a628: 0x3c1e0060  lui         $fp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A62Cu;
        goto label_79a62c;
    }
    ctx->pc = 0x79A624u;
    {
        const bool branch_taken_0x79a624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A624u;
        // 0x79a628: 0x3c1e0060  lui         $fp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a624) {
            ctx->pc = 0x79A640u;
            goto label_79a640;
        }
    }
    ctx->pc = 0x79A62Cu;
label_79a62c:
    // 0x79a62c: 0x0  nop
    ctx->pc = 0x79a62cu;
    // NOP
label_79a630:
    // 0x79a630: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x79a630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_79a634:
    // 0x79a634: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a638:
    // 0x79a638: 0xc0b56a8  jal         func_2D5AA0
label_79a63c:
    if (ctx->pc == 0x79A63Cu) {
        ctx->pc = 0x79A63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A638u;
        // 0x79a63c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A640u;
        goto label_79a640;
    }
    ctx->pc = 0x79A638u;
    SET_GPR_U32(ctx, 31, 0x79A640u);
    ctx->pc = 0x79A63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A638u;
    // 0x79a63c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A638u, 0x79A640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A640u;
label_79a640:
    // 0x79a640: 0xc0b0f90  jal         func_2C3E40
label_79a644:
    if (ctx->pc == 0x79A644u) {
        ctx->pc = 0x79A644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A640u;
        // 0x79a644: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A648u;
        goto label_79a648;
    }
    ctx->pc = 0x79A640u;
    SET_GPR_U32(ctx, 31, 0x79A648u);
    ctx->pc = 0x79A644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A640u;
    // 0x79a644: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x79A640u, 0x79A648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A648u;
label_79a648:
    // 0x79a648: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_79a64c:
    if (ctx->pc == 0x79A64Cu) {
        ctx->pc = 0x79A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A648u;
        // 0x79a64c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A650u;
        goto label_79a650;
    }
    ctx->pc = 0x79A648u;
    {
        const bool branch_taken_0x79a648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A648u;
        // 0x79a64c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a648) {
            ctx->pc = 0x79A630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a630;
        }
    }
    ctx->pc = 0x79A650u;
label_79a650:
    // 0x79a650: 0x8e83b000  lw          $v1, -0x5000($s4)
    ctx->pc = 0x79a650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946816)));
label_79a654:
    // 0x79a654: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79a654u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_79a658:
    // 0x79a658: 0xc06e146  jal         func_1B8518
label_79a65c:
    if (ctx->pc == 0x79A65Cu) {
        ctx->pc = 0x79A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A658u;
        // 0x79a65c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A660u;
        goto label_79a660;
    }
    ctx->pc = 0x79A658u;
    SET_GPR_U32(ctx, 31, 0x79A660u);
    ctx->pc = 0x79A65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A658u;
    // 0x79a65c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8518u, 0x79A658u, 0x79A660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A660u;
label_79a660:
    // 0x79a660: 0x8e82b000  lw          $v0, -0x5000($s4)
    ctx->pc = 0x79a660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946816)));
label_79a664:
    // 0x79a664: 0xc06e146  jal         func_1B8518
label_79a668:
    if (ctx->pc == 0x79A668u) {
        ctx->pc = 0x79A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A664u;
        // 0x79a668: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A66Cu;
        goto label_79a66c;
    }
    ctx->pc = 0x79A664u;
    SET_GPR_U32(ctx, 31, 0x79A66Cu);
    ctx->pc = 0x79A668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A664u;
    // 0x79a668: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8518u, 0x79A664u, 0x79A66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A66Cu;
label_79a66c:
    // 0x79a66c: 0x8202af28  lb          $v0, -0x50D8($s0)
    ctx->pc = 0x79a66cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294946600)));
label_79a670:
    // 0x79a670: 0x26284c58  addiu       $t0, $s1, 0x4C58
    ctx->pc = 0x79a670u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19544));
label_79a674:
    // 0x79a674: 0x2603af28  addiu       $v1, $s0, -0x50D8
    ctx->pc = 0x79a674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946600));
label_79a678:
    // 0x79a678: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a67c:
    // 0x79a67c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79a680:
    if (ctx->pc == 0x79A680u) {
        ctx->pc = 0x79A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A67Cu;
        // 0x79a680: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A684u;
        goto label_79a684;
    }
    ctx->pc = 0x79A67Cu;
    {
        const bool branch_taken_0x79a67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A67Cu;
        // 0x79a680: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a67c) {
            ctx->pc = 0x79A6B8u;
            goto label_79a6b8;
        }
    }
    ctx->pc = 0x79A684u;
label_79a684:
    // 0x79a684: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79a688:
    // 0x79a688: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a688u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a68c:
    // 0x79a68c: 0x0  nop
    ctx->pc = 0x79a68cu;
    // NOP
label_79a690:
    // 0x79a690: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a690u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_79a694:
    // 0x79a694: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_79a698:
    // 0x79a698: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_79a69c:
    // 0x79a69c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_79a6a0:
    // 0x79a6a0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a6a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_79a6a4:
    // 0x79a6a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_79a6a8:
    if (ctx->pc == 0x79A6A8u) {
        ctx->pc = 0x79A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6A4u;
        // 0x79a6a8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A6ACu;
        goto label_79a6ac;
    }
    ctx->pc = 0x79A6A4u;
    {
        const bool branch_taken_0x79a6a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6A4u;
        // 0x79a6a8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6a4) {
            ctx->pc = 0x79A6B8u;
            goto label_79a6b8;
        }
    }
    ctx->pc = 0x79A6ACu;
label_79a6ac:
    // 0x79a6ac: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a6acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a6b0:
    // 0x79a6b0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_79a6b4:
    if (ctx->pc == 0x79A6B4u) {
        ctx->pc = 0x79A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6B0u;
        // 0x79a6b4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A6B8u;
        goto label_79a6b8;
    }
    ctx->pc = 0x79A6B0u;
    {
        const bool branch_taken_0x79a6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a6b0) {
            ctx->pc = 0x79A6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A6B0u;
            // 0x79a6b4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a690;
        }
    }
    ctx->pc = 0x79A6B8u;
label_79a6b8:
    // 0x79a6b8: 0xc053f66  jal         func_14FD98
label_79a6bc:
    if (ctx->pc == 0x79A6BCu) {
        ctx->pc = 0x79A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6B8u;
        // 0x79a6bc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A6C0u;
        goto label_79a6c0;
    }
    ctx->pc = 0x79A6B8u;
    SET_GPR_U32(ctx, 31, 0x79A6C0u);
    ctx->pc = 0x79A6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6B8u;
    // 0x79a6bc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A6B8u, 0x79A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6C0u;
label_79a6c0:
    // 0x79a6c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a6c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a6c4:
    // 0x79a6c4: 0x26284c58  addiu       $t0, $s1, 0x4C58
    ctx->pc = 0x79a6c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19544));
label_79a6c8:
    // 0x79a6c8: 0x8242af20  lb          $v0, -0x50E0($s2)
    ctx->pc = 0x79a6c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294946592)));
label_79a6cc:
    // 0x79a6cc: 0x2643af20  addiu       $v1, $s2, -0x50E0
    ctx->pc = 0x79a6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294946592));
label_79a6d0:
    // 0x79a6d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a6d4:
    // 0x79a6d4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79a6d8:
    if (ctx->pc == 0x79A6D8u) {
        ctx->pc = 0x79A6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6D4u;
        // 0x79a6d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A6DCu;
        goto label_79a6dc;
    }
    ctx->pc = 0x79A6D4u;
    {
        const bool branch_taken_0x79a6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6D4u;
        // 0x79a6d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6d4) {
            ctx->pc = 0x79A710u;
            goto label_79a710;
        }
    }
    ctx->pc = 0x79A6DCu;
label_79a6dc:
    // 0x79a6dc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a6dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79a6e0:
    // 0x79a6e0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a6e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a6e4:
    // 0x79a6e4: 0x0  nop
    ctx->pc = 0x79a6e4u;
    // NOP
label_79a6e8:
    // 0x79a6e8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_79a6ec:
    // 0x79a6ec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a6ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_79a6f0:
    // 0x79a6f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_79a6f4:
    // 0x79a6f4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_79a6f8:
    // 0x79a6f8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a6f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_79a6fc:
    // 0x79a6fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_79a700:
    if (ctx->pc == 0x79A700u) {
        ctx->pc = 0x79A700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6FCu;
        // 0x79a700: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A704u;
        goto label_79a704;
    }
    ctx->pc = 0x79A6FCu;
    {
        const bool branch_taken_0x79a6fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6FCu;
        // 0x79a700: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6fc) {
            ctx->pc = 0x79A710u;
            goto label_79a710;
        }
    }
    ctx->pc = 0x79A704u;
label_79a704:
    // 0x79a704: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a704u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a708:
    // 0x79a708: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_79a70c:
    if (ctx->pc == 0x79A70Cu) {
        ctx->pc = 0x79A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A708u;
        // 0x79a70c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A710u;
        goto label_79a710;
    }
    ctx->pc = 0x79A708u;
    {
        const bool branch_taken_0x79a708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a708) {
            ctx->pc = 0x79A70Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A708u;
            // 0x79a70c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a6e8;
        }
    }
    ctx->pc = 0x79A710u;
label_79a710:
    // 0x79a710: 0xc053f66  jal         func_14FD98
label_79a714:
    if (ctx->pc == 0x79A714u) {
        ctx->pc = 0x79A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A710u;
        // 0x79a714: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A718u;
        goto label_79a718;
    }
    ctx->pc = 0x79A710u;
    SET_GPR_U32(ctx, 31, 0x79A718u);
    ctx->pc = 0x79A714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A710u;
    // 0x79a714: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A710u, 0x79A718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A718u;
label_79a718:
    // 0x79a718: 0x8e040250  lw          $a0, 0x250($s0)
    ctx->pc = 0x79a718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_79a71c:
    // 0x79a71c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x79a71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79a720:
    // 0x79a720: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a724:
    // 0x79a724: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x79a724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
label_79a728:
    // 0x79a728: 0xae040250  sw          $a0, 0x250($s0)
    ctx->pc = 0x79a728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 4));
label_79a72c:
    // 0x79a72c: 0x8c430250  lw          $v1, 0x250($v0)
    ctx->pc = 0x79a72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
label_79a730:
    // 0x79a730: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x79a730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_79a734:
    // 0x79a734: 0xac430250  sw          $v1, 0x250($v0)
    ctx->pc = 0x79a734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 592), GPR_U32(ctx, 3));
label_79a738:
    // 0x79a738: 0x8e82b000  lw          $v0, -0x5000($s4)
    ctx->pc = 0x79a738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946816)));
label_79a73c:
    // 0x79a73c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79a73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79a740:
    // 0x79a740: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a744:
    // 0x79a744: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_79a748:
    if (ctx->pc == 0x79A748u) {
        ctx->pc = 0x79A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A744u;
        // 0x79a748: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A74Cu;
        goto label_79a74c;
    }
    ctx->pc = 0x79A744u;
    {
        const bool branch_taken_0x79a744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A744u;
        // 0x79a748: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a744) {
            ctx->pc = 0x79A75Cu;
            goto label_79a75c;
        }
    }
    ctx->pc = 0x79A74Cu;
label_79a74c:
    // 0x79a74c: 0xa06002f7  sb          $zero, 0x2F7($v1)
    ctx->pc = 0x79a74cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 759), (uint8_t)GPR_U32(ctx, 0));
label_79a750:
    // 0x79a750: 0xa06602f4  sb          $a2, 0x2F4($v1)
    ctx->pc = 0x79a750u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 756), (uint8_t)GPR_U32(ctx, 6));
label_79a754:
    // 0x79a754: 0xa06002f5  sb          $zero, 0x2F5($v1)
    ctx->pc = 0x79a754u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 757), (uint8_t)GPR_U32(ctx, 0));
label_79a758:
    // 0x79a758: 0xa06002f6  sb          $zero, 0x2F6($v1)
    ctx->pc = 0x79a758u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 758), (uint8_t)GPR_U32(ctx, 0));
label_79a75c:
    // 0x79a75c: 0x4a1fff8  bgez        $a1, . + 4 + (-0x8 << 2)
label_79a760:
    if (ctx->pc == 0x79A760u) {
        ctx->pc = 0x79A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A75Cu;
        // 0x79a760: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A764u;
        goto label_79a764;
    }
    ctx->pc = 0x79A75Cu;
    {
        const bool branch_taken_0x79a75c = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x79A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A75Cu;
        // 0x79a760: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a75c) {
            ctx->pc = 0x79A740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a740;
        }
    }
    ctx->pc = 0x79A764u;
label_79a764:
    // 0x79a764: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x79a764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_79a768:
    // 0x79a768: 0xc0a58dc  jal         func_296370
label_79a76c:
    if (ctx->pc == 0x79A76Cu) {
        ctx->pc = 0x79A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A768u;
        // 0x79a76c: 0x26e46af0  addiu       $a0, $s7, 0x6AF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 27376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A770u;
        goto label_79a770;
    }
    ctx->pc = 0x79A768u;
    SET_GPR_U32(ctx, 31, 0x79A770u);
    ctx->pc = 0x79A76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A768u;
    // 0x79a76c: 0x26e46af0  addiu       $a0, $s7, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x79A768u, 0x79A770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A770u;
label_79a770:
    // 0x79a770: 0x8ec27a8c  lw          $v0, 0x7A8C($s6)
    ctx->pc = 0x79a770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 31372)));
label_79a774:
    // 0x79a774: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x79a774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_79a778:
    // 0x79a778: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79a77c:
    // 0x79a77c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79a77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_79a780:
    // 0x79a780: 0xc0a56ce  jal         func_295B38
label_79a784:
    if (ctx->pc == 0x79A784u) {
        ctx->pc = 0x79A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A780u;
        // 0x79a784: 0xaec27a8c  sw          $v0, 0x7A8C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 31372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A788u;
        goto label_79a788;
    }
    ctx->pc = 0x79A780u;
    SET_GPR_U32(ctx, 31, 0x79A788u);
    ctx->pc = 0x79A784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A780u;
    // 0x79a784: 0xaec27a8c  sw          $v0, 0x7A8C($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 31372), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B38u, 0x79A780u, 0x79A788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A788u;
label_79a788:
    // 0x79a788: 0xc1e6a56  jal         func_79A958
label_79a78c:
    if (ctx->pc == 0x79A78Cu) {
        ctx->pc = 0x79A790u;
        goto label_79a790;
    }
    ctx->pc = 0x79A788u;
    SET_GPR_U32(ctx, 31, 0x79A790u);
    ctx->pc = 0x79A958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A958u, 0x79A788u, 0x79A790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A790u;
label_79a790:
    // 0x79a790: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x79a790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_79a794:
    // 0x79a794: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x79a794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_79a798:
    // 0x79a798: 0x27c4ea60  addiu       $a0, $fp, -0x15A0
    ctx->pc = 0x79a798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961760));
label_79a79c:
    // 0x79a79c: 0xc0b0a92  jal         func_2C2A48
label_79a7a0:
    if (ctx->pc == 0x79A7A0u) {
        ctx->pc = 0x79A7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A79Cu;
        // 0x79a7a0: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A7A4u;
        goto label_79a7a4;
    }
    ctx->pc = 0x79A79Cu;
    SET_GPR_U32(ctx, 31, 0x79A7A4u);
    ctx->pc = 0x79A7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A79Cu;
    // 0x79a7a0: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79A79Cu, 0x79A7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7A4u;
label_79a7a4:
    // 0x79a7a4: 0x240403d9  addiu       $a0, $zero, 0x3D9
    ctx->pc = 0x79a7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 985));
label_79a7a8:
    // 0x79a7a8: 0xc0c3ea6  jal         func_30FA98
label_79a7ac:
    if (ctx->pc == 0x79A7ACu) {
        ctx->pc = 0x79A7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7A8u;
        // 0x79a7ac: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A7B0u;
        goto label_79a7b0;
    }
    ctx->pc = 0x79A7A8u;
    SET_GPR_U32(ctx, 31, 0x79A7B0u);
    ctx->pc = 0x79A7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7A8u;
    // 0x79a7ac: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x79A7A8u, 0x79A7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7B0u;
label_79a7b0:
    // 0x79a7b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a7b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a7b4:
    // 0x79a7b4: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_79a7b8:
    if (ctx->pc == 0x79A7B8u) {
        ctx->pc = 0x79A7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7B4u;
        // 0x79a7b8: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A7BCu;
        goto label_79a7bc;
    }
    ctx->pc = 0x79A7B4u;
    {
        const bool branch_taken_0x79a7b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7B4u;
        // 0x79a7b8: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7b4) {
            ctx->pc = 0x79A7ECu;
            goto label_79a7ec;
        }
    }
    ctx->pc = 0x79A7BCu;
label_79a7bc:
    // 0x79a7bc: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x79a7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_79a7c0:
    // 0x79a7c0: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x79a7c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_79a7c4:
    // 0x79a7c4: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x79a7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_79a7c8:
    // 0x79a7c8: 0x40f809  jalr        $v0
label_79a7cc:
    if (ctx->pc == 0x79A7CCu) {
        ctx->pc = 0x79A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7C8u;
        // 0x79a7cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A7D0u;
        goto label_79a7d0;
    }
    ctx->pc = 0x79A7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79A7D0u);
        ctx->pc = 0x79A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7C8u;
        // 0x79a7cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A7C8u, 0x79A7D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A7D0u;
label_79a7d0:
    // 0x79a7d0: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x79a7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_79a7d4:
    // 0x79a7d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x79a7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_79a7d8:
    // 0x79a7d8: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x79a7d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_79a7dc:
    // 0x79a7dc: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x79a7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_79a7e0:
    // 0x79a7e0: 0x40f809  jalr        $v0
label_79a7e4:
    if (ctx->pc == 0x79A7E4u) {
        ctx->pc = 0x79A7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7E0u;
        // 0x79a7e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A7E8u;
        goto label_79a7e8;
    }
    ctx->pc = 0x79A7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79A7E8u);
        ctx->pc = 0x79A7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7E0u;
        // 0x79a7e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A7E0u, 0x79A7E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A7E8u;
label_79a7e8:
    // 0x79a7e8: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x79a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_79a7ec:
    // 0x79a7ec: 0xc0b5692  jal         func_2D5A48
label_79a7f0:
    if (ctx->pc == 0x79A7F0u) {
        ctx->pc = 0x79A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7ECu;
        // 0x79a7f0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A7F4u;
        goto label_79a7f4;
    }
    ctx->pc = 0x79A7ECu;
    SET_GPR_U32(ctx, 31, 0x79A7F4u);
    ctx->pc = 0x79A7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7ECu;
    // 0x79a7f0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A7ECu, 0x79A7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7F4u;
label_79a7f4:
    // 0x79a7f4: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x79a7f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_79a7f8:
    // 0x79a7f8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x79a7f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_79a7fc:
    // 0x79a7fc: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x79a7fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_79a800:
    // 0x79a800: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x79a800u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_79a804:
    // 0x79a804: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x79a804u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_79a808:
    // 0x79a808: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x79a808u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_79a80c:
    // 0x79a80c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x79a80cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_79a810:
    // 0x79a810: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x79a810u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_79a814:
    // 0x79a814: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x79a814u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_79a818:
    // 0x79a818: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79a818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79a81c:
    // 0x79a81c: 0x3e00008  jr          $ra
label_79a820:
    if (ctx->pc == 0x79A820u) {
        ctx->pc = 0x79A820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A81Cu;
        // 0x79a820: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A824u;
        goto label_79a824;
    }
    ctx->pc = 0x79A81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A81Cu;
        // 0x79a820: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A81Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A824u;
label_79a824:
    // 0x79a824: 0x0  nop
    ctx->pc = 0x79a824u;
    // NOP
    ctx->pc = 0x79a828u;
}
} // namespace gh_r204
