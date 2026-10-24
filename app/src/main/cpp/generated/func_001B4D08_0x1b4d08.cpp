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

// Function: func_001B4D08
// Address: 0x1b4d08 - 0x1b4f48
void func_001B4D08_0x1b4d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B4D08_0x1b4d08");
#endif

    switch (ctx->pc) {
        case 0x1b4dd8u: goto label_1b4dd8;
        case 0x1b4df8u: goto label_1b4df8;
        case 0x1b4e0cu: goto label_1b4e0c;
        case 0x1b4e20u: goto label_1b4e20;
        case 0x1b4e34u: goto label_1b4e34;
        case 0x1b4e48u: goto label_1b4e48;
        case 0x1b4eb8u: goto label_1b4eb8;
        case 0x1b4ec4u: goto label_1b4ec4;
        case 0x1b4ed0u: goto label_1b4ed0;
        case 0x1b4ee0u: goto label_1b4ee0;
        case 0x1b4eecu: goto label_1b4eec;
        case 0x1b4ef8u: goto label_1b4ef8;
        case 0x1b4f20u: goto label_1b4f20;
        default: break;
    }

    ctx->pc = 0x1b4d08u;

    // 0x1b4d08: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b4d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1b4d0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b4d0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d10: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1b4d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1b4d14: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1b4d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1b4d18: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b4d18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d1c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1b4d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1b4d20: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b4d20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d24: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1b4d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1b4d28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b4d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b4d2c: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x1b4d2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1b4d30: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1b4d30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1b4d34: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x1b4d34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1b4d38: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B4D38u;
    {
        const bool branch_taken_0x1b4d38 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1B4D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D38u;
        // 0x1b4d3c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4d38) {
            ctx->pc = 0x1B4D44u;
            goto label_1b4d44;
        }
    }
    ctx->pc = 0x1B4D40u;
    // 0x1b4d40: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1b4d40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b4d44:
    // 0x1b4d44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b4d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b4d48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4D48u;
    {
        const bool branch_taken_0x1b4d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D48u;
        // 0x1b4d4c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4d48) {
            ctx->pc = 0x1B4D60u;
            goto label_1b4d60;
        }
    }
    ctx->pc = 0x1B4D50u;
    // 0x1b4d50: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1b4d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1b4d54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b4d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b4d58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B4D58u;
    {
        const bool branch_taken_0x1b4d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D58u;
        // 0x1b4d5c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4d58) {
            ctx->pc = 0x1B4D64u;
            goto label_1b4d64;
        }
    }
    ctx->pc = 0x1B4D60u;
label_1b4d60:
    // 0x1b4d60: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b4d60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4d64:
    // 0x1b4d64: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1b4d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1b4d68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b4d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d6c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1b4d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1b4d70: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1b4d70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x1b4d74: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x1b4d74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1b4d78: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4D78u;
    {
        const bool branch_taken_0x1b4d78 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1B4D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D78u;
        // 0x1b4d7c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4d78) {
            ctx->pc = 0x1B4D88u;
            goto label_1b4d88;
        }
    }
    ctx->pc = 0x1B4D80u;
    // 0x1b4d80: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1b4d80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b4d84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b4d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b4d88:
    // 0x1b4d88: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1b4d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1b4d8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4D8Cu;
    {
        const bool branch_taken_0x1b4d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D8Cu;
        // 0x1b4d90: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4d8c) {
            ctx->pc = 0x1B4DA4u;
            goto label_1b4da4;
        }
    }
    ctx->pc = 0x1B4D94u;
    // 0x1b4d94: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1b4d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1b4d98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b4d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b4d9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B4D9Cu;
    {
        const bool branch_taken_0x1b4d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D9Cu;
        // 0x1b4da0: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4d9c) {
            ctx->pc = 0x1B4DA8u;
            goto label_1b4da8;
        }
    }
    ctx->pc = 0x1B4DA4u;
label_1b4da4:
    // 0x1b4da4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b4da4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4da8:
    // 0x1b4da8: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1b4da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1b4dac: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1b4dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1b4db0: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1b4db0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x1b4db4: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1b4db4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b4db8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1b4db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b4dbc: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1b4dbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b4dc0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1b4dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b4dc4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1b4dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1b4dc8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b4dc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b4dcc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b4dccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b4dd0: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1B4DD0u;
    SET_GPR_U32(ctx, 31, 0x1B4DD8u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1B4DD0u, 0x1B4DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4DD8u;
label_1b4dd8:
    // 0x1b4dd8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1b4dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4ddc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1b4ddcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1b4de0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1b4de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1b4de4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b4de4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b4de8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1b4de8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1b4dec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b4decu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b4df0: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x1B4DF0u;
    SET_GPR_U32(ctx, 31, 0x1B4DF8u);
    ctx->pc = 0x1B4DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4DF0u;
    // 0x1b4df4: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x1B4DF0u, 0x1B4DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4DF8u;
label_1b4df8:
    // 0x1b4df8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1b4df8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1b4dfc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1b4dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4e00: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b4e00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b4e04: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1B4E04u;
    SET_GPR_U32(ctx, 31, 0x1B4E0Cu);
    ctx->pc = 0x1B4E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4E04u;
    // 0x1b4e08: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1B4E04u, 0x1B4E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4E0Cu;
label_1b4e0c:
    // 0x1b4e0c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1b4e0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1b4e10: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1b4e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4e14: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b4e14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b4e18: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1B4E18u;
    SET_GPR_U32(ctx, 31, 0x1B4E20u);
    ctx->pc = 0x1B4E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4E18u;
    // 0x1b4e1c: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1B4E18u, 0x1B4E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4E20u;
label_1b4e20:
    // 0x1b4e20: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1b4e20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1b4e24: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1b4e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4e28: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b4e28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b4e2c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1B4E2Cu;
    SET_GPR_U32(ctx, 31, 0x1B4E34u);
    ctx->pc = 0x1B4E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4E2Cu;
    // 0x1b4e30: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1B4E2Cu, 0x1B4E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4E34u;
label_1b4e34:
    // 0x1b4e34: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1b4e34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1b4e38: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1b4e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4e3c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b4e3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b4e40: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1B4E40u;
    SET_GPR_U32(ctx, 31, 0x1B4E48u);
    ctx->pc = 0x1B4E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4E40u;
    // 0x1b4e44: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1B4E40u, 0x1B4E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4E48u;
label_1b4e48:
    // 0x1b4e48: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1b4e48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1b4e4c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1b4e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4e50: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x1b4e50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1b4e54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b4e54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4e58: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b4e58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b4e5c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1b4e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1b4e60: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B4E60u;
    {
        const bool branch_taken_0x1b4e60 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1B4E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E60u;
        // 0x1b4e64: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e60) {
            ctx->pc = 0x1B4E6Cu;
            goto label_1b4e6c;
        }
    }
    ctx->pc = 0x1B4E68u;
    // 0x1b4e68: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1b4e68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b4e6c:
    // 0x1b4e6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b4e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b4e70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4E70u;
    {
        const bool branch_taken_0x1b4e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E70u;
        // 0x1b4e74: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e70) {
            ctx->pc = 0x1B4E88u;
            goto label_1b4e88;
        }
    }
    ctx->pc = 0x1B4E78u;
    // 0x1b4e78: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1b4e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1b4e7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b4e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b4e80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B4E80u;
    {
        const bool branch_taken_0x1b4e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E80u;
        // 0x1b4e84: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e80) {
            ctx->pc = 0x1B4E8Cu;
            goto label_1b4e8c;
        }
    }
    ctx->pc = 0x1B4E88u;
label_1b4e88:
    // 0x1b4e88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b4e88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4e8c:
    // 0x1b4e8c: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x1b4e8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1b4e90: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x1b4e90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1b4e94: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x1b4e94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b4e98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b4e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4e9c: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1b4e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x1b4ea0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b4ea0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1b4ea4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b4ea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b4ea8: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x1b4ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1b4eac: 0x26100660  addiu       $s0, $s0, 0x660
    ctx->pc = 0x1b4eacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
    // 0x1b4eb0: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1B4EB0u;
    SET_GPR_U32(ctx, 31, 0x1B4EB8u);
    ctx->pc = 0x1B4EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4EB0u;
    // 0x1b4eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1B4EB0u, 0x1B4EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4EB8u;
label_1b4eb8:
    // 0x1b4eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4ebc: 0xc05ce66  jal         func_173998
    ctx->pc = 0x1B4EBCu;
    SET_GPR_U32(ctx, 31, 0x1B4EC4u);
    ctx->pc = 0x1B4EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4EBCu;
    // 0x1b4ec0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x1B4EBCu, 0x1B4EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4EC4u;
label_1b4ec4:
    // 0x1b4ec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4ec8: 0xc051f18  jal         func_147C60
    ctx->pc = 0x1B4EC8u;
    SET_GPR_U32(ctx, 31, 0x1B4ED0u);
    ctx->pc = 0x1B4ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4EC8u;
    // 0x1b4ecc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1B4EC8u, 0x1B4ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4ED0u;
label_1b4ed0:
    // 0x1b4ed0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b4ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4ed4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b4ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4ed8: 0xc051f22  jal         func_147C88
    ctx->pc = 0x1B4ED8u;
    SET_GPR_U32(ctx, 31, 0x1B4EE0u);
    ctx->pc = 0x1B4EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4ED8u;
    // 0x1b4edc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x1B4ED8u, 0x1B4EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4EE0u;
label_1b4ee0:
    // 0x1b4ee0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1b4ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b4ee4: 0xc05ce42  jal         func_173908
    ctx->pc = 0x1B4EE4u;
    SET_GPR_U32(ctx, 31, 0x1B4EECu);
    ctx->pc = 0x1B4EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4EE4u;
    // 0x1b4ee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x1B4EE4u, 0x1B4EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4EECu;
label_1b4eec:
    // 0x1b4eec: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1b4eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b4ef0: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x1B4EF0u;
    SET_GPR_U32(ctx, 31, 0x1B4EF8u);
    ctx->pc = 0x1B4EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4EF0u;
    // 0x1b4ef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x1B4EF0u, 0x1B4EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4EF8u;
label_1b4ef8:
    // 0x1b4ef8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b4efc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4efcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4f00: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1b4f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b4f04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4f08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b4f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4f0c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1b4f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b4f10: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1b4f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1b4f14: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1b4f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b4f18: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x1B4F18u;
    SET_GPR_U32(ctx, 31, 0x1B4F20u);
    ctx->pc = 0x1B4F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4F18u;
    // 0x1b4f1c: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x1B4F18u, 0x1B4F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4F20u;
label_1b4f20:
    // 0x1b4f20: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x1b4f20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1b4f24: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1b4f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b4f28: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1b4f28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4f2c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1b4f2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b4f30: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1b4f30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b4f34: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b4f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b4f38: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x1b4f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b4f3c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1b4f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b4f40: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F40u;
        // 0x1b4f44: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4F48u;
}
