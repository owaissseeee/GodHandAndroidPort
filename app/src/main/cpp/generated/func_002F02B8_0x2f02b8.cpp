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

// Function: func_002F02B8
// Address: 0x2f02b8 - 0x2f1170
void func_002F02B8_0x2f02b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F02B8_0x2f02b8");
#endif

    if (__builtin_expect(ctx->pc != 0x2f02b8u, 0)) {
        switch (ctx->pc) {
            case 0x2f0348u: goto label_2f0348;
            case 0x2f036cu: goto label_2f036c;
            case 0x2f0380u: goto label_2f0380;
            case 0x2f0490u: goto label_2f0490;
            case 0x2f0508u: goto label_2f0508;
            case 0x2f0514u: goto label_2f0514;
            case 0x2f0528u: goto label_2f0528;
            case 0x2f05c8u: goto label_2f05c8;
            case 0x2f0600u: goto label_2f0600;
            case 0x2f0614u: goto label_2f0614;
            case 0x2f0624u: goto label_2f0624;
            case 0x2f0630u: goto label_2f0630;
            case 0x2f0640u: goto label_2f0640;
            case 0x2f064cu: goto label_2f064c;
            case 0x2f065cu: goto label_2f065c;
            case 0x2f0688u: goto label_2f0688;
            case 0x2f0698u: goto label_2f0698;
            case 0x2f06a8u: goto label_2f06a8;
            case 0x2f06b4u: goto label_2f06b4;
            case 0x2f06c0u: goto label_2f06c0;
            case 0x2f06ecu: goto label_2f06ec;
            case 0x2f06fcu: goto label_2f06fc;
            case 0x2f0718u: goto label_2f0718;
            case 0x2f0724u: goto label_2f0724;
            case 0x2f0738u: goto label_2f0738;
            case 0x2f074cu: goto label_2f074c;
            case 0x2f077cu: goto label_2f077c;
            case 0x2f07a0u: goto label_2f07a0;
            case 0x2f07acu: goto label_2f07ac;
            case 0x2f0e04u: goto label_2f0e04;
            case 0x2f0fc0u: goto label_2f0fc0;
            case 0x2f110cu: goto label_2f110c;
            case 0x2f1120u: goto label_2f1120;
            default: break;
        }
    }


    // 0x2f02b8: 0x27bdfd90  addiu       $sp, $sp, -0x270
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
    // 0x2f02bc: 0x3c020080  lui         $v0, 0x80
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x2f02c0: 0x7fb401e0  sq          $s4, 0x1E0($sp)
    ctx->pc = 0x2f02c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 20));
    // 0x2f02c4: 0x7fb00220  sq          $s0, 0x220($sp)
    ctx->pc = 0x2f02c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 16));
    // 0x2f02c8: 0x80a02d  daddu       $s4, $a0, $zero
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f02cc: 0x7fb10210  sq          $s1, 0x210($sp)
    ctx->pc = 0x2f02ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 17));
    // 0x2f02d0: 0x7fb20200  sq          $s2, 0x200($sp)
    ctx->pc = 0x2f02d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 18));
    // 0x2f02d4: 0x7fb301f0  sq          $s3, 0x1F0($sp)
    ctx->pc = 0x2f02d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 19));
    // 0x2f02d8: 0x7fb501d0  sq          $s5, 0x1D0($sp)
    ctx->pc = 0x2f02d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 21));
    // 0x2f02dc: 0x7fb601c0  sq          $s6, 0x1C0($sp)
    ctx->pc = 0x2f02dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 22));
    // 0x2f02e0: 0x7fb701b0  sq          $s7, 0x1B0($sp)
    ctx->pc = 0x2f02e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 23));
    // 0x2f02e4: 0x7fbe01a0  sq          $fp, 0x1A0($sp)
    ctx->pc = 0x2f02e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 30));
    // 0x2f02e8: 0xffbf0190  sd          $ra, 0x190($sp)
    ctx->pc = 0x2f02e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 31));
    // 0x2f02ec: 0xe7ba0260  swc1        $f26, 0x260($sp)
    ctx->pc = 0x2f02ecu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
    // 0x2f02f0: 0xe7b90258  swc1        $f25, 0x258($sp)
    ctx->pc = 0x2f02f0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
    // 0x2f02f4: 0xe7b80250  swc1        $f24, 0x250($sp)
    ctx->pc = 0x2f02f4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
    // 0x2f02f8: 0xe7b70248  swc1        $f23, 0x248($sp)
    ctx->pc = 0x2f02f8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    // 0x2f02fc: 0xe7b60240  swc1        $f22, 0x240($sp)
    ctx->pc = 0x2f02fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
    // 0x2f0300: 0xe7b50238  swc1        $f21, 0x238($sp)
    ctx->pc = 0x2f0300u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
    // 0x2f0304: 0xe7b40230  swc1        $f20, 0x230($sp)
    ctx->pc = 0x2f0304u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x2f0308: 0x8e83011c  lw          $v1, 0x11C($s4)
    ctx->pc = 0x2f0308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x2f030c: 0x621024  and         $v0, $v1, $v0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f0310: 0x14400384  bnez        $v0, . + 4 + (0x384 << 2)
    ctx->pc = 0x2F0310u;
    {
        const bool branch_taken_0x2f0310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0310u;
        // 0x2f0314: 0x7bb00220  lq          $s0, 0x220($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0310) {
            ctx->pc = 0x2F1124u;
            goto label_2f1124;
        }
    }
    // 0x2f0318: 0x8e820114  lw          $v0, 0x114($s4)
    ctx->pc = 0x2f0318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 276)));
    // 0x2f031c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F031Cu;
    {
        const bool branch_taken_0x2f031c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f031c) {
            ctx->pc = 0x2F0340u;
            goto label_2f0340;
        }
    }
    // 0x2f0324: 0x8c420250  lw          $v0, 0x250($v0)
    ctx->pc = 0x2f0324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x2f0328: 0x30420002  andi        $v0, $v0, 0x2
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2f032c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F032Cu;
    {
        const bool branch_taken_0x2f032c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F032Cu;
        // 0x2f0330: 0x311fa  dsrl        $v0, $v1, 7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f032c) {
            ctx->pc = 0x2F0340u;
            goto label_2f0340;
        }
    }
    // 0x2f0334: 0x30420001  andi        $v0, $v0, 0x1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f0338: 0x1040037b  beqz        $v0, . + 4 + (0x37B << 2)
    ctx->pc = 0x2F0338u;
    {
        const bool branch_taken_0x2f0338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0338u;
        // 0x2f033c: 0x7bb10210  lq          $s1, 0x210($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0338) {
            ctx->pc = 0x2F1128u;
            goto label_2f1128;
        }
    }
    ctx->pc = 0x2F0340u;
label_2f0340:
    // 0x2f0340: 0xc056c3c  jal         func_15B0F0
    SET_GPR_U32(ctx, 31, 0x2F0348u);
    ctx->pc = 0x2F0344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0340u;
    // 0x2f0344: 0x240401d0  addiu       $a0, $zero, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &PostInc_D_00566E10_0015B0F0_15B0F0_0x15b0f0, 0x15b0f0u, 0x2f0348u)) {
        return;
    }
    ctx->pc = 0x2F0348u;
label_2f0348:
    // 0x2f0348: 0x40982d  daddu       $s3, $v0, $zero
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f034c: 0x12600374  beqz        $s3, . + 4 + (0x374 << 2)
    ctx->pc = 0x2F034Cu;
    {
        const bool branch_taken_0x2f034c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F034Cu;
        // 0x2f0350: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f034c) {
            ctx->pc = 0x2F1120u;
            goto label_2f1120;
        }
    }
    // 0x2f0354: 0x8e82011c  lw          $v0, 0x11C($s4)
    ctx->pc = 0x2f0354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x2f0358: 0x431024  and         $v0, $v0, $v1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f035c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F035Cu;
    {
        const bool branch_taken_0x2f035c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F035Cu;
        // 0x2f0360: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f035c) {
            ctx->pc = 0x2F0378u;
            goto label_2f0378;
        }
    }
    // 0x2f0364: 0xc0bfa28  jal         func_2FE8A0
    SET_GPR_U32(ctx, 31, 0x2F036Cu);
    ctx->pc = 0x2F0368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0364u;
    // 0x2f0368: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002FE8A0_0x2fe8a0, 0x2fe8a0u, 0x2f036cu)) {
        return;
    }
    ctx->pc = 0x2F036Cu;
label_2f036c:
    // 0x2f036c: 0x24020001  addiu       $v0, $zero, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0370: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F0370u;
    {
        const bool branch_taken_0x2f0370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0370u;
        // 0x2f0374: 0xafa20170  sw          $v0, 0x170($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0370) {
            ctx->pc = 0x2F0388u;
            goto label_2f0388;
        }
    }
    ctx->pc = 0x2F0378u;
label_2f0378:
    // 0x2f0378: 0xc0bf836  jal         func_2FE0D8
    SET_GPR_U32(ctx, 31, 0x2F0380u);
    ctx->pc = 0x2F037Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0378u;
    // 0x2f037c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002FE0D8_0x2fe0d8, 0x2fe0d8u, 0x2f0380u)) {
        return;
    }
    ctx->pc = 0x2F0380u;
label_2f0380:
    // 0x2f0380: 0x4400367  bltz        $v0, . + 4 + (0x367 << 2)
    ctx->pc = 0x2F0380u;
    {
        const bool branch_taken_0x2f0380 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2F0384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0380u;
        // 0x2f0384: 0xafa20170  sw          $v0, 0x170($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0380) {
            ctx->pc = 0x2F1120u;
            goto label_2f1120;
        }
    }
    ctx->pc = 0x2F0388u;
label_2f0388:
    // 0x2f0388: 0x9282024b  lbu         $v0, 0x24B($s4)
    ctx->pc = 0x2f0388u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 587)));
    // 0x2f038c: 0x9283024a  lbu         $v1, 0x24A($s4)
    ctx->pc = 0x2f038cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 586)));
    // 0x2f0390: 0x40302d  daddu       $a2, $v0, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0394: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f0398: 0x4481d000  mtc1        $at, $f26
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x2f039c: 0x621021  addu        $v0, $v1, $v0
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f03a0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F03A0u;
    {
        const bool branch_taken_0x2f03a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F03A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03A0u;
        // 0x2f03a4: 0x22040  sll         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f03a0) {
            ctx->pc = 0x2F03E8u;
            goto label_2f03e8;
        }
    }
    // 0x2f03a8: 0x32840  sll         $a1, $v1, 1
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2f03ac: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x2f03acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2f03b0: 0x65102a  slt         $v0, $v1, $a1
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2f03b4: 0x1440035b  bnez        $v0, . + 4 + (0x35B << 2)
    ctx->pc = 0x2F03B4u;
    {
        const bool branch_taken_0x2f03b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F03B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03B4u;
        // 0x2f03b8: 0x7bb00220  lq          $s0, 0x220($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f03b4) {
            ctx->pc = 0x2F1124u;
            goto label_2f1124;
        }
    }
    // 0x2f03bc: 0x64102a  slt         $v0, $v1, $a0
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2f03c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F03C0u;
    {
        const bool branch_taken_0x2f03c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F03C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03C0u;
        // 0x2f03c4: 0x651023  subu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f03c0) {
            ctx->pc = 0x2F03E8u;
            goto label_2f03e8;
        }
    }
    // 0x2f03c8: 0x61840  sll         $v1, $a2, 1
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2f03cc: 0x44820800  mtc1        $v0, $f1
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f03d0: 0x0  nop
    // NOP
    // 0x2f03d4: 0x46800860  cvt.s.w     $f1, $f1
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f03d8: 0x44830000  mtc1        $v1, $f0
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f03dc: 0x0  nop
    // NOP
    // 0x2f03e0: 0x46800020  cvt.s.w     $f0, $f0
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f03e4: 0x46000e83  div.s       $f26, $f1, $f0
    ctx->pc = 0x2f03e4u;
    ctx->f[26] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
label_2f03e8:
    // 0x2f03e8: 0x96830276  lhu         $v1, 0x276($s4)
    ctx->pc = 0x2f03e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 630)));
    // 0x2f03ec: 0x661023  subu        $v0, $v1, $a2
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2f03f0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F03F0u;
    {
        const bool branch_taken_0x2f03f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F03F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03F0u;
        // 0x2f03f4: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f03f0) {
            ctx->pc = 0x2F043Cu;
            goto label_2f043c;
        }
    }
    // 0x2f03f8: 0x8fa70170  lw          $a3, 0x170($sp)
    ctx->pc = 0x2f03f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2f03fc: 0x32040  sll         $a0, $v1, 1
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2f0400: 0x87102a  slt         $v0, $a0, $a3
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2f0404: 0x14400347  bnez        $v0, . + 4 + (0x347 << 2)
    ctx->pc = 0x2F0404u;
    {
        const bool branch_taken_0x2f0404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0404u;
        // 0x2f0408: 0x7bb00220  lq          $s0, 0x220($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0404) {
            ctx->pc = 0x2F1124u;
            goto label_2f1124;
        }
    }
    // 0x2f040c: 0xa7102a  slt         $v0, $a1, $a3
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2f0410: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F0410u;
    {
        const bool branch_taken_0x2f0410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0410u;
        // 0x2f0414: 0xe41023  subu        $v0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0410) {
            ctx->pc = 0x2F043Cu;
            goto label_2f043c;
        }
    }
    // 0x2f0418: 0x44820000  mtc1        $v0, $f0
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f041c: 0x0  nop
    // NOP
    // 0x2f0420: 0x46800020  cvt.s.w     $f0, $f0
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f0424: 0x46000005  abs.s       $f0, $f0
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2f0428: 0x61040  sll         $v0, $a2, 1
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2f042c: 0x44820800  mtc1        $v0, $f1
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f0430: 0x0  nop
    // NOP
    // 0x2f0434: 0x46800860  cvt.s.w     $f1, $f1
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f0438: 0x46010683  div.s       $f26, $f0, $f1
    ctx->pc = 0x2f0438u;
    ctx->f[26] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_2f043c:
    // 0x2f043c: 0x9282024c  lbu         $v0, 0x24C($s4)
    ctx->pc = 0x2f043cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 588)));
    // 0x2f0440: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F0440u;
    {
        const bool branch_taken_0x2f0440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0440u;
        // 0x2f0444: 0x8e840120  lw          $a0, 0x120($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0440) {
            ctx->pc = 0x2F0470u;
            goto label_2f0470;
        }
    }
    // 0x2f0448: 0x9283024d  lbu         $v1, 0x24D($s4)
    ctx->pc = 0x2f0448u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 589)));
    // 0x2f044c: 0x44820800  mtc1        $v0, $f1
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f0450: 0x0  nop
    // NOP
    // 0x2f0454: 0x46800860  cvt.s.w     $f1, $f1
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f0458: 0x431023  subu        $v0, $v0, $v1
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f045c: 0x44820000  mtc1        $v0, $f0
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0460: 0x0  nop
    // NOP
    // 0x2f0464: 0x46800020  cvt.s.w     $f0, $f0
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f0468: 0x46010003  div.s       $f0, $f0, $f1
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2f046c: 0x4600d682  mul.s       $f26, $f26, $f0
    ctx->pc = 0x2f046cu;
    ctx->f[26] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
label_2f0470:
    // 0x2f0470: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2F0470u;
    {
        const bool branch_taken_0x2f0470 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0470u;
        // 0x2f0474: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0470) {
            ctx->pc = 0x2F04A8u;
            goto label_2f04a8;
        }
    }
    // 0x2f0478: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2f0478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f047c: 0x8c430250  lw          $v1, 0x250($v0)
    ctx->pc = 0x2f047cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x2f0480: 0x4620008  bltzl       $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F0480u;
    {
        const bool branch_taken_0x2f0480 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x2f0480) {
            ctx->pc = 0x2F0484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0480u;
            // 0x2f0484: 0xae800120  sw          $zero, 0x120($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F04A4u;
            goto label_2f04a4;
        }
    }
    // 0x2f0488: 0xc0c1c46  jal         func_307118
    ctx->pc = 0x2F0488u;
    SET_GPR_U32(ctx, 31, 0x2F0490u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_00307118_0x307118, 0x307118u, 0x2f0490u)) {
        return;
    }
    ctx->pc = 0x2F0490u;
label_2f0490:
    // 0x2f0490: 0x24030001  addiu       $v1, $zero, 0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0494: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F0494u;
    {
        const bool branch_taken_0x2f0494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f0494) {
            ctx->pc = 0x2F0498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0494u;
            // 0x2f0498: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F04A8u;
            goto label_2f04a8;
        }
    }
    // 0x2f049c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F049Cu;
    {
        const bool branch_taken_0x2f049c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F04A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F049Cu;
        // 0x2f04a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f049c) {
            ctx->pc = 0x2F04ACu;
            goto label_2f04ac;
        }
    }
    ctx->pc = 0x2F04A4u;
label_2f04a4:
    // 0x2f04a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f04a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f04a8:
    // 0x2f04a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f04a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f04ac:
    // 0x2f04ac: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F04ACu;
    {
        const bool branch_taken_0x2f04ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f04ac) {
            ctx->pc = 0x2F04B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F04ACu;
            // 0x2f04b0: 0x8e82011c  lw          $v0, 0x11C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F04D4u;
            goto label_2f04d4;
        }
    }
    // 0x2f04b4: 0x8e830120  lw          $v1, 0x120($s4)
    ctx->pc = 0x2f04b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
    // 0x2f04b8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2f04b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2f04bc: 0x21043  sra         $v0, $v0, 1
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2f04c0: 0x30420001  andi        $v0, $v0, 0x1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f04c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F04C4u;
    {
        const bool branch_taken_0x2f04c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F04C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F04C4u;
        // 0x2f04c8: 0x8e82011c  lw          $v0, 0x11C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f04c4) {
            ctx->pc = 0x2F04D4u;
            goto label_2f04d4;
        }
    }
    // 0x2f04cc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2f04ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f04d0: 0x4600d682  mul.s       $f26, $f26, $f0
    ctx->pc = 0x2f04d0u;
    ctx->f[26] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
label_2f04d4:
    // 0x2f04d4: 0x3c030100  lui         $v1, 0x100
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x2f04d8: 0x431024  and         $v0, $v0, $v1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f04dc: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2F04DCu;
    {
        const bool branch_taken_0x2f04dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F04E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F04DCu;
        // 0x2f04e0: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f04dc) {
            ctx->pc = 0x2F05B0u;
            goto label_2f05b0;
        }
    }
    // 0x2f04e4: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f04e8: 0x4481a000  mtc1        $at, $f20
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f04ec: 0x27b10060  addiu       $s1, $sp, 0x60
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f04f0: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2f04f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2f04f4: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f04f8: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2f04f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x2f04fc: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x2f04fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x2f0500: 0xc0ad8ca  jal         func_2B6328
    SET_GPR_U32(ctx, 31, 0x2F0508u);
    ctx->pc = 0x2F0504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0500u;
    // 0x2f0504: 0xe7b4005c  swc1        $f20, 0x5C($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002B6328_0x2b6328, 0x2b6328u, 0x2f0508u)) {
        return;
    }
    ctx->pc = 0x2F0508u;
label_2f0508:
    // 0x2f0508: 0x40282d  daddu       $a1, $v0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f050c: 0xc051d4a  jal         func_147528
    SET_GPR_U32(ctx, 31, 0x2F0514u);
    ctx->pc = 0x2F0510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F050Cu;
    // 0x2f0510: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &MtxCopy_0x147528, 0x147528u, 0x2f0514u)) {
        return;
    }
    ctx->pc = 0x2F0514u;
label_2f0514:
    // 0x2f0514: 0x27b00050  addiu       $s0, $sp, 0x50
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f0518: 0x220282d  daddu       $a1, $s1, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f051c: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0520: 0xc0c28ac  jal         func_30A2B0
    SET_GPR_U32(ctx, 31, 0x2F0528u);
    ctx->pc = 0x2F0524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0520u;
    // 0x2f0524: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceVu0ApplyMatrix_0x30a2b0, 0x30a2b0u, 0x2f0528u)) {
        return;
    }
    ctx->pc = 0x2F0528u;
label_2f0528:
    // 0x2f0528: 0x3c014180  lui         $at, 0x4180
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2f052c: 0x44811000  mtc1        $at, $f2
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f0530: 0x3c09003c  lui         $t1, 0x3C
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
    // 0x2f0534: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2f0534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0538: 0x3c050058  lui         $a1, 0x58
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x2f053c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2f053cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0540: 0x24040800  addiu       $a0, $zero, 0x800
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2f0544: 0x8d221180  lw          $v0, 0x1180($t1)
    ctx->pc = 0x2f0544u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2f0548: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2f054c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2f0550: 0x8ca66b80  lw          $a2, 0x6B80($a1)
    ctx->pc = 0x2f0550u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x586B80u));
    // 0x2f0554: 0x21fc2  srl         $v1, $v0, 31
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2f0558: 0x3c07000f  lui         $a3, 0xF
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15 << 16));
    // 0x2f055c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2f0560: 0x44051000  mfc1        $a1, $f2
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2f0564: 0x431021  addu        $v0, $v0, $v1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0568: 0x21043  sra         $v0, $v0, 1
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2f056c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2f0570: 0x44030000  mfc1        $v1, $f0
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2f0574: 0x822023  subu        $a0, $a0, $v0
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f0578: 0x63100  sll         $a2, $a2, 4
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2f057c: 0x42100  sll         $a0, $a0, 4
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2f0580: 0x3c080062  lui         $t0, 0x62
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x2f0584: 0xa42821  addu        $a1, $a1, $a0
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2f0588: 0x661821  addu        $v1, $v1, $a2
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2f058c: 0x34e7ff00  ori         $a3, $a3, 0xFF00
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65280);
    // 0x2f0590: 0x24020001  addiu       $v0, $zero, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0594: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2f0594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2f0598: 0x27b60090  addiu       $s6, $sp, 0x90
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2f059c: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x2f059cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x2f05a0: 0xafa70048  sw          $a3, 0x48($sp)
    ctx->pc = 0x2f05a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
    // 0x2f05a4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2f05a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2f05a8: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x2F05A8u;
    {
        const bool branch_taken_0x2f05a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F05ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F05A8u;
        // 0x2f05ac: 0xe514b648  swc1        $f20, -0x49B8($t0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294948424), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f05a8) {
            ctx->pc = 0x2F07ACu;
            goto label_2f07ac;
        }
    }
    ctx->pc = 0x2F05B0u;
label_2f05b0:
    // 0x2f05b0: 0x27a30050  addiu       $v1, $sp, 0x50
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f05b4: 0x8c45aff0  lw          $a1, -0x5010($v0)
    ctx->pc = 0x2f05b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946800)));
    // 0x2f05b8: 0x60202d  daddu       $a0, $v1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f05bc: 0x40a82d  daddu       $s5, $v0, $zero
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f05c0: 0xc051d4a  jal         func_147528
    SET_GPR_U32(ctx, 31, 0x2F05C8u);
    ctx->pc = 0x2F05C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F05C0u;
    // 0x2f05c4: 0x24a50100  addiu       $a1, $a1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &MtxCopy_0x147528, 0x147528u, 0x2f05c8u)) {
        return;
    }
    ctx->pc = 0x2F05C8u;
label_2f05c8:
    // 0x2f05c8: 0x8e83011c  lw          $v1, 0x11C($s4)
    ctx->pc = 0x2f05c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x2f05cc: 0x4630026  bgezl       $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x2F05CCu;
    {
        const bool branch_taken_0x2f05cc = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2f05cc) {
            ctx->pc = 0x2F05D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F05CCu;
            // 0x2f05d0: 0x8e82011c  lw          $v0, 0x11C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0668u;
            goto label_2f0668;
        }
    }
    // 0x2f05d4: 0x3c024000  lui         $v0, 0x4000
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2f05d8: 0x621024  and         $v0, $v1, $v0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f05dc: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2F05DCu;
    {
        const bool branch_taken_0x2f05dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F05E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F05DCu;
        // 0x2f05e0: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f05dc) {
            ctx->pc = 0x2F0664u;
            goto label_2f0664;
        }
    }
    // 0x2f05e4: 0x621024  and         $v0, $v1, $v0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f05e8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F05E8u;
    {
        const bool branch_taken_0x2f05e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F05ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F05E8u;
        // 0x2f05ec: 0x8ea5aff0  lw          $a1, -0x5010($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f05e8) {
            ctx->pc = 0x2F0664u;
            goto label_2f0664;
        }
    }
    // 0x2f05f0: 0x27b000e0  addiu       $s0, $sp, 0xE0
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2f05f4: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f05f8: 0xc051d4a  jal         func_147528
    SET_GPR_U32(ctx, 31, 0x2F0600u);
    ctx->pc = 0x2F05FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F05F8u;
    // 0x2f05fc: 0x24a50140  addiu       $a1, $a1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &MtxCopy_0x147528, 0x147528u, 0x2f0600u)) {
        return;
    }
    ctx->pc = 0x2F0600u;
label_2f0600:
    // 0x2f0600: 0x27b10090  addiu       $s1, $sp, 0x90
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2f0604: 0x280282d  daddu       $a1, $s4, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0608: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f060c: 0xc0ad858  jal         func_2B6160
    SET_GPR_U32(ctx, 31, 0x2F0614u);
    ctx->pc = 0x2F0610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F060Cu;
    // 0x2f0610: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &StoreVecFromFieldB0_2B6160_0x2b6160, 0x2b6160u, 0x2f0614u)) {
        return;
    }
    ctx->pc = 0x2F0614u;
label_2f0614:
    // 0x2f0614: 0x220302d  daddu       $a2, $s1, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0618: 0x200282d  daddu       $a1, $s0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f061c: 0xc0c28ac  jal         func_30A2B0
    SET_GPR_U32(ctx, 31, 0x2F0624u);
    ctx->pc = 0x2F0620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F061Cu;
    // 0x2f0620: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceVu0ApplyMatrix_0x30a2b0, 0x30a2b0u, 0x2f0624u)) {
        return;
    }
    ctx->pc = 0x2F0624u;
label_2f0624:
    // 0x2f0624: 0x27b000a0  addiu       $s0, $sp, 0xA0
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2f0628: 0xc0ad8ca  jal         func_2B6328
    SET_GPR_U32(ctx, 31, 0x2F0630u);
    ctx->pc = 0x2F062Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0628u;
    // 0x2f062c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002B6328_0x2b6328, 0x2b6328u, 0x2f0630u)) {
        return;
    }
    ctx->pc = 0x2F0630u;
label_2f0630:
    // 0x2f0630: 0x200902d  daddu       $s2, $s0, $zero
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0634: 0x40282d  daddu       $a1, $v0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0638: 0xc051d4a  jal         func_147528
    SET_GPR_U32(ctx, 31, 0x2F0640u);
    ctx->pc = 0x2F063Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0638u;
    // 0x2f063c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &MtxCopy_0x147528, 0x147528u, 0x2f0640u)) {
        return;
    }
    ctx->pc = 0x2F0640u;
label_2f0640:
    // 0x2f0640: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0644: 0xc051f10  jal         func_147C40
    SET_GPR_U32(ctx, 31, 0x2F064Cu);
    ctx->pc = 0x2F0648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0644u;
    // 0x2f0648: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &CopyVec3ToField30_147C40_0x147c40, 0x147c40u, 0x2f064cu)) {
        return;
    }
    ctx->pc = 0x2F064Cu;
label_2f064c:
    // 0x2f064c: 0x27a40050  addiu       $a0, $sp, 0x50
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f0650: 0x200302d  daddu       $a2, $s0, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0654: 0xc051d52  jal         func_147548
    SET_GPR_U32(ctx, 31, 0x2F065Cu);
    ctx->pc = 0x2F0658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0654u;
    // 0x2f0658: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &MtxMultiply_0x147548, 0x147548u, 0x2f065cu)) {
        return;
    }
    ctx->pc = 0x2F065Cu;
label_2f065c:
    // 0x2f065c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2F065Cu;
    {
        const bool branch_taken_0x2f065c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f065c) {
            ctx->pc = 0x2F0750u;
            goto label_2f0750;
        }
    }
    ctx->pc = 0x2F0664u;
label_2f0664:
    // 0x2f0664: 0x8e82011c  lw          $v0, 0x11C($s4)
    ctx->pc = 0x2f0664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
label_2f0668:
    // 0x2f0668: 0x3c034000  lui         $v1, 0x4000
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2f066c: 0x431024  and         $v0, $v0, $v1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f0670: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2F0670u;
    {
        const bool branch_taken_0x2f0670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0670u;
        // 0x2f0674: 0x8ea5aff0  lw          $a1, -0x5010($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0670) {
            ctx->pc = 0x2F070Cu;
            goto label_2f070c;
        }
    }
    // 0x2f0678: 0x27b00120  addiu       $s0, $sp, 0x120
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2f067c: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0680: 0xc051d4a  jal         func_147528
    SET_GPR_U32(ctx, 31, 0x2F0688u);
    ctx->pc = 0x2F0684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0680u;
    // 0x2f0684: 0x24a50140  addiu       $a1, $a1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &MtxCopy_0x147528, 0x147528u, 0x2f0688u)) {
        return;
    }
    ctx->pc = 0x2F0688u;
label_2f0688:
    // 0x2f0688: 0x27b10110  addiu       $s1, $sp, 0x110
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2f068c: 0x280282d  daddu       $a1, $s4, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0690: 0xc0ad858  jal         func_2B6160
    SET_GPR_U32(ctx, 31, 0x2F0698u);
    ctx->pc = 0x2F0694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0690u;
    // 0x2f0694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &StoreVecFromFieldB0_2B6160_0x2b6160, 0x2b6160u, 0x2f0698u)) {
        return;
    }
    ctx->pc = 0x2F0698u;
label_2f0698:
    // 0x2f0698: 0x200282d  daddu       $a1, $s0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f069c: 0x220302d  daddu       $a2, $s1, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f06a0: 0xc0c28ac  jal         func_30A2B0
    SET_GPR_U32(ctx, 31, 0x2F06A8u);
    ctx->pc = 0x2F06A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F06A0u;
    // 0x2f06a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceVu0ApplyMatrix_0x30a2b0, 0x30a2b0u, 0x2f06a8u)) {
        return;
    }
    ctx->pc = 0x2F06A8u;
label_2f06a8:
    // 0x2f06a8: 0x27b200d0  addiu       $s2, $sp, 0xD0
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2f06ac: 0xc0ad8ca  jal         func_2B6328
    SET_GPR_U32(ctx, 31, 0x2F06B4u);
    ctx->pc = 0x2F06B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F06ACu;
    // 0x2f06b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002B6328_0x2b6328, 0x2b6328u, 0x2f06b4u)) {
        return;
    }
    ctx->pc = 0x2F06B4u;
label_2f06b4:
    // 0x2f06b4: 0x40282d  daddu       $a1, $v0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f06b8: 0xc051d4a  jal         func_147528
    SET_GPR_U32(ctx, 31, 0x2F06C0u);
    ctx->pc = 0x2F06BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F06B8u;
    // 0x2f06bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &MtxCopy_0x147528, 0x147528u, 0x2f06c0u)) {
        return;
    }
    ctx->pc = 0x2F06C0u;
label_2f06c0:
    // 0x2f06c0: 0x8ea2aff0  lw          $v0, -0x5010($s5)
    ctx->pc = 0x2f06c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946800)));
    // 0x2f06c4: 0x24420220  addiu       $v0, $v0, 0x220
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
    // 0x2f06c8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f06c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f06cc: 0xfba40160  sqc2        $vf4, 0x160($sp)
    ctx->pc = 0x2f06ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f06d0: 0x27b00090  addiu       $s0, $sp, 0x90
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2f06d4: 0x27a60160  addiu       $a2, $sp, 0x160
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2f06d8: 0x240282d  daddu       $a1, $s2, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f06dc: 0xafa00164  sw          $zero, 0x164($sp)
    ctx->pc = 0x2f06dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 0));
    // 0x2f06e0: 0x24070004  addiu       $a3, $zero, 0x4
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f06e4: 0xc051ed8  jal         func_147B60
    SET_GPR_U32(ctx, 31, 0x2F06ECu);
    ctx->pc = 0x2F06E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F06E4u;
    // 0x2f06e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &MtxMulRotVec_0x147b60, 0x147b60u, 0x2f06ecu)) {
        return;
    }
    ctx->pc = 0x2F06ECu;
label_2f06ec:
    // 0x2f06ec: 0x200b02d  daddu       $s6, $s0, $zero
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f06f0: 0x220282d  daddu       $a1, $s1, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f06f4: 0xc051f10  jal         func_147C40
    SET_GPR_U32(ctx, 31, 0x2F06FCu);
    ctx->pc = 0x2F06F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F06F4u;
    // 0x2f06f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &CopyVec3ToField30_147C40_0x147c40, 0x147c40u, 0x2f06fcu)) {
        return;
    }
    ctx->pc = 0x2F06FCu;
label_2f06fc:
    // 0x2f06fc: 0x27a40050  addiu       $a0, $sp, 0x50
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f0700: 0x200302d  daddu       $a2, $s0, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0704: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2F0704u;
    {
        const bool branch_taken_0x2f0704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0704u;
        // 0x2f0708: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0704) {
            ctx->pc = 0x2F0744u;
            goto label_2f0744;
        }
    }
    ctx->pc = 0x2F070Cu;
label_2f070c:
    // 0x2f070c: 0x27b10090  addiu       $s1, $sp, 0x90
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2f0710: 0xc0ad86c  jal         func_2B61B0
    SET_GPR_U32(ctx, 31, 0x2F0718u);
    ctx->pc = 0x2F0714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0710u;
    // 0x2f0714: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &CallThenReturnPlusB0_002B6420_2B61B0_0x2b61b0, 0x2b61b0u, 0x2f0718u)) {
        return;
    }
    ctx->pc = 0x2F0718u;
label_2f0718:
    // 0x2f0718: 0x40282d  daddu       $a1, $v0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f071c: 0xc051d4a  jal         func_147528
    SET_GPR_U32(ctx, 31, 0x2F0724u);
    ctx->pc = 0x2F0720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F071Cu;
    // 0x2f0720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &MtxCopy_0x147528, 0x147528u, 0x2f0724u)) {
        return;
    }
    ctx->pc = 0x2F0724u;
label_2f0724:
    // 0x2f0724: 0x220b02d  daddu       $s6, $s1, $zero
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0728: 0x27b000d0  addiu       $s0, $sp, 0xD0
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2f072c: 0x8ea5aff0  lw          $a1, -0x5010($s5)
    ctx->pc = 0x2f072cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946800)));
    // 0x2f0730: 0xc051d4a  jal         func_147528
    SET_GPR_U32(ctx, 31, 0x2F0738u);
    ctx->pc = 0x2F0734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0730u;
    // 0x2f0734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &MtxCopy_0x147528, 0x147528u, 0x2f0738u)) {
        return;
    }
    ctx->pc = 0x2F0738u;
label_2f0738:
    // 0x2f0738: 0x200282d  daddu       $a1, $s0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f073c: 0x27a40050  addiu       $a0, $sp, 0x50
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f0740: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f0740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f0744:
    // 0x2f0744: 0xc051d52  jal         func_147548
    ctx->pc = 0x2F0744u;
    SET_GPR_U32(ctx, 31, 0x2F074Cu);
    if (!runtime->callDirectStatic(rdram, ctx, &MtxMultiply_0x147548, 0x147548u, 0x2f074cu)) {
        return;
    }
    ctx->pc = 0x2F074Cu;
label_2f074c:
    // 0x2f074c: 0x27b200a0  addiu       $s2, $sp, 0xA0
    ctx->pc = 0x2f074cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2f0750:
    // 0x2f0750: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f0754: 0x4481a000  mtc1        $at, $f20
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f0758: 0x27a50050  addiu       $a1, $sp, 0x50
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f075c: 0x2c0302d  daddu       $a2, $s6, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0760: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x2f0760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x2f0764: 0xe7b4009c  swc1        $f20, 0x9C($sp)
    ctx->pc = 0x2f0764u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2f0768: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f076c: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x2f076cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x2f0770: 0x3c100062  lui         $s0, 0x62
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x2f0774: 0xc0c28ac  jal         func_30A2B0
    SET_GPR_U32(ctx, 31, 0x2F077Cu);
    ctx->pc = 0x2F0778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0774u;
    // 0x2f0778: 0xafa00098  sw          $zero, 0x98($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceVu0ApplyMatrix_0x30a2b0, 0x30a2b0u, 0x2f077cu)) {
        return;
    }
    ctx->pc = 0x2F077Cu;
label_2f077c:
    // 0x2f077c: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x2f077cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0780: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0784: 0x240282d  daddu       $a1, $s2, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0788: 0x0  nop
    // NOP
    // 0x2f078c: 0x0  nop
    // NOP
    // 0x2f0790: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x2f0794: 0x46000306  mov.s       $f12, $f0
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2f0798: 0xc0c291a  jal         func_30A468
    SET_GPR_U32(ctx, 31, 0x2F07A0u);
    ctx->pc = 0x2F079Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0798u;
    // 0x2f079c: 0xe614b648  swc1        $f20, -0x49B8($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294948424), bits); }
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceVu0DivVector_0x30a468, 0x30a468u, 0x2f07a0u)) {
        return;
    }
    ctx->pc = 0x2F07A0u;
label_2f07a0:
    // 0x2f07a0: 0x240282d  daddu       $a1, $s2, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f07a4: 0xc0c295c  jal         func_30A570
    SET_GPR_U32(ctx, 31, 0x2F07ACu);
    ctx->pc = 0x2F07A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F07A4u;
    // 0x2f07a8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceVu0FTOI4Vector_0x30a570, 0x30a570u, 0x2f07acu)) {
        return;
    }
    ctx->pc = 0x2F07ACu;
label_2f07ac:
    // 0x2f07ac: 0x3c04003c  lui         $a0, 0x3C
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2f07b0: 0x3c02003c  lui         $v0, 0x3C
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2f07b4: 0xc4821198  lwc1        $f2, 0x1198($a0)
    ctx->pc = 0x2f07b4u;
    { uint32_t bits = FAST_READ32(0x3C1198u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f07b8: 0x468010a0  cvt.s.w     $f2, $f2
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2f07bc: 0xc44d1190  lwc1        $f13, 0x1190($v0)
    ctx->pc = 0x2f07bcu;
    { uint32_t bits = FAST_READ32(0x3C1190u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2f07c0: 0x3c02003c  lui         $v0, 0x3C
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2f07c4: 0x3c09003c  lui         $t1, 0x3C
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
    // 0x2f07c8: 0x8c431180  lw          $v1, 0x1180($v0)
    ctx->pc = 0x2f07c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2f07cc: 0x3c0f003c  lui         $t7, 0x3C
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2f07d0: 0x0  nop
    // NOP
    // 0x2f07d4: 0x0  nop
    // NOP
    // 0x2f07d8: 0x46026883  div.s       $f2, $f13, $f2
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[13], ctx->f[2]);
    // 0x2f07dc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2f07dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f07e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2f07e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f07e4: 0x317c2  srl         $v0, $v1, 31
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2f07e8: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x2f07e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f07ec: 0x621821  addu        $v1, $v1, $v0
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f07f0: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x2f07f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f07f4: 0x52903  sra         $a1, $a1, 4
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x2f07f8: 0x8fa80040  lw          $t0, 0x40($sp)
    ctx->pc = 0x2f07f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f07fc: 0x42103  sra         $a0, $a0, 4
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x2f0800: 0x8d2e118c  lw          $t6, 0x118C($t1)
    ctx->pc = 0x2f0800u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4492)));
    // 0x2f0804: 0x63103  sra         $a2, $a2, 4
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x2f0808: 0x73903  sra         $a3, $a3, 4
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
    // 0x2f080c: 0x84103  sra         $t0, $t0, 4
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 4));
    // 0x2f0810: 0x8fa90004  lw          $t1, 0x4($sp)
    ctx->pc = 0x2f0810u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f0814: 0x31843  sra         $v1, $v1, 1
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2f0818: 0x8faa0014  lw          $t2, 0x14($sp)
    ctx->pc = 0x2f0818u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f081c: 0xe17c2  srl         $v0, $t6, 31
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 14), 31));
    // 0x2f0820: 0x8fab0024  lw          $t3, 0x24($sp)
    ctx->pc = 0x2f0820u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2f0824: 0x24a5f800  addiu       $a1, $a1, -0x800
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965248));
    // 0x2f0828: 0x8fad0044  lw          $t5, 0x44($sp)
    ctx->pc = 0x2f0828u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2f082c: 0x2484f800  addiu       $a0, $a0, -0x800
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965248));
    // 0x2f0830: 0x24c6f800  addiu       $a2, $a2, -0x800
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965248));
    // 0x2f0834: 0x24e7f800  addiu       $a3, $a3, -0x800
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965248));
    // 0x2f0838: 0x2508f800  addiu       $t0, $t0, -0x800
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965248));
    // 0x2f083c: 0x8fac0034  lw          $t4, 0x34($sp)
    ctx->pc = 0x2f083cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2f0840: 0x0  nop
    // NOP
    // 0x2f0844: 0x0  nop
    // NOP
    // 0x2f0848: 0x460d1083  div.s       $f2, $f2, $f13
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[13]);
    // 0x2f084c: 0x1034021  addu        $t0, $t0, $v1
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2f0850: 0xa32821  addu        $a1, $a1, $v1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2f0854: 0x832021  addu        $a0, $a0, $v1
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f0858: 0xc33021  addu        $a2, $a2, $v1
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2f085c: 0xe33821  addu        $a3, $a3, $v1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2f0860: 0x1c27021  addu        $t6, $t6, $v0
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x2f0864: 0x94903  sra         $t1, $t1, 4
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 4));
    // 0x2f0868: 0xa5103  sra         $t2, $t2, 4
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 4));
    // 0x2f086c: 0xb5903  sra         $t3, $t3, 4
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 4));
    // 0x2f0870: 0xd6903  sra         $t5, $t5, 4
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 4));
    // 0x2f0874: 0xe7043  sra         $t6, $t6, 1
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 1));
    // 0x2f0878: 0x44851800  mtc1        $a1, $f3
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2f087c: 0x0  nop
    // NOP
    // 0x2f0880: 0x468018e0  cvt.s.w     $f3, $f3
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2f0884: 0xc6103  sra         $t4, $t4, 4
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 4));
    // 0x2f0888: 0x44842000  mtc1        $a0, $f4
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2f088c: 0x0  nop
    // NOP
    // 0x2f0890: 0x46802120  cvt.s.w     $f4, $f4
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2f0894: 0x2529f800  addiu       $t1, $t1, -0x800
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294965248));
    // 0x2f0898: 0x44862800  mtc1        $a2, $f5
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2f089c: 0x0  nop
    // NOP
    // 0x2f08a0: 0x46802960  cvt.s.w     $f5, $f5
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x2f08a4: 0x254af800  addiu       $t2, $t2, -0x800
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294965248));
    // 0x2f08a8: 0x44873000  mtc1        $a3, $f6
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2f08ac: 0x0  nop
    // NOP
    // 0x2f08b0: 0x468031a0  cvt.s.w     $f6, $f6
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x2f08b4: 0x256bf800  addiu       $t3, $t3, -0x800
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294965248));
    // 0x2f08b8: 0x44880800  mtc1        $t0, $f1
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f08bc: 0x0  nop
    // NOP
    // 0x2f08c0: 0x46800860  cvt.s.w     $f1, $f1
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f08c4: 0x25adf800  addiu       $t5, $t5, -0x800
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294965248));
    // 0x2f08c8: 0xc5e01184  lwc1        $f0, 0x1184($t7)
    ctx->pc = 0x2f08c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f08cc: 0x258cf800  addiu       $t4, $t4, -0x800
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294965248));
    // 0x2f08d0: 0x1ae6821  addu        $t5, $t5, $t6
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x2f08d4: 0x12e4821  addu        $t1, $t1, $t6
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 14)));
    // 0x2f08d8: 0x14e5021  addu        $t2, $t2, $t6
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x2f08dc: 0x16e5821  addu        $t3, $t3, $t6
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x2f08e0: 0x44899000  mtc1        $t1, $f18
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x2f08e4: 0x0  nop
    // NOP
    // 0x2f08e8: 0x468094a0  cvt.s.w     $f18, $f18
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[18], sizeof(tmp)); ctx->f[18] = FPU_CVT_S_W(tmp); }
    // 0x2f08ec: 0x18e6021  addu        $t4, $t4, $t6
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x2f08f0: 0x448a8000  mtc1        $t2, $f16
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2f08f4: 0x0  nop
    // NOP
    // 0x2f08f8: 0x46808420  cvt.s.w     $f16, $f16
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[16], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x2f08fc: 0xc68b02d4  lwc1        $f11, 0x2D4($s4)
    ctx->pc = 0x2f08fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2f0900: 0x448b8800  mtc1        $t3, $f17
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x2f0904: 0x0  nop
    // NOP
    // 0x2f0908: 0x46808c60  cvt.s.w     $f17, $f17
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[17], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x2f090c: 0xc69402b8  lwc1        $f20, 0x2B8($s4)
    ctx->pc = 0x2f090cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f0910: 0x448d7000  mtc1        $t5, $f14
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f0914: 0x0  nop
    // NOP
    // 0x2f0918: 0x468073a0  cvt.s.w     $f14, $f14
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x2f091c: 0xc69302bc  lwc1        $f19, 0x2BC($s4)
    ctx->pc = 0x2f091cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2f0920: 0x0  nop
    // NOP
    // 0x2f0924: 0x0  nop
    // NOP
    // 0x2f0928: 0x46000e43  div.s       $f25, $f1, $f0
    ctx->f[25] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x2f092c: 0x3c013b00  lui         $at, 0x3B00
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15104 << 16));
    // 0x2f0930: 0x44815000  mtc1        $at, $f10
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2f0934: 0x0  nop
    // NOP
    // 0x2f0938: 0x0  nop
    // NOP
    // 0x2f093c: 0x460025c3  div.s       $f23, $f4, $f0
    ctx->f[23] = ps2FpuDivide(ctx->fcr31, ctx->f[4], ctx->f[0]);
    // 0x2f0940: 0x3c020074  lui         $v0, 0x74
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2f0944: 0x0  nop
    // NOP
    // 0x2f0948: 0x0  nop
    // NOP
    // 0x2f094c: 0x46002d83  div.s       $f22, $f5, $f0
    ctx->f[22] = ps2FpuDivide(ctx->fcr31, ctx->f[5], ctx->f[0]);
    // 0x2f0950: 0x8c437a18  lw          $v1, 0x7A18($v0)
    ctx->pc = 0x2f0950u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A18u));
    // 0x2f0954: 0x0  nop
    // NOP
    // 0x2f0958: 0x0  nop
    // NOP
    // 0x2f095c: 0x46003543  div.s       $f21, $f6, $f0
    ctx->f[21] = ps2FpuDivide(ctx->fcr31, ctx->f[6], ctx->f[0]);
    // 0x2f0960: 0x0  nop
    // NOP
    // 0x2f0964: 0x0  nop
    // NOP
    // 0x2f0968: 0x46001e03  div.s       $f24, $f3, $f0
    ctx->f[24] = ps2FpuDivide(ctx->fcr31, ctx->f[3], ctx->f[0]);
    // 0x2f096c: 0x38630001  xori        $v1, $v1, 0x1
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2f0970: 0x448c7800  mtc1        $t4, $f15
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2f0974: 0x0  nop
    // NOP
    // 0x2f0978: 0x46807be0  cvt.s.w     $f15, $f15
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[15], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x2f097c: 0x46029102  mul.s       $f4, $f18, $f2
    ctx->f[4] = FPU_MUL_S(ctx->f[18], ctx->f[2]);
    // 0x2f0980: 0x46027242  mul.s       $f9, $f14, $f2
    ctx->f[9] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x2f0984: 0x46028142  mul.s       $f5, $f16, $f2
    ctx->f[5] = FPU_MUL_S(ctx->f[16], ctx->f[2]);
    // 0x2f0988: 0x46028982  mul.s       $f6, $f17, $f2
    ctx->f[6] = FPU_MUL_S(ctx->f[17], ctx->f[2]);
    // 0x2f098c: 0x46005b07  neg.s       $f12, $f11
    ctx->f[12] = FPU_NEG_S(ctx->f[11]);
    // 0x2f0990: 0x46027882  mul.s       $f2, $f15, $f2
    ctx->f[2] = FPU_MUL_S(ctx->f[15], ctx->f[2]);
    // 0x2f0994: 0x46045900  add.s       $f4, $f11, $f4
    ctx->f[4] = FPU_ADD_S(ctx->f[11], ctx->f[4]);
    // 0x2f0998: 0x46055940  add.s       $f5, $f11, $f5
    ctx->f[5] = FPU_ADD_S(ctx->f[11], ctx->f[5]);
    // 0x2f099c: 0x46066180  add.s       $f6, $f12, $f6
    ctx->f[6] = FPU_ADD_S(ctx->f[12], ctx->f[6]);
    // 0x2f09a0: 0x46026080  add.s       $f2, $f12, $f2
    ctx->f[2] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x2f09a4: 0x46099a40  add.s       $f9, $f19, $f9
    ctx->f[9] = FPU_ADD_S(ctx->f[19], ctx->f[9]);
    // 0x2f09a8: 0x46185800  add.s       $f0, $f11, $f24
    ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[24]);
    // 0x2f09ac: 0x46176040  add.s       $f1, $f12, $f23
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[23]);
    // 0x2f09b0: 0x461658c0  add.s       $f3, $f11, $f22
    ctx->f[3] = FPU_ADD_S(ctx->f[11], ctx->f[22]);
    // 0x2f09b4: 0x461561c0  add.s       $f7, $f12, $f21
    ctx->f[7] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
    // 0x2f09b8: 0x4619a200  add.s       $f8, $f20, $f25
    ctx->f[8] = FPU_ADD_S(ctx->f[20], ctx->f[25]);
    // 0x2f09bc: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x2f09c0: 0x460a2100  add.s       $f4, $f4, $f10
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[10]);
    // 0x2f09c4: 0x460a0840  add.s       $f1, $f1, $f10
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x2f09c8: 0x460a2940  add.s       $f5, $f5, $f10
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[10]);
    // 0x2f09cc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2f09ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2f09d0: 0x460a18c0  add.s       $f3, $f3, $f10
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[10]);
    // 0x2f09d4: 0xe7a40070  swc1        $f4, 0x70($sp)
    ctx->pc = 0x2f09d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2f09d8: 0x460a3180  add.s       $f6, $f6, $f10
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[10]);
    // 0x2f09dc: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2f09dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2f09e0: 0x460a39c0  add.s       $f7, $f7, $f10
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[10]);
    // 0x2f09e4: 0xe7a50074  swc1        $f5, 0x74($sp)
    ctx->pc = 0x2f09e4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2f09e8: 0x460a1080  add.s       $f2, $f2, $f10
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[10]);
    // 0x2f09ec: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x2f09ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2f09f0: 0x460a4200  add.s       $f8, $f8, $f10
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[10]);
    // 0x2f09f4: 0xe7a60078  swc1        $f6, 0x78($sp)
    ctx->pc = 0x2f09f4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2f09f8: 0x460a4a40  add.s       $f9, $f9, $f10
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[10]);
    // 0x2f09fc: 0xe7a7005c  swc1        $f7, 0x5C($sp)
    ctx->pc = 0x2f09fcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2f0a00: 0xe7a2007c  swc1        $f2, 0x7C($sp)
    ctx->pc = 0x2f0a00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2f0a04: 0xe7a80060  swc1        $f8, 0x60($sp)
    ctx->pc = 0x2f0a04u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2f0a08: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x2F0A08u;
    {
        const bool branch_taken_0x2f0a08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0A08u;
        // 0x2f0a0c: 0xe7a90080  swc1        $f9, 0x80($sp) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0a08) {
            ctx->pc = 0x2F0AF4u;
            goto label_2f0af4;
        }
    }
    // 0x2f0a10: 0x928302e2  lbu         $v1, 0x2E2($s4)
    ctx->pc = 0x2f0a10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 738)));
    // 0x2f0a14: 0x24020001  addiu       $v0, $zero, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0a18: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2F0A18u;
    {
        const bool branch_taken_0x2f0a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F0A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0A18u;
        // 0x2f0a1c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0a18) {
            ctx->pc = 0x2F0AF4u;
            goto label_2f0af4;
        }
    }
    // 0x2f0a20: 0x0  nop
    // NOP
    // 0x2f0a24: 0x0  nop
    // NOP
    // 0x2f0a28: 0x460d70c3  div.s       $f3, $f14, $f13
    ctx->f[3] = ps2FpuDivide(ctx->fcr31, ctx->f[14], ctx->f[13]);
    // 0x2f0a2c: 0xc4401188  lwc1        $f0, 0x1188($v0)
    ctx->pc = 0x2f0a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0a30: 0x46800020  cvt.s.w     $f0, $f0
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f0a34: 0x0  nop
    // NOP
    // 0x2f0a38: 0x0  nop
    // NOP
    // 0x2f0a3c: 0x460d9143  div.s       $f5, $f18, $f13
    ctx->f[5] = ps2FpuDivide(ctx->fcr31, ctx->f[18], ctx->f[13]);
    // 0x2f0a40: 0x0  nop
    // NOP
    // 0x2f0a44: 0x0  nop
    // NOP
    // 0x2f0a48: 0x460d8183  div.s       $f6, $f16, $f13
    ctx->f[6] = ps2FpuDivide(ctx->fcr31, ctx->f[16], ctx->f[13]);
    // 0x2f0a4c: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x2f0a50: 0x0  nop
    // NOP
    // 0x2f0a54: 0x0  nop
    // NOP
    // 0x2f0a58: 0x460d89c3  div.s       $f7, $f17, $f13
    ctx->f[7] = ps2FpuDivide(ctx->fcr31, ctx->f[17], ctx->f[13]);
    // 0x2f0a5c: 0x0  nop
    // NOP
    // 0x2f0a60: 0x0  nop
    // NOP
    // 0x2f0a64: 0x460d7a03  div.s       $f8, $f15, $f13
    ctx->f[8] = ps2FpuDivide(ctx->fcr31, ctx->f[15], ctx->f[13]);
    // 0x2f0a68: 0x4600ca42  mul.s       $f9, $f25, $f0
    ctx->f[9] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x2f0a6c: 0x4600c042  mul.s       $f1, $f24, $f0
    ctx->f[1] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x2f0a70: 0x4600b882  mul.s       $f2, $f23, $f0
    ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x2f0a74: 0x4600b102  mul.s       $f4, $f22, $f0
    ctx->f[4] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x2f0a78: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2f0a7c: 0x46086200  add.s       $f8, $f12, $f8
    ctx->f[8] = FPU_ADD_S(ctx->f[12], ctx->f[8]);
    // 0x2f0a80: 0x46045900  add.s       $f4, $f11, $f4
    ctx->f[4] = FPU_ADD_S(ctx->f[11], ctx->f[4]);
    // 0x2f0a84: 0x4609a240  add.s       $f9, $f20, $f9
    ctx->f[9] = FPU_ADD_S(ctx->f[20], ctx->f[9]);
    // 0x2f0a88: 0x460398c0  add.s       $f3, $f19, $f3
    ctx->f[3] = FPU_ADD_S(ctx->f[19], ctx->f[3]);
    // 0x2f0a8c: 0x46015840  add.s       $f1, $f11, $f1
    ctx->f[1] = FPU_ADD_S(ctx->f[11], ctx->f[1]);
    // 0x2f0a90: 0x46055940  add.s       $f5, $f11, $f5
    ctx->f[5] = FPU_ADD_S(ctx->f[11], ctx->f[5]);
    // 0x2f0a94: 0x46026080  add.s       $f2, $f12, $f2
    ctx->f[2] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x2f0a98: 0x46065980  add.s       $f6, $f11, $f6
    ctx->f[6] = FPU_ADD_S(ctx->f[11], ctx->f[6]);
    // 0x2f0a9c: 0x460761c0  add.s       $f7, $f12, $f7
    ctx->f[7] = FPU_ADD_S(ctx->f[12], ctx->f[7]);
    // 0x2f0aa0: 0x46006000  add.s       $f0, $f12, $f0
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2f0aa4: 0x460a18c0  add.s       $f3, $f3, $f10
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[10]);
    // 0x2f0aa8: 0x460a0840  add.s       $f1, $f1, $f10
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x2f0aac: 0x460a2940  add.s       $f5, $f5, $f10
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[10]);
    // 0x2f0ab0: 0x460a1080  add.s       $f2, $f2, $f10
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[10]);
    // 0x2f0ab4: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x2f0ab4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2f0ab8: 0x460a3180  add.s       $f6, $f6, $f10
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[10]);
    // 0x2f0abc: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2f0abcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2f0ac0: 0x460a2100  add.s       $f4, $f4, $f10
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[10]);
    // 0x2f0ac4: 0xe7a50070  swc1        $f5, 0x70($sp)
    ctx->pc = 0x2f0ac4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2f0ac8: 0x460a39c0  add.s       $f7, $f7, $f10
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[10]);
    // 0x2f0acc: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x2f0accu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2f0ad0: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x2f0ad4: 0xe7a60074  swc1        $f6, 0x74($sp)
    ctx->pc = 0x2f0ad4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2f0ad8: 0x460a4200  add.s       $f8, $f8, $f10
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[10]);
    // 0x2f0adc: 0xe7a40058  swc1        $f4, 0x58($sp)
    ctx->pc = 0x2f0adcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2f0ae0: 0x460a4a40  add.s       $f9, $f9, $f10
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[10]);
    // 0x2f0ae4: 0xe7a70078  swc1        $f7, 0x78($sp)
    ctx->pc = 0x2f0ae4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2f0ae8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2f0ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2f0aec: 0xe7a8007c  swc1        $f8, 0x7C($sp)
    ctx->pc = 0x2f0aecu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2f0af0: 0xe7a90060  swc1        $f9, 0x60($sp)
    ctx->pc = 0x2f0af0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_2f0af4:
    // 0x2f0af4: 0x6a83018f  ldl         $v1, 0x18F($s4)
    ctx->pc = 0x2f0af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 399); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2f0af8: 0x6e830188  ldr         $v1, 0x188($s4)
    ctx->pc = 0x2f0af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 392); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2f0afc: 0x6a840197  ldl         $a0, 0x197($s4)
    ctx->pc = 0x2f0afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2f0b00: 0x6e840190  ldr         $a0, 0x190($s4)
    ctx->pc = 0x2f0b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2f0b04: 0xb3a300a7  sdl         $v1, 0xA7($sp)
    ctx->pc = 0x2f0b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f0b08: 0xb7a300a0  sdr         $v1, 0xA0($sp)
    ctx->pc = 0x2f0b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f0b0c: 0xb3a400af  sdl         $a0, 0xAF($sp)
    ctx->pc = 0x2f0b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f0b10: 0xb7a400a8  sdr         $a0, 0xA8($sp)
    ctx->pc = 0x2f0b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f0b14: 0x3c014300  lui         $at, 0x4300
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2f0b18: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0b1c: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x2f0b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f0b20: 0xc7a300a4  lwc1        $f3, 0xA4($sp)
    ctx->pc = 0x2f0b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f0b24: 0xc7a400a8  lwc1        $f4, 0xA8($sp)
    ctx->pc = 0x2f0b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2f0b28: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2f0b2c: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x2f0b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0b30: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2f0b34: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2f0b38: 0x3c01437f  lui         $at, 0x437F
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x2f0b3c: 0x44812800  mtc1        $at, $f5
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2f0b40: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f0b44: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x2f0b44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2f0b48: 0xe7a300a4  swc1        $f3, 0xA4($sp)
    ctx->pc = 0x2f0b48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2f0b4c: 0xe7a400a8  swc1        $f4, 0xA8($sp)
    ctx->pc = 0x2f0b4cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2f0b50: 0xe7a100ac  swc1        $f1, 0xAC($sp)
    ctx->pc = 0x2f0b50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2f0b54: 0x6ba800a7  ldl         $t0, 0xA7($sp)
    ctx->pc = 0x2f0b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2f0b58: 0x6fa800a0  ldr         $t0, 0xA0($sp)
    ctx->pc = 0x2f0b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2f0b5c: 0x6ba200af  ldl         $v0, 0xAF($sp)
    ctx->pc = 0x2f0b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2f0b60: 0x6fa200a8  ldr         $v0, 0xA8($sp)
    ctx->pc = 0x2f0b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2f0b64: 0xb3a80097  sdl         $t0, 0x97($sp)
    ctx->pc = 0x2f0b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f0b68: 0xb7a80090  sdr         $t0, 0x90($sp)
    ctx->pc = 0x2f0b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f0b6c: 0xb3a2009f  sdl         $v0, 0x9F($sp)
    ctx->pc = 0x2f0b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f0b70: 0xb7a20098  sdr         $v0, 0x98($sp)
    ctx->pc = 0x2f0b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f0b74: 0x44800800  mtc1        $zero, $f1
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f0b78: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2f0b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0b7c: 0x46010034  c.lt.s      $f0, $f1
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f0b80: 0x0  nop
    // NOP
    // 0x2f0b84: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F0B84u;
    {
        const bool branch_taken_0x2f0b84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0b84) {
            ctx->pc = 0x2F0B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0B84u;
            // 0x2f0b88: 0xe7a10090  swc1        $f1, 0x90($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0B8Cu;
            goto label_2f0b8c;
        }
    }
    ctx->pc = 0x2F0B8Cu;
label_2f0b8c:
    // 0x2f0b8c: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x2f0b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0b90: 0x46010034  c.lt.s      $f0, $f1
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f0b94: 0x0  nop
    // NOP
    // 0x2f0b98: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F0B98u;
    {
        const bool branch_taken_0x2f0b98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0b98) {
            ctx->pc = 0x2F0B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0B98u;
            // 0x2f0b9c: 0xe7a10094  swc1        $f1, 0x94($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0BA0u;
            goto label_2f0ba0;
        }
    }
    ctx->pc = 0x2F0BA0u;
label_2f0ba0:
    // 0x2f0ba0: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2f0ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0ba4: 0x46010034  c.lt.s      $f0, $f1
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f0ba8: 0x0  nop
    // NOP
    // 0x2f0bac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F0BACu;
    {
        const bool branch_taken_0x2f0bac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0bac) {
            ctx->pc = 0x2F0BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0BACu;
            // 0x2f0bb0: 0xe7a10098  swc1        $f1, 0x98($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0BB4u;
            goto label_2f0bb4;
        }
    }
    ctx->pc = 0x2F0BB4u;
label_2f0bb4:
    // 0x2f0bb4: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2f0bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0bb8: 0x46010034  c.lt.s      $f0, $f1
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f0bbc: 0x0  nop
    // NOP
    // 0x2f0bc0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F0BC0u;
    {
        const bool branch_taken_0x2f0bc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0bc0) {
            ctx->pc = 0x2F0BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0BC0u;
            // 0x2f0bc4: 0xe7a1009c  swc1        $f1, 0x9C($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0BC8u;
            goto label_2f0bc8;
        }
    }
    ctx->pc = 0x2F0BC8u;
label_2f0bc8:
    // 0x2f0bc8: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2f0bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0bcc: 0x46002834  c.lt.s      $f5, $f0
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f0bd0: 0x0  nop
    // NOP
    // 0x2f0bd4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F0BD4u;
    {
        const bool branch_taken_0x2f0bd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0bd4) {
            ctx->pc = 0x2F0BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0BD4u;
            // 0x2f0bd8: 0xe7a50090  swc1        $f5, 0x90($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0BDCu;
            goto label_2f0bdc;
        }
    }
    ctx->pc = 0x2F0BDCu;
label_2f0bdc:
    // 0x2f0bdc: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x2f0bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0be0: 0x46002834  c.lt.s      $f5, $f0
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f0be4: 0x0  nop
    // NOP
    // 0x2f0be8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F0BE8u;
    {
        const bool branch_taken_0x2f0be8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0be8) {
            ctx->pc = 0x2F0BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0BE8u;
            // 0x2f0bec: 0xe6c50004  swc1        $f5, 0x4($s6) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0BF0u;
            goto label_2f0bf0;
        }
    }
    ctx->pc = 0x2F0BF0u;
label_2f0bf0:
    // 0x2f0bf0: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2f0bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0bf4: 0x46002834  c.lt.s      $f5, $f0
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f0bf8: 0x0  nop
    // NOP
    // 0x2f0bfc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F0BFCu;
    {
        const bool branch_taken_0x2f0bfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0bfc) {
            ctx->pc = 0x2F0C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0BFCu;
            // 0x2f0c00: 0xe6c50008  swc1        $f5, 0x8($s6) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0C04u;
            goto label_2f0c04;
        }
    }
    ctx->pc = 0x2F0C04u;
label_2f0c04:
    // 0x2f0c04: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2f0c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0c08: 0x46002834  c.lt.s      $f5, $f0
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f0c0c: 0x0  nop
    // NOP
    // 0x2f0c10: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F0C10u;
    {
        const bool branch_taken_0x2f0c10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0c10) {
            ctx->pc = 0x2F0C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0C10u;
            // 0x2f0c14: 0xe6c5000c  swc1        $f5, 0xC($s6) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0C18u;
            goto label_2f0c18;
        }
    }
    ctx->pc = 0x2F0C18u;
label_2f0c18:
    // 0x2f0c18: 0x8e850114  lw          $a1, 0x114($s4)
    ctx->pc = 0x2f0c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 276)));
    // 0x2f0c1c: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F0C1Cu;
    {
        const bool branch_taken_0x2f0c1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C1Cu;
        // 0x2f0c20: 0xc7a0009c  lwc1        $f0, 0x9C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0c1c) {
            ctx->pc = 0x2F0C98u;
            goto label_2f0c98;
        }
    }
    // 0x2f0c24: 0x9282011c  lbu         $v0, 0x11C($s4)
    ctx->pc = 0x2f0c24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x2f0c28: 0x211fa  dsrl        $v0, $v0, 7
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x2f0c2c: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2F0C2Cu;
    {
        const bool branch_taken_0x2f0c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f0c2c) {
            ctx->pc = 0x2F0C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0C2Cu;
            // 0x2f0c30: 0x461a0002  mul.s       $f0, $f0, $f26 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0C9Cu;
            goto label_2f0c9c;
        }
    }
    // 0x2f0c34: 0x90a202b6  lbu         $v0, 0x2B6($a1)
    ctx->pc = 0x2f0c34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 694)));
    // 0x2f0c38: 0x90a302b7  lbu         $v1, 0x2B7($a1)
    ctx->pc = 0x2f0c38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 695)));
    // 0x2f0c3c: 0x44822000  mtc1        $v0, $f4
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2f0c40: 0x0  nop
    // NOP
    // 0x2f0c44: 0x46802120  cvt.s.w     $f4, $f4
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2f0c48: 0x90a402bc  lbu         $a0, 0x2BC($a1)
    ctx->pc = 0x2f0c48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 700)));
    // 0x2f0c4c: 0x44831000  mtc1        $v1, $f2
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f0c50: 0x0  nop
    // NOP
    // 0x2f0c54: 0x468010a0  cvt.s.w     $f2, $f2
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2f0c58: 0xc4a0024c  lwc1        $f0, 0x24C($a1)
    ctx->pc = 0x2f0c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0c5c: 0x44840800  mtc1        $a0, $f1
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f0c60: 0x0  nop
    // NOP
    // 0x2f0c64: 0x46800860  cvt.s.w     $f1, $f1
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f0c68: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x2f0c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f0c6c: 0x0  nop
    // NOP
    // 0x2f0c70: 0x0  nop
    // NOP
    // 0x2f0c74: 0x46052103  div.s       $f4, $f4, $f5
    ctx->f[4] = ps2FpuDivide(ctx->fcr31, ctx->f[4], ctx->f[5]);
    // 0x2f0c78: 0x46051083  div.s       $f2, $f2, $f5
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[5]);
    // 0x2f0c7c: 0x46050843  div.s       $f1, $f1, $f5
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[5]);
    // 0x2f0c80: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2f0c84: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2f0c88: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f0c8c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2f0c90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F0C90u;
    {
        const bool branch_taken_0x2f0c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C90u;
        // 0x2f0c94: 0xe7a3009c  swc1        $f3, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0c90) {
            ctx->pc = 0x2F0CA0u;
            goto label_2f0ca0;
        }
    }
    ctx->pc = 0x2F0C98u;
label_2f0c98:
    // 0x2f0c98: 0x461a0002  mul.s       $f0, $f0, $f26
    ctx->pc = 0x2f0c98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
label_2f0c9c:
    // 0x2f0c9c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2f0c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_2f0ca0:
    // 0x2f0ca0: 0x3c025000  lui         $v0, 0x5000
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x2f0ca4: 0x928802e1  lbu         $t0, 0x2E1($s4)
    ctx->pc = 0x2f0ca4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 737)));
    // 0x2f0ca8: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x2f0ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f0cac: 0x260882d  daddu       $s1, $s3, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0cb0: 0xc7a5009c  lwc1        $f5, 0x9C($sp)
    ctx->pc = 0x2f0cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2f0cb4: 0x3442001c  ori         $v0, $v0, 0x1C
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28);
    // 0x2f0cb8: 0xc7a30094  lwc1        $f3, 0x94($sp)
    ctx->pc = 0x2f0cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f0cbc: 0x3c031000  lui         $v1, 0x1000
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2f0cc0: 0x3463001c  ori         $v1, $v1, 0x1C
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28);
    // 0x2f0cc4: 0xc7a40098  lwc1        $f4, 0x98($sp)
    ctx->pc = 0x2f0cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2f0cc8: 0x3c050062  lui         $a1, 0x62
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x2f0ccc: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x2f0cccu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x2f0cd0: 0x34068176  ori         $a2, $zero, 0x8176
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33142);
    // 0x2f0cd4: 0x6337c  dsll32      $a2, $a2, 13
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 13));
    // 0x2f0cd8: 0x34c6801b  ori         $a2, $a2, 0x801B
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32795);
    // 0x2f0cdc: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2f0cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2f0ce0: 0x26330010  addiu       $s3, $s1, 0x10
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2f0ce4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2f0ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x2f0ce8: 0x2404000e  addiu       $a0, $zero, 0xE
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2f0cec: 0xaca0b7a0  sw          $zero, -0x4860($a1)
    ctx->pc = 0x2f0cecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294948768), GPR_U32(ctx, 0));
    // 0x2f0cf0: 0x24030008  addiu       $v1, $zero, 0x8
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f0cf4: 0xfe260010  sd          $a2, 0x10($s1)
    ctx->pc = 0x2f0cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 6));
    // 0x2f0cf8: 0x24070047  addiu       $a3, $zero, 0x47
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2f0cfc: 0xae640008  sw          $a0, 0x8($s3)
    ctx->pc = 0x2f0cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 4));
    // 0x2f0d00: 0x3c020005  lui         $v0, 0x5
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2f0d04: 0x3442000c  ori         $v0, $v0, 0xC
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x2f0d08: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x2f0d08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x2f0d0c: 0x44880000  mtc1        $t0, $f0
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0d10: 0x0  nop
    // NOP
    // 0x2f0d14: 0x46800020  cvt.s.w     $f0, $f0
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f0d18: 0xfe230028  sd          $v1, 0x28($s1)
    ctx->pc = 0x2f0d18u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 3));
    // 0x2f0d1c: 0x3c090008  lui         $t1, 0x8
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)8 << 16));
    // 0x2f0d20: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2f0d24: 0x44030800  mfc1        $v1, $f1
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2f0d28: 0xfe270038  sd          $a3, 0x38($s1)
    ctx->pc = 0x2f0d28u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 7));
    // 0x2f0d2c: 0xfe220030  sd          $v0, 0x30($s1)
    ctx->pc = 0x2f0d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
    // 0x2f0d30: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2f0d34: 0xfe200020  sd          $zero, 0x20($s1)
    ctx->pc = 0x2f0d34u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 0));
    // 0x2f0d38: 0x460018a4  .word       0x460018A4                   # cvt.w.s     $f2, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2f0d3c: 0x44041000  mfc1        $a0, $f2
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2f0d40: 0x3c013b80  lui         $at, 0x3B80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x2f0d44: 0x34218081  ori         $at, $at, 0x8081
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x2f0d48: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f0d4c: 0x460020a4  .word       0x460020A4                   # cvt.w.s     $f2, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2f0d50: 0x44051000  mfc1        $a1, $f2
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2f0d54: 0x8e82011c  lw          $v0, 0x11C($s4)
    ctx->pc = 0x2f0d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x2f0d58: 0x3c083a00  lui         $t0, 0x3A00
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)14848 << 16));
    // 0x2f0d5c: 0x350800f8  ori         $t0, $t0, 0xF8
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)248);
    // 0x2f0d60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f0d64: 0x307600ff  andi        $s6, $v1, 0xFF
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f0d68: 0x491024  and         $v0, $v0, $t1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x2f0d6c: 0x30b500ff  andi        $s5, $a1, 0xFF
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2f0d70: 0x2c420001  sltiu       $v0, $v0, 0x1
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2f0d74: 0x2406004e  addiu       $a2, $zero, 0x4E
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2f0d78: 0x2103c  dsll32      $v0, $v0, 0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f0d7c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2f0d80: 0x44050800  mfc1        $a1, $f1
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2f0d84: 0x481025  or          $v0, $v0, $t0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x2f0d88: 0xfe260048  sd          $a2, 0x48($s1)
    ctx->pc = 0x2f0d88u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 6));
    // 0x2f0d8c: 0xfe220040  sd          $v0, 0x40($s1)
    ctx->pc = 0x2f0d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
    // 0x2f0d90: 0x309200ff  andi        $s2, $a0, 0xFF
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f0d94: 0x46002824  .word       0x46002824                   # cvt.w.s     $f0, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2f0d98: 0x44030000  mfc1        $v1, $f0
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2f0d9c: 0x2417ffff  addiu       $s7, $zero, -0x1
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f0da0: 0x3c02003c  lui         $v0, 0x3C
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2f0da4: 0x30a500ff  andi        $a1, $a1, 0xFF
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2f0da8: 0x8c441180  lw          $a0, 0x1180($v0)
    ctx->pc = 0x2f0da8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2f0dac: 0x3408ff00  ori         $t0, $zero, 0xFF00
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x2f0db0: 0x8443c  dsll32      $t0, $t0, 16
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x2f0db4: 0x35080070  ori         $t0, $t0, 0x70
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)112);
    // 0x2f0db8: 0x307e00ff  andi        $fp, $v1, 0xFF
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f0dbc: 0xafa50180  sw          $a1, 0x180($sp)
    ctx->pc = 0x2f0dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 5));
    // 0x2f0dc0: 0x2482003f  addiu       $v0, $a0, 0x3F
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x2f0dc4: 0x2e4182a  slt         $v1, $s7, $a0
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2f0dc8: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2f0dc8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2f0dcc: 0x24050080  addiu       $a1, $zero, 0x80
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2f0dd0: 0x21183  sra         $v0, $v0, 6
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2f0dd4: 0x2406004c  addiu       $a2, $zero, 0x4C
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2f0dd8: 0x21438  dsll        $v0, $v0, 16
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f0ddc: 0x2407003b  addiu       $a3, $zero, 0x3B
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2f0de0: 0x481025  or          $v0, $v0, $t0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x2f0de4: 0xfe250060  sd          $a1, 0x60($s1)
    ctx->pc = 0x2f0de4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 96), GPR_U64(ctx, 5));
    // 0x2f0de8: 0xfe220050  sd          $v0, 0x50($s1)
    ctx->pc = 0x2f0de8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 80), GPR_U64(ctx, 2));
    // 0x2f0dec: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0df0: 0xfe260058  sd          $a2, 0x58($s1)
    ctx->pc = 0x2f0df0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 88), GPR_U64(ctx, 6));
    // 0x2f0df4: 0x26250070  addiu       $a1, $s1, 0x70
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x2f0df8: 0xfe270068  sd          $a3, 0x68($s1)
    ctx->pc = 0x2f0df8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 7));
    // 0x2f0dfc: 0xc0c00ac  jal         func_3002B0
    SET_GPR_U32(ctx, 31, 0x2F0E04u);
    ctx->pc = 0x2F0E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0DFCu;
    // 0x2f0e00: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_003002B0_0x3002b0, 0x3002b0u, 0x2f0e04u)) {
        return;
    }
    ctx->pc = 0x2F0E04u;
label_2f0e04:
    // 0x2f0e04: 0x928202e2  lbu         $v0, 0x2E2($s4)
    ctx->pc = 0x2f0e04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 738)));
    // 0x2f0e08: 0x10500014  beq         $v0, $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F0E08u;
    {
        const bool branch_taken_0x2f0e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2F0E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E08u;
        // 0x2f0e0c: 0x26330080  addiu       $s3, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0e08) {
            ctx->pc = 0x2F0E5Cu;
            goto label_2f0e5c;
        }
    }
    // 0x2f0e10: 0x3c02003c  lui         $v0, 0x3C
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2f0e14: 0x34069904  ori         $a2, $zero, 0x9904
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39172);
    // 0x2f0e18: 0x634b8  dsll        $a2, $a2, 18
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 18);
    // 0x2f0e1c: 0x8c431188  lw          $v1, 0x1188($v0)
    ctx->pc = 0x2f0e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4488)));
    // 0x2f0e20: 0x34058000  ori         $a1, $zero, 0x8000
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2f0e24: 0x52ef8  dsll        $a1, $a1, 27
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 27);
    // 0x2f0e28: 0x34a58000  ori         $a1, $a1, 0x8000
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x2f0e2c: 0x52cf8  dsll        $a1, $a1, 19
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
    // 0x2f0e30: 0x24070006  addiu       $a3, $zero, 0x6
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f0e34: 0x2e3202a  slt         $a0, $s7, $v1
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f0e38: 0x2462003f  addiu       $v0, $v1, 0x3F
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2f0e3c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2f0e3cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2f0e40: 0x21183  sra         $v0, $v0, 6
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2f0e44: 0x213b8  dsll        $v0, $v0, 14
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x2f0e48: 0x461025  or          $v0, $v0, $a2
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2f0e4c: 0x451025  or          $v0, $v0, $a1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2f0e50: 0xfe220080  sd          $v0, 0x80($s1)
    ctx->pc = 0x2f0e50u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 128), GPR_U64(ctx, 2));
    // 0x2f0e54: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F0E54u;
    {
        const bool branch_taken_0x2f0e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E54u;
        // 0x2f0e58: 0xfe670008  sd          $a3, 0x8($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0e54) {
            ctx->pc = 0x2F0E80u;
            goto label_2f0e80;
        }
    }
    ctx->pc = 0x2F0E5Cu;
label_2f0e5c:
    // 0x2f0e5c: 0x34028000  ori         $v0, $zero, 0x8000
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2f0e60: 0x216f8  dsll        $v0, $v0, 27
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
    // 0x2f0e64: 0x3442c402  ori         $v0, $v0, 0xC402
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50178);
    // 0x2f0e68: 0x214b8  dsll        $v0, $v0, 18
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 18);
    // 0x2f0e6c: 0x34429e00  ori         $v0, $v0, 0x9E00
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40448);
    // 0x2f0e70: 0x21078  dsll        $v0, $v0, 1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2f0e74: 0x24030006  addiu       $v1, $zero, 0x6
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f0e78: 0xfe220080  sd          $v0, 0x80($s1)
    ctx->pc = 0x2f0e78u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 128), GPR_U64(ctx, 2));
    // 0x2f0e7c: 0xfe630008  sd          $v1, 0x8($s3)
    ctx->pc = 0x2f0e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 3));
label_2f0e80:
    // 0x2f0e80: 0x26330090  addiu       $s3, $s1, 0x90
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x2f0e84: 0x3c030062  lui         $v1, 0x62
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2f0e88: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2f0e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0e8c: 0xc462b648  lwc1        $f2, -0x49B8($v1)
    ctx->pc = 0x2f0e8cu;
    { uint32_t bits = FAST_READ32(0x61B648u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f0e90: 0x24020002  addiu       $v0, $zero, 0x2
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f0e94: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2f0e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0e98: 0x24030001  addiu       $v1, $zero, 0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0e9c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2f0ea0: 0xfe620008  sd          $v0, 0x8($s3)
    ctx->pc = 0x2f0ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 2));
    // 0x2f0ea4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2f0ea8: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x2f0ea8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2f0eac: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x2f0eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x2f0eb0: 0x928202e0  lbu         $v0, 0x2E0($s4)
    ctx->pc = 0x2f0eb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 736)));
    // 0x2f0eb4: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F0EB4u;
    {
        const bool branch_taken_0x2f0eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F0EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0EB4u;
        // 0x2f0eb8: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0eb4) {
            ctx->pc = 0x2F0EFCu;
            goto label_2f0efc;
        }
    }
    // 0x2f0ebc: 0x3c040062  lui         $a0, 0x62
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2f0ec0: 0x324800ff  andi        $t0, $s2, 0xFF
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2f0ec4: 0x9c83b648  lwu         $v1, -0x49B8($a0)
    ctx->pc = 0x2f0ec4u;
    SET_GPR_ZE32(ctx, 3, FAST_READ32(0x61B648u));
    // 0x2f0ec8: 0x32c600ff  andi        $a2, $s6, 0xFF
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x2f0ecc: 0x32a700ff  andi        $a3, $s5, 0xFF
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x2f0ed0: 0x81238  dsll        $v0, $t0, 8
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << 8);
    // 0x2f0ed4: 0x72438  dsll        $a0, $a3, 16
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 16);
    // 0x2f0ed8: 0xc21025  or          $v0, $a2, $v0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2f0edc: 0x441025  or          $v0, $v0, $a0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2f0ee0: 0x1e2e38  dsll        $a1, $fp, 24
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) << 24);
    // 0x2f0ee4: 0x3183c  dsll32      $v1, $v1, 0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2f0ee8: 0x451025  or          $v0, $v0, $a1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2f0eec: 0x24040001  addiu       $a0, $zero, 0x1
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0ef0: 0x431025  or          $v0, $v0, $v1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f0ef4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2F0EF4u;
    {
        const bool branch_taken_0x2f0ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0EF4u;
        // 0x2f0ef8: 0xfe640008  sd          $a0, 0x8($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0ef4) {
            ctx->pc = 0x2F0F3Cu;
            goto label_2f0f3c;
        }
    }
    ctx->pc = 0x2F0EFCu;
label_2f0efc:
    // 0x2f0efc: 0x3c030062  lui         $v1, 0x62
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2f0f00: 0x324800ff  andi        $t0, $s2, 0xFF
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2f0f04: 0x9c65b648  lwu         $a1, -0x49B8($v1)
    ctx->pc = 0x2f0f04u;
    SET_GPR_ZE32(ctx, 5, FAST_READ32(0x61B648u));
    // 0x2f0f08: 0x32c600ff  andi        $a2, $s6, 0xFF
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x2f0f0c: 0x928402e1  lbu         $a0, 0x2E1($s4)
    ctx->pc = 0x2f0f0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 737)));
    // 0x2f0f10: 0x32a700ff  andi        $a3, $s5, 0xFF
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x2f0f14: 0x81238  dsll        $v0, $t0, 8
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << 8);
    // 0x2f0f18: 0x71c38  dsll        $v1, $a3, 16
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << 16);
    // 0x2f0f1c: 0xc21025  or          $v0, $a2, $v0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2f0f20: 0x42638  dsll        $a0, $a0, 24
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x2f0f24: 0x431025  or          $v0, $v0, $v1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f0f28: 0x5283c  dsll32      $a1, $a1, 0
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2f0f2c: 0x441025  or          $v0, $v0, $a0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2f0f30: 0x24030001  addiu       $v1, $zero, 0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0f34: 0x451025  or          $v0, $v0, $a1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2f0f38: 0xfe630008  sd          $v1, 0x8($s3)
    ctx->pc = 0x2f0f38u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 3));
label_2f0f3c:
    // 0x2f0f3c: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x2f0f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
    // 0x2f0f40: 0x26730010  addiu       $s3, $s3, 0x10
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2f0f44: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x2f0f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2f0f48: 0x82a38  dsll        $a1, $t0, 8
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) << 8);
    // 0x2f0f4c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2f0f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f0f50: 0xc52825  or          $a1, $a2, $a1
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x2f0f54: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2f0f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f0f58: 0x42438  dsll        $a0, $a0, 16
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2f0f5c: 0x2113b  dsra        $v0, $v0, 4
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2f0f60: 0x73438  dsll        $a2, $a3, 16
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << 16);
    // 0x2f0f64: 0x641825  or          $v1, $v1, $a0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2f0f68: 0x2103c  dsll32      $v0, $v0, 0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f0f6c: 0x621825  or          $v1, $v1, $v0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f0f70: 0x24040005  addiu       $a0, $zero, 0x5
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f0f74: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x2f0f74u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
    // 0x2f0f78: 0xa62825  or          $a1, $a1, $a2
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2f0f7c: 0xfe640008  sd          $a0, 0x8($s3)
    ctx->pc = 0x2f0f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 4));
    // 0x2f0f80: 0x1e1e38  dsll        $v1, $fp, 24
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) << 24);
    // 0x2f0f84: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x2f0f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2f0f88: 0xa33825  or          $a3, $a1, $v1
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2f0f8c: 0x27b00050  addiu       $s0, $sp, 0x50
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f0f90: 0x26730010  addiu       $s3, $s3, 0x10
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2f0f94: 0x41638  dsll        $v0, $a0, 24
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 24);
    // 0x2f0f98: 0x482d  daddu       $t1, $zero, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0f9c: 0xa24025  or          $t0, $a1, $v0
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2f0fa0: 0x3c04003c  lui         $a0, 0x3C
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2f0fa4: 0x3c020062  lui         $v0, 0x62
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2f0fa8: 0x248a3b98  addiu       $t2, $a0, 0x3B98
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 15256));
    // 0x2f0fac: 0x244fb7a8  addiu       $t7, $v0, -0x4858
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948776));
    // 0x2f0fb0: 0x27ac0070  addiu       $t4, $sp, 0x70
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f0fb4: 0x240e0002  addiu       $t6, $zero, 0x2
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f0fb8: 0x240b0001  addiu       $t3, $zero, 0x1
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0fbc: 0x240d0005  addiu       $t5, $zero, 0x5
    ctx->pc = 0x2f0fbcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f0fc0:
    // 0x2f0fc0: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x2f0fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2f0fc4: 0x51080  sll         $v0, $a1, 2
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2f0fc8: 0x4f2021  addu        $a0, $v0, $t7
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2f0fcc: 0x1821821  addu        $v1, $t4, $v0
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x2f0fd0: 0x2021021  addu        $v0, $s0, $v0
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f0fd4: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2f0fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f0fd8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2f0fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0fdc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2f0fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0fe0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2f0fe4: 0xfe6e0008  sd          $t6, 0x8($s3)
    ctx->pc = 0x2f0fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 14));
    // 0x2f0fe8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2f0fec: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x2f0fecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2f0ff0: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x2f0ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x2f0ff4: 0x928202e0  lbu         $v0, 0x2E0($s4)
    ctx->pc = 0x2f0ff4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 736)));
    // 0x2f0ff8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F0FF8u;
    {
        const bool branch_taken_0x2f0ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0FF8u;
        // 0x2f0ffc: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0ff8) {
            ctx->pc = 0x2F1014u;
            goto label_2f1014;
        }
    }
    // 0x2f1000: 0x9c820000  lwu         $v0, 0x0($a0)
    ctx->pc = 0x2f1000u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f1004: 0xfe6b0008  sd          $t3, 0x8($s3)
    ctx->pc = 0x2f1004u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 11));
    // 0x2f1008: 0x2103c  dsll32      $v0, $v0, 0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f100c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F100Cu;
    {
        const bool branch_taken_0x2f100c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F100Cu;
        // 0x2f1010: 0x1021025  or          $v0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f100c) {
            ctx->pc = 0x2F1024u;
            goto label_2f1024;
        }
    }
    ctx->pc = 0x2F1014u;
label_2f1014:
    // 0x2f1014: 0x9c820000  lwu         $v0, 0x0($a0)
    ctx->pc = 0x2f1014u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f1018: 0xfe6b0008  sd          $t3, 0x8($s3)
    ctx->pc = 0x2f1018u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 11));
    // 0x2f101c: 0x2103c  dsll32      $v0, $v0, 0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f1020: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x2f1020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_2f1024:
    // 0x2f1024: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x2f1024u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
    // 0x2f1028: 0x26730010  addiu       $s3, $s3, 0x10
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2f102c: 0x51100  sll         $v0, $a1, 4
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2f1030: 0x25290001  addiu       $t1, $t1, 0x1
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2f1034: 0x3a21821  addu        $v1, $sp, $v0
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2f1038: 0x254a0004  addiu       $t2, $t2, 0x4
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2f103c: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x2f103cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f1040: 0x2d260005  sltiu       $a2, $t1, 0x5
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2f1044: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2f1044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2f1048: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f1048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f104c: 0x5293b  dsra        $a1, $a1, 4
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 4);
    // 0x2f1050: 0x42438  dsll        $a0, $a0, 16
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2f1054: 0x5283c  dsll32      $a1, $a1, 0
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2f1058: 0x441025  or          $v0, $v0, $a0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2f105c: 0xfe6d0008  sd          $t5, 0x8($s3)
    ctx->pc = 0x2f105cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 13));
    // 0x2f1060: 0x451025  or          $v0, $v0, $a1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2f1064: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x2f1064u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
    // 0x2f1068: 0x14c0ffd5  bnez        $a2, . + 4 + (-0x2B << 2)
    ctx->pc = 0x2F1068u;
    {
        const bool branch_taken_0x2f1068 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1068u;
        // 0x2f106c: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1068) {
            ctx->pc = 0x2F0FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f0fc0;
        }
    }
    // 0x2f1070: 0x2403004e  addiu       $v1, $zero, 0x4E
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2f1074: 0x3c023a00  lui         $v0, 0x3A00
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x2f1078: 0x344200f8  ori         $v0, $v0, 0xF8
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)248);
    // 0x2f107c: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x2f107cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
    // 0x2f1080: 0x3c05003c  lui         $a1, 0x3C
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2f1084: 0xfe630008  sd          $v1, 0x8($s3)
    ctx->pc = 0x2f1084u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 3));
    // 0x2f1088: 0x2402004c  addiu       $v0, $zero, 0x4C
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2f108c: 0x26730010  addiu       $s3, $s3, 0x10
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2f1090: 0x2404ffff  addiu       $a0, $zero, -0x1
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f1094: 0x8ca31180  lw          $v1, 0x1180($a1)
    ctx->pc = 0x2f1094u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2f1098: 0x24060070  addiu       $a2, $zero, 0x70
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2f109c: 0xfe620008  sd          $v0, 0x8($s3)
    ctx->pc = 0x2f109cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 2));
    // 0x2f10a0: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f10a4: 0x83202a  slt         $a0, $a0, $v1
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f10a8: 0x2462003f  addiu       $v0, $v1, 0x3F
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2f10ac: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2f10acu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2f10b0: 0x21183  sra         $v0, $v0, 6
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2f10b4: 0x21438  dsll        $v0, $v0, 16
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f10b8: 0x461025  or          $v0, $v0, $a2
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2f10bc: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x2f10bcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
    // 0x2f10c0: 0x928302e2  lbu         $v1, 0x2E2($s4)
    ctx->pc = 0x2f10c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 738)));
    // 0x2f10c4: 0x10650005  beq         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F10C4u;
    {
        const bool branch_taken_0x2f10c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2F10C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F10C4u;
        // 0x2f10c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f10c4) {
            ctx->pc = 0x2F10DCu;
            goto label_2f10dc;
        }
    }
    // 0x2f10cc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F10CCu;
    {
        const bool branch_taken_0x2f10cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F10D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F10CCu;
        // 0x2f10d0: 0x8fa50170  lw          $a1, 0x170($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f10cc) {
            ctx->pc = 0x2F10F4u;
            goto label_2f10f4;
        }
    }
    // 0x2f10d4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2F10D4u;
    {
        const bool branch_taken_0x2f10d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F10D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F10D4u;
        // 0x2f10d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f10d4) {
            ctx->pc = 0x2F1114u;
            goto label_2f1114;
        }
    }
    ctx->pc = 0x2F10DCu;
label_2f10dc:
    // 0x2f10dc: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x2f10dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2f10e0: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f10e4: 0x220302d  daddu       $a2, $s1, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f10e8: 0x382d  daddu       $a3, $zero, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f10ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F10ECu;
    {
        const bool branch_taken_0x2f10ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F10F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F10ECu;
        // 0x2f10f0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f10ec) {
            ctx->pc = 0x2F1104u;
            goto label_2f1104;
        }
    }
    ctx->pc = 0x2F10F4u;
label_2f10f4:
    // 0x2f10f4: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f10f8: 0x220302d  daddu       $a2, $s1, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f10fc: 0x382d  daddu       $a3, $zero, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1100: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2f1100u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f1104:
    // 0x2f1104: 0xc0bfe28  jal         func_2FF8A0
    SET_GPR_U32(ctx, 31, 0x2F110Cu);
    ctx->pc = 0x2F1108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1104u;
    // 0x2f1108: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002FF8A0_0x2ff8a0, 0x2ff8a0u, 0x2f110cu)) {
        return;
    }
    ctx->pc = 0x2F110Cu;
label_2f110c:
    // 0x2f110c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F110Cu;
    {
        const bool branch_taken_0x2f110c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F110Cu;
        // 0x2f1110: 0x7bb00220  lq          $s0, 0x220($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f110c) {
            ctx->pc = 0x2F1124u;
            goto label_2f1124;
        }
    }
    ctx->pc = 0x2F1114u;
label_2f1114:
    // 0x2f1114: 0x220302d  daddu       $a2, $s1, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1118: 0xc0bfdd2  jal         func_2FF748
    SET_GPR_U32(ctx, 31, 0x2F1120u);
    ctx->pc = 0x2F111Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1118u;
    // 0x2f111c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002FF748_0x2ff748, 0x2ff748u, 0x2f1120u)) {
        return;
    }
    ctx->pc = 0x2F1120u;
label_2f1120:
    // 0x2f1120: 0x7bb00220  lq          $s0, 0x220($sp)
    ctx->pc = 0x2f1120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_2f1124:
    // 0x2f1124: 0x7bb10210  lq          $s1, 0x210($sp)
    ctx->pc = 0x2f1124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_2f1128:
    // 0x2f1128: 0x7bb20200  lq          $s2, 0x200($sp)
    ctx->pc = 0x2f1128u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2f112c: 0x7bb301f0  lq          $s3, 0x1F0($sp)
    ctx->pc = 0x2f112cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2f1130: 0x7bb401e0  lq          $s4, 0x1E0($sp)
    ctx->pc = 0x2f1130u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2f1134: 0x7bb501d0  lq          $s5, 0x1D0($sp)
    ctx->pc = 0x2f1134u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2f1138: 0x7bb601c0  lq          $s6, 0x1C0($sp)
    ctx->pc = 0x2f1138u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2f113c: 0x7bb701b0  lq          $s7, 0x1B0($sp)
    ctx->pc = 0x2f113cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2f1140: 0x7bbe01a0  lq          $fp, 0x1A0($sp)
    ctx->pc = 0x2f1140u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2f1144: 0xdfbf0190  ld          $ra, 0x190($sp)
    ctx->pc = 0x2f1144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2f1148: 0xc7ba0260  lwc1        $f26, 0x260($sp)
    ctx->pc = 0x2f1148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2f114c: 0xc7b90258  lwc1        $f25, 0x258($sp)
    ctx->pc = 0x2f114cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2f1150: 0xc7b80250  lwc1        $f24, 0x250($sp)
    ctx->pc = 0x2f1150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2f1154: 0xc7b70248  lwc1        $f23, 0x248($sp)
    ctx->pc = 0x2f1154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2f1158: 0xc7b60240  lwc1        $f22, 0x240($sp)
    ctx->pc = 0x2f1158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2f115c: 0xc7b50238  lwc1        $f21, 0x238($sp)
    ctx->pc = 0x2f115cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2f1160: 0xc7b40230  lwc1        $f20, 0x230($sp)
    ctx->pc = 0x2f1160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f1164: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1164u;
        // 0x2f1168: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x2f116c: 0x0  nop
    // NOP
    ctx->pc = 0x2f1170u;
}