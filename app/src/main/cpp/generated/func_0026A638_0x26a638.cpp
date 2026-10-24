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

// Function: func_0026A638
// Address: 0x26a638 - 0x26a838
void func_0026A638_0x26a638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026A638_0x26a638");
#endif

    switch (ctx->pc) {
        case 0x26a638u: goto label_26a638;
        case 0x26a63cu: goto label_26a63c;
        case 0x26a640u: goto label_26a640;
        case 0x26a644u: goto label_26a644;
        case 0x26a648u: goto label_26a648;
        case 0x26a64cu: goto label_26a64c;
        case 0x26a650u: goto label_26a650;
        case 0x26a654u: goto label_26a654;
        case 0x26a658u: goto label_26a658;
        case 0x26a65cu: goto label_26a65c;
        case 0x26a660u: goto label_26a660;
        case 0x26a664u: goto label_26a664;
        case 0x26a668u: goto label_26a668;
        case 0x26a66cu: goto label_26a66c;
        case 0x26a670u: goto label_26a670;
        case 0x26a674u: goto label_26a674;
        case 0x26a678u: goto label_26a678;
        case 0x26a67cu: goto label_26a67c;
        case 0x26a680u: goto label_26a680;
        case 0x26a684u: goto label_26a684;
        case 0x26a688u: goto label_26a688;
        case 0x26a68cu: goto label_26a68c;
        case 0x26a690u: goto label_26a690;
        case 0x26a694u: goto label_26a694;
        case 0x26a698u: goto label_26a698;
        case 0x26a69cu: goto label_26a69c;
        case 0x26a6a0u: goto label_26a6a0;
        case 0x26a6a4u: goto label_26a6a4;
        case 0x26a6a8u: goto label_26a6a8;
        case 0x26a6acu: goto label_26a6ac;
        case 0x26a6b0u: goto label_26a6b0;
        case 0x26a6b4u: goto label_26a6b4;
        case 0x26a6b8u: goto label_26a6b8;
        case 0x26a6bcu: goto label_26a6bc;
        case 0x26a6c0u: goto label_26a6c0;
        case 0x26a6c4u: goto label_26a6c4;
        case 0x26a6c8u: goto label_26a6c8;
        case 0x26a6ccu: goto label_26a6cc;
        case 0x26a6d0u: goto label_26a6d0;
        case 0x26a6d4u: goto label_26a6d4;
        case 0x26a6d8u: goto label_26a6d8;
        case 0x26a6dcu: goto label_26a6dc;
        case 0x26a6e0u: goto label_26a6e0;
        case 0x26a6e4u: goto label_26a6e4;
        case 0x26a6e8u: goto label_26a6e8;
        case 0x26a6ecu: goto label_26a6ec;
        case 0x26a6f0u: goto label_26a6f0;
        case 0x26a6f4u: goto label_26a6f4;
        case 0x26a6f8u: goto label_26a6f8;
        case 0x26a6fcu: goto label_26a6fc;
        case 0x26a700u: goto label_26a700;
        case 0x26a704u: goto label_26a704;
        case 0x26a708u: goto label_26a708;
        case 0x26a70cu: goto label_26a70c;
        case 0x26a710u: goto label_26a710;
        case 0x26a714u: goto label_26a714;
        case 0x26a718u: goto label_26a718;
        case 0x26a71cu: goto label_26a71c;
        case 0x26a720u: goto label_26a720;
        case 0x26a724u: goto label_26a724;
        case 0x26a728u: goto label_26a728;
        case 0x26a72cu: goto label_26a72c;
        case 0x26a730u: goto label_26a730;
        case 0x26a734u: goto label_26a734;
        case 0x26a738u: goto label_26a738;
        case 0x26a73cu: goto label_26a73c;
        case 0x26a740u: goto label_26a740;
        case 0x26a744u: goto label_26a744;
        case 0x26a748u: goto label_26a748;
        case 0x26a74cu: goto label_26a74c;
        case 0x26a750u: goto label_26a750;
        case 0x26a754u: goto label_26a754;
        case 0x26a758u: goto label_26a758;
        case 0x26a75cu: goto label_26a75c;
        case 0x26a760u: goto label_26a760;
        case 0x26a764u: goto label_26a764;
        case 0x26a768u: goto label_26a768;
        case 0x26a76cu: goto label_26a76c;
        case 0x26a770u: goto label_26a770;
        case 0x26a774u: goto label_26a774;
        case 0x26a778u: goto label_26a778;
        case 0x26a77cu: goto label_26a77c;
        case 0x26a780u: goto label_26a780;
        case 0x26a784u: goto label_26a784;
        case 0x26a788u: goto label_26a788;
        case 0x26a78cu: goto label_26a78c;
        case 0x26a790u: goto label_26a790;
        case 0x26a794u: goto label_26a794;
        case 0x26a798u: goto label_26a798;
        case 0x26a79cu: goto label_26a79c;
        case 0x26a7a0u: goto label_26a7a0;
        case 0x26a7a4u: goto label_26a7a4;
        case 0x26a7a8u: goto label_26a7a8;
        case 0x26a7acu: goto label_26a7ac;
        case 0x26a7b0u: goto label_26a7b0;
        case 0x26a7b4u: goto label_26a7b4;
        case 0x26a7b8u: goto label_26a7b8;
        case 0x26a7bcu: goto label_26a7bc;
        case 0x26a7c0u: goto label_26a7c0;
        case 0x26a7c4u: goto label_26a7c4;
        case 0x26a7c8u: goto label_26a7c8;
        case 0x26a7ccu: goto label_26a7cc;
        case 0x26a7d0u: goto label_26a7d0;
        case 0x26a7d4u: goto label_26a7d4;
        case 0x26a7d8u: goto label_26a7d8;
        case 0x26a7dcu: goto label_26a7dc;
        case 0x26a7e0u: goto label_26a7e0;
        case 0x26a7e4u: goto label_26a7e4;
        case 0x26a7e8u: goto label_26a7e8;
        case 0x26a7ecu: goto label_26a7ec;
        case 0x26a7f0u: goto label_26a7f0;
        case 0x26a7f4u: goto label_26a7f4;
        case 0x26a7f8u: goto label_26a7f8;
        case 0x26a7fcu: goto label_26a7fc;
        case 0x26a800u: goto label_26a800;
        case 0x26a804u: goto label_26a804;
        case 0x26a808u: goto label_26a808;
        case 0x26a80cu: goto label_26a80c;
        case 0x26a810u: goto label_26a810;
        case 0x26a814u: goto label_26a814;
        case 0x26a818u: goto label_26a818;
        case 0x26a81cu: goto label_26a81c;
        case 0x26a820u: goto label_26a820;
        case 0x26a824u: goto label_26a824;
        case 0x26a828u: goto label_26a828;
        case 0x26a82cu: goto label_26a82c;
        case 0x26a830u: goto label_26a830;
        case 0x26a834u: goto label_26a834;
        default: break;
    }

    ctx->pc = 0x26a638u;

label_26a638:
    // 0x26a638: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x26a638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_26a63c:
    // 0x26a63c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x26a63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_26a640:
    // 0x26a640: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x26a640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_26a644:
    // 0x26a644: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x26a644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26a648:
    // 0x26a648: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x26a648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_26a64c:
    // 0x26a64c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x26a64cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26a650:
    // 0x26a650: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x26a650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_26a654:
    // 0x26a654: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x26a654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_26a658:
    // 0x26a658: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x26a658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_26a65c:
    // 0x26a65c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26a65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_26a660:
    // 0x26a660: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x26a660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_26a664:
    // 0x26a664: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x26a664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_26a668:
    // 0x26a668: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x26a668u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_26a66c:
    // 0x26a66c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26a66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_26a670:
    // 0x26a670: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
label_26a674:
    if (ctx->pc == 0x26A674u) {
        ctx->pc = 0x26A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A670u;
        // 0x26a674: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A678u;
        goto label_26a678;
    }
    ctx->pc = 0x26A670u;
    {
        const bool branch_taken_0x26a670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A670u;
        // 0x26a674: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a670) {
            ctx->pc = 0x26A814u;
            goto label_26a814;
        }
    }
    ctx->pc = 0x26A678u;
label_26a678:
    // 0x26a678: 0x266206e4  addiu       $v0, $s3, 0x6E4
    ctx->pc = 0x26a678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1764));
label_26a67c:
    // 0x26a67c: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x26a67cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_26a680:
    // 0x26a680: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x26a680u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a684:
    // 0x26a684: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26a684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_26a688:
    // 0x26a688: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26a688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26a68c:
    // 0x26a68c: 0x14600062  bnez        $v1, . + 4 + (0x62 << 2)
label_26a690:
    if (ctx->pc == 0x26A690u) {
        ctx->pc = 0x26A690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A68Cu;
        // 0x26a690: 0x7bb10080  lq          $s1, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A694u;
        goto label_26a694;
    }
    ctx->pc = 0x26A68Cu;
    {
        const bool branch_taken_0x26a68c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A68Cu;
        // 0x26a690: 0x7bb10080  lq          $s1, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a68c) {
            ctx->pc = 0x26A818u;
            goto label_26a818;
        }
    }
    ctx->pc = 0x26A694u;
label_26a694:
    // 0x26a694: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_26a698:
    if (ctx->pc == 0x26A698u) {
        ctx->pc = 0x26A698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A694u;
        // 0x26a698: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A69Cu;
        goto label_26a69c;
    }
    ctx->pc = 0x26A694u;
    {
        const bool branch_taken_0x26a694 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A694u;
        // 0x26a698: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a694) {
            ctx->pc = 0x26A6A4u;
            goto label_26a6a4;
        }
    }
    ctx->pc = 0x26A69Cu;
label_26a69c:
    // 0x26a69c: 0x12420006  beq         $s2, $v0, . + 4 + (0x6 << 2)
label_26a6a0:
    if (ctx->pc == 0x26A6A0u) {
        ctx->pc = 0x26A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A69Cu;
        // 0x26a6a0: 0x24140010  addiu       $s4, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A6A4u;
        goto label_26a6a4;
    }
    ctx->pc = 0x26A69Cu;
    {
        const bool branch_taken_0x26a69c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A69Cu;
        // 0x26a6a0: 0x24140010  addiu       $s4, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a69c) {
            ctx->pc = 0x26A6B8u;
            goto label_26a6b8;
        }
    }
    ctx->pc = 0x26A6A4u;
label_26a6a4:
    // 0x26a6a4: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x26a6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
label_26a6a8:
    // 0x26a6a8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26a6a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26a6ac:
    // 0x26a6ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26a6acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26a6b0:
    // 0x26a6b0: 0x10000004  b           . + 4 + (0x4 << 2)
label_26a6b4:
    if (ctx->pc == 0x26A6B4u) {
        ctx->pc = 0x26A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A6B0u;
        // 0x26a6b4: 0x2414000a  addiu       $s4, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A6B8u;
        goto label_26a6b8;
    }
    ctx->pc = 0x26A6B0u;
    {
        const bool branch_taken_0x26a6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A6B0u;
        // 0x26a6b4: 0x2414000a  addiu       $s4, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a6b0) {
            ctx->pc = 0x26A6C4u;
            goto label_26a6c4;
        }
    }
    ctx->pc = 0x26A6B8u;
label_26a6b8:
    // 0x26a6b8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x26a6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_26a6bc:
    // 0x26a6bc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26a6bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26a6c0:
    // 0x26a6c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26a6c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26a6c4:
    // 0x26a6c4: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x26a6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
label_26a6c8:
    // 0x26a6c8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26a6c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26a6cc:
    // 0x26a6cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26a6ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26a6d0:
    // 0x26a6d0: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x26a6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
label_26a6d4:
    // 0x26a6d4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26a6d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26a6d8:
    // 0x26a6d8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26a6d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_26a6dc:
    // 0x26a6dc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x26a6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_26a6e0:
    // 0x26a6e0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x26a6e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_26a6e4:
    // 0x26a6e4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x26a6e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_26a6e8:
    // 0x26a6e8: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x26a6e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
label_26a6ec:
    // 0x26a6ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26a6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26a6f0:
    // 0x26a6f0: 0x2a820000  slti        $v0, $s4, 0x0
    ctx->pc = 0x26a6f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)0) ? 1 : 0);
label_26a6f4:
    // 0x26a6f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_26a6f8:
    if (ctx->pc == 0x26A6F8u) {
        ctx->pc = 0x26A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A6F4u;
        // 0x26a6f8: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A6FCu;
        goto label_26a6fc;
    }
    ctx->pc = 0x26A6F4u;
    {
        const bool branch_taken_0x26a6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A6F4u;
        // 0x26a6f8: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a6f4) {
            ctx->pc = 0x26A704u;
            goto label_26a704;
        }
    }
    ctx->pc = 0x26A6FCu;
label_26a6fc:
    // 0x26a6fc: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x26a6fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_26a700:
    // 0x26a700: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26a700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a704:
    // 0x26a704: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x26a704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_26a708:
    // 0x26a708: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_26a70c:
    if (ctx->pc == 0x26A70Cu) {
        ctx->pc = 0x26A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A708u;
        // 0x26a70c: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A710u;
        goto label_26a710;
    }
    ctx->pc = 0x26A708u;
    {
        const bool branch_taken_0x26a708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A708u;
        // 0x26a70c: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a708) {
            ctx->pc = 0x26A720u;
            goto label_26a720;
        }
    }
    ctx->pc = 0x26A710u;
label_26a710:
    // 0x26a710: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x26a710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
label_26a714:
    // 0x26a714: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26a714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_26a718:
    // 0x26a718: 0x10000002  b           . + 4 + (0x2 << 2)
label_26a71c:
    if (ctx->pc == 0x26A71Cu) {
        ctx->pc = 0x26A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A718u;
        // 0x26a71c: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A720u;
        goto label_26a720;
    }
    ctx->pc = 0x26A718u;
    {
        const bool branch_taken_0x26a718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A718u;
        // 0x26a71c: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a718) {
            ctx->pc = 0x26A724u;
            goto label_26a724;
        }
    }
    ctx->pc = 0x26A720u;
label_26a720:
    // 0x26a720: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26a720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26a724:
    // 0x26a724: 0x1220003a  beqz        $s1, . + 4 + (0x3A << 2)
label_26a728:
    if (ctx->pc == 0x26A728u) {
        ctx->pc = 0x26A728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A724u;
        // 0x26a728: 0x24040364  addiu       $a0, $zero, 0x364 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 868));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A72Cu;
        goto label_26a72c;
    }
    ctx->pc = 0x26A724u;
    {
        const bool branch_taken_0x26a724 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A724u;
        // 0x26a728: 0x24040364  addiu       $a0, $zero, 0x364 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 868));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a724) {
            ctx->pc = 0x26A810u;
            goto label_26a810;
        }
    }
    ctx->pc = 0x26A72Cu;
label_26a72c:
    // 0x26a72c: 0xc0c3ea6  jal         func_30FA98
label_26a730:
    if (ctx->pc == 0x26A730u) {
        ctx->pc = 0x26A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A72Cu;
        // 0x26a730: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A734u;
        goto label_26a734;
    }
    ctx->pc = 0x26A72Cu;
    SET_GPR_U32(ctx, 31, 0x26A734u);
    ctx->pc = 0x26A730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A72Cu;
    // 0x26a730: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x26A72Cu, 0x26A734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A734u;
label_26a734:
    // 0x26a734: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26a734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a738:
    // 0x26a738: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x26a738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_26a73c:
    // 0x26a73c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x26a73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_26a740:
    // 0x26a740: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
label_26a744:
    if (ctx->pc == 0x26A744u) {
        ctx->pc = 0x26A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A740u;
        // 0x26a744: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A748u;
        goto label_26a748;
    }
    ctx->pc = 0x26A740u;
    {
        const bool branch_taken_0x26a740 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A740u;
        // 0x26a744: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a740) {
            ctx->pc = 0x26A810u;
            goto label_26a810;
        }
    }
    ctx->pc = 0x26A748u;
label_26a748:
    // 0x26a748: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x26a748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_26a74c:
    // 0x26a74c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x26a74cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_26a750:
    // 0x26a750: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x26a750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_26a754:
    // 0x26a754: 0x40f809  jalr        $v0
label_26a758:
    if (ctx->pc == 0x26A758u) {
        ctx->pc = 0x26A758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A754u;
        // 0x26a758: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A75Cu;
        goto label_26a75c;
    }
    ctx->pc = 0x26A754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26A75Cu);
        ctx->pc = 0x26A758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A754u;
        // 0x26a758: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A754u, 0x26A75Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26A75Cu;
label_26a75c:
    // 0x26a75c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x26a75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_26a760:
    // 0x26a760: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x26a760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_26a764:
    // 0x26a764: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_26a768:
    if (ctx->pc == 0x26A768u) {
        ctx->pc = 0x26A768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A764u;
        // 0x26a768: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A76Cu;
        goto label_26a76c;
    }
    ctx->pc = 0x26A764u;
    {
        const bool branch_taken_0x26a764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26a764) {
            ctx->pc = 0x26A768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A764u;
            // 0x26a768: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A788u;
            goto label_26a788;
        }
    }
    ctx->pc = 0x26A76Cu;
label_26a76c:
    // 0x26a76c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26a76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26a770:
    // 0x26a770: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x26a770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_26a774:
    // 0x26a774: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26a774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26a778:
    // 0x26a778: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x26a778u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_26a77c:
    // 0x26a77c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26a77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26a780:
    // 0x26a780: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x26a780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_26a784:
    // 0x26a784: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x26a784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_26a788:
    // 0x26a788: 0x26030490  addiu       $v1, $s0, 0x490
    ctx->pc = 0x26a788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
label_26a78c:
    // 0x26a78c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_26a790:
    if (ctx->pc == 0x26A790u) {
        ctx->pc = 0x26A790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A78Cu;
        // 0x26a790: 0xae000100  sw          $zero, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A794u;
        goto label_26a794;
    }
    ctx->pc = 0x26A78Cu;
    {
        const bool branch_taken_0x26a78c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26a78c) {
            ctx->pc = 0x26A790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A78Cu;
            // 0x26a790: 0xae000100  sw          $zero, 0x100($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A7B0u;
            goto label_26a7b0;
        }
    }
    ctx->pc = 0x26A794u;
label_26a794:
    // 0x26a794: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26a794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26a798:
    // 0x26a798: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x26a798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
label_26a79c:
    // 0x26a79c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26a79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26a7a0:
    // 0x26a7a0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x26a7a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_26a7a4:
    // 0x26a7a4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26a7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26a7a8:
    // 0x26a7a8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x26a7a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_26a7ac:
    // 0x26a7ac: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x26a7acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
label_26a7b0:
    // 0x26a7b0: 0x26020100  addiu       $v0, $s0, 0x100
    ctx->pc = 0x26a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_26a7b4:
    // 0x26a7b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26a7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26a7b8:
    // 0x26a7b8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x26a7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_26a7bc:
    // 0x26a7bc: 0xc05657c  jal         func_1595F0
label_26a7c0:
    if (ctx->pc == 0x26A7C0u) {
        ctx->pc = 0x26A7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A7BCu;
        // 0x26a7c0: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A7C4u;
        goto label_26a7c4;
    }
    ctx->pc = 0x26A7BCu;
    SET_GPR_U32(ctx, 31, 0x26A7C4u);
    ctx->pc = 0x26A7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A7BCu;
    // 0x26a7c0: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x26A7BCu, 0x26A7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A7C4u;
label_26a7c4:
    // 0x26a7c4: 0x24420011  addiu       $v0, $v0, 0x11
    ctx->pc = 0x26a7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17));
label_26a7c8:
    // 0x26a7c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26a7cc:
    // 0x26a7cc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x26a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_26a7d0:
    // 0x26a7d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26a7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26a7d4:
    // 0x26a7d4: 0xc06c64a  jal         func_1B1928
label_26a7d8:
    if (ctx->pc == 0x26A7D8u) {
        ctx->pc = 0x26A7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A7D4u;
        // 0x26a7d8: 0x23403  sra         $a2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A7DCu;
        goto label_26a7dc;
    }
    ctx->pc = 0x26A7D4u;
    SET_GPR_U32(ctx, 31, 0x26A7DCu);
    ctx->pc = 0x26A7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A7D4u;
    // 0x26a7d8: 0x23403  sra         $a2, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1928u, 0x26A7D4u, 0x26A7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A7DCu;
label_26a7dc:
    // 0x26a7dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26a7e0:
    // 0x26a7e0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x26a7e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26a7e4:
    // 0x26a7e4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x26a7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_26a7e8:
    // 0x26a7e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26a7e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26a7ec:
    // 0x26a7ec: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x26a7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_26a7f0:
    // 0x26a7f0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x26a7f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26a7f4:
    // 0x26a7f4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x26a7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_26a7f8:
    // 0x26a7f8: 0xc06c572  jal         func_1B15C8
label_26a7fc:
    if (ctx->pc == 0x26A7FCu) {
        ctx->pc = 0x26A7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A7F8u;
        // 0x26a7fc: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A800u;
        goto label_26a800;
    }
    ctx->pc = 0x26A7F8u;
    SET_GPR_U32(ctx, 31, 0x26A800u);
    ctx->pc = 0x26A7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A7F8u;
    // 0x26a7fc: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B15C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B15C8u, 0x26A7F8u, 0x26A800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A800u;
label_26a800:
    // 0x26a800: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x26a800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
label_26a804:
    // 0x26a804: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26a804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26a808:
    // 0x26a808: 0x0  nop
    ctx->pc = 0x26a808u;
    // NOP
label_26a80c:
    // 0x26a80c: 0xe6601714  swc1        $f0, 0x1714($s3)
    ctx->pc = 0x26a80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 5908), bits); }
label_26a810:
    // 0x26a810: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x26a810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_26a814:
    // 0x26a814: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x26a814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_26a818:
    // 0x26a818: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x26a818u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_26a81c:
    // 0x26a81c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x26a81cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_26a820:
    // 0x26a820: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x26a820u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26a824:
    // 0x26a824: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x26a824u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26a828:
    // 0x26a828: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26a828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_26a82c:
    // 0x26a82c: 0x3e00008  jr          $ra
label_26a830:
    if (ctx->pc == 0x26A830u) {
        ctx->pc = 0x26A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A82Cu;
        // 0x26a830: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A834u;
        goto label_26a834;
    }
    ctx->pc = 0x26A82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A82Cu;
        // 0x26a830: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26A834u;
label_26a834:
    // 0x26a834: 0x0  nop
    ctx->pc = 0x26a834u;
    // NOP
    ctx->pc = 0x26a838u;
}
