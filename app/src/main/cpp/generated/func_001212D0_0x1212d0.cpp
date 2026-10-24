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

// Function: func_001212D0
// Address: 0x1212d0 - 0x1215c8
void func_001212D0_0x1212d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001212D0_0x1212d0");
#endif

    switch (ctx->pc) {
        case 0x12131cu: goto label_12131c;
        case 0x121328u: goto label_121328;
        case 0x12134cu: goto label_12134c;
        case 0x121354u: goto label_121354;
        case 0x1213a0u: goto label_1213a0;
        case 0x1213b4u: goto label_1213b4;
        case 0x1213ecu: goto label_1213ec;
        case 0x1213f8u: goto label_1213f8;
        case 0x121408u: goto label_121408;
        case 0x12144cu: goto label_12144c;
        case 0x121454u: goto label_121454;
        case 0x121474u: goto label_121474;
        case 0x1214b4u: goto label_1214b4;
        case 0x1214c0u: goto label_1214c0;
        case 0x121504u: goto label_121504;
        case 0x121510u: goto label_121510;
        case 0x121560u: goto label_121560;
        case 0x12157cu: goto label_12157c;
        case 0x12158cu: goto label_12158c;
        case 0x1215a4u: goto label_1215a4;
        default: break;
    }

    ctx->pc = 0x1212d0u;

    // 0x1212d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1212d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1212d4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1212d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1212d8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1212d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1212dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1212dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1212e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1212e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1212e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1212e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1212e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1212e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1212ec: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1212ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1212f0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1212f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1212f4: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x1212f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x1212f8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1212f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1212fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1212fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121300: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x121300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121304: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x121304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x121308: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x121308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x12130c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12130cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x121310: 0x8e110694  lw          $s1, 0x694($s0)
    ctx->pc = 0x121310u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1684)));
    // 0x121314: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x121314u;
    SET_GPR_U32(ctx, 31, 0x12131Cu);
    ctx->pc = 0x121318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121314u;
    // 0x121318: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x121314u, 0x12131Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12131Cu;
label_12131c:
    // 0x12131c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x12131cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x121320: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x121320u;
    SET_GPR_U32(ctx, 31, 0x121328u);
    ctx->pc = 0x121324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121320u;
    // 0x121324: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x121320u, 0x121328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121328u;
label_121328:
    // 0x121328: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x121328u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x12132c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12132Cu;
    {
        const bool branch_taken_0x12132c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x121330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12132Cu;
        // 0x121330: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12132c) {
            ctx->pc = 0x121344u;
            goto label_121344;
        }
    }
    ctx->pc = 0x121334u;
    // 0x121334: 0x50620038  beql        $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x121334u;
    {
        const bool branch_taken_0x121334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x121334) {
            ctx->pc = 0x121338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121334u;
            // 0x121338: 0x8602056e  lh          $v0, 0x56E($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121418u;
            goto label_121418;
        }
    }
    ctx->pc = 0x12133Cu;
    // 0x12133c: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x12133Cu;
    {
        const bool branch_taken_0x12133c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12133Cu;
        // 0x121340: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12133c) {
            ctx->pc = 0x1215B4u;
            goto label_1215b4;
        }
    }
    ctx->pc = 0x121344u;
label_121344:
    // 0x121344: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x121344u;
    SET_GPR_U32(ctx, 31, 0x12134Cu);
    ctx->pc = 0x121348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121344u;
    // 0x121348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x121344u, 0x12134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12134Cu;
label_12134c:
    // 0x12134c: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x12134Cu;
    SET_GPR_U32(ctx, 31, 0x121354u);
    ctx->pc = 0x121350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12134Cu;
    // 0x121350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x12134Cu, 0x121354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121354u;
label_121354:
    // 0x121354: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x121354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x121358: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x121358u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12135c: 0x3c01be73  lui         $at, 0xBE73
    ctx->pc = 0x12135cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48755 << 16));
    // 0x121360: 0x342181d8  ori         $at, $at, 0x81D8
    ctx->pc = 0x121360u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33240);
    // 0x121364: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x121364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x121368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12136c: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x12136cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x121370: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x121370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121374: 0x3c013fc5  lui         $at, 0x3FC5
    ctx->pc = 0x121374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16325 << 16));
    // 0x121378: 0x3421288d  ori         $at, $at, 0x288D
    ctx->pc = 0x121378u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10381);
    // 0x12137c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12137cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x121380: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x121380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121384: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x121384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x121388: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x121388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12138c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12138cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x121390: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x121390u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x121394: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x121394u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x121398: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x121398u;
    SET_GPR_U32(ctx, 31, 0x1213A0u);
    ctx->pc = 0x12139Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121398u;
    // 0x12139c: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x121398u, 0x1213A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1213A0u;
label_1213a0:
    // 0x1213a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1213a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1213a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1213a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1213a8: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x1213a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1213ac: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x1213ACu;
    SET_GPR_U32(ctx, 31, 0x1213B4u);
    ctx->pc = 0x1213B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1213ACu;
    // 0x1213b0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x1213ACu, 0x1213B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1213B4u;
label_1213b4:
    // 0x1213b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1213b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1213b8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1213b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1213bc: 0xae0315b4  sw          $v1, 0x15B4($s0)
    ctx->pc = 0x1213bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5556), GPR_U32(ctx, 3));
    // 0x1213c0: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x1213c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x1213c4: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1213C4u;
    {
        const bool branch_taken_0x1213c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1213C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1213C4u;
        // 0x1213c8: 0xae0315b0  sw          $v1, 0x15B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1213c4) {
            ctx->pc = 0x1213ECu;
            goto label_1213ec;
        }
    }
    ctx->pc = 0x1213CCu;
    // 0x1213cc: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1213ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1213d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1213d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1213d4: 0xc620076c  lwc1        $f0, 0x76C($s1)
    ctx->pc = 0x1213d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1213d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1213d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1213dc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1213dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1213e0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1213e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1213e4: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x1213E4u;
    SET_GPR_U32(ctx, 31, 0x1213ECu);
    ctx->pc = 0x1213E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1213E4u;
    // 0x1213e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x1213E4u, 0x1213ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1213ECu;
label_1213ec:
    // 0x1213ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1213ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1213f0: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x1213F0u;
    SET_GPR_U32(ctx, 31, 0x1213F8u);
    ctx->pc = 0x1213F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1213F0u;
    // 0x1213f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x1213F0u, 0x1213F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1213F8u;
label_1213f8:
    // 0x1213f8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1213f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1213fc: 0x2405fec0  addiu       $a1, $zero, -0x140
    ctx->pc = 0x1213fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    // 0x121400: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x121400u;
    SET_GPR_U32(ctx, 31, 0x121408u);
    ctx->pc = 0x121404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121400u;
    // 0x121404: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x121400u, 0x121408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121408u;
label_121408:
    // 0x121408: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x121408u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x12140c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12140cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x121410: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x121410u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x121414: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x121414u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
label_121418:
    // 0x121418: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x121418u;
    {
        const bool branch_taken_0x121418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121418u;
        // 0x12141c: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121418) {
            ctx->pc = 0x121444u;
            goto label_121444;
        }
    }
    ctx->pc = 0x121420u;
    // 0x121420: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x121420u;
    {
        const bool branch_taken_0x121420 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x121424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121420u;
        // 0x121424: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121420) {
            ctx->pc = 0x121444u;
            goto label_121444;
        }
    }
    ctx->pc = 0x121428u;
    // 0x121428: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x121428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x12142c: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x12142cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x121430: 0x26230550  addiu       $v1, $s1, 0x550
    ctx->pc = 0x121430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x121434: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x121434u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x121438: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x121438u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12143c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x12143cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x121440: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x121440u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_121444:
    // 0x121444: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x121444u;
    SET_GPR_U32(ctx, 31, 0x12144Cu);
    ctx->pc = 0x121448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121444u;
    // 0x121448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x121444u, 0x12144Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12144Cu;
label_12144c:
    // 0x12144c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x12144Cu;
    SET_GPR_U32(ctx, 31, 0x121454u);
    ctx->pc = 0x121450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12144Cu;
    // 0x121450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x12144Cu, 0x121454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121454u;
label_121454:
    // 0x121454: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x121454u;
    {
        const bool branch_taken_0x121454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121454) {
            ctx->pc = 0x1214A0u;
            goto label_1214a0;
        }
    }
    ctx->pc = 0x12145Cu;
    // 0x12145c: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x12145cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x121460: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x121460u;
    {
        const bool branch_taken_0x121460 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x121464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121460u;
        // 0x121464: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121460) {
            ctx->pc = 0x121490u;
            goto label_121490;
        }
    }
    ctx->pc = 0x121468u;
    // 0x121468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12146c: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x12146Cu;
    SET_GPR_U32(ctx, 31, 0x121474u);
    ctx->pc = 0x121470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12146Cu;
    // 0x121470: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x12146Cu, 0x121474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121474u;
label_121474:
    // 0x121474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x121474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121478: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x121478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12147c: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x12147cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x121480: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x121480u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x121484: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x121484u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x121488: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x121488u;
    {
        const bool branch_taken_0x121488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121488u;
        // 0x12148c: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121488) {
            ctx->pc = 0x1214A0u;
            goto label_1214a0;
        }
    }
    ctx->pc = 0x121490u;
label_121490:
    // 0x121490: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x121490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x121494: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x121494u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x121498: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x121498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x12149c: 0xac627a24  sw          $v0, 0x7A24($v1)
    ctx->pc = 0x12149cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A24u, _value); } while (0);
label_1214a0:
    // 0x1214a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1214a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1214a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1214a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1214a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1214a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1214ac: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x1214ACu;
    SET_GPR_U32(ctx, 31, 0x1214B4u);
    ctx->pc = 0x1214B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1214ACu;
    // 0x1214b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x1214ACu, 0x1214B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1214B4u;
label_1214b4:
    // 0x1214b4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1214b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1214b8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1214B8u;
    SET_GPR_U32(ctx, 31, 0x1214C0u);
    ctx->pc = 0x1214BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1214B8u;
    // 0x1214bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1214B8u, 0x1214C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1214C0u;
label_1214c0:
    // 0x1214c0: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x1214c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x1214c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1214c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1214c8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1214C8u;
    {
        const bool branch_taken_0x1214c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1214CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1214C8u;
        // 0x1214cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1214c8) {
            ctx->pc = 0x121518u;
            goto label_121518;
        }
    }
    ctx->pc = 0x1214D0u;
    // 0x1214d0: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x1214d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x1214d4: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1214D4u;
    {
        const bool branch_taken_0x1214d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1214d4) {
            ctx->pc = 0x1214D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1214D4u;
            // 0x1214d8: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121520u;
            goto label_121520;
        }
    }
    ctx->pc = 0x1214DCu;
    // 0x1214dc: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1214DCu;
    {
        const bool branch_taken_0x1214dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1214E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1214DCu;
        // 0x1214e0: 0xae0015b0  sw          $zero, 0x15B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1214dc) {
            ctx->pc = 0x121504u;
            goto label_121504;
        }
    }
    ctx->pc = 0x1214E4u;
    // 0x1214e4: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1214e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1214e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1214e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1214ec: 0xc620076c  lwc1        $f0, 0x76C($s1)
    ctx->pc = 0x1214ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1214f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1214f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1214f4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1214f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1214f8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1214f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1214fc: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x1214FCu;
    SET_GPR_U32(ctx, 31, 0x121504u);
    ctx->pc = 0x121500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1214FCu;
    // 0x121500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x1214FCu, 0x121504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121504u;
label_121504:
    // 0x121504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121508: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x121508u;
    SET_GPR_U32(ctx, 31, 0x121510u);
    ctx->pc = 0x12150Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121508u;
    // 0x12150c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x121508u, 0x121510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121510u;
label_121510:
    // 0x121510: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x121510u;
    {
        const bool branch_taken_0x121510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121510u;
        // 0x121514: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121510) {
            ctx->pc = 0x121520u;
            goto label_121520;
        }
    }
    ctx->pc = 0x121518u;
label_121518:
    // 0x121518: 0xae0215b0  sw          $v0, 0x15B0($s0)
    ctx->pc = 0x121518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 2));
    // 0x12151c: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x12151cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_121520:
    // 0x121520: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x121520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x121524: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x121524u;
    {
        const bool branch_taken_0x121524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121524u;
        // 0x121528: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121524) {
            ctx->pc = 0x1215ACu;
            goto label_1215ac;
        }
    }
    ctx->pc = 0x12152Cu;
    // 0x12152c: 0x8e0215b4  lw          $v0, 0x15B4($s0)
    ctx->pc = 0x12152cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x121530: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x121530u;
    {
        const bool branch_taken_0x121530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121530) {
            ctx->pc = 0x121534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121530u;
            // 0x121534: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1215B4u;
            goto label_1215b4;
        }
    }
    ctx->pc = 0x121538u;
    // 0x121538: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x121538u;
    {
        const bool branch_taken_0x121538 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121538u;
        // 0x12153c: 0xae0015b4  sw          $zero, 0x15B4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121538) {
            ctx->pc = 0x121560u;
            goto label_121560;
        }
    }
    ctx->pc = 0x121540u;
    // 0x121540: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x121540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x121544: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x121544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x121548: 0xc620076c  lwc1        $f0, 0x76C($s1)
    ctx->pc = 0x121548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12154c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12154cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x121550: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x121550u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x121554: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x121554u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x121558: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x121558u;
    SET_GPR_U32(ctx, 31, 0x121560u);
    ctx->pc = 0x12155Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121558u;
    // 0x12155c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x121558u, 0x121560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121560u;
label_121560:
    // 0x121560: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x121560u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x121564: 0x1c40000d  bgtz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x121564u;
    {
        const bool branch_taken_0x121564 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x121568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121564u;
        // 0x121568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121564) {
            ctx->pc = 0x12159Cu;
            goto label_12159c;
        }
    }
    ctx->pc = 0x12156Cu;
    // 0x12156c: 0xa600054a  sh          $zero, 0x54A($s0)
    ctx->pc = 0x12156cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x121570: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x121570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x121574: 0xc0b29c6  jal         func_2CA718
    ctx->pc = 0x121574u;
    SET_GPR_U32(ctx, 31, 0x12157Cu);
    ctx->pc = 0x121578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121574u;
    // 0x121578: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA718u, 0x121574u, 0x12157Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12157Cu;
label_12157c:
    // 0x12157c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x12157cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x121580: 0x2405fc18  addiu       $a1, $zero, -0x3E8
    ctx->pc = 0x121580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    // 0x121584: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x121584u;
    SET_GPR_U32(ctx, 31, 0x12158Cu);
    ctx->pc = 0x121588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121584u;
    // 0x121588: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x121584u, 0x12158Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12158Cu;
label_12158c:
    // 0x12158c: 0x96020434  lhu         $v0, 0x434($s0)
    ctx->pc = 0x12158cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1076)));
    // 0x121590: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x121590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x121594: 0xa6020434  sh          $v0, 0x434($s0)
    ctx->pc = 0x121594u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1076), (uint16_t)GPR_U32(ctx, 2));
    // 0x121598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12159c:
    // 0x12159c: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x12159Cu;
    SET_GPR_U32(ctx, 31, 0x1215A4u);
    ctx->pc = 0x1215A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12159Cu;
    // 0x1215a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x12159Cu, 0x1215A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1215A4u;
label_1215a4:
    // 0x1215a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1215A4u;
    {
        const bool branch_taken_0x1215a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1215A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1215A4u;
        // 0x1215a8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1215a4) {
            ctx->pc = 0x1215B4u;
            goto label_1215b4;
        }
    }
    ctx->pc = 0x1215ACu;
label_1215ac:
    // 0x1215ac: 0xae0215b4  sw          $v0, 0x15B4($s0)
    ctx->pc = 0x1215acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5556), GPR_U32(ctx, 2));
    // 0x1215b0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1215b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1215b4:
    // 0x1215b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1215b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1215b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1215b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1215bc: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1215bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1215c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1215C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1215C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1215C0u;
        // 0x1215c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1215C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1215C8u;
}
