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

// Function: func_0012B618
// Address: 0x12b618 - 0x12b928
void func_0012B618_0x12b618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012B618_0x12b618");
#endif

    switch (ctx->pc) {
        case 0x12b618u: goto label_12b618;
        case 0x12b61cu: goto label_12b61c;
        case 0x12b620u: goto label_12b620;
        case 0x12b624u: goto label_12b624;
        case 0x12b628u: goto label_12b628;
        case 0x12b62cu: goto label_12b62c;
        case 0x12b630u: goto label_12b630;
        case 0x12b634u: goto label_12b634;
        case 0x12b638u: goto label_12b638;
        case 0x12b63cu: goto label_12b63c;
        case 0x12b640u: goto label_12b640;
        case 0x12b644u: goto label_12b644;
        case 0x12b648u: goto label_12b648;
        case 0x12b64cu: goto label_12b64c;
        case 0x12b650u: goto label_12b650;
        case 0x12b654u: goto label_12b654;
        case 0x12b658u: goto label_12b658;
        case 0x12b65cu: goto label_12b65c;
        case 0x12b660u: goto label_12b660;
        case 0x12b664u: goto label_12b664;
        case 0x12b668u: goto label_12b668;
        case 0x12b66cu: goto label_12b66c;
        case 0x12b670u: goto label_12b670;
        case 0x12b674u: goto label_12b674;
        case 0x12b678u: goto label_12b678;
        case 0x12b67cu: goto label_12b67c;
        case 0x12b680u: goto label_12b680;
        case 0x12b684u: goto label_12b684;
        case 0x12b688u: goto label_12b688;
        case 0x12b68cu: goto label_12b68c;
        case 0x12b690u: goto label_12b690;
        case 0x12b694u: goto label_12b694;
        case 0x12b698u: goto label_12b698;
        case 0x12b69cu: goto label_12b69c;
        case 0x12b6a0u: goto label_12b6a0;
        case 0x12b6a4u: goto label_12b6a4;
        case 0x12b6a8u: goto label_12b6a8;
        case 0x12b6acu: goto label_12b6ac;
        case 0x12b6b0u: goto label_12b6b0;
        case 0x12b6b4u: goto label_12b6b4;
        case 0x12b6b8u: goto label_12b6b8;
        case 0x12b6bcu: goto label_12b6bc;
        case 0x12b6c0u: goto label_12b6c0;
        case 0x12b6c4u: goto label_12b6c4;
        case 0x12b6c8u: goto label_12b6c8;
        case 0x12b6ccu: goto label_12b6cc;
        case 0x12b6d0u: goto label_12b6d0;
        case 0x12b6d4u: goto label_12b6d4;
        case 0x12b6d8u: goto label_12b6d8;
        case 0x12b6dcu: goto label_12b6dc;
        case 0x12b6e0u: goto label_12b6e0;
        case 0x12b6e4u: goto label_12b6e4;
        case 0x12b6e8u: goto label_12b6e8;
        case 0x12b6ecu: goto label_12b6ec;
        case 0x12b6f0u: goto label_12b6f0;
        case 0x12b6f4u: goto label_12b6f4;
        case 0x12b6f8u: goto label_12b6f8;
        case 0x12b6fcu: goto label_12b6fc;
        case 0x12b700u: goto label_12b700;
        case 0x12b704u: goto label_12b704;
        case 0x12b708u: goto label_12b708;
        case 0x12b70cu: goto label_12b70c;
        case 0x12b710u: goto label_12b710;
        case 0x12b714u: goto label_12b714;
        case 0x12b718u: goto label_12b718;
        case 0x12b71cu: goto label_12b71c;
        case 0x12b720u: goto label_12b720;
        case 0x12b724u: goto label_12b724;
        case 0x12b728u: goto label_12b728;
        case 0x12b72cu: goto label_12b72c;
        case 0x12b730u: goto label_12b730;
        case 0x12b734u: goto label_12b734;
        case 0x12b738u: goto label_12b738;
        case 0x12b73cu: goto label_12b73c;
        case 0x12b740u: goto label_12b740;
        case 0x12b744u: goto label_12b744;
        case 0x12b748u: goto label_12b748;
        case 0x12b74cu: goto label_12b74c;
        case 0x12b750u: goto label_12b750;
        case 0x12b754u: goto label_12b754;
        case 0x12b758u: goto label_12b758;
        case 0x12b75cu: goto label_12b75c;
        case 0x12b760u: goto label_12b760;
        case 0x12b764u: goto label_12b764;
        case 0x12b768u: goto label_12b768;
        case 0x12b76cu: goto label_12b76c;
        case 0x12b770u: goto label_12b770;
        case 0x12b774u: goto label_12b774;
        case 0x12b778u: goto label_12b778;
        case 0x12b77cu: goto label_12b77c;
        case 0x12b780u: goto label_12b780;
        case 0x12b784u: goto label_12b784;
        case 0x12b788u: goto label_12b788;
        case 0x12b78cu: goto label_12b78c;
        case 0x12b790u: goto label_12b790;
        case 0x12b794u: goto label_12b794;
        case 0x12b798u: goto label_12b798;
        case 0x12b79cu: goto label_12b79c;
        case 0x12b7a0u: goto label_12b7a0;
        case 0x12b7a4u: goto label_12b7a4;
        case 0x12b7a8u: goto label_12b7a8;
        case 0x12b7acu: goto label_12b7ac;
        case 0x12b7b0u: goto label_12b7b0;
        case 0x12b7b4u: goto label_12b7b4;
        case 0x12b7b8u: goto label_12b7b8;
        case 0x12b7bcu: goto label_12b7bc;
        case 0x12b7c0u: goto label_12b7c0;
        case 0x12b7c4u: goto label_12b7c4;
        case 0x12b7c8u: goto label_12b7c8;
        case 0x12b7ccu: goto label_12b7cc;
        case 0x12b7d0u: goto label_12b7d0;
        case 0x12b7d4u: goto label_12b7d4;
        case 0x12b7d8u: goto label_12b7d8;
        case 0x12b7dcu: goto label_12b7dc;
        case 0x12b7e0u: goto label_12b7e0;
        case 0x12b7e4u: goto label_12b7e4;
        case 0x12b7e8u: goto label_12b7e8;
        case 0x12b7ecu: goto label_12b7ec;
        case 0x12b7f0u: goto label_12b7f0;
        case 0x12b7f4u: goto label_12b7f4;
        case 0x12b7f8u: goto label_12b7f8;
        case 0x12b7fcu: goto label_12b7fc;
        case 0x12b800u: goto label_12b800;
        case 0x12b804u: goto label_12b804;
        case 0x12b808u: goto label_12b808;
        case 0x12b80cu: goto label_12b80c;
        case 0x12b810u: goto label_12b810;
        case 0x12b814u: goto label_12b814;
        case 0x12b818u: goto label_12b818;
        case 0x12b81cu: goto label_12b81c;
        case 0x12b820u: goto label_12b820;
        case 0x12b824u: goto label_12b824;
        case 0x12b828u: goto label_12b828;
        case 0x12b82cu: goto label_12b82c;
        case 0x12b830u: goto label_12b830;
        case 0x12b834u: goto label_12b834;
        case 0x12b838u: goto label_12b838;
        case 0x12b83cu: goto label_12b83c;
        case 0x12b840u: goto label_12b840;
        case 0x12b844u: goto label_12b844;
        case 0x12b848u: goto label_12b848;
        case 0x12b84cu: goto label_12b84c;
        case 0x12b850u: goto label_12b850;
        case 0x12b854u: goto label_12b854;
        case 0x12b858u: goto label_12b858;
        case 0x12b85cu: goto label_12b85c;
        case 0x12b860u: goto label_12b860;
        case 0x12b864u: goto label_12b864;
        case 0x12b868u: goto label_12b868;
        case 0x12b86cu: goto label_12b86c;
        case 0x12b870u: goto label_12b870;
        case 0x12b874u: goto label_12b874;
        case 0x12b878u: goto label_12b878;
        case 0x12b87cu: goto label_12b87c;
        case 0x12b880u: goto label_12b880;
        case 0x12b884u: goto label_12b884;
        case 0x12b888u: goto label_12b888;
        case 0x12b88cu: goto label_12b88c;
        case 0x12b890u: goto label_12b890;
        case 0x12b894u: goto label_12b894;
        case 0x12b898u: goto label_12b898;
        case 0x12b89cu: goto label_12b89c;
        case 0x12b8a0u: goto label_12b8a0;
        case 0x12b8a4u: goto label_12b8a4;
        case 0x12b8a8u: goto label_12b8a8;
        case 0x12b8acu: goto label_12b8ac;
        case 0x12b8b0u: goto label_12b8b0;
        case 0x12b8b4u: goto label_12b8b4;
        case 0x12b8b8u: goto label_12b8b8;
        case 0x12b8bcu: goto label_12b8bc;
        case 0x12b8c0u: goto label_12b8c0;
        case 0x12b8c4u: goto label_12b8c4;
        case 0x12b8c8u: goto label_12b8c8;
        case 0x12b8ccu: goto label_12b8cc;
        case 0x12b8d0u: goto label_12b8d0;
        case 0x12b8d4u: goto label_12b8d4;
        case 0x12b8d8u: goto label_12b8d8;
        case 0x12b8dcu: goto label_12b8dc;
        case 0x12b8e0u: goto label_12b8e0;
        case 0x12b8e4u: goto label_12b8e4;
        case 0x12b8e8u: goto label_12b8e8;
        case 0x12b8ecu: goto label_12b8ec;
        case 0x12b8f0u: goto label_12b8f0;
        case 0x12b8f4u: goto label_12b8f4;
        case 0x12b8f8u: goto label_12b8f8;
        case 0x12b8fcu: goto label_12b8fc;
        case 0x12b900u: goto label_12b900;
        case 0x12b904u: goto label_12b904;
        case 0x12b908u: goto label_12b908;
        case 0x12b90cu: goto label_12b90c;
        case 0x12b910u: goto label_12b910;
        case 0x12b914u: goto label_12b914;
        case 0x12b918u: goto label_12b918;
        case 0x12b91cu: goto label_12b91c;
        case 0x12b920u: goto label_12b920;
        case 0x12b924u: goto label_12b924;
        default: break;
    }

    ctx->pc = 0x12b618u;

label_12b618:
    // 0x12b618: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x12b618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_12b61c:
    // 0x12b61c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x12b61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_12b620:
    // 0x12b620: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x12b620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_12b624:
    // 0x12b624: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12b624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12b628:
    // 0x12b628: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x12b628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_12b62c:
    // 0x12b62c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x12b62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_12b630:
    // 0x12b630: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x12b630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_12b634:
    // 0x12b634: 0x8e0206a0  lw          $v0, 0x6A0($s0)
    ctx->pc = 0x12b634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
label_12b638:
    // 0x12b638: 0x504000b4  beql        $v0, $zero, . + 4 + (0xB4 << 2)
label_12b63c:
    if (ctx->pc == 0x12B63Cu) {
        ctx->pc = 0x12B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B638u;
        // 0x12b63c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B640u;
        goto label_12b640;
    }
    ctx->pc = 0x12B638u;
    {
        const bool branch_taken_0x12b638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b638) {
            ctx->pc = 0x12B63Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B638u;
            // 0x12b63c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B90Cu;
            goto label_12b90c;
        }
    }
    ctx->pc = 0x12B640u;
label_12b640:
    // 0x12b640: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x12b640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_12b644:
    // 0x12b644: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x12b644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_12b648:
    // 0x12b648: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x12b648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_12b64c:
    // 0x12b64c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x12b64cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_12b650:
    // 0x12b650: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
label_12b654:
    if (ctx->pc == 0x12B654u) {
        ctx->pc = 0x12B654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B650u;
        // 0x12b654: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B658u;
        goto label_12b658;
    }
    ctx->pc = 0x12B650u;
    {
        const bool branch_taken_0x12b650 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x12B654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B650u;
        // 0x12b654: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b650) {
            ctx->pc = 0x12B674u;
            goto label_12b674;
        }
    }
    ctx->pc = 0x12B658u;
label_12b658:
    // 0x12b658: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12b658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b65c:
    // 0x12b65c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x12b65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_12b660:
    // 0x12b660: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12b660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b664:
    // 0x12b664: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x12b664u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_12b668:
    // 0x12b668: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12b668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b66c:
    // 0x12b66c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x12b66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_12b670:
    // 0x12b670: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x12b670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b674:
    // 0x12b674: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x12b674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_12b678:
    // 0x12b678: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12b678u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_12b67c:
    // 0x12b67c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12b67cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12b680:
    // 0x12b680: 0x8e050640  lw          $a1, 0x640($s0)
    ctx->pc = 0x12b680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1600)));
label_12b684:
    // 0x12b684: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12b684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_12b688:
    // 0x12b688: 0x10a0007c  beqz        $a1, . + 4 + (0x7C << 2)
label_12b68c:
    if (ctx->pc == 0x12B68Cu) {
        ctx->pc = 0x12B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B688u;
        // 0x12b68c: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B690u;
        goto label_12b690;
    }
    ctx->pc = 0x12B688u;
    {
        const bool branch_taken_0x12b688 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B688u;
        // 0x12b68c: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b688) {
            ctx->pc = 0x12B87Cu;
            goto label_12b87c;
        }
    }
    ctx->pc = 0x12B690u;
label_12b690:
    // 0x12b690: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x12b690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_12b694:
    // 0x12b694: 0x94a302fe  lhu         $v1, 0x2FE($a1)
    ctx->pc = 0x12b694u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 766)));
label_12b698:
    // 0x12b698: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x12b698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_12b69c:
    // 0x12b69c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_12b6a0:
    if (ctx->pc == 0x12B6A0u) {
        ctx->pc = 0x12B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B69Cu;
        // 0x12b6a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B6A4u;
        goto label_12b6a4;
    }
    ctx->pc = 0x12B69Cu;
    {
        const bool branch_taken_0x12b69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B69Cu;
        // 0x12b6a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b69c) {
            ctx->pc = 0x12B6ACu;
            goto label_12b6ac;
        }
    }
    ctx->pc = 0x12B6A4u;
label_12b6a4:
    // 0x12b6a4: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x12b6a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_12b6a8:
    // 0x12b6a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12b6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12b6ac:
    // 0x12b6ac: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x12b6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_12b6b0:
    // 0x12b6b0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_12b6b4:
    if (ctx->pc == 0x12B6B4u) {
        ctx->pc = 0x12B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6B0u;
        // 0x12b6b4: 0x90a202b4  lbu         $v0, 0x2B4($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B6B8u;
        goto label_12b6b8;
    }
    ctx->pc = 0x12B6B0u;
    {
        const bool branch_taken_0x12b6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b6b0) {
            ctx->pc = 0x12B6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B6B0u;
            // 0x12b6b4: 0x90a202b4  lbu         $v0, 0x2B4($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B6E0u;
            goto label_12b6e0;
        }
    }
    ctx->pc = 0x12B6B8u;
label_12b6b8:
    // 0x12b6b8: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x12b6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_12b6bc:
    // 0x12b6bc: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x12b6bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_12b6c0:
    // 0x12b6c0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x12b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_12b6c4:
    // 0x12b6c4: 0x40f809  jalr        $v0
label_12b6c8:
    if (ctx->pc == 0x12B6C8u) {
        ctx->pc = 0x12B6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6C4u;
        // 0x12b6c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B6CCu;
        goto label_12b6cc;
    }
    ctx->pc = 0x12B6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12B6CCu);
        ctx->pc = 0x12B6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6C4u;
        // 0x12b6c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B6C4u, 0x12B6CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B6CCu;
label_12b6cc:
    // 0x12b6cc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x12b6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b6d0:
    // 0x12b6d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12b6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12b6d4:
    // 0x12b6d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12b6d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12b6d8:
    // 0x12b6d8: 0x10000024  b           . + 4 + (0x24 << 2)
label_12b6dc:
    if (ctx->pc == 0x12B6DCu) {
        ctx->pc = 0x12B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6D8u;
        // 0x12b6dc: 0x27a30020  addiu       $v1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B6E0u;
        goto label_12b6e0;
    }
    ctx->pc = 0x12B6D8u;
    {
        const bool branch_taken_0x12b6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6D8u;
        // 0x12b6dc: 0x27a30020  addiu       $v1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b6d8) {
            ctx->pc = 0x12B76Cu;
            goto label_12b76c;
        }
    }
    ctx->pc = 0x12B6E0u;
label_12b6e0:
    // 0x12b6e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_12b6e4:
    if (ctx->pc == 0x12B6E4u) {
        ctx->pc = 0x12B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6E0u;
        // 0x12b6e4: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B6E8u;
        goto label_12b6e8;
    }
    ctx->pc = 0x12B6E0u;
    {
        const bool branch_taken_0x12b6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6E0u;
        // 0x12b6e4: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b6e0) {
            ctx->pc = 0x12B6F4u;
            goto label_12b6f4;
        }
    }
    ctx->pc = 0x12B6E8u;
label_12b6e8:
    // 0x12b6e8: 0x8ca20278  lw          $v0, 0x278($a1)
    ctx->pc = 0x12b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
label_12b6ec:
    // 0x12b6ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_12b6f0:
    if (ctx->pc == 0x12B6F0u) {
        ctx->pc = 0x12B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6ECu;
        // 0x12b6f0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B6F4u;
        goto label_12b6f4;
    }
    ctx->pc = 0x12B6ECu;
    {
        const bool branch_taken_0x12b6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6ECu;
        // 0x12b6f0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b6ec) {
            ctx->pc = 0x12B6F8u;
            goto label_12b6f8;
        }
    }
    ctx->pc = 0x12B6F4u;
label_12b6f4:
    // 0x12b6f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12b6f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b6f8:
    // 0x12b6f8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_12b6fc:
    if (ctx->pc == 0x12B6FCu) {
        ctx->pc = 0x12B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6F8u;
        // 0x12b6fc: 0x27a30020  addiu       $v1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B700u;
        goto label_12b700;
    }
    ctx->pc = 0x12B6F8u;
    {
        const bool branch_taken_0x12b6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6F8u;
        // 0x12b6fc: 0x27a30020  addiu       $v1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b6f8) {
            ctx->pc = 0x12B740u;
            goto label_12b740;
        }
    }
    ctx->pc = 0x12B700u;
label_12b700:
    // 0x12b700: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x12b700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_12b704:
    // 0x12b704: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_12b708:
    if (ctx->pc == 0x12B708u) {
        ctx->pc = 0x12B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B704u;
        // 0x12b708: 0xc7a00024  lwc1        $f0, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B70Cu;
        goto label_12b70c;
    }
    ctx->pc = 0x12B704u;
    {
        const bool branch_taken_0x12b704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B704u;
        // 0x12b708: 0xc7a00024  lwc1        $f0, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b704) {
            ctx->pc = 0x12B728u;
            goto label_12b728;
        }
    }
    ctx->pc = 0x12B70Cu;
label_12b70c:
    // 0x12b70c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12b70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b710:
    // 0x12b710: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x12b710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_12b714:
    // 0x12b714: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12b714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b718:
    // 0x12b718: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x12b718u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_12b71c:
    // 0x12b71c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12b71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b720:
    // 0x12b720: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x12b720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_12b724:
    // 0x12b724: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x12b724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b728:
    // 0x12b728: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12b728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_12b72c:
    // 0x12b72c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12b72cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12b730:
    // 0x12b730: 0x0  nop
    ctx->pc = 0x12b730u;
    // NOP
label_12b734:
    // 0x12b734: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12b734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_12b738:
    // 0x12b738: 0x10000013  b           . + 4 + (0x13 << 2)
label_12b73c:
    if (ctx->pc == 0x12B73Cu) {
        ctx->pc = 0x12B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B738u;
        // 0x12b73c: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B740u;
        goto label_12b740;
    }
    ctx->pc = 0x12B738u;
    {
        const bool branch_taken_0x12b738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B738u;
        // 0x12b73c: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b738) {
            ctx->pc = 0x12B788u;
            goto label_12b788;
        }
    }
    ctx->pc = 0x12B740u;
label_12b740:
    // 0x12b740: 0x8e050640  lw          $a1, 0x640($s0)
    ctx->pc = 0x12b740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1600)));
label_12b744:
    // 0x12b744: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x12b744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_12b748:
    // 0x12b748: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x12b748u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_12b74c:
    // 0x12b74c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x12b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_12b750:
    // 0x12b750: 0x40f809  jalr        $v0
label_12b754:
    if (ctx->pc == 0x12B754u) {
        ctx->pc = 0x12B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B750u;
        // 0x12b754: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B758u;
        goto label_12b758;
    }
    ctx->pc = 0x12B750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12B758u);
        ctx->pc = 0x12B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B750u;
        // 0x12b754: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B750u, 0x12B758u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B758u;
label_12b758:
    // 0x12b758: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x12b758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b75c:
    // 0x12b75c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x12b75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_12b760:
    // 0x12b760: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x12b760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_12b764:
    // 0x12b764: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12b764u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_12b768:
    // 0x12b768: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12b768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12b76c:
    // 0x12b76c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x12b76cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_12b770:
    // 0x12b770: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x12b770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b774:
    // 0x12b774: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x12b774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_12b778:
    // 0x12b778: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x12b778u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_12b77c:
    // 0x12b77c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x12b77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b780:
    // 0x12b780: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x12b780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_12b784:
    // 0x12b784: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x12b784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_12b788:
    // 0x12b788: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x12b788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_12b78c:
    // 0x12b78c: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x12b78cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_12b790:
    // 0x12b790: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x12b790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_12b794:
    // 0x12b794: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x12b794u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_12b798:
    // 0x12b798: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x12b798u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_12b79c:
    // 0x12b79c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x12b79cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_12b7a0:
    // 0x12b7a0: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x12b7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_12b7a4:
    // 0x12b7a4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x12b7a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_12b7a8:
    // 0x12b7a8: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x12b7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_12b7ac:
    // 0x12b7ac: 0x13b10006  beq         $sp, $s1, . + 4 + (0x6 << 2)
label_12b7b0:
    if (ctx->pc == 0x12B7B0u) {
        ctx->pc = 0x12B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7ACu;
        // 0x12b7b0: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B7B4u;
        goto label_12b7b4;
    }
    ctx->pc = 0x12B7ACu;
    {
        const bool branch_taken_0x12b7ac = (GPR_U64(ctx, 29) == GPR_U64(ctx, 17));
        ctx->pc = 0x12B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7ACu;
        // 0x12b7b0: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b7ac) {
            ctx->pc = 0x12B7C8u;
            goto label_12b7c8;
        }
    }
    ctx->pc = 0x12B7B4u;
label_12b7b4:
    // 0x12b7b4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x12b7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b7b8:
    // 0x12b7b8: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x12b7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12b7bc:
    // 0x12b7bc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x12b7bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_12b7c0:
    // 0x12b7c0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x12b7c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_12b7c4:
    // 0x12b7c4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x12b7c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_12b7c8:
    // 0x12b7c8: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x12b7c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12b7cc:
    // 0x12b7cc: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x12b7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
label_12b7d0:
    // 0x12b7d0: 0xc04078a  jal         func_101E28
label_12b7d4:
    if (ctx->pc == 0x12B7D4u) {
        ctx->pc = 0x12B7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7D0u;
        // 0x12b7d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B7D8u;
        goto label_12b7d8;
    }
    ctx->pc = 0x12B7D0u;
    SET_GPR_U32(ctx, 31, 0x12B7D8u);
    ctx->pc = 0x12B7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B7D0u;
    // 0x12b7d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x12B7D0u, 0x12B7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B7D8u;
label_12b7d8:
    // 0x12b7d8: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x12b7d8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_12b7dc:
    // 0x12b7dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12b7dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12b7e0:
    // 0x12b7e0: 0x0  nop
    ctx->pc = 0x12b7e0u;
    // NOP
label_12b7e4:
    // 0x12b7e4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x12b7e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12b7e8:
    // 0x12b7e8: 0x0  nop
    ctx->pc = 0x12b7e8u;
    // NOP
label_12b7ec:
    // 0x12b7ec: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_12b7f0:
    if (ctx->pc == 0x12B7F0u) {
        ctx->pc = 0x12B7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7ECu;
        // 0x12b7f0: 0xc7a40000  lwc1        $f4, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B7F4u;
        goto label_12b7f4;
    }
    ctx->pc = 0x12B7ECu;
    {
        const bool branch_taken_0x12b7ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12B7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7ECu;
        // 0x12b7f0: 0xc7a40000  lwc1        $f4, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b7ec) {
            ctx->pc = 0x12B830u;
            goto label_12b830;
        }
    }
    ctx->pc = 0x12B7F4u;
label_12b7f4:
    // 0x12b7f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12b7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12b7f8:
    // 0x12b7f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12b7f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12b7fc:
    // 0x12b7fc: 0x0  nop
    ctx->pc = 0x12b7fcu;
    // NOP
label_12b800:
    // 0x12b800: 0x0  nop
    ctx->pc = 0x12b800u;
    // NOP
label_12b804:
    // 0x12b804: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x12b804u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
label_12b808:
    // 0x12b808: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x12b808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12b80c:
    // 0x12b80c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x12b80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12b810:
    // 0x12b810: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x12b810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b814:
    // 0x12b814: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x12b814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_12b818:
    // 0x12b818: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x12b818u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_12b81c:
    // 0x12b81c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x12b81cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_12b820:
    // 0x12b820: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x12b820u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_12b824:
    // 0x12b824: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x12b824u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_12b828:
    // 0x12b828: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x12b828u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_12b82c:
    // 0x12b82c: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x12b82cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_12b830:
    // 0x12b830: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x12b830u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_12b834:
    // 0x12b834: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x12b834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_12b838:
    // 0x12b838: 0x13b20006  beq         $sp, $s2, . + 4 + (0x6 << 2)
label_12b83c:
    if (ctx->pc == 0x12B83Cu) {
        ctx->pc = 0x12B83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B838u;
        // 0x12b83c: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B840u;
        goto label_12b840;
    }
    ctx->pc = 0x12B838u;
    {
        const bool branch_taken_0x12b838 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 18));
        ctx->pc = 0x12B83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B838u;
        // 0x12b83c: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b838) {
            ctx->pc = 0x12B854u;
            goto label_12b854;
        }
    }
    ctx->pc = 0x12B840u;
label_12b840:
    // 0x12b840: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x12b840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b844:
    // 0x12b844: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x12b844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12b848:
    // 0x12b848: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x12b848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_12b84c:
    // 0x12b84c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x12b84cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_12b850:
    // 0x12b850: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x12b850u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_12b854:
    // 0x12b854: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x12b854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_12b858:
    // 0x12b858: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x12b858u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_12b85c:
    // 0x12b85c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12b85cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12b860:
    // 0x12b860: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x12b860u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_12b864:
    // 0x12b864: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x12b864u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_12b868:
    // 0x12b868: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x12b868u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_12b86c:
    // 0x12b86c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x12b86cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_12b870:
    // 0x12b870: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x12b870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_12b874:
    // 0x12b874: 0x1000000f  b           . + 4 + (0xF << 2)
label_12b878:
    if (ctx->pc == 0x12B878u) {
        ctx->pc = 0x12B878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B874u;
        // 0x12b878: 0x8e0406a0  lw          $a0, 0x6A0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B87Cu;
        goto label_12b87c;
    }
    ctx->pc = 0x12B874u;
    {
        const bool branch_taken_0x12b874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B874u;
        // 0x12b878: 0x8e0406a0  lw          $a0, 0x6A0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b874) {
            ctx->pc = 0x12B8B4u;
            goto label_12b8b4;
        }
    }
    ctx->pc = 0x12B87Cu;
label_12b87c:
    // 0x12b87c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x12b87cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_12b880:
    // 0x12b880: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x12b880u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_12b884:
    // 0x12b884: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12b884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12b888:
    // 0x12b888: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12b888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12b88c:
    // 0x12b88c: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x12b88cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_12b890:
    // 0x12b890: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x12b890u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_12b894:
    // 0x12b894: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12b894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12b898:
    // 0x12b898: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x12b898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_12b89c:
    // 0x12b89c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x12b89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_12b8a0:
    // 0x12b8a0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x12b8a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12b8a4:
    // 0x12b8a4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x12b8a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_12b8a8:
    // 0x12b8a8: 0xc07e0d4  jal         func_1F8350
label_12b8ac:
    if (ctx->pc == 0x12B8ACu) {
        ctx->pc = 0x12B8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8A8u;
        // 0x12b8ac: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B8B0u;
        goto label_12b8b0;
    }
    ctx->pc = 0x12B8A8u;
    SET_GPR_U32(ctx, 31, 0x12B8B0u);
    ctx->pc = 0x12B8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B8A8u;
    // 0x12b8ac: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8350u, 0x12B8A8u, 0x12B8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B8B0u;
label_12b8b0:
    // 0x12b8b0: 0x8e0406a0  lw          $a0, 0x6A0($s0)
    ctx->pc = 0x12b8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
label_12b8b4:
    // 0x12b8b4: 0xc0722f8  jal         func_1C8BE0
label_12b8b8:
    if (ctx->pc == 0x12B8B8u) {
        ctx->pc = 0x12B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8B4u;
        // 0x12b8b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B8BCu;
        goto label_12b8bc;
    }
    ctx->pc = 0x12B8B4u;
    SET_GPR_U32(ctx, 31, 0x12B8BCu);
    ctx->pc = 0x12B8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B8B4u;
    // 0x12b8b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8BE0u, 0x12B8B4u, 0x12B8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B8BCu;
label_12b8bc:
    // 0x12b8bc: 0x8e0206a0  lw          $v0, 0x6A0($s0)
    ctx->pc = 0x12b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
label_12b8c0:
    // 0x12b8c0: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x12b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_12b8c4:
    // 0x12b8c4: 0x10530006  beq         $v0, $s3, . + 4 + (0x6 << 2)
label_12b8c8:
    if (ctx->pc == 0x12B8C8u) {
        ctx->pc = 0x12B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8C4u;
        // 0x12b8c8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B8CCu;
        goto label_12b8cc;
    }
    ctx->pc = 0x12B8C4u;
    {
        const bool branch_taken_0x12b8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x12B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8C4u;
        // 0x12b8c8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b8c4) {
            ctx->pc = 0x12B8E0u;
            goto label_12b8e0;
        }
    }
    ctx->pc = 0x12B8CCu;
label_12b8cc:
    // 0x12b8cc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x12b8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_12b8d0:
    // 0x12b8d0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x12b8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b8d4:
    // 0x12b8d4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x12b8d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_12b8d8:
    // 0x12b8d8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x12b8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b8dc:
    // 0x12b8dc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x12b8dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_12b8e0:
    // 0x12b8e0: 0x8e0306a0  lw          $v1, 0x6A0($s0)
    ctx->pc = 0x12b8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
label_12b8e4:
    // 0x12b8e4: 0x24620490  addiu       $v0, $v1, 0x490
    ctx->pc = 0x12b8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1168));
label_12b8e8:
    // 0x12b8e8: 0x10530006  beq         $v0, $s3, . + 4 + (0x6 << 2)
label_12b8ec:
    if (ctx->pc == 0x12B8ECu) {
        ctx->pc = 0x12B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8E8u;
        // 0x12b8ec: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B8F0u;
        goto label_12b8f0;
    }
    ctx->pc = 0x12B8E8u;
    {
        const bool branch_taken_0x12b8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x12B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8E8u;
        // 0x12b8ec: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b8e8) {
            ctx->pc = 0x12B904u;
            goto label_12b904;
        }
    }
    ctx->pc = 0x12B8F0u;
label_12b8f0:
    // 0x12b8f0: 0xe4600490  swc1        $f0, 0x490($v1)
    ctx->pc = 0x12b8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1168), bits); }
label_12b8f4:
    // 0x12b8f4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x12b8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b8f8:
    // 0x12b8f8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x12b8f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_12b8fc:
    // 0x12b8fc: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x12b8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b900:
    // 0x12b900: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x12b900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_12b904:
    // 0x12b904: 0xae0006a0  sw          $zero, 0x6A0($s0)
    ctx->pc = 0x12b904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1696), GPR_U32(ctx, 0));
label_12b908:
    // 0x12b908: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x12b908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_12b90c:
    // 0x12b90c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x12b90cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_12b910:
    // 0x12b910: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x12b910u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_12b914:
    // 0x12b914: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x12b914u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_12b918:
    // 0x12b918: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x12b918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_12b91c:
    // 0x12b91c: 0x3e00008  jr          $ra
label_12b920:
    if (ctx->pc == 0x12B920u) {
        ctx->pc = 0x12B920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B91Cu;
        // 0x12b920: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B924u;
        goto label_12b924;
    }
    ctx->pc = 0x12B91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B91Cu;
        // 0x12b920: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B91Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B924u;
label_12b924:
    // 0x12b924: 0x0  nop
    ctx->pc = 0x12b924u;
    // NOP
    ctx->pc = 0x12b928u;
}
