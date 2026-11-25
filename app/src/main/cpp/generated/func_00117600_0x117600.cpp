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

// Function: func_00117600
// Address: 0x117600 - 0x1177f8
void func_00117600_0x117600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00117600_0x117600");
#endif

    if (__builtin_expect(ctx->pc != 0x117600u, 0)) {
        switch (ctx->pc) {
            case 0x117650u: goto label_117650;
            case 0x117660u: goto label_117660;
            case 0x11766cu: goto label_11766c;
            case 0x1176a0u: goto label_1176a0;
            case 0x1176a8u: goto label_1176a8;
            case 0x11770cu: goto label_11770c;
            case 0x117720u: goto label_117720;
            case 0x117730u: goto label_117730;
            case 0x117760u: goto label_117760;
            case 0x117798u: goto label_117798;
            case 0x1177acu: goto label_1177ac;
            case 0x1177d0u: goto label_1177d0;
            case 0x1177dcu: goto label_1177dc;
            default: break;
        }
    }


    // 0x117600: 0x27bdffa0  addiu       $sp, $sp, -0x60
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x117604: 0x3c030001  lui         $v1, 0x1
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x117608: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x117608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11760c: 0x302d  daddu       $a2, $zero, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117610: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x117610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x117614: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x117614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x117618: 0x80882d  daddu       $s1, $a0, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11761c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11761cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x117620: 0x3c040046  lui         $a0, 0x46
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x117624: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x117624u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x117628: 0x220282d  daddu       $a1, $s1, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11762c: 0x3c0140a0  lui         $at, 0x40A0
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x117630: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117634: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x117638: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x117638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x11763c: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x11763cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x117640: 0x431025  or          $v0, $v0, $v1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x117644: 0x8e320694  lw          $s2, 0x694($s1)
    ctx->pc = 0x117644u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    // 0x117648: 0xc04d476  jal         func_1351D8
    SET_GPR_U32(ctx, 31, 0x117650u);
    ctx->pc = 0x11764Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117648u;
    // 0x11764c: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x117648u, 0x117650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117650u;
label_117650:
    // 0x117650: 0x3c100058  lui         $s0, 0x58
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x117654: 0x261064f0  addiu       $s0, $s0, 0x64F0
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x117658: 0xc0a4c3c  jal         func_2930F0
    SET_GPR_U32(ctx, 31, 0x117660u);
    ctx->pc = 0x11765Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117658u;
    // 0x11765c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmManage_SetPlCatched_0x2930f0, 0x2930f0u, 0x117660u)) {
        return;
    }
    ctx->pc = 0x117660u;
label_117660:
    // 0x117660: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117664: 0xc0a480c  jal         func_292030
    SET_GPR_U32(ctx, 31, 0x11766Cu);
    ctx->pc = 0x117668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117664u;
    // 0x117668: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmManage_SetSlotWait_0x292030, 0x292030u, 0x11766cu)) {
        return;
    }
    ctx->pc = 0x11766Cu;
label_11766c:
    // 0x11766c: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x11766cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x117670: 0x3c030008  lui         $v1, 0x8
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x117674: 0x922402f6  lbu         $a0, 0x2F6($s1)
    ctx->pc = 0x117674u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x117678: 0x431025  or          $v0, $v0, $v1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11767c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11767Cu;
    {
        const bool branch_taken_0x11767c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x117680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11767Cu;
        // 0x117680: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11767c) {
            ctx->pc = 0x117698u;
            goto label_117698;
        }
    }
    // 0x117684: 0x24020001  addiu       $v0, $zero, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117688: 0x10820033  beq         $a0, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x117688u;
    {
        const bool branch_taken_0x117688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117688u;
        // 0x11768c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117688) {
            ctx->pc = 0x117758u;
            goto label_117758;
        }
    }
    // 0x117690: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x117690u;
    {
        const bool branch_taken_0x117690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117690u;
        // 0x117694: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117690) {
            ctx->pc = 0x1177E4u;
            goto label_1177e4;
        }
    }
    ctx->pc = 0x117698u;
label_117698:
    // 0x117698: 0xc04ab0a  jal         func_12AC28
    SET_GPR_U32(ctx, 31, 0x1176A0u);
    ctx->pc = 0x11769Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117698u;
    // 0x11769c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &CallWithAndClearField698_12AC28_0x12ac28, 0x12ac28u, 0x1176a0u)) {
        return;
    }
    ctx->pc = 0x1176A0u;
label_1176a0:
    // 0x1176a0: 0xc04ae4a  jal         func_12B928
    SET_GPR_U32(ctx, 31, 0x1176A8u);
    ctx->pc = 0x1176A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1176A0u;
    // 0x1176a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0012B928_0x12b928, 0x12b928u, 0x1176a8u)) {
        return;
    }
    ctx->pc = 0x1176A8u;
label_1176a8:
    // 0x1176a8: 0xc6410110  lwc1        $f1, 0x110($s2)
    ctx->pc = 0x1176a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1176ac: 0x382d  daddu       $a3, $zero, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1176b0: 0xc6420118  lwc1        $f2, 0x118($s2)
    ctx->pc = 0x1176b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1176b4: 0x3a0302d  daddu       $a2, $sp, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1176b8: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1176bc: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1176c0: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1176c4: 0x3c01bf15  lui         $at, 0xBF15
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48917 << 16));
    // 0x1176c8: 0x34218e22  ori         $at, $at, 0x8E22
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36386);
    // 0x1176cc: 0x44812000  mtc1        $at, $f4
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1176d0: 0x240282d  daddu       $a1, $s2, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1176d4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x1176d8: 0x3c013e0c  lui         $at, 0x3E0C
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15884 << 16));
    // 0x1176dc: 0x3421e704  ori         $at, $at, 0xE704
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59140);
    // 0x1176e0: 0x44811800  mtc1        $at, $f3
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1176e4: 0x46020083  div.s       $f2, $f0, $f2
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x1176e8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1176e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1176ec: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1176ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1176f0: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x1176f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1176f4: 0x4600a306  mov.s       $f12, $f20
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1176f8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1176fc: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x117700: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x117700u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x117704: 0xc04a67c  jal         func_1299F0
    SET_GPR_U32(ctx, 31, 0x11770Cu);
    ctx->pc = 0x117708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117704u;
    // 0x117708: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001299F0_0x1299f0, 0x1299f0u, 0x11770cu)) {
        return;
    }
    ctx->pc = 0x11770Cu;
label_11770c:
    // 0x11770c: 0x4600a306  mov.s       $f12, $f20
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x117710: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117714: 0x46006346  mov.s       $f13, $f12
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x117718: 0xc08e8c0  jal         func_23A300
    SET_GPR_U32(ctx, 31, 0x117720u);
    ctx->pc = 0x11771Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117718u;
    // 0x11771c: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cEm00_GetPlMotion_0x23a300, 0x23a300u, 0x117720u)) {
        return;
    }
    ctx->pc = 0x117720u;
label_117720:
    // 0x117720: 0x3c040057  lui         $a0, 0x57
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x117724: 0x24050064  addiu       $a1, $zero, 0x64
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x117728: 0xc07e8a0  jal         func_1FA280
    SET_GPR_U32(ctx, 31, 0x117730u);
    ctx->pc = 0x11772Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117728u;
    // 0x11772c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cCoreSave_addGameLevelPoint_0x1fa280, 0x1fa280u, 0x117730u)) {
        return;
    }
    ctx->pc = 0x117730u;
label_117730:
    // 0x117730: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x117730u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x117734: 0x5c400004  bgtzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x117734u;
    {
        const bool branch_taken_0x117734 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x117734) {
            ctx->pc = 0x117738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117734u;
            // 0x117738: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117748u;
            goto label_117748;
        }
    }
    // 0x11773c: 0x24020001  addiu       $v0, $zero, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117740: 0xa622054a  sh          $v0, 0x54A($s1)
    ctx->pc = 0x117740u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x117744: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x117744u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_117748:
    // 0x117748: 0x2403001e  addiu       $v1, $zero, 0x1E
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x11774c: 0xa623056e  sh          $v1, 0x56E($s1)
    ctx->pc = 0x11774cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x117750: 0x24420001  addiu       $v0, $v0, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x117754: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x117754u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_117758:
    // 0x117758: 0xc0493b0  jal         func_124EC0
    SET_GPR_U32(ctx, 31, 0x117760u);
    ctx->pc = 0x11775Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117758u;
    // 0x11775c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00124EC0_0x124ec0, 0x124ec0u, 0x117760u)) {
        return;
    }
    ctx->pc = 0x117760u;
label_117760:
    // 0x117760: 0x8622056e  lh          $v0, 0x56E($s1)
    ctx->pc = 0x117760u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
    // 0x117764: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x117764u;
    {
        const bool branch_taken_0x117764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117764u;
        // 0x117768: 0x9623056e  lhu         $v1, 0x56E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117764) {
            ctx->pc = 0x117790u;
            goto label_117790;
        }
    }
    // 0x11776c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x11776Cu;
    {
        const bool branch_taken_0x11776c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x117770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11776Cu;
        // 0x117770: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11776c) {
            ctx->pc = 0x117790u;
            goto label_117790;
        }
    }
    // 0x117774: 0x26440550  addiu       $a0, $s2, 0x550
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
    // 0x117778: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x117778u;
    if (ps2xPatchFlag("fps60")) {
        static PS2Runtime::RecompiledFunction hook = nullptr;
        if (!hook) hook = ps2xHostHook("km_fps60_pl56e_store_s1");
        if (hook) hook(rdram, ctx, runtime);
    } else {
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    }
    // 0x11777c: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x11777cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x117780: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x117780u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x117784: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x117784u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x117788: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x11778c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x11778cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_117790:
    // 0x117790: 0xc055f06  jal         func_157C18
    SET_GPR_U32(ctx, 31, 0x117798u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117790u;
    // 0x117794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x117790u, 0x117798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117798u;
label_117798:
    // 0x117798: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x117798u;
    {
        const bool branch_taken_0x117798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117798u;
        // 0x11779c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117798) {
            ctx->pc = 0x1177BCu;
            goto label_1177bc;
        }
    }
    // 0x1177a0: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1177a4: 0xc0493d8  jal         func_124F60
    SET_GPR_U32(ctx, 31, 0x1177ACu);
    ctx->pc = 0x1177A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1177A4u;
    // 0x1177a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &pl00_clearMotionCam_0x124f60, 0x124f60u, 0x1177acu)) {
        return;
    }
    ctx->pc = 0x1177ACu;
label_1177ac:
    // 0x1177ac: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x1177acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1177b0: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1177b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1177b4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1177b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1177b8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1177b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1177bc:
    // 0x1177bc: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1177c0: 0x4481a000  mtc1        $at, $f20
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1177c4: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1177c8: 0xc053e7c  jal         func_14F9F0
    SET_GPR_U32(ctx, 31, 0x1177D0u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1177C8u;
    // 0x1177cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x1177C8u, 0x1177D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1177D0u;
label_1177d0:
    // 0x1177d0: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1177d4: 0xc053e4a  jal         func_14F928
    SET_GPR_U32(ctx, 31, 0x1177DCu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1177D4u;
    // 0x1177d8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1177D4u, 0x1177DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1177DCu;
label_1177dc:
    // 0x1177dc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1177dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1177e0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1177e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1177e4:
    // 0x1177e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1177e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1177e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1177e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1177ec: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1177ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1177f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1177F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1177F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1177F0u;
        // 0x1177f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1177F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1177F8u;
}