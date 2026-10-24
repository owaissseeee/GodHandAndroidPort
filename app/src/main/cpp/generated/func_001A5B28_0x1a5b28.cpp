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

// Function: func_001A5B28
// Address: 0x1a5b28 - 0x1a5d68
void func_001A5B28_0x1a5b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A5B28_0x1a5b28");
#endif

    switch (ctx->pc) {
        case 0x1a5bf8u: goto label_1a5bf8;
        case 0x1a5c18u: goto label_1a5c18;
        case 0x1a5c2cu: goto label_1a5c2c;
        case 0x1a5c40u: goto label_1a5c40;
        case 0x1a5c54u: goto label_1a5c54;
        case 0x1a5c68u: goto label_1a5c68;
        case 0x1a5cd8u: goto label_1a5cd8;
        case 0x1a5ce4u: goto label_1a5ce4;
        case 0x1a5cf0u: goto label_1a5cf0;
        case 0x1a5d00u: goto label_1a5d00;
        case 0x1a5d0cu: goto label_1a5d0c;
        case 0x1a5d18u: goto label_1a5d18;
        case 0x1a5d40u: goto label_1a5d40;
        default: break;
    }

    ctx->pc = 0x1a5b28u;

    // 0x1a5b28: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1a5b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1a5b2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a5b2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5b30: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1a5b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1a5b34: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1a5b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1a5b38: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a5b38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5b3c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1a5b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1a5b40: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a5b40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5b44: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1a5b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1a5b48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a5b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a5b4c: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x1a5b4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1a5b50: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1a5b50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1a5b54: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x1a5b54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1a5b58: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A5B58u;
    {
        const bool branch_taken_0x1a5b58 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1A5B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B58u;
        // 0x1a5b5c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b58) {
            ctx->pc = 0x1A5B64u;
            goto label_1a5b64;
        }
    }
    ctx->pc = 0x1A5B60u;
    // 0x1a5b60: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1a5b60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a5b64:
    // 0x1a5b64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a5b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a5b68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5B68u;
    {
        const bool branch_taken_0x1a5b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B68u;
        // 0x1a5b6c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b68) {
            ctx->pc = 0x1A5B80u;
            goto label_1a5b80;
        }
    }
    ctx->pc = 0x1A5B70u;
    // 0x1a5b70: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1a5b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1a5b74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a5b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a5b78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A5B78u;
    {
        const bool branch_taken_0x1a5b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B78u;
        // 0x1a5b7c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b78) {
            ctx->pc = 0x1A5B84u;
            goto label_1a5b84;
        }
    }
    ctx->pc = 0x1A5B80u;
label_1a5b80:
    // 0x1a5b80: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a5b80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5b84:
    // 0x1a5b84: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1a5b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1a5b88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a5b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5b8c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1a5b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1a5b90: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1a5b90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x1a5b94: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x1a5b94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1a5b98: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5B98u;
    {
        const bool branch_taken_0x1a5b98 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1A5B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B98u;
        // 0x1a5b9c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b98) {
            ctx->pc = 0x1A5BA8u;
            goto label_1a5ba8;
        }
    }
    ctx->pc = 0x1A5BA0u;
    // 0x1a5ba0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1a5ba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a5ba4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a5ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5ba8:
    // 0x1a5ba8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1a5ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a5bac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5BACu;
    {
        const bool branch_taken_0x1a5bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BACu;
        // 0x1a5bb0: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5bac) {
            ctx->pc = 0x1A5BC4u;
            goto label_1a5bc4;
        }
    }
    ctx->pc = 0x1A5BB4u;
    // 0x1a5bb4: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1a5bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1a5bb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a5bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a5bbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A5BBCu;
    {
        const bool branch_taken_0x1a5bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BBCu;
        // 0x1a5bc0: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5bbc) {
            ctx->pc = 0x1A5BC8u;
            goto label_1a5bc8;
        }
    }
    ctx->pc = 0x1A5BC4u;
label_1a5bc4:
    // 0x1a5bc4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a5bc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5bc8:
    // 0x1a5bc8: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1a5bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1a5bcc: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1a5bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1a5bd0: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1a5bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x1a5bd4: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1a5bd4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a5bd8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1a5bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a5bdc: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1a5bdcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a5be0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1a5be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a5be4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1a5be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1a5be8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a5be8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a5bec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a5becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a5bf0: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1A5BF0u;
    SET_GPR_U32(ctx, 31, 0x1A5BF8u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1A5BF0u, 0x1A5BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5BF8u;
label_1a5bf8:
    // 0x1a5bf8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1a5bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5bfc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a5bfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a5c00: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1a5c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1a5c04: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a5c04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a5c08: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1a5c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1a5c0c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a5c0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a5c10: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x1A5C10u;
    SET_GPR_U32(ctx, 31, 0x1A5C18u);
    ctx->pc = 0x1A5C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5C10u;
    // 0x1a5c14: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x1A5C10u, 0x1A5C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5C18u;
label_1a5c18:
    // 0x1a5c18: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a5c18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a5c1c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1a5c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5c20: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a5c20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a5c24: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1A5C24u;
    SET_GPR_U32(ctx, 31, 0x1A5C2Cu);
    ctx->pc = 0x1A5C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5C24u;
    // 0x1a5c28: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1A5C24u, 0x1A5C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5C2Cu;
label_1a5c2c:
    // 0x1a5c2c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a5c2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a5c30: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1a5c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5c34: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a5c34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a5c38: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1A5C38u;
    SET_GPR_U32(ctx, 31, 0x1A5C40u);
    ctx->pc = 0x1A5C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5C38u;
    // 0x1a5c3c: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1A5C38u, 0x1A5C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5C40u;
label_1a5c40:
    // 0x1a5c40: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1a5c40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1a5c44: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1a5c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5c48: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a5c48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a5c4c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1A5C4Cu;
    SET_GPR_U32(ctx, 31, 0x1A5C54u);
    ctx->pc = 0x1A5C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5C4Cu;
    // 0x1a5c50: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1A5C4Cu, 0x1A5C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5C54u;
label_1a5c54:
    // 0x1a5c54: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1a5c54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1a5c58: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1a5c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5c5c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a5c5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a5c60: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1A5C60u;
    SET_GPR_U32(ctx, 31, 0x1A5C68u);
    ctx->pc = 0x1A5C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5C60u;
    // 0x1a5c64: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1A5C60u, 0x1A5C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5C68u;
label_1a5c68:
    // 0x1a5c68: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1a5c68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1a5c6c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1a5c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5c70: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x1a5c70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1a5c74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a5c74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5c78: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a5c78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a5c7c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a5c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1a5c80: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A5C80u;
    {
        const bool branch_taken_0x1a5c80 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1A5C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C80u;
        // 0x1a5c84: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c80) {
            ctx->pc = 0x1A5C8Cu;
            goto label_1a5c8c;
        }
    }
    ctx->pc = 0x1A5C88u;
    // 0x1a5c88: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1a5c88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a5c8c:
    // 0x1a5c8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a5c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a5c90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5C90u;
    {
        const bool branch_taken_0x1a5c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C90u;
        // 0x1a5c94: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c90) {
            ctx->pc = 0x1A5CA8u;
            goto label_1a5ca8;
        }
    }
    ctx->pc = 0x1A5C98u;
    // 0x1a5c98: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1a5c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1a5c9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a5c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a5ca0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A5CA0u;
    {
        const bool branch_taken_0x1a5ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5CA0u;
        // 0x1a5ca4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ca0) {
            ctx->pc = 0x1A5CACu;
            goto label_1a5cac;
        }
    }
    ctx->pc = 0x1A5CA8u;
label_1a5ca8:
    // 0x1a5ca8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a5ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5cac:
    // 0x1a5cac: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x1a5cacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1a5cb0: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x1a5cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1a5cb4: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x1a5cb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a5cb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a5cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5cbc: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1a5cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x1a5cc0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a5cc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1a5cc4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a5cc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a5cc8: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x1a5cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1a5ccc: 0x26100630  addiu       $s0, $s0, 0x630
    ctx->pc = 0x1a5cccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1584));
    // 0x1a5cd0: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1A5CD0u;
    SET_GPR_U32(ctx, 31, 0x1A5CD8u);
    ctx->pc = 0x1A5CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5CD0u;
    // 0x1a5cd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1A5CD0u, 0x1A5CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5CD8u;
label_1a5cd8:
    // 0x1a5cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5cdc: 0xc05ce66  jal         func_173998
    ctx->pc = 0x1A5CDCu;
    SET_GPR_U32(ctx, 31, 0x1A5CE4u);
    ctx->pc = 0x1A5CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5CDCu;
    // 0x1a5ce0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x1A5CDCu, 0x1A5CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5CE4u;
label_1a5ce4:
    // 0x1a5ce4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5ce8: 0xc051f18  jal         func_147C60
    ctx->pc = 0x1A5CE8u;
    SET_GPR_U32(ctx, 31, 0x1A5CF0u);
    ctx->pc = 0x1A5CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5CE8u;
    // 0x1a5cec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1A5CE8u, 0x1A5CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5CF0u;
label_1a5cf0:
    // 0x1a5cf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a5cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5cf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a5cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5cf8: 0xc051f22  jal         func_147C88
    ctx->pc = 0x1A5CF8u;
    SET_GPR_U32(ctx, 31, 0x1A5D00u);
    ctx->pc = 0x1A5CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5CF8u;
    // 0x1a5cfc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x1A5CF8u, 0x1A5D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5D00u;
label_1a5d00:
    // 0x1a5d00: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1a5d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a5d04: 0xc05ce42  jal         func_173908
    ctx->pc = 0x1A5D04u;
    SET_GPR_U32(ctx, 31, 0x1A5D0Cu);
    ctx->pc = 0x1A5D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5D04u;
    // 0x1a5d08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x1A5D04u, 0x1A5D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5D0Cu;
label_1a5d0c:
    // 0x1a5d0c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1a5d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a5d10: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x1A5D10u;
    SET_GPR_U32(ctx, 31, 0x1A5D18u);
    ctx->pc = 0x1A5D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5D10u;
    // 0x1a5d14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x1A5D10u, 0x1A5D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5D18u;
label_1a5d18:
    // 0x1a5d18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a5d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a5d1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a5d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5d20: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a5d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a5d24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5d28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a5d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5d2c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1a5d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a5d30: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1a5d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1a5d34: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1a5d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1a5d38: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x1A5D38u;
    SET_GPR_U32(ctx, 31, 0x1A5D40u);
    ctx->pc = 0x1A5D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5D38u;
    // 0x1a5d3c: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x1A5D38u, 0x1A5D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5D40u;
label_1a5d40:
    // 0x1a5d40: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x1a5d40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1a5d44: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1a5d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a5d48: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1a5d48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a5d4c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1a5d4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a5d50: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1a5d50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a5d54: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a5d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a5d58: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x1a5d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a5d5c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1a5d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a5d60: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D60u;
        // 0x1a5d64: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5D68u;
}
