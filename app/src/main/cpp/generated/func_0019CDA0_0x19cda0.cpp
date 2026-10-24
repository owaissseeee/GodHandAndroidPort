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

// Function: func_0019CDA0
// Address: 0x19cda0 - 0x19cfe0
void func_0019CDA0_0x19cda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019CDA0_0x19cda0");
#endif

    switch (ctx->pc) {
        case 0x19ce70u: goto label_19ce70;
        case 0x19ce90u: goto label_19ce90;
        case 0x19cea4u: goto label_19cea4;
        case 0x19ceb8u: goto label_19ceb8;
        case 0x19ceccu: goto label_19cecc;
        case 0x19cee0u: goto label_19cee0;
        case 0x19cf50u: goto label_19cf50;
        case 0x19cf5cu: goto label_19cf5c;
        case 0x19cf68u: goto label_19cf68;
        case 0x19cf78u: goto label_19cf78;
        case 0x19cf84u: goto label_19cf84;
        case 0x19cf90u: goto label_19cf90;
        case 0x19cfb8u: goto label_19cfb8;
        default: break;
    }

    ctx->pc = 0x19cda0u;

    // 0x19cda0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x19cda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x19cda4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19cda4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cda8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x19cda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x19cdac: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x19cdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x19cdb0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19cdb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cdb4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x19cdb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x19cdb8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19cdb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cdbc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x19cdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x19cdc0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19cdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19cdc4: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x19cdc4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x19cdc8: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x19cdc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x19cdcc: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x19cdccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x19cdd0: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x19CDD0u;
    {
        const bool branch_taken_0x19cdd0 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x19CDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CDD0u;
        // 0x19cdd4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cdd0) {
            ctx->pc = 0x19CDDCu;
            goto label_19cddc;
        }
    }
    ctx->pc = 0x19CDD8u;
    // 0x19cdd8: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x19cdd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_19cddc:
    // 0x19cddc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19cddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19cde0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19CDE0u;
    {
        const bool branch_taken_0x19cde0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CDE0u;
        // 0x19cde4: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cde0) {
            ctx->pc = 0x19CDF8u;
            goto label_19cdf8;
        }
    }
    ctx->pc = 0x19CDE8u;
    // 0x19cde8: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x19cde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x19cdec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19cdf0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19CDF0u;
    {
        const bool branch_taken_0x19cdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CDF0u;
        // 0x19cdf4: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cdf0) {
            ctx->pc = 0x19CDFCu;
            goto label_19cdfc;
        }
    }
    ctx->pc = 0x19CDF8u;
label_19cdf8:
    // 0x19cdf8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19cdf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19cdfc:
    // 0x19cdfc: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x19cdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x19ce00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19ce00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ce04: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x19ce04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x19ce08: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x19ce08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x19ce0c: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x19ce0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x19ce10: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x19CE10u;
    {
        const bool branch_taken_0x19ce10 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x19CE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE10u;
        // 0x19ce14: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ce10) {
            ctx->pc = 0x19CE20u;
            goto label_19ce20;
        }
    }
    ctx->pc = 0x19CE18u;
    // 0x19ce18: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x19ce18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19ce1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ce1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ce20:
    // 0x19ce20: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x19ce20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x19ce24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19CE24u;
    {
        const bool branch_taken_0x19ce24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE24u;
        // 0x19ce28: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ce24) {
            ctx->pc = 0x19CE3Cu;
            goto label_19ce3c;
        }
    }
    ctx->pc = 0x19CE2Cu;
    // 0x19ce2c: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x19ce2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x19ce30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19ce30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19ce34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19CE34u;
    {
        const bool branch_taken_0x19ce34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE34u;
        // 0x19ce38: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ce34) {
            ctx->pc = 0x19CE40u;
            goto label_19ce40;
        }
    }
    ctx->pc = 0x19CE3Cu;
label_19ce3c:
    // 0x19ce3c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19ce3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ce40:
    // 0x19ce40: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x19ce40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x19ce44: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x19ce44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x19ce48: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x19ce48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x19ce4c: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x19ce4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19ce50: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x19ce50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19ce54: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x19ce54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19ce58: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x19ce58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19ce5c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x19ce5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x19ce60: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19ce60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x19ce64: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19ce64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19ce68: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x19CE68u;
    SET_GPR_U32(ctx, 31, 0x19CE70u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x19CE68u, 0x19CE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CE70u;
label_19ce70:
    // 0x19ce70: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x19ce70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ce74: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x19ce74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x19ce78: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x19ce78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x19ce7c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19ce7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x19ce80: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x19ce80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x19ce84: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19ce84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19ce88: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x19CE88u;
    SET_GPR_U32(ctx, 31, 0x19CE90u);
    ctx->pc = 0x19CE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CE88u;
    // 0x19ce8c: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x19CE88u, 0x19CE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CE90u;
label_19ce90:
    // 0x19ce90: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x19ce90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x19ce94: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x19ce94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ce98: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19ce98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19ce9c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x19CE9Cu;
    SET_GPR_U32(ctx, 31, 0x19CEA4u);
    ctx->pc = 0x19CEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CE9Cu;
    // 0x19cea0: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x19CE9Cu, 0x19CEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CEA4u;
label_19cea4:
    // 0x19cea4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x19cea4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x19cea8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x19cea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ceac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19ceacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19ceb0: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x19CEB0u;
    SET_GPR_U32(ctx, 31, 0x19CEB8u);
    ctx->pc = 0x19CEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CEB0u;
    // 0x19ceb4: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x19CEB0u, 0x19CEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CEB8u;
label_19ceb8:
    // 0x19ceb8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x19ceb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x19cebc: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x19cebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19cec0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19cec0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19cec4: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x19CEC4u;
    SET_GPR_U32(ctx, 31, 0x19CECCu);
    ctx->pc = 0x19CEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CEC4u;
    // 0x19cec8: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x19CEC4u, 0x19CECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CECCu;
label_19cecc:
    // 0x19cecc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x19ceccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x19ced0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x19ced0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ced4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19ced4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19ced8: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x19CED8u;
    SET_GPR_U32(ctx, 31, 0x19CEE0u);
    ctx->pc = 0x19CEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CED8u;
    // 0x19cedc: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x19CED8u, 0x19CEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CEE0u;
label_19cee0:
    // 0x19cee0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x19cee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x19cee4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x19cee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19cee8: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x19cee8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x19ceec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19ceecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cef0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19cef0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19cef4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x19cef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x19cef8: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x19CEF8u;
    {
        const bool branch_taken_0x19cef8 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x19CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEF8u;
        // 0x19cefc: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cef8) {
            ctx->pc = 0x19CF04u;
            goto label_19cf04;
        }
    }
    ctx->pc = 0x19CF00u;
    // 0x19cf00: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x19cf00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_19cf04:
    // 0x19cf04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19cf04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19cf08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19CF08u;
    {
        const bool branch_taken_0x19cf08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF08u;
        // 0x19cf0c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cf08) {
            ctx->pc = 0x19CF20u;
            goto label_19cf20;
        }
    }
    ctx->pc = 0x19CF10u;
    // 0x19cf10: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x19cf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x19cf14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19cf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19cf18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19CF18u;
    {
        const bool branch_taken_0x19cf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF18u;
        // 0x19cf1c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cf18) {
            ctx->pc = 0x19CF24u;
            goto label_19cf24;
        }
    }
    ctx->pc = 0x19CF20u;
label_19cf20:
    // 0x19cf20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19cf20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19cf24:
    // 0x19cf24: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x19cf24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x19cf28: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x19cf28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x19cf2c: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x19cf2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19cf30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19cf30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cf34: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x19cf34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x19cf38: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x19cf38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x19cf3c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19cf3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19cf40: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x19cf40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x19cf44: 0x26100660  addiu       $s0, $s0, 0x660
    ctx->pc = 0x19cf44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
    // 0x19cf48: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x19CF48u;
    SET_GPR_U32(ctx, 31, 0x19CF50u);
    ctx->pc = 0x19CF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CF48u;
    // 0x19cf4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x19CF48u, 0x19CF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CF50u;
label_19cf50:
    // 0x19cf50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19cf50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cf54: 0xc05ce66  jal         func_173998
    ctx->pc = 0x19CF54u;
    SET_GPR_U32(ctx, 31, 0x19CF5Cu);
    ctx->pc = 0x19CF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CF54u;
    // 0x19cf58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x19CF54u, 0x19CF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CF5Cu;
label_19cf5c:
    // 0x19cf5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19cf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cf60: 0xc051f18  jal         func_147C60
    ctx->pc = 0x19CF60u;
    SET_GPR_U32(ctx, 31, 0x19CF68u);
    ctx->pc = 0x19CF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CF60u;
    // 0x19cf64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x19CF60u, 0x19CF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CF68u;
label_19cf68:
    // 0x19cf68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19cf68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cf6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19cf6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cf70: 0xc051f22  jal         func_147C88
    ctx->pc = 0x19CF70u;
    SET_GPR_U32(ctx, 31, 0x19CF78u);
    ctx->pc = 0x19CF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CF70u;
    // 0x19cf74: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x19CF70u, 0x19CF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CF78u;
label_19cf78:
    // 0x19cf78: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x19cf78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19cf7c: 0xc05ce42  jal         func_173908
    ctx->pc = 0x19CF7Cu;
    SET_GPR_U32(ctx, 31, 0x19CF84u);
    ctx->pc = 0x19CF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CF7Cu;
    // 0x19cf80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x19CF7Cu, 0x19CF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CF84u;
label_19cf84:
    // 0x19cf84: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x19cf84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19cf88: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x19CF88u;
    SET_GPR_U32(ctx, 31, 0x19CF90u);
    ctx->pc = 0x19CF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CF88u;
    // 0x19cf8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x19CF88u, 0x19CF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CF90u;
label_19cf90:
    // 0x19cf90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19cf90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19cf94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19cf94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19cf98: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x19cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19cf9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19cf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cfa0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19cfa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cfa4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x19cfa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x19cfa8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x19cfa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x19cfac: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x19cfacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x19cfb0: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x19CFB0u;
    SET_GPR_U32(ctx, 31, 0x19CFB8u);
    ctx->pc = 0x19CFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CFB0u;
    // 0x19cfb4: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x19CFB0u, 0x19CFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CFB8u;
label_19cfb8:
    // 0x19cfb8: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x19cfb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x19cfbc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x19cfbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19cfc0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x19cfc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19cfc4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x19cfc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19cfc8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x19cfc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19cfcc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19cfccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19cfd0: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x19cfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x19cfd4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x19cfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19cfd8: 0x3e00008  jr          $ra
    ctx->pc = 0x19CFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CFD8u;
        // 0x19cfdc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CFE0u;
}
