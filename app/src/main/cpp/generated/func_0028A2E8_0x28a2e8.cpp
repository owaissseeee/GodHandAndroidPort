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

// Function: func_0028A2E8
// Address: 0x28a2e8 - 0x28a4a0
void func_0028A2E8_0x28a2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028A2E8_0x28a2e8");
#endif

    switch (ctx->pc) {
        case 0x28a39cu: goto label_28a39c;
        case 0x28a414u: goto label_28a414;
        case 0x28a45cu: goto label_28a45c;
        default: break;
    }

    ctx->pc = 0x28a2e8u;

    // 0x28a2e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28a2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28a2ec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x28a2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x28a2f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28a2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28a2f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28a2f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a2f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28a2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28a2fc: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x28a2fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x28a300: 0x58400062  blezl       $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x28A300u;
    {
        const bool branch_taken_0x28a300 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x28a300) {
            ctx->pc = 0x28A304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A300u;
            // 0x28a304: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A48Cu;
            goto label_28a48c;
        }
    }
    ctx->pc = 0x28A308u;
    // 0x28a308: 0x8e030670  lw          $v1, 0x670($s0)
    ctx->pc = 0x28a308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
    // 0x28a30c: 0x5060005f  beql        $v1, $zero, . + 4 + (0x5F << 2)
    ctx->pc = 0x28A30Cu;
    {
        const bool branch_taken_0x28a30c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a30c) {
            ctx->pc = 0x28A310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A30Cu;
            // 0x28a310: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A48Cu;
            goto label_28a48c;
        }
    }
    ctx->pc = 0x28A314u;
    // 0x28a314: 0x9c620060  lwu         $v0, 0x60($v1)
    ctx->pc = 0x28a314u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x28a318: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28a318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28a31c: 0x5040005b  beql        $v0, $zero, . + 4 + (0x5B << 2)
    ctx->pc = 0x28A31Cu;
    {
        const bool branch_taken_0x28a31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a31c) {
            ctx->pc = 0x28A320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A31Cu;
            // 0x28a320: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A48Cu;
            goto label_28a48c;
        }
    }
    ctx->pc = 0x28A324u;
    // 0x28a324: 0xc601054c  lwc1        $f1, 0x54C($s0)
    ctx->pc = 0x28a324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a328: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28a328u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28a32c: 0x0  nop
    ctx->pc = 0x28a32cu;
    // NOP
    // 0x28a330: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x28a330u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28a334: 0x0  nop
    ctx->pc = 0x28a334u;
    // NOP
    // 0x28a338: 0x45030054  bc1tl       . + 4 + (0x54 << 2)
    ctx->pc = 0x28A338u;
    {
        const bool branch_taken_0x28a338 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28a338) {
            ctx->pc = 0x28A33Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A338u;
            // 0x28a33c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A48Cu;
            goto label_28a48c;
        }
    }
    ctx->pc = 0x28A340u;
    // 0x28a340: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x28a340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x28a344: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x28A344u;
    {
        const bool branch_taken_0x28a344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a344) {
            ctx->pc = 0x28A348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A344u;
            // 0x28a348: 0x8e020670  lw          $v0, 0x670($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A3B4u;
            goto label_28a3b4;
        }
    }
    ctx->pc = 0x28A34Cu;
    // 0x28a34c: 0x944302fe  lhu         $v1, 0x2FE($v0)
    ctx->pc = 0x28a34cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
    // 0x28a350: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x28a350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x28a354: 0x54620017  bnel        $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x28A354u;
    {
        const bool branch_taken_0x28a354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28a354) {
            ctx->pc = 0x28A358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A354u;
            // 0x28a358: 0x8e020670  lw          $v0, 0x670($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A3B4u;
            goto label_28a3b4;
        }
    }
    ctx->pc = 0x28A35Cu;
    // 0x28a35c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x28a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x28a360: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x28a360u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28a364: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x28a364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x28a368: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x28a368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x28a36c: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x28a36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28a370: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x28a370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x28a374: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x28a374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x28a378: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x28a378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x28a37c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x28a37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x28a380: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x28a380u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x28a384: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x28a384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x28a388: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28a388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a38c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28a38cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a390: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x28a390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a394: 0xc0a4404  jal         func_291010
    ctx->pc = 0x28A394u;
    SET_GPR_U32(ctx, 31, 0x28A39Cu);
    ctx->pc = 0x28A398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A394u;
    // 0x28a398: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x28A394u, 0x28A39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A39Cu;
label_28a39c:
    // 0x28a39c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28A39Cu;
    {
        const bool branch_taken_0x28a39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a39c) {
            ctx->pc = 0x28A3A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A39Cu;
            // 0x28a3a0: 0x8e020670  lw          $v0, 0x670($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A3B4u;
            goto label_28a3b4;
        }
    }
    ctx->pc = 0x28A3A4u;
    // 0x28a3a4: 0x8e0215a0  lw          $v0, 0x15A0($s0)
    ctx->pc = 0x28a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5536)));
    // 0x28a3a8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x28a3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x28a3ac: 0xae0215a0  sw          $v0, 0x15A0($s0)
    ctx->pc = 0x28a3acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5536), GPR_U32(ctx, 2));
    // 0x28a3b0: 0x8e020670  lw          $v0, 0x670($s0)
    ctx->pc = 0x28a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
label_28a3b4:
    // 0x28a3b4: 0x8611054a  lh          $s1, 0x54A($s0)
    ctx->pc = 0x28a3b4u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x28a3b8: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x28a3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x28a3bc: 0x86040548  lh          $a0, 0x548($s0)
    ctx->pc = 0x28a3bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x28a3c0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x28a3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28a3c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28a3c8: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x28a3c8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x28a3cc: 0x11182a  slt         $v1, $zero, $s1
    ctx->pc = 0x28a3ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x28a3d0: 0x3880a  movz        $s1, $zero, $v1
    ctx->pc = 0x28a3d0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x28a3d4: 0x224202a  slt         $a0, $s1, $a0
    ctx->pc = 0x28a3d4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x28a3d8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28A3D8u;
    {
        const bool branch_taken_0x28a3d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A3D8u;
        // 0x28a3dc: 0x96050548  lhu         $a1, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a3d8) {
            ctx->pc = 0x28A3E8u;
            goto label_28a3e8;
        }
    }
    ctx->pc = 0x28A3E0u;
    // 0x28a3e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28A3E0u;
    {
        const bool branch_taken_0x28a3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A3E0u;
        // 0x28a3e4: 0xa605054a  sh          $a1, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a3e0) {
            ctx->pc = 0x28A3ECu;
            goto label_28a3ec;
        }
    }
    ctx->pc = 0x28A3E8u;
label_28a3e8:
    // 0x28a3e8: 0xa611054a  sh          $s1, 0x54A($s0)
    ctx->pc = 0x28a3e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 17));
label_28a3ec:
    // 0x28a3ec: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x28a3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x28a3f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a3f4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x28a3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x28a3f8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x28a3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28a3fc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x28a3fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a400: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28a400u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a404: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28a404u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a408: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x28a408u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a40c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x28A40Cu;
    SET_GPR_U32(ctx, 31, 0x28A414u);
    ctx->pc = 0x28A410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A40Cu;
    // 0x28a410: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x28A40Cu, 0x28A414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A414u;
label_28a414:
    // 0x28a414: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x28a414u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x28a418: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x28a418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28a41c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28a41cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28a420: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28A420u;
    {
        const bool branch_taken_0x28a420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A420u;
        // 0x28a424: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a420) {
            ctx->pc = 0x28A434u;
            goto label_28a434;
        }
    }
    ctx->pc = 0x28A428u;
    // 0x28a428: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x28a428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x28a42c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28A42Cu;
    {
        const bool branch_taken_0x28a42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A42Cu;
        // 0x28a430: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a42c) {
            ctx->pc = 0x28A438u;
            goto label_28a438;
        }
    }
    ctx->pc = 0x28A434u;
label_28a434:
    // 0x28a434: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28a434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28a438:
    // 0x28a438: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28A438u;
    {
        const bool branch_taken_0x28a438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A438u;
        // 0x28a43c: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a438) {
            ctx->pc = 0x28A45Cu;
            goto label_28a45c;
        }
    }
    ctx->pc = 0x28A440u;
    // 0x28a440: 0x8c4700f0  lw          $a3, 0xF0($v0)
    ctx->pc = 0x28a440u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x28a444: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28a444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28a448: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28a448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28a44c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x28a44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28a450: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28a450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a454: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x28A454u;
    SET_GPR_U32(ctx, 31, 0x28A45Cu);
    ctx->pc = 0x28A458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A454u;
    // 0x28a458: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x28A454u, 0x28A45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A45Cu;
label_28a45c:
    // 0x28a45c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x28a45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x28a460: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28a460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28a464: 0x0  nop
    ctx->pc = 0x28a464u;
    // NOP
    // 0x28a468: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x28a468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x28a46c: 0x1e200002  bgtz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x28A46Cu;
    {
        const bool branch_taken_0x28a46c = (GPR_S64(ctx, 17) > 0);
        ctx->pc = 0x28A470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A46Cu;
        // 0x28a470: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a46c) {
            ctx->pc = 0x28A478u;
            goto label_28a478;
        }
    }
    ctx->pc = 0x28A474u;
    // 0x28a474: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28a474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28a478:
    // 0x28a478: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x28a478u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a47c: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x28a47cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x28a480: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x28a480u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a484: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x28a484u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a488: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x28a488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28a48c:
    // 0x28a48c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28a48cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28a490: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28a490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a494: 0x3e00008  jr          $ra
    ctx->pc = 0x28A494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A494u;
        // 0x28a498: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A49Cu;
    // 0x28a49c: 0x0  nop
    ctx->pc = 0x28a49cu;
    // NOP
    ctx->pc = 0x28a4a0u;
}
