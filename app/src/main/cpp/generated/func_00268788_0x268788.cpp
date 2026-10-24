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

// Function: func_00268788
// Address: 0x268788 - 0x268dc8
void func_00268788_0x268788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00268788_0x268788");
#endif

    switch (ctx->pc) {
        case 0x268854u: goto label_268854;
        case 0x268874u: goto label_268874;
        case 0x2688d0u: goto label_2688d0;
        case 0x268938u: goto label_268938;
        case 0x2689f0u: goto label_2689f0;
        case 0x268a70u: goto label_268a70;
        case 0x268b80u: goto label_268b80;
        case 0x268bf4u: goto label_268bf4;
        case 0x268c68u: goto label_268c68;
        case 0x268cdcu: goto label_268cdc;
        case 0x268d50u: goto label_268d50;
        default: break;
    }

    ctx->pc = 0x268788u;

    // 0x268788: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x268788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x26878c: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x26878cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x268790: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x268790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x268794: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x268794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x268798: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x268798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x26879c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26879cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2687a0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2687a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2687a4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2687a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2687a8: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x2687a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2687ac: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x2687acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2687b0: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x2687b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2687b4: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2687b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2687b8: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2687b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2687bc: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2687bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2687c0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2687c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2687c4: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2687c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2687c8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2687c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2687cc: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x2687ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2687d0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2687d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2687d4: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2687d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2687d8: 0xa3a4004c  sb          $a0, 0x4C($sp)
    ctx->pc = 0x2687d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x2687dc: 0xa3a3004f  sb          $v1, 0x4F($sp)
    ctx->pc = 0x2687dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x2687e0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2687e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2687e4: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2687e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x2687e8: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2687e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x2687ec: 0xa3a0004d  sb          $zero, 0x4D($sp)
    ctx->pc = 0x2687ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x2687f0: 0xa3a0004e  sb          $zero, 0x4E($sp)
    ctx->pc = 0x2687f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x2687f4: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2687f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2687f8: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2687f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2687fc: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x2687fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268800: 0x8e0216ec  lw          $v0, 0x16EC($s0)
    ctx->pc = 0x268800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5868)));
    // 0x268804: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x268804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x268808: 0xa7a00070  sh          $zero, 0x70($sp)
    ctx->pc = 0x268808u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x26880c: 0xa7a00072  sh          $zero, 0x72($sp)
    ctx->pc = 0x26880cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x268810: 0xa3a00074  sb          $zero, 0x74($sp)
    ctx->pc = 0x268810u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x268814: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x268814u;
    {
        const bool branch_taken_0x268814 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x268818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268814u;
        // 0x268818: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268814) {
            ctx->pc = 0x2688A4u;
            goto label_2688a4;
        }
    }
    ctx->pc = 0x26881Cu;
    // 0x26881c: 0x8e0316d0  lw          $v1, 0x16D0($s0)
    ctx->pc = 0x26881cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x268820: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x268820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x268824: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x268824u;
    {
        const bool branch_taken_0x268824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268824) {
            ctx->pc = 0x268828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268824u;
            // 0x268828: 0xc60016f0  lwc1        $f0, 0x16F0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x268878u;
            goto label_268878;
        }
    }
    ctx->pc = 0x26882Cu;
    // 0x26882c: 0x34620800  ori         $v0, $v1, 0x800
    ctx->pc = 0x26882cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x268830: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x268830u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x268834: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x268834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x268838: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x268838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26883c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26883cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268840: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x268840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268844: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x268844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x268848: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x268848u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x26884c: 0xc0c194a  jal         func_306528
    ctx->pc = 0x26884Cu;
    SET_GPR_U32(ctx, 31, 0x268854u);
    ctx->pc = 0x268850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26884Cu;
    // 0x268850: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x26884Cu, 0x268854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268854u;
label_268854:
    // 0x268854: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x268854u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x268858: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x268858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x26885c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x26885cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x268860: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x268860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268864: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x268864u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268868: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x268868u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26886c: 0xc0c194a  jal         func_306528
    ctx->pc = 0x26886Cu;
    SET_GPR_U32(ctx, 31, 0x268874u);
    ctx->pc = 0x268870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26886Cu;
    // 0x268870: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x26886Cu, 0x268874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268874u;
label_268874:
    // 0x268874: 0xc60016f0  lwc1        $f0, 0x16F0($s0)
    ctx->pc = 0x268874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268878:
    // 0x268878: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x268878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x26887c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26887cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x268880: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x268880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x268884: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x268884u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x268888: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x268888u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26888c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x26888cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268890: 0x0  nop
    ctx->pc = 0x268890u;
    // NOP
    // 0x268894: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x268894u;
    {
        const bool branch_taken_0x268894 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x268898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268894u;
        // 0x268898: 0xe60016f0  swc1        $f0, 0x16F0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5872), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x268894) {
            ctx->pc = 0x2688FCu;
            goto label_2688fc;
        }
    }
    ctx->pc = 0x26889Cu;
    // 0x26889c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x26889Cu;
    {
        const bool branch_taken_0x26889c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2688A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26889Cu;
        // 0x2688a0: 0xe60216f0  swc1        $f2, 0x16F0($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5872), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26889c) {
            ctx->pc = 0x2688FCu;
            goto label_2688fc;
        }
    }
    ctx->pc = 0x2688A4u;
label_2688a4:
    // 0x2688a4: 0x8e0316d0  lw          $v1, 0x16D0($s0)
    ctx->pc = 0x2688a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x2688a8: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x2688a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x2688ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2688ACu;
    {
        const bool branch_taken_0x2688ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2688B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2688ACu;
        // 0x2688b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2688ac) {
            ctx->pc = 0x2688D0u;
            goto label_2688d0;
        }
    }
    ctx->pc = 0x2688B4u;
    // 0x2688b4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2688b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2688b8: 0x3442f7ff  ori         $v0, $v0, 0xF7FF
    ctx->pc = 0x2688b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63487);
    // 0x2688bc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2688bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2688c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2688c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2688c4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2688c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2688c8: 0xc0c1880  jal         func_306200
    ctx->pc = 0x2688C8u;
    SET_GPR_U32(ctx, 31, 0x2688D0u);
    ctx->pc = 0x2688CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2688C8u;
    // 0x2688cc: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x2688C8u, 0x2688D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2688D0u;
label_2688d0:
    // 0x2688d0: 0xc60016f0  lwc1        $f0, 0x16F0($s0)
    ctx->pc = 0x2688d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2688d4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2688d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2688d8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2688d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2688dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2688dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2688e0: 0x0  nop
    ctx->pc = 0x2688e0u;
    // NOP
    // 0x2688e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2688e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2688e8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2688e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2688ec: 0x0  nop
    ctx->pc = 0x2688ecu;
    // NOP
    // 0x2688f0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2688F0u;
    {
        const bool branch_taken_0x2688f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2688F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2688F0u;
        // 0x2688f4: 0xe60016f0  swc1        $f0, 0x16F0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5872), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2688f0) {
            ctx->pc = 0x2688FCu;
            goto label_2688fc;
        }
    }
    ctx->pc = 0x2688F8u;
    // 0x2688f8: 0xe61416f0  swc1        $f20, 0x16F0($s0)
    ctx->pc = 0x2688f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5872), bits); }
label_2688fc:
    // 0x2688fc: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x2688fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x268900: 0x28620224  slti        $v0, $v1, 0x224
    ctx->pc = 0x268900u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)548) ? 1 : 0);
    // 0x268904: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x268904u;
    {
        const bool branch_taken_0x268904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268904u;
        // 0x268908: 0x28620220  slti        $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268904) {
            ctx->pc = 0x268914u;
            goto label_268914;
        }
    }
    ctx->pc = 0x26890Cu;
    // 0x26890c: 0x5040012a  beql        $v0, $zero, . + 4 + (0x12A << 2)
    ctx->pc = 0x26890Cu;
    {
        const bool branch_taken_0x26890c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26890c) {
            ctx->pc = 0x268910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26890Cu;
            // 0x268910: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268DB8u;
            goto label_268db8;
        }
    }
    ctx->pc = 0x268914u;
label_268914:
    // 0x268914: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x268914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x268918: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x268918u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x26891c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x26891cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x268920: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x268920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268924: 0x3c09003c  lui         $t1, 0x3C
    ctx->pc = 0x268924u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
    // 0x268928: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x268928u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x26892c: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x26892cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x268930: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x268930u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    // 0x268934: 0x2603178c  addiu       $v1, $s0, 0x178C
    ctx->pc = 0x268934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 6028));
label_268938:
    // 0x268938: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x268938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26893c: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x26893Cu;
    {
        const bool branch_taken_0x26893c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x268940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26893Cu;
        // 0x268940: 0xc523f8ac  lwc1        $f3, -0x754($t1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294965420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26893c) {
            ctx->pc = 0x2689ACu;
            goto label_2689ac;
        }
    }
    ctx->pc = 0x268944u;
    // 0x268944: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x268944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x268948: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x268948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x26894c: 0xc60016f0  lwc1        $f0, 0x16F0($s0)
    ctx->pc = 0x26894cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268950: 0x46032041  sub.s       $f1, $f4, $f3
    ctx->pc = 0x268950u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x268954: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x268954u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x268958: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x268958u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x26895c: 0xe48303a0  swc1        $f3, 0x3A0($a0)
    ctx->pc = 0x26895cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 928), bits); }
    // 0x268960: 0xc502f8b0  lwc1        $f2, -0x750($t0)
    ctx->pc = 0x268960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294965424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x268964: 0xc60016f0  lwc1        $f0, 0x16F0($s0)
    ctx->pc = 0x268964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268968: 0x46022041  sub.s       $f1, $f4, $f2
    ctx->pc = 0x268968u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x26896c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26896cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x268970: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x268970u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x268974: 0xe48203a4  swc1        $f2, 0x3A4($a0)
    ctx->pc = 0x268974u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 932), bits); }
    // 0x268978: 0xc4e3f8b4  lwc1        $f3, -0x74C($a3)
    ctx->pc = 0x268978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294965428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26897c: 0xc60016f0  lwc1        $f0, 0x16F0($s0)
    ctx->pc = 0x26897cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268980: 0x46032041  sub.s       $f1, $f4, $f3
    ctx->pc = 0x268980u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x268984: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x268984u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x268988: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x268988u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x26898c: 0xe48303a8  swc1        $f3, 0x3A8($a0)
    ctx->pc = 0x26898cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 936), bits); }
    // 0x268990: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x268990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x268994: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x268994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x268998: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x268998u;
    {
        const bool branch_taken_0x268998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268998) {
            ctx->pc = 0x26899Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268998u;
            // 0x26899c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2689B0u;
            goto label_2689b0;
        }
    }
    ctx->pc = 0x2689A0u;
    // 0x2689a0: 0xe48403a8  swc1        $f4, 0x3A8($a0)
    ctx->pc = 0x2689a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 936), bits); }
    // 0x2689a4: 0xe48503a0  swc1        $f5, 0x3A0($a0)
    ctx->pc = 0x2689a4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 928), bits); }
    // 0x2689a8: 0xe48503a4  swc1        $f5, 0x3A4($a0)
    ctx->pc = 0x2689a8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 932), bits); }
label_2689ac:
    // 0x2689ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2689acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2689b0:
    // 0x2689b0: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x2689b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2689b4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2689B4u;
    {
        const bool branch_taken_0x2689b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2689B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2689B4u;
        // 0x2689b8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2689b4) {
            ctx->pc = 0x268938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_268938;
        }
    }
    ctx->pc = 0x2689BCu;
    // 0x2689bc: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x2689bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x2689c0: 0x2442fdb0  addiu       $v0, $v0, -0x250
    ctx->pc = 0x2689c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966704));
    // 0x2689c4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2689c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2689c8: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2689C8u;
    {
        const bool branch_taken_0x2689c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2689CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2689C8u;
        // 0x2689cc: 0x26031774  addiu       $v1, $s0, 0x1774 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 6004));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2689c8) {
            ctx->pc = 0x268AD0u;
            goto label_268ad0;
        }
    }
    ctx->pc = 0x2689D0u;
    // 0x2689d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2689d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2689d4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2689d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2689d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2689d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2689dc: 0x26061780  addiu       $a2, $s0, 0x1780
    ctx->pc = 0x2689dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 6016));
    // 0x2689e0: 0x3c09003c  lui         $t1, 0x3C
    ctx->pc = 0x2689e0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
    // 0x2689e4: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x2689e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x2689e8: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x2689e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x2689ec: 0x0  nop
    ctx->pc = 0x2689ecu;
    // NOP
label_2689f0:
    // 0x2689f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2689f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2689f4: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2689F4u;
    {
        const bool branch_taken_0x2689f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2689F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2689F4u;
        // 0x2689f8: 0xc522f8ac  lwc1        $f2, -0x754($t1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294965420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2689f4) {
            ctx->pc = 0x268A40u;
            goto label_268a40;
        }
    }
    ctx->pc = 0x2689FCu;
    // 0x2689fc: 0xc60016f0  lwc1        $f0, 0x16F0($s0)
    ctx->pc = 0x2689fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268a00: 0x46022041  sub.s       $f1, $f4, $f2
    ctx->pc = 0x268a00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x268a04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x268a04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x268a08: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x268a08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x268a0c: 0xe48203a0  swc1        $f2, 0x3A0($a0)
    ctx->pc = 0x268a0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 928), bits); }
    // 0x268a10: 0xc503f8b0  lwc1        $f3, -0x750($t0)
    ctx->pc = 0x268a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294965424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x268a14: 0xc60016f0  lwc1        $f0, 0x16F0($s0)
    ctx->pc = 0x268a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268a18: 0x46032041  sub.s       $f1, $f4, $f3
    ctx->pc = 0x268a18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x268a1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x268a1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x268a20: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x268a20u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x268a24: 0xe48303a4  swc1        $f3, 0x3A4($a0)
    ctx->pc = 0x268a24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 932), bits); }
    // 0x268a28: 0xc4e2f8b4  lwc1        $f2, -0x74C($a3)
    ctx->pc = 0x268a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294965428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x268a2c: 0xc60016f0  lwc1        $f0, 0x16F0($s0)
    ctx->pc = 0x268a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268a30: 0x46022041  sub.s       $f1, $f4, $f2
    ctx->pc = 0x268a30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x268a34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x268a34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x268a38: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x268a38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x268a3c: 0xe48203a8  swc1        $f2, 0x3A8($a0)
    ctx->pc = 0x268a3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 936), bits); }
label_268a40:
    // 0x268a40: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x268a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x268a44: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x268a44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x268a48: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x268A48u;
    {
        const bool branch_taken_0x268a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268A48u;
        // 0x268a4c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268a48) {
            ctx->pc = 0x2689F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2689f0;
        }
    }
    ctx->pc = 0x268A50u;
    // 0x268a50: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x268a50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x268a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x268a58: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x268a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x268a5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x268a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a60: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x268a60u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x268a64: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x268a64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x268a68: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x268a68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x268a6c: 0x0  nop
    ctx->pc = 0x268a6cu;
    // NOP
label_268a70:
    // 0x268a70: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x268a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x268a74: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x268A74u;
    {
        const bool branch_taken_0x268a74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x268A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268A74u;
        // 0x268a78: 0xc502f8ac  lwc1        $f2, -0x754($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294965420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x268a74) {
            ctx->pc = 0x268AC0u;
            goto label_268ac0;
        }
    }
    ctx->pc = 0x268A7Cu;
    // 0x268a7c: 0xc60016f0  lwc1        $f0, 0x16F0($s0)
    ctx->pc = 0x268a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268a80: 0x46022041  sub.s       $f1, $f4, $f2
    ctx->pc = 0x268a80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x268a84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x268a84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x268a88: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x268a88u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x268a8c: 0xe48203a0  swc1        $f2, 0x3A0($a0)
    ctx->pc = 0x268a8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 928), bits); }
    // 0x268a90: 0xc4e3f8b0  lwc1        $f3, -0x750($a3)
    ctx->pc = 0x268a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294965424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x268a94: 0xc60016f0  lwc1        $f0, 0x16F0($s0)
    ctx->pc = 0x268a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268a98: 0x46032041  sub.s       $f1, $f4, $f3
    ctx->pc = 0x268a98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x268a9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x268a9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x268aa0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x268aa0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x268aa4: 0xe48303a4  swc1        $f3, 0x3A4($a0)
    ctx->pc = 0x268aa4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 932), bits); }
    // 0x268aa8: 0xc4c2f8b4  lwc1        $f2, -0x74C($a2)
    ctx->pc = 0x268aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294965428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x268aac: 0xc60016f0  lwc1        $f0, 0x16F0($s0)
    ctx->pc = 0x268aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268ab0: 0x46022041  sub.s       $f1, $f4, $f2
    ctx->pc = 0x268ab0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x268ab4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x268ab4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x268ab8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x268ab8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x268abc: 0xe48203a8  swc1        $f2, 0x3A8($a0)
    ctx->pc = 0x268abcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 936), bits); }
label_268ac0:
    // 0x268ac0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x268ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x268ac4: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x268ac4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x268ac8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x268AC8u;
    {
        const bool branch_taken_0x268ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268AC8u;
        // 0x268acc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ac8) {
            ctx->pc = 0x268A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_268a70;
        }
    }
    ctx->pc = 0x268AD0u;
label_268ad0:
    // 0x268ad0: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x268ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x268ad4: 0x2402020b  addiu       $v0, $zero, 0x20B
    ctx->pc = 0x268ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 523));
    // 0x268ad8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x268AD8u;
    {
        const bool branch_taken_0x268ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x268ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268AD8u;
        // 0x268adc: 0x2862020b  slti        $v0, $v1, 0x20B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)523) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ad8) {
            ctx->pc = 0x268AFCu;
            goto label_268afc;
        }
    }
    ctx->pc = 0x268AE0u;
    // 0x268ae0: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x268AE0u;
    {
        const bool branch_taken_0x268ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268AE0u;
        // 0x268ae4: 0x24020252  addiu       $v0, $zero, 0x252 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 594));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ae0) {
            ctx->pc = 0x268B68u;
            goto label_268b68;
        }
    }
    ctx->pc = 0x268AE8u;
    // 0x268ae8: 0x28620252  slti        $v0, $v1, 0x252
    ctx->pc = 0x268ae8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)594) ? 1 : 0);
    // 0x268aec: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x268AECu;
    {
        const bool branch_taken_0x268aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268AECu;
        // 0x268af0: 0x28620250  slti        $v0, $v1, 0x250 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)592) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268aec) {
            ctx->pc = 0x268B64u;
            goto label_268b64;
        }
    }
    ctx->pc = 0x268AF4u;
    // 0x268af4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x268AF4u;
    {
        const bool branch_taken_0x268af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268AF4u;
        // 0x268af8: 0x24020252  addiu       $v0, $zero, 0x252 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 594));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268af4) {
            ctx->pc = 0x268B68u;
            goto label_268b68;
        }
    }
    ctx->pc = 0x268AFCu;
label_268afc:
    // 0x268afc: 0x8e041798  lw          $a0, 0x1798($s0)
    ctx->pc = 0x268afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6040)));
    // 0x268b00: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x268B00u;
    {
        const bool branch_taken_0x268b00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x268B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268B00u;
        // 0x268b04: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268b00) {
            ctx->pc = 0x268B60u;
            goto label_268b60;
        }
    }
    ctx->pc = 0x268B08u;
    // 0x268b08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x268b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x268b0c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x268b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x268b10: 0xc442f8ac  lwc1        $f2, -0x754($v0)
    ctx->pc = 0x268b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x268b14: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x268b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x268b18: 0xc60016f0  lwc1        $f0, 0x16F0($s0)
    ctx->pc = 0x268b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268b1c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x268b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x268b20: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x268b20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x268b24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x268b24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x268b28: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x268b28u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x268b2c: 0xe48203a0  swc1        $f2, 0x3A0($a0)
    ctx->pc = 0x268b2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 928), bits); }
    // 0x268b30: 0xc461f8b0  lwc1        $f1, -0x750($v1)
    ctx->pc = 0x268b30u;
    { uint32_t bits = FAST_READ32(0x3BF8B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268b34: 0xc60016f0  lwc1        $f0, 0x16F0($s0)
    ctx->pc = 0x268b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268b38: 0x46011881  sub.s       $f2, $f3, $f1
    ctx->pc = 0x268b38u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x268b3c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x268b3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x268b40: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x268b40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x268b44: 0xe48103a4  swc1        $f1, 0x3A4($a0)
    ctx->pc = 0x268b44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 932), bits); }
    // 0x268b48: 0xc442f8b4  lwc1        $f2, -0x74C($v0)
    ctx->pc = 0x268b48u;
    { uint32_t bits = FAST_READ32(0x3BF8B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x268b4c: 0xc60016f0  lwc1        $f0, 0x16F0($s0)
    ctx->pc = 0x268b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268b50: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x268b50u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x268b54: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x268b54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x268b58: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x268b58u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x268b5c: 0xe48203a8  swc1        $f2, 0x3A8($a0)
    ctx->pc = 0x268b5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 936), bits); }
label_268b60:
    // 0x268b60: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x268b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_268b64:
    // 0x268b64: 0x24020252  addiu       $v0, $zero, 0x252
    ctx->pc = 0x268b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 594));
label_268b68:
    // 0x268b68: 0x54620093  bnel        $v1, $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x268B68u;
    {
        const bool branch_taken_0x268b68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x268b68) {
            ctx->pc = 0x268B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268B68u;
            // 0x268b6c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268DB8u;
            goto label_268db8;
        }
    }
    ctx->pc = 0x268B70u;
    // 0x268b70: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x268b70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x268b74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268b78: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x268B78u;
    SET_GPR_U32(ctx, 31, 0x268B80u);
    ctx->pc = 0x268B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268B78u;
    // 0x268b7c: 0x24a55200  addiu       $a1, $a1, 0x5200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x268B78u, 0x268B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268B80u;
label_268b80:
    // 0x268b80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x268b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268b84: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x268B84u;
    {
        const bool branch_taken_0x268b84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x268B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268B84u;
        // 0x268b88: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268b84) {
            ctx->pc = 0x268BE4u;
            goto label_268be4;
        }
    }
    ctx->pc = 0x268B8Cu;
    // 0x268b8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x268b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x268b90: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x268b90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x268b94: 0xc442f8ac  lwc1        $f2, -0x754($v0)
    ctx->pc = 0x268b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x268b98: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x268b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x268b9c: 0xc60016f0  lwc1        $f0, 0x16F0($s0)
    ctx->pc = 0x268b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268ba0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x268ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x268ba4: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x268ba4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x268ba8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x268ba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x268bac: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x268bacu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x268bb0: 0xe48203a0  swc1        $f2, 0x3A0($a0)
    ctx->pc = 0x268bb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 928), bits); }
    // 0x268bb4: 0xc461f8b0  lwc1        $f1, -0x750($v1)
    ctx->pc = 0x268bb4u;
    { uint32_t bits = FAST_READ32(0x3BF8B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268bb8: 0xc60016f0  lwc1        $f0, 0x16F0($s0)
    ctx->pc = 0x268bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268bbc: 0x46011881  sub.s       $f2, $f3, $f1
    ctx->pc = 0x268bbcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x268bc0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x268bc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x268bc4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x268bc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x268bc8: 0xe48103a4  swc1        $f1, 0x3A4($a0)
    ctx->pc = 0x268bc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 932), bits); }
    // 0x268bcc: 0xc442f8b4  lwc1        $f2, -0x74C($v0)
    ctx->pc = 0x268bccu;
    { uint32_t bits = FAST_READ32(0x3BF8B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x268bd0: 0xc60016f0  lwc1        $f0, 0x16F0($s0)
    ctx->pc = 0x268bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268bd4: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x268bd4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x268bd8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x268bd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x268bdc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x268bdcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x268be0: 0xe48203a8  swc1        $f2, 0x3A8($a0)
    ctx->pc = 0x268be0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 936), bits); }
label_268be4:
    // 0x268be4: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x268be4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x268be8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268bec: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x268BECu;
    SET_GPR_U32(ctx, 31, 0x268BF4u);
    ctx->pc = 0x268BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268BECu;
    // 0x268bf0: 0x24a55208  addiu       $a1, $a1, 0x5208 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x268BECu, 0x268BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268BF4u;
label_268bf4:
    // 0x268bf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x268bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268bf8: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x268BF8u;
    {
        const bool branch_taken_0x268bf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x268BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268BF8u;
        // 0x268bfc: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268bf8) {
            ctx->pc = 0x268C58u;
            goto label_268c58;
        }
    }
    ctx->pc = 0x268C00u;
    // 0x268c00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x268c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x268c04: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x268c04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x268c08: 0xc442f8ac  lwc1        $f2, -0x754($v0)
    ctx->pc = 0x268c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x268c0c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x268c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x268c10: 0xc60016f0  lwc1        $f0, 0x16F0($s0)
    ctx->pc = 0x268c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268c14: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x268c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x268c18: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x268c18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x268c1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x268c1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x268c20: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x268c20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x268c24: 0xe48203a0  swc1        $f2, 0x3A0($a0)
    ctx->pc = 0x268c24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 928), bits); }
    // 0x268c28: 0xc461f8b0  lwc1        $f1, -0x750($v1)
    ctx->pc = 0x268c28u;
    { uint32_t bits = FAST_READ32(0x3BF8B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268c2c: 0xc60016f0  lwc1        $f0, 0x16F0($s0)
    ctx->pc = 0x268c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268c30: 0x46011881  sub.s       $f2, $f3, $f1
    ctx->pc = 0x268c30u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x268c34: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x268c34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x268c38: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x268c38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x268c3c: 0xe48103a4  swc1        $f1, 0x3A4($a0)
    ctx->pc = 0x268c3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 932), bits); }
    // 0x268c40: 0xc442f8b4  lwc1        $f2, -0x74C($v0)
    ctx->pc = 0x268c40u;
    { uint32_t bits = FAST_READ32(0x3BF8B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x268c44: 0xc60016f0  lwc1        $f0, 0x16F0($s0)
    ctx->pc = 0x268c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268c48: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x268c48u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x268c4c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x268c4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x268c50: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x268c50u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x268c54: 0xe48203a8  swc1        $f2, 0x3A8($a0)
    ctx->pc = 0x268c54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 936), bits); }
label_268c58:
    // 0x268c58: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x268c58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x268c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268c60: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x268C60u;
    SET_GPR_U32(ctx, 31, 0x268C68u);
    ctx->pc = 0x268C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268C60u;
    // 0x268c64: 0x24a55210  addiu       $a1, $a1, 0x5210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x268C60u, 0x268C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268C68u;
label_268c68:
    // 0x268c68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x268c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268c6c: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x268C6Cu;
    {
        const bool branch_taken_0x268c6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x268C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C6Cu;
        // 0x268c70: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c6c) {
            ctx->pc = 0x268CCCu;
            goto label_268ccc;
        }
    }
    ctx->pc = 0x268C74u;
    // 0x268c74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x268c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x268c78: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x268c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x268c7c: 0xc442f8ac  lwc1        $f2, -0x754($v0)
    ctx->pc = 0x268c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x268c80: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x268c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x268c84: 0xc60016f0  lwc1        $f0, 0x16F0($s0)
    ctx->pc = 0x268c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268c88: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x268c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x268c8c: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x268c8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x268c90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x268c90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x268c94: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x268c94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x268c98: 0xe48203a0  swc1        $f2, 0x3A0($a0)
    ctx->pc = 0x268c98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 928), bits); }
    // 0x268c9c: 0xc461f8b0  lwc1        $f1, -0x750($v1)
    ctx->pc = 0x268c9cu;
    { uint32_t bits = FAST_READ32(0x3BF8B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268ca0: 0xc60016f0  lwc1        $f0, 0x16F0($s0)
    ctx->pc = 0x268ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268ca4: 0x46011881  sub.s       $f2, $f3, $f1
    ctx->pc = 0x268ca4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x268ca8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x268ca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x268cac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x268cacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x268cb0: 0xe48103a4  swc1        $f1, 0x3A4($a0)
    ctx->pc = 0x268cb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 932), bits); }
    // 0x268cb4: 0xc442f8b4  lwc1        $f2, -0x74C($v0)
    ctx->pc = 0x268cb4u;
    { uint32_t bits = FAST_READ32(0x3BF8B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x268cb8: 0xc60016f0  lwc1        $f0, 0x16F0($s0)
    ctx->pc = 0x268cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268cbc: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x268cbcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x268cc0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x268cc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x268cc4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x268cc4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x268cc8: 0xe48203a8  swc1        $f2, 0x3A8($a0)
    ctx->pc = 0x268cc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 936), bits); }
label_268ccc:
    // 0x268ccc: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x268cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x268cd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268cd4: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x268CD4u;
    SET_GPR_U32(ctx, 31, 0x268CDCu);
    ctx->pc = 0x268CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268CD4u;
    // 0x268cd8: 0x24a55218  addiu       $a1, $a1, 0x5218 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x268CD4u, 0x268CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268CDCu;
label_268cdc:
    // 0x268cdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x268cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268ce0: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x268CE0u;
    {
        const bool branch_taken_0x268ce0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x268CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268CE0u;
        // 0x268ce4: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ce0) {
            ctx->pc = 0x268D40u;
            goto label_268d40;
        }
    }
    ctx->pc = 0x268CE8u;
    // 0x268ce8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x268ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x268cec: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x268cecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x268cf0: 0xc442f8ac  lwc1        $f2, -0x754($v0)
    ctx->pc = 0x268cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x268cf4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x268cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x268cf8: 0xc60016f0  lwc1        $f0, 0x16F0($s0)
    ctx->pc = 0x268cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268cfc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x268cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x268d00: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x268d00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x268d04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x268d04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x268d08: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x268d08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x268d0c: 0xe48203a0  swc1        $f2, 0x3A0($a0)
    ctx->pc = 0x268d0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 928), bits); }
    // 0x268d10: 0xc461f8b0  lwc1        $f1, -0x750($v1)
    ctx->pc = 0x268d10u;
    { uint32_t bits = FAST_READ32(0x3BF8B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268d14: 0xc60016f0  lwc1        $f0, 0x16F0($s0)
    ctx->pc = 0x268d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268d18: 0x46011881  sub.s       $f2, $f3, $f1
    ctx->pc = 0x268d18u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x268d1c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x268d1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x268d20: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x268d20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x268d24: 0xe48103a4  swc1        $f1, 0x3A4($a0)
    ctx->pc = 0x268d24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 932), bits); }
    // 0x268d28: 0xc442f8b4  lwc1        $f2, -0x74C($v0)
    ctx->pc = 0x268d28u;
    { uint32_t bits = FAST_READ32(0x3BF8B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x268d2c: 0xc60016f0  lwc1        $f0, 0x16F0($s0)
    ctx->pc = 0x268d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268d30: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x268d30u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x268d34: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x268d34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x268d38: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x268d38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x268d3c: 0xe48203a8  swc1        $f2, 0x3A8($a0)
    ctx->pc = 0x268d3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 936), bits); }
label_268d40:
    // 0x268d40: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x268d40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x268d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268d48: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x268D48u;
    SET_GPR_U32(ctx, 31, 0x268D50u);
    ctx->pc = 0x268D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268D48u;
    // 0x268d4c: 0x24a55220  addiu       $a1, $a1, 0x5220 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x268D48u, 0x268D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268D50u;
label_268d50:
    // 0x268d50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x268d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268d54: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x268D54u;
    {
        const bool branch_taken_0x268d54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x268D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D54u;
        // 0x268d58: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d54) {
            ctx->pc = 0x268DB4u;
            goto label_268db4;
        }
    }
    ctx->pc = 0x268D5Cu;
    // 0x268d5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x268d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x268d60: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x268d60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x268d64: 0xc442f8ac  lwc1        $f2, -0x754($v0)
    ctx->pc = 0x268d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x268d68: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x268d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x268d6c: 0xc60016f0  lwc1        $f0, 0x16F0($s0)
    ctx->pc = 0x268d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268d70: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x268d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x268d74: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x268d74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x268d78: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x268d78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x268d7c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x268d7cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x268d80: 0xe48203a0  swc1        $f2, 0x3A0($a0)
    ctx->pc = 0x268d80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 928), bits); }
    // 0x268d84: 0xc461f8b0  lwc1        $f1, -0x750($v1)
    ctx->pc = 0x268d84u;
    { uint32_t bits = FAST_READ32(0x3BF8B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268d88: 0xc60016f0  lwc1        $f0, 0x16F0($s0)
    ctx->pc = 0x268d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268d8c: 0x46011881  sub.s       $f2, $f3, $f1
    ctx->pc = 0x268d8cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x268d90: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x268d90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x268d94: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x268d94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x268d98: 0xe48103a4  swc1        $f1, 0x3A4($a0)
    ctx->pc = 0x268d98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 932), bits); }
    // 0x268d9c: 0xc442f8b4  lwc1        $f2, -0x74C($v0)
    ctx->pc = 0x268d9cu;
    { uint32_t bits = FAST_READ32(0x3BF8B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x268da0: 0xc60016f0  lwc1        $f0, 0x16F0($s0)
    ctx->pc = 0x268da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268da4: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x268da4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x268da8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x268da8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x268dac: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x268dacu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x268db0: 0xe48203a8  swc1        $f2, 0x3A8($a0)
    ctx->pc = 0x268db0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 936), bits); }
label_268db4:
    // 0x268db4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x268db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_268db8:
    // 0x268db8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x268db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x268dbc: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x268dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x268dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x268DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DC0u;
        // 0x268dc4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268DC8u;
}
