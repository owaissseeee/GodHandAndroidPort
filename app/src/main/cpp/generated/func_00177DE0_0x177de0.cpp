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

// Function: func_00177DE0
// Address: 0x177de0 - 0x178068
void func_00177DE0_0x177de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00177DE0_0x177de0");
#endif

    switch (ctx->pc) {
        case 0x177ed4u: goto label_177ed4;
        case 0x177ef8u: goto label_177ef8;
        case 0x177f18u: goto label_177f18;
        case 0x177f2cu: goto label_177f2c;
        case 0x177f40u: goto label_177f40;
        case 0x177f54u: goto label_177f54;
        case 0x177f68u: goto label_177f68;
        case 0x177fd8u: goto label_177fd8;
        case 0x177fe4u: goto label_177fe4;
        case 0x177ff0u: goto label_177ff0;
        case 0x178000u: goto label_178000;
        case 0x17800cu: goto label_17800c;
        case 0x178018u: goto label_178018;
        case 0x178040u: goto label_178040;
        default: break;
    }

    ctx->pc = 0x177de0u;

    // 0x177de0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x177de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x177de4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x177de4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177de8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x177de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x177dec: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x177decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x177df0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x177df0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177df4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x177df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x177df8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x177df8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177dfc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x177dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x177e00: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x177e00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177e04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x177e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x177e08: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x177e08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177e0c: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x177e0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x177e10: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x177e10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x177e14: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x177e14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x177e18: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x177E18u;
    {
        const bool branch_taken_0x177e18 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x177E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E18u;
        // 0x177e1c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177e18) {
            ctx->pc = 0x177E24u;
            goto label_177e24;
        }
    }
    ctx->pc = 0x177E20u;
    // 0x177e20: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x177e20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_177e24:
    // 0x177e24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x177e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x177e28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177E28u;
    {
        const bool branch_taken_0x177e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E28u;
        // 0x177e2c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177e28) {
            ctx->pc = 0x177E40u;
            goto label_177e40;
        }
    }
    ctx->pc = 0x177E30u;
    // 0x177e30: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x177e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x177e34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x177e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177e38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x177E38u;
    {
        const bool branch_taken_0x177e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E38u;
        // 0x177e3c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177e38) {
            ctx->pc = 0x177E44u;
            goto label_177e44;
        }
    }
    ctx->pc = 0x177E40u;
label_177e40:
    // 0x177e40: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x177e40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177e44:
    // 0x177e44: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x177e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x177e48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x177e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177e4c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x177e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x177e50: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x177e50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x177e54: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x177e54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x177e58: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x177E58u;
    {
        const bool branch_taken_0x177e58 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x177E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E58u;
        // 0x177e5c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177e58) {
            ctx->pc = 0x177E68u;
            goto label_177e68;
        }
    }
    ctx->pc = 0x177E60u;
    // 0x177e60: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x177e60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x177e64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_177e68:
    // 0x177e68: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x177e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x177e6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177E6Cu;
    {
        const bool branch_taken_0x177e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E6Cu;
        // 0x177e70: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177e6c) {
            ctx->pc = 0x177E84u;
            goto label_177e84;
        }
    }
    ctx->pc = 0x177E74u;
    // 0x177e74: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x177e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x177e78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x177e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177e7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x177E7Cu;
    {
        const bool branch_taken_0x177e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E7Cu;
        // 0x177e80: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177e7c) {
            ctx->pc = 0x177E88u;
            goto label_177e88;
        }
    }
    ctx->pc = 0x177E84u;
label_177e84:
    // 0x177e84: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x177e84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177e88:
    // 0x177e88: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x177e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x177e8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x177e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177e90: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x177e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x177e94: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x177e94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x177e98: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x177e98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x177e9c: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x177E9Cu;
    {
        const bool branch_taken_0x177e9c = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x177EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E9Cu;
        // 0x177ea0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177e9c) {
            ctx->pc = 0x177EACu;
            goto label_177eac;
        }
    }
    ctx->pc = 0x177EA4u;
    // 0x177ea4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x177ea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x177ea8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_177eac:
    // 0x177eac: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x177eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x177eb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177EB0u;
    {
        const bool branch_taken_0x177eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177EB0u;
        // 0x177eb4: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177eb0) {
            ctx->pc = 0x177EC8u;
            goto label_177ec8;
        }
    }
    ctx->pc = 0x177EB8u;
    // 0x177eb8: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x177eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x177ebc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x177ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177ec0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x177EC0u;
    {
        const bool branch_taken_0x177ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177EC0u;
        // 0x177ec4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177ec0) {
            ctx->pc = 0x177ECCu;
            goto label_177ecc;
        }
    }
    ctx->pc = 0x177EC8u;
label_177ec8:
    // 0x177ec8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x177ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177ecc:
    // 0x177ecc: 0xc054074  jal         func_1501D0
    ctx->pc = 0x177ECCu;
    SET_GPR_U32(ctx, 31, 0x177ED4u);
    ctx->pc = 0x177ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177ECCu;
    // 0x177ed0: 0x8e650250  lw          $a1, 0x250($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501D0u, 0x177ECCu, 0x177ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177ED4u;
label_177ed4:
    // 0x177ed4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x177ed4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x177ed8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x177ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x177edc: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x177edcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x177ee0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x177ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x177ee4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x177ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x177ee8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x177ee8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x177eec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x177eecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x177ef0: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x177EF0u;
    SET_GPR_U32(ctx, 31, 0x177EF8u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x177EF0u, 0x177EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177EF8u;
label_177ef8:
    // 0x177ef8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x177ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177efc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x177efcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x177f00: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x177f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x177f04: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x177f04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x177f08: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x177f08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x177f0c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x177f0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x177f10: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x177F10u;
    SET_GPR_U32(ctx, 31, 0x177F18u);
    ctx->pc = 0x177F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177F10u;
    // 0x177f14: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x177F10u, 0x177F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177F18u;
label_177f18:
    // 0x177f18: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x177f18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x177f1c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x177f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177f20: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x177f20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x177f24: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x177F24u;
    SET_GPR_U32(ctx, 31, 0x177F2Cu);
    ctx->pc = 0x177F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177F24u;
    // 0x177f28: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x177F24u, 0x177F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177F2Cu;
label_177f2c:
    // 0x177f2c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x177f2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x177f30: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x177f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177f34: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x177f34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x177f38: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x177F38u;
    SET_GPR_U32(ctx, 31, 0x177F40u);
    ctx->pc = 0x177F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177F38u;
    // 0x177f3c: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x177F38u, 0x177F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177F40u;
label_177f40:
    // 0x177f40: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x177f40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x177f44: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x177f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177f48: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x177f48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x177f4c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x177F4Cu;
    SET_GPR_U32(ctx, 31, 0x177F54u);
    ctx->pc = 0x177F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177F4Cu;
    // 0x177f50: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x177F4Cu, 0x177F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177F54u;
label_177f54:
    // 0x177f54: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x177f54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x177f58: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x177f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177f5c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x177f5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x177f60: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x177F60u;
    SET_GPR_U32(ctx, 31, 0x177F68u);
    ctx->pc = 0x177F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177F60u;
    // 0x177f64: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x177F60u, 0x177F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177F68u;
label_177f68:
    // 0x177f68: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x177f68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x177f6c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x177f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177f70: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x177f70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x177f74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x177f74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177f78: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x177f78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x177f7c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x177f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x177f80: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x177F80u;
    {
        const bool branch_taken_0x177f80 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x177F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F80u;
        // 0x177f84: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x177f80) {
            ctx->pc = 0x177F8Cu;
            goto label_177f8c;
        }
    }
    ctx->pc = 0x177F88u;
    // 0x177f88: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x177f88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_177f8c:
    // 0x177f8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x177f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x177f90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177F90u;
    {
        const bool branch_taken_0x177f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F90u;
        // 0x177f94: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177f90) {
            ctx->pc = 0x177FA8u;
            goto label_177fa8;
        }
    }
    ctx->pc = 0x177F98u;
    // 0x177f98: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x177f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x177f9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x177f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177fa0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x177FA0u;
    {
        const bool branch_taken_0x177fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177FA0u;
        // 0x177fa4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177fa0) {
            ctx->pc = 0x177FACu;
            goto label_177fac;
        }
    }
    ctx->pc = 0x177FA8u;
label_177fa8:
    // 0x177fa8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x177fa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177fac:
    // 0x177fac: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x177facu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x177fb0: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x177fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x177fb4: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x177fb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x177fb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x177fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177fbc: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x177fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x177fc0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x177fc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x177fc4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x177fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x177fc8: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x177fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x177fcc: 0x26100610  addiu       $s0, $s0, 0x610
    ctx->pc = 0x177fccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x177fd0: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x177FD0u;
    SET_GPR_U32(ctx, 31, 0x177FD8u);
    ctx->pc = 0x177FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177FD0u;
    // 0x177fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x177FD0u, 0x177FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177FD8u;
label_177fd8:
    // 0x177fd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177fdc: 0xc05ce66  jal         func_173998
    ctx->pc = 0x177FDCu;
    SET_GPR_U32(ctx, 31, 0x177FE4u);
    ctx->pc = 0x177FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177FDCu;
    // 0x177fe0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x177FDCu, 0x177FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177FE4u;
label_177fe4:
    // 0x177fe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177fe8: 0xc051f18  jal         func_147C60
    ctx->pc = 0x177FE8u;
    SET_GPR_U32(ctx, 31, 0x177FF0u);
    ctx->pc = 0x177FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177FE8u;
    // 0x177fec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x177FE8u, 0x177FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177FF0u;
label_177ff0:
    // 0x177ff0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x177ff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177ff4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x177ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177ff8: 0xc051f22  jal         func_147C88
    ctx->pc = 0x177FF8u;
    SET_GPR_U32(ctx, 31, 0x178000u);
    ctx->pc = 0x177FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177FF8u;
    // 0x177ffc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x177FF8u, 0x178000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178000u;
label_178000:
    // 0x178000: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x178000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x178004: 0xc05ce42  jal         func_173908
    ctx->pc = 0x178004u;
    SET_GPR_U32(ctx, 31, 0x17800Cu);
    ctx->pc = 0x178008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178004u;
    // 0x178008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x178004u, 0x17800Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17800Cu;
label_17800c:
    // 0x17800c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x17800cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x178010: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x178010u;
    SET_GPR_U32(ctx, 31, 0x178018u);
    ctx->pc = 0x178014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178010u;
    // 0x178014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x178010u, 0x178018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178018u;
label_178018:
    // 0x178018: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x178018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17801c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17801cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178020: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x178020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x178024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178028: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x178028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17802c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x17802cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x178030: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x178030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x178034: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x178034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x178038: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x178038u;
    SET_GPR_U32(ctx, 31, 0x178040u);
    ctx->pc = 0x17803Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178038u;
    // 0x17803c: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x178038u, 0x178040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178040u;
label_178040:
    // 0x178040: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x178040u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x178044: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x178044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x178048: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x178048u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17804c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x17804cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178050: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x178050u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x178054: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x178054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178058: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x178058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17805c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x17805cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x178060: 0x3e00008  jr          $ra
    ctx->pc = 0x178060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178060u;
        // 0x178064: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178068u;
}
