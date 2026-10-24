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

// Function: func_00260A10
// Address: 0x260a10 - 0x260b30
void func_00260A10_0x260a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00260A10_0x260a10");
#endif

    switch (ctx->pc) {
        case 0x260aa4u: goto label_260aa4;
        case 0x260ab0u: goto label_260ab0;
        case 0x260ac0u: goto label_260ac0;
        case 0x260ae0u: goto label_260ae0;
        default: break;
    }

    ctx->pc = 0x260a10u;

    // 0x260a10: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x260a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x260a14: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x260a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x260a18: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x260a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x260a1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x260a1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260a20: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x260a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x260a24: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x260a24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260a28: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x260a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x260a2c: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x260a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x260a30: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x260a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x260a34: 0x52420008  beql        $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x260A34u;
    {
        const bool branch_taken_0x260a34 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x260a34) {
            ctx->pc = 0x260A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260A34u;
            // 0x260a38: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260A58u;
            goto label_260a58;
        }
    }
    ctx->pc = 0x260A3Cu;
    // 0x260a3c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x260a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260a40: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x260a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x260a44: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x260a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x260a48: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x260a48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x260a4c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x260a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260a50: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x260a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x260a54: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x260a54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_260a58:
    // 0x260a58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x260a58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260a5c: 0x4a00002  bltz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x260A5Cu;
    {
        const bool branch_taken_0x260a5c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x260A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260A5Cu;
        // 0x260a60: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260a5c) {
            ctx->pc = 0x260A68u;
            goto label_260a68;
        }
    }
    ctx->pc = 0x260A64u;
    // 0x260a64: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x260a64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_260a68:
    // 0x260a68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x260a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x260a6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x260A6Cu;
    {
        const bool branch_taken_0x260a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260A6Cu;
        // 0x260a70: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260a6c) {
            ctx->pc = 0x260A84u;
            goto label_260a84;
        }
    }
    ctx->pc = 0x260A74u;
    // 0x260a74: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x260a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x260a78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x260a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x260a7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x260A7Cu;
    {
        const bool branch_taken_0x260a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260A7Cu;
        // 0x260a80: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260a7c) {
            ctx->pc = 0x260A88u;
            goto label_260a88;
        }
    }
    ctx->pc = 0x260A84u;
label_260a84:
    // 0x260a84: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x260a84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260a88:
    // 0x260a88: 0x12600023  beqz        $s3, . + 4 + (0x23 << 2)
    ctx->pc = 0x260A88u;
    {
        const bool branch_taken_0x260a88 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x260A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260A88u;
        // 0x260a8c: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260a88) {
            ctx->pc = 0x260B18u;
            goto label_260b18;
        }
    }
    ctx->pc = 0x260A90u;
    // 0x260a90: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x260a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x260a94: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x260a94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x260a98: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x260a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x260a9c: 0xc051e62  jal         func_147988
    ctx->pc = 0x260A9Cu;
    SET_GPR_U32(ctx, 31, 0x260AA4u);
    ctx->pc = 0x260AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260A9Cu;
    // 0x260aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x260A9Cu, 0x260AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260AA4u;
label_260aa4:
    // 0x260aa4: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x260aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x260aa8: 0xc051f10  jal         func_147C40
    ctx->pc = 0x260AA8u;
    SET_GPR_U32(ctx, 31, 0x260AB0u);
    ctx->pc = 0x260AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260AA8u;
    // 0x260aac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x260AA8u, 0x260AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260AB0u;
label_260ab0:
    // 0x260ab0: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x260ab0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x260ab4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x260ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260ab8: 0xc051d5a  jal         func_147568
    ctx->pc = 0x260AB8u;
    SET_GPR_U32(ctx, 31, 0x260AC0u);
    ctx->pc = 0x260ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260AB8u;
    // 0x260abc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147568u, 0x260AB8u, 0x260AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260AC0u;
label_260ac0:
    // 0x260ac0: 0x27b000b0  addiu       $s0, $sp, 0xB0
    ctx->pc = 0x260ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x260ac4: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x260ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x260ac8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x260ac8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260acc: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x260accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x260ad0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x260ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260ad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x260ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260ad8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x260AD8u;
    SET_GPR_U32(ctx, 31, 0x260AE0u);
    ctx->pc = 0x260ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260AD8u;
    // 0x260adc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x260AD8u, 0x260AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260AE0u;
label_260ae0:
    // 0x260ae0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x260ae0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x260ae4: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x260ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x260ae8: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x260ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x260aec: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x260aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x260af0: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x260af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x260af4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x260af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260af8: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x260af8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x260afc: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x260afcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x260b00: 0x12420004  beq         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x260B00u;
    {
        const bool branch_taken_0x260b00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x260B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B00u;
        // 0x260b04: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x260b00) {
            ctx->pc = 0x260B14u;
            goto label_260b14;
        }
    }
    ctx->pc = 0x260B08u;
    // 0x260b08: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x260b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x260b0c: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x260b0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x260b10: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x260b10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_260b14:
    // 0x260b14: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x260b14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_260b18:
    // 0x260b18: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x260b18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x260b1c: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x260b1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x260b20: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x260b20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x260b24: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x260b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x260b28: 0x3e00008  jr          $ra
    ctx->pc = 0x260B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B28u;
        // 0x260b2c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260B30u;
}
