#include "godhand/frame_patches.h"
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

// Function: func_001215C8
// Address: 0x1215c8 - 0x121798
void func_001215C8_0x1215c8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001215C8_0x1215c8");
#endif

    if (__builtin_expect(ctx->pc != 0x1215c8u, 0)) {
        switch (ctx->pc) {
            case 0x121614u: goto label_121614;
            case 0x121620u: goto label_121620;
            case 0x121644u: goto label_121644;
            case 0x12164cu: goto label_12164c;
            case 0x121698u: goto label_121698;
            case 0x1216acu: goto label_1216ac;
            case 0x1216ccu: goto label_1216cc;
            case 0x121710u: goto label_121710;
            case 0x121718u: goto label_121718;
            case 0x12172cu: goto label_12172c;
            case 0x121750u: goto label_121750;
            case 0x12175cu: goto label_12175c;
            case 0x121768u: goto label_121768;
            case 0x12177cu: goto label_12177c;
            default: break;
        }
    }


    // 0x1215c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1215cc: 0x3c030001  lui         $v1, 0x1
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1215d0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1215d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1215d4: 0x302d  daddu       $a2, $zero, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1215d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1215d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1215dc: 0x80802d  daddu       $s0, $a0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1215e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1215e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1215e4: 0x3c040046  lui         $a0, 0x46
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1215e8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1215e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1215ec: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x1215f0: 0x3c0140a0  lui         $at, 0x40A0
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1215f4: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1215f8: 0x200282d  daddu       $a1, $s0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1215fc: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x1215fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x121600: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x121600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x121604: 0x431025  or          $v0, $v0, $v1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x121608: 0x8e110694  lw          $s1, 0x694($s0)
    ctx->pc = 0x121608u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1684)));
    // 0x12160c: 0xc04d476  jal         func_1351D8
    SET_GPR_U32(ctx, 31, 0x121614u);
    ctx->pc = 0x121610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12160Cu;
    // 0x121610: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x12160Cu, 0x121614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_121614:
    // 0x121614: 0x3c040058  lui         $a0, 0x58
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x121618: 0xc0a4c3c  jal         func_2930F0
    SET_GPR_U32(ctx, 31, 0x121620u);
    ctx->pc = 0x12161Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121618u;
    // 0x12161c: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmManage_SetPlCatched_0x2930f0, 0x2930f0u, 0x121620u)) {
        return;
    }
label_121620:
    // 0x121620: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x121620u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x121624: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x121624u;
    {
        const bool branch_taken_0x121624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x121628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121624u;
        // 0x121628: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121624) {
            ctx->pc = 0x12163Cu;
            goto label_12163c;
        }
    }
    // 0x12162c: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x12162Cu;
    {
        const bool branch_taken_0x12162c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x121630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12162Cu;
        // 0x121630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12162c) {
            ctx->pc = 0x1216D8u;
            goto label_1216d8;
        }
    }
    // 0x121634: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x121634u;
    {
        const bool branch_taken_0x121634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121634) {
            ctx->pc = 0x121760u;
            goto label_121760;
        }
    }
label_12163c:
    // 0x12163c: 0xc04ab0a  jal         func_12AC28
    SET_GPR_U32(ctx, 31, 0x121644u);
    ctx->pc = 0x121640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12163Cu;
    // 0x121640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &CallWithAndClearField698_12AC28_0x12ac28, 0x12ac28u, 0x121644u)) {
        return;
    }
label_121644:
    // 0x121644: 0xc04ae4a  jal         func_12B928
    SET_GPR_U32(ctx, 31, 0x12164Cu);
    ctx->pc = 0x121648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121644u;
    // 0x121648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0012B928_0x12b928, 0x12b928u, 0x12164cu)) {
        return;
    }
label_12164c:
    // 0x12164c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x12164cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x121650: 0x382d  daddu       $a3, $zero, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121654: 0x3c01be83  lui         $at, 0xBE83
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48771 << 16));
    // 0x121658: 0x3421a29c  ori         $at, $at, 0xA29C
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41628);
    // 0x12165c: 0x44811000  mtc1        $at, $f2
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x121660: 0x3a0302d  daddu       $a2, $sp, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121664: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x121664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x121668: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12166c: 0x3c013fd2  lui         $at, 0x3FD2
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16338 << 16));
    // 0x121670: 0x3421161e  ori         $at, $at, 0x161E
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5662);
    // 0x121674: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x121678: 0x220282d  daddu       $a1, $s1, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12167c: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x121680: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121684: 0x4600a306  mov.s       $f12, $f20
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x121688: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x121688u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x12168c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x12168cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x121690: 0xc04a67c  jal         func_1299F0
    SET_GPR_U32(ctx, 31, 0x121698u);
    ctx->pc = 0x121694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121690u;
    // 0x121694: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001299F0_0x1299f0, 0x1299f0u, 0x121698u)) {
        return;
    }
label_121698:
    // 0x121698: 0x4600a306  mov.s       $f12, $f20
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x12169c: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1216a0: 0x46006346  mov.s       $f13, $f12
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1216a4: 0xc08e8c0  jal         func_23A300
    SET_GPR_U32(ctx, 31, 0x1216ACu);
    ctx->pc = 0x1216A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1216A4u;
    // 0x1216a8: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cEm00_GetPlMotion_0x23a300, 0x23a300u, 0x1216acu)) {
        return;
    }
label_1216ac:
    // 0x1216ac: 0x24020001  addiu       $v0, $zero, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1216b0: 0x2403000f  addiu       $v1, $zero, 0xF
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1216b4: 0x3c040057  lui         $a0, 0x57
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1216b8: 0xae0215b0  sw          $v0, 0x15B0($s0)
    ctx->pc = 0x1216b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 2));
    // 0x1216bc: 0xa603056e  sh          $v1, 0x56E($s0)
    ctx->pc = 0x1216bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x1216c0: 0x24849b70  addiu       $a0, $a0, -0x6490
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1216c4: 0xc07e8a0  jal         func_1FA280
    SET_GPR_U32(ctx, 31, 0x1216CCu);
    ctx->pc = 0x1216C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1216C4u;
    // 0x1216c8: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cCoreSave_addGameLevelPoint_0x1fa280, 0x1fa280u, 0x1216ccu)) {
        return;
    }
label_1216cc:
    // 0x1216cc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1216ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1216d0: 0x24420001  addiu       $v0, $v0, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1216d4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1216d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1216d8:
    // 0x1216d8: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x1216d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
    // 0x1216dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1216DCu;
    {
        const bool branch_taken_0x1216dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1216E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1216DCu;
        // 0x1216e0: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1216dc) {
            ctx->pc = 0x121708u;
            goto label_121708;
        }
    }
    // 0x1216e4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1216E4u;
    {
        const bool branch_taken_0x1216e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1216E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1216E4u;
        // 0x1216e8: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1216e4) {
            ctx->pc = 0x121708u;
            goto label_121708;
        }
    }
    // 0x1216ec: 0x26240550  addiu       $a0, $s1, 0x550
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x1216f0: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x1216f0u;
    if (ps2xPatchFlag("fps60")) {
        static PS2Runtime::RecompiledFunction hook = nullptr;
        if (!hook) hook = ps2xHostHook("km_fps60_pl56e_store_s0");
        if (hook) hook(rdram, ctx, runtime);
    } else {
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
    }
    // 0x1216f4: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x1216f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1216f8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1216f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1216fc: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x1216fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x121700: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x121704: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x121704u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_121708:
    // 0x121708: 0xc0493b0  jal         func_124EC0
    SET_GPR_U32(ctx, 31, 0x121710u);
    ctx->pc = 0x12170Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121708u;
    // 0x12170c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00124EC0_0x124ec0, 0x124ec0u, 0x121710u)) {
        return;
    }
label_121710:
    // 0x121710: 0xc055f06  jal         func_157C18
    SET_GPR_U32(ctx, 31, 0x121718u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121710u;
    // 0x121714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x121710u, 0x121718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_121718:
    // 0x121718: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x121718u;
    {
        const bool branch_taken_0x121718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121718u;
        // 0x12171c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121718) {
            ctx->pc = 0x12173Cu;
            goto label_12173c;
        }
    }
    // 0x121720: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121724: 0xc0493d8  jal         func_124F60
    SET_GPR_U32(ctx, 31, 0x12172Cu);
    ctx->pc = 0x121728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121724u;
    // 0x121728: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &pl00_clearMotionCam_0x124f60, 0x124f60u, 0x12172cu)) {
        return;
    }
label_12172c:
    // 0x12172c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x12172cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x121730: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x121730u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x121734: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x121734u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x121738: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x121738u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_12173c:
    // 0x12173c: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x121740: 0x4481a000  mtc1        $at, $f20
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x121744: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121748: 0xc053e7c  jal         func_14F9F0
    SET_GPR_U32(ctx, 31, 0x121750u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121748u;
    // 0x12174c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x121748u, 0x121750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_121750:
    // 0x121750: 0x4600a306  mov.s       $f12, $f20
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x121754: 0xc053e4a  jal         func_14F928
    SET_GPR_U32(ctx, 31, 0x12175Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121754u;
    // 0x121758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x121754u, 0x12175Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_12175c:
    // 0x12175c: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_121760:
    // 0x121760: 0xc048e4e  jal         func_123938
    SET_GPR_U32(ctx, 31, 0x121768u);
    ctx->pc = 0x121764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121760u;
    // 0x121764: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00123938_0x123938, 0x123938u, 0x121768u)) {
        return;
    }
label_121768:
    // 0x121768: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x121768u;
    {
        const bool branch_taken_0x121768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121768u;
        // 0x12176c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121768) {
            ctx->pc = 0x12177Cu;
            goto label_12177c;
        }
    }
    // 0x121770: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121774: 0xc0493d8  jal         func_124F60
    SET_GPR_U32(ctx, 31, 0x12177Cu);
    ctx->pc = 0x121778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121774u;
    // 0x121778: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &pl00_clearMotionCam_0x124f60, 0x124f60u, 0x12177cu)) {
        return;
    }
label_12177c:
    // 0x12177c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x12177cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x121780: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x121780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x121784: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x121784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121788: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x121788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12178c: 0x3e00008  jr          $ra
    ctx->pc = 0x12178Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12178Cu;
        // 0x121790: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12178Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x121794: 0x0  nop
    // NOP
    ctx->pc = 0x121798u;
}