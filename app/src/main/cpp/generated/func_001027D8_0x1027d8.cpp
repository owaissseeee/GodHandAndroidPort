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

// Function: func_001027D8
// Address: 0x1027d8 - 0x102938
void func_001027D8_0x1027d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001027D8_0x1027d8");
#endif

    switch (ctx->pc) {
        case 0x1027f4u: goto label_1027f4;
        case 0x102840u: goto label_102840;
        case 0x1028ecu: goto label_1028ec;
        case 0x102900u: goto label_102900;
        case 0x10290cu: goto label_10290c;
        case 0x102918u: goto label_102918;
        case 0x102920u: goto label_102920;
        default: break;
    }

    ctx->pc = 0x1027d8u;

    // 0x1027d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1027d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1027dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1027dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1027e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1027e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1027e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1027e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1027e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1027e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1027ec: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1027ECu;
    SET_GPR_U32(ctx, 31, 0x1027F4u);
    ctx->pc = 0x1027F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1027ECu;
    // 0x1027f0: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1027ECu, 0x1027F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1027F4u;
label_1027f4:
    // 0x1027f4: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1027f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1027f8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1027F8u;
    {
        const bool branch_taken_0x1027f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1027FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027F8u;
        // 0x1027fc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1027f8) {
            ctx->pc = 0x102814u;
            goto label_102814;
        }
    }
    ctx->pc = 0x102800u;
    // 0x102800: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x102800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102804: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x102804u;
    {
        const bool branch_taken_0x102804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x102808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102804u;
        // 0x102808: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102804) {
            ctx->pc = 0x102850u;
            goto label_102850;
        }
    }
    ctx->pc = 0x10280Cu;
    // 0x10280c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x10280Cu;
    {
        const bool branch_taken_0x10280c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10280c) {
            ctx->pc = 0x102918u;
            goto label_102918;
        }
    }
    ctx->pc = 0x102814u;
label_102814:
    // 0x102814: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x102814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x102818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10281c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x10281cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x102820: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x102820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x102824: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x102824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x102828: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x102828u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10282c: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x10282cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x102830: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x102830u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102834: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x102834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x102838: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x102838u;
    SET_GPR_U32(ctx, 31, 0x102840u);
    ctx->pc = 0x10283Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102838u;
    // 0x10283c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x102838u, 0x102840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102840u;
label_102840:
    // 0x102840: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x102840u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x102844: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x102844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x102848: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x102848u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x10284c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x10284cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_102850:
    // 0x102850: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x102850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
    // 0x102854: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x102854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31352)));
    // 0x102858: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x102858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x10285c: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x10285Cu;
    {
        const bool branch_taken_0x10285c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10285c) {
            ctx->pc = 0x1028F0u;
            goto label_1028f0;
        }
    }
    ctx->pc = 0x102864u;
    // 0x102864: 0x9222061f  lbu         $v0, 0x61F($s1)
    ctx->pc = 0x102864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1567)));
    // 0x102868: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x102868u;
    {
        const bool branch_taken_0x102868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102868) {
            ctx->pc = 0x1028F0u;
            goto label_1028f0;
        }
    }
    ctx->pc = 0x102870u;
    // 0x102870: 0xc6210608  lwc1        $f1, 0x608($s1)
    ctx->pc = 0x102870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x102874: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x102874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x102878: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x102878u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x10287c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10287cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x102880: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x102880u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x102884: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x102884u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x102888: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x102888u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10288c: 0x0  nop
    ctx->pc = 0x10288cu;
    // NOP
    // 0x102890: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x102890u;
    {
        const bool branch_taken_0x102890 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x102890) {
            ctx->pc = 0x102894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102890u;
            // 0x102894: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x102898u;
            goto label_102898;
        }
    }
    ctx->pc = 0x102898u;
label_102898:
    // 0x102898: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x102898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x10289c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10289cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1028a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1028a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1028a4: 0x3c013d86  lui         $at, 0x3D86
    ctx->pc = 0x1028a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15750 << 16));
    // 0x1028a8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1028a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x1028ac: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1028acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1028b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1028b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1028b4: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x1028b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1028b8: 0x0  nop
    ctx->pc = 0x1028b8u;
    // NOP
    // 0x1028bc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1028BCu;
    {
        const bool branch_taken_0x1028bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1028bc) {
            ctx->pc = 0x1028C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1028BCu;
            // 0x1028c0: 0x46001846  mov.s       $f1, $f3 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1028C4u;
            goto label_1028c4;
        }
    }
    ctx->pc = 0x1028C4u;
label_1028c4:
    // 0x1028c4: 0xc6200604  lwc1        $f0, 0x604($s1)
    ctx->pc = 0x1028c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1028c8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1028c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1028cc: 0x0  nop
    ctx->pc = 0x1028ccu;
    // NOP
    // 0x1028d0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1028D0u;
    {
        const bool branch_taken_0x1028d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1028d0) {
            ctx->pc = 0x1028D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1028D0u;
            // 0x1028d4: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1028D8u;
            goto label_1028d8;
        }
    }
    ctx->pc = 0x1028D8u;
label_1028d8:
    // 0x1028d8: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x1028d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1028dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1028dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1028e0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1028e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1028e4: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1028E4u;
    SET_GPR_U32(ctx, 31, 0x1028ECu);
    ctx->pc = 0x1028E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1028E4u;
    // 0x1028e8: 0xe6000104  swc1        $f0, 0x104($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1028E4u, 0x1028ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1028ECu;
label_1028ec:
    // 0x1028ec: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x1028ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_1028f0:
    // 0x1028f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1028f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1028f4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1028f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1028f8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1028F8u;
    SET_GPR_U32(ctx, 31, 0x102900u);
    ctx->pc = 0x1028FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1028F8u;
    // 0x1028fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1028F8u, 0x102900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102900u;
label_102900:
    // 0x102900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102904: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x102904u;
    SET_GPR_U32(ctx, 31, 0x10290Cu);
    ctx->pc = 0x102908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102904u;
    // 0x102908: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x102904u, 0x10290Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10290Cu;
label_10290c:
    // 0x10290c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10290cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x102910: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x102910u;
    SET_GPR_U32(ctx, 31, 0x102918u);
    ctx->pc = 0x102914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102910u;
    // 0x102914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x102910u, 0x102918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102918u;
label_102918:
    // 0x102918: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x102918u;
    SET_GPR_U32(ctx, 31, 0x102920u);
    ctx->pc = 0x10291Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102918u;
    // 0x10291c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1034E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1034E0u, 0x102918u, 0x102920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102920u;
label_102920:
    // 0x102920: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x102920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102924: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x102924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x102928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10292c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x10292cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x102930: 0x3e00008  jr          $ra
    ctx->pc = 0x102930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102930u;
        // 0x102934: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102938u;
}
