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

// Function: func_00283AA8
// Address: 0x283aa8 - 0x283be8
void func_00283AA8_0x283aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00283AA8_0x283aa8");
#endif

    switch (ctx->pc) {
        case 0x283b2cu: goto label_283b2c;
        case 0x283b4cu: goto label_283b4c;
        case 0x283b64u: goto label_283b64;
        case 0x283b98u: goto label_283b98;
        case 0x283bd4u: goto label_283bd4;
        default: break;
    }

    ctx->pc = 0x283aa8u;

    // 0x283aa8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x283aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x283aac: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x283aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x283ab0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x283ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x283ab4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x283ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x283ab8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x283ab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283abc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x283abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x283ac0: 0xae22218c  sw          $v0, 0x218C($s1)
    ctx->pc = 0x283ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8588), GPR_U32(ctx, 2));
    // 0x283ac4: 0x8e2421b0  lw          $a0, 0x21B0($s1)
    ctx->pc = 0x283ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8624)));
    // 0x283ac8: 0x5080003f  beql        $a0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x283AC8u;
    {
        const bool branch_taken_0x283ac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x283ac8) {
            ctx->pc = 0x283ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283AC8u;
            // 0x283acc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283BC8u;
            goto label_283bc8;
        }
    }
    ctx->pc = 0x283AD0u;
    // 0x283ad0: 0x8482054a  lh          $v0, 0x54A($a0)
    ctx->pc = 0x283ad0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1354)));
    // 0x283ad4: 0x5840003c  blezl       $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x283AD4u;
    {
        const bool branch_taken_0x283ad4 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x283ad4) {
            ctx->pc = 0x283AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283AD4u;
            // 0x283ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283BC8u;
            goto label_283bc8;
        }
    }
    ctx->pc = 0x283ADCu;
    // 0x283adc: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x283adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x283ae0: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x283ae0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x283ae4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x283ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x283ae8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x283ae8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x283aec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x283AECu;
    {
        const bool branch_taken_0x283aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283AECu;
        // 0x283af0: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283aec) {
            ctx->pc = 0x283B00u;
            goto label_283b00;
        }
    }
    ctx->pc = 0x283AF4u;
    // 0x283af4: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x283af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x283af8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x283AF8u;
    {
        const bool branch_taken_0x283af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283AF8u;
        // 0x283afc: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283af8) {
            ctx->pc = 0x283B04u;
            goto label_283b04;
        }
    }
    ctx->pc = 0x283B00u;
label_283b00:
    // 0x283b00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x283b00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283b04:
    // 0x283b04: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x283B04u;
    {
        const bool branch_taken_0x283b04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x283B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B04u;
        // 0x283b08: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283b04) {
            ctx->pc = 0x283B54u;
            goto label_283b54;
        }
    }
    ctx->pc = 0x283B0Cu;
    // 0x283b0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x283b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x283b10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x283b10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283b14: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x283b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x283b18: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x283b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x283b1c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x283b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x283b20: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x283b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283b24: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x283B24u;
    SET_GPR_U32(ctx, 31, 0x283B2Cu);
    ctx->pc = 0x283B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283B24u;
    // 0x283b28: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x283B24u, 0x283B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283B2Cu;
label_283b2c:
    // 0x283b2c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x283b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x283b30: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x283b30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x283b34: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x283b34u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283b38: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x283b38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x283b3c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x283b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x283b40: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x283b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x283b44: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x283B44u;
    SET_GPR_U32(ctx, 31, 0x283B4Cu);
    ctx->pc = 0x283B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283B44u;
    // 0x283b48: 0xc7ad0048  lwc1        $f13, 0x48($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x283B44u, 0x283B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283B4Cu;
label_283b4c:
    // 0x283b4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x283B4Cu;
    {
        const bool branch_taken_0x283b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B4Cu;
        // 0x283b50: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283b4c) {
            ctx->pc = 0x283B5Cu;
            goto label_283b5c;
        }
    }
    ctx->pc = 0x283B54u;
label_283b54:
    // 0x283b54: 0xc4800104  lwc1        $f0, 0x104($a0)
    ctx->pc = 0x283b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283b58: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x283b58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_283b5c:
    // 0x283b5c: 0xc051e62  jal         func_147988
    ctx->pc = 0x283B5Cu;
    SET_GPR_U32(ctx, 31, 0x283B64u);
    ctx->pc = 0x283B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283B5Cu;
    // 0x283b60: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x283B5Cu, 0x283B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283B64u;
label_283b64:
    // 0x283b64: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x283b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x283b68: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x283b68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x283b6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x283b6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283b70: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x283b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x283b74: 0x3c01bc23  lui         $at, 0xBC23
    ctx->pc = 0x283b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48163 << 16));
    // 0x283b78: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x283b78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x283b7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x283b7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283b80: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x283b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283b84: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x283b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x283b88: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x283b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283b8c: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x283b8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x283b90: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x283B90u;
    SET_GPR_U32(ctx, 31, 0x283B98u);
    ctx->pc = 0x283B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283B90u;
    // 0x283b94: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x283B90u, 0x283B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283B98u;
label_283b98:
    // 0x283b98: 0x26232190  addiu       $v1, $s1, 0x2190
    ctx->pc = 0x283b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8592));
    // 0x283b9c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x283b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x283ba0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x283BA0u;
    {
        const bool branch_taken_0x283ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x283BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283BA0u;
        // 0x283ba4: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ba0) {
            ctx->pc = 0x283BBCu;
            goto label_283bbc;
        }
    }
    ctx->pc = 0x283BA8u;
    // 0x283ba8: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x283ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283bac: 0xe6202190  swc1        $f0, 0x2190($s1)
    ctx->pc = 0x283bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8592), bits); }
    // 0x283bb0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x283bb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x283bb4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x283bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283bb8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x283bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_283bbc:
    // 0x283bbc: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x283bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x283bc0: 0xae22218c  sw          $v0, 0x218C($s1)
    ctx->pc = 0x283bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8588), GPR_U32(ctx, 2));
    // 0x283bc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x283bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_283bc8:
    // 0x283bc8: 0x24852130  addiu       $a1, $a0, 0x2130
    ctx->pc = 0x283bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8496));
    // 0x283bcc: 0xc041004  jal         func_104010
    ctx->pc = 0x283BCCu;
    SET_GPR_U32(ctx, 31, 0x283BD4u);
    ctx->pc = 0x283BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283BCCu;
    // 0x283bd0: 0x248605b0  addiu       $a2, $a0, 0x5B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104010u, 0x283BCCu, 0x283BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283BD4u;
label_283bd4:
    // 0x283bd4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x283bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283bd8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x283bd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x283bdc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x283bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x283be0: 0x3e00008  jr          $ra
    ctx->pc = 0x283BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283BE0u;
        // 0x283be4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283BE8u;
}
