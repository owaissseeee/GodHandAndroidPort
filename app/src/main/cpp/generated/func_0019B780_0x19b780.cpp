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

// Function: func_0019B780
// Address: 0x19b780 - 0x19ba08
void func_0019B780_0x19b780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019B780_0x19b780");
#endif

    switch (ctx->pc) {
        case 0x19b874u: goto label_19b874;
        case 0x19b898u: goto label_19b898;
        case 0x19b8b8u: goto label_19b8b8;
        case 0x19b8ccu: goto label_19b8cc;
        case 0x19b8e0u: goto label_19b8e0;
        case 0x19b8f4u: goto label_19b8f4;
        case 0x19b908u: goto label_19b908;
        case 0x19b978u: goto label_19b978;
        case 0x19b984u: goto label_19b984;
        case 0x19b990u: goto label_19b990;
        case 0x19b9a0u: goto label_19b9a0;
        case 0x19b9acu: goto label_19b9ac;
        case 0x19b9b8u: goto label_19b9b8;
        case 0x19b9e0u: goto label_19b9e0;
        default: break;
    }

    ctx->pc = 0x19b780u;

    // 0x19b780: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x19b780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x19b784: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19b784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b788: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x19b788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x19b78c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x19b78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x19b790: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x19b790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b794: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x19b794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x19b798: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x19b798u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b79c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x19b79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x19b7a0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19b7a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b7a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19b7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19b7a8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19b7a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b7ac: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x19b7acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x19b7b0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x19b7b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x19b7b4: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x19b7b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x19b7b8: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x19B7B8u;
    {
        const bool branch_taken_0x19b7b8 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x19B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B7B8u;
        // 0x19b7bc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b7b8) {
            ctx->pc = 0x19B7C4u;
            goto label_19b7c4;
        }
    }
    ctx->pc = 0x19B7C0u;
    // 0x19b7c0: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x19b7c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_19b7c4:
    // 0x19b7c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19b7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19b7c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B7C8u;
    {
        const bool branch_taken_0x19b7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B7C8u;
        // 0x19b7cc: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b7c8) {
            ctx->pc = 0x19B7E0u;
            goto label_19b7e0;
        }
    }
    ctx->pc = 0x19B7D0u;
    // 0x19b7d0: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x19b7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x19b7d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19b7d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19B7D8u;
    {
        const bool branch_taken_0x19b7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B7D8u;
        // 0x19b7dc: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b7d8) {
            ctx->pc = 0x19B7E4u;
            goto label_19b7e4;
        }
    }
    ctx->pc = 0x19B7E0u;
label_19b7e0:
    // 0x19b7e0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19b7e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b7e4:
    // 0x19b7e4: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x19b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x19b7e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19b7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b7ec: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x19b7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x19b7f0: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x19b7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x19b7f4: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x19b7f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x19b7f8: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B7F8u;
    {
        const bool branch_taken_0x19b7f8 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x19B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B7F8u;
        // 0x19b7fc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b7f8) {
            ctx->pc = 0x19B808u;
            goto label_19b808;
        }
    }
    ctx->pc = 0x19B800u;
    // 0x19b800: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x19b800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19b804: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19b808:
    // 0x19b808: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x19b808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x19b80c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B80Cu;
    {
        const bool branch_taken_0x19b80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B80Cu;
        // 0x19b810: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b80c) {
            ctx->pc = 0x19B824u;
            goto label_19b824;
        }
    }
    ctx->pc = 0x19B814u;
    // 0x19b814: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x19b814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x19b818: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19b818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19b81c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19B81Cu;
    {
        const bool branch_taken_0x19b81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B81Cu;
        // 0x19b820: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b81c) {
            ctx->pc = 0x19B828u;
            goto label_19b828;
        }
    }
    ctx->pc = 0x19B824u;
label_19b824:
    // 0x19b824: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19b824u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b828:
    // 0x19b828: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x19b828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x19b82c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19b82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b830: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x19b830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x19b834: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x19b834u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x19b838: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x19b838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x19b83c: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B83Cu;
    {
        const bool branch_taken_0x19b83c = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x19B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B83Cu;
        // 0x19b840: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b83c) {
            ctx->pc = 0x19B84Cu;
            goto label_19b84c;
        }
    }
    ctx->pc = 0x19B844u;
    // 0x19b844: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x19b844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19b848: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19b84c:
    // 0x19b84c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x19b84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x19b850: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B850u;
    {
        const bool branch_taken_0x19b850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B850u;
        // 0x19b854: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b850) {
            ctx->pc = 0x19B868u;
            goto label_19b868;
        }
    }
    ctx->pc = 0x19B858u;
    // 0x19b858: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x19b858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x19b85c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19b860: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19B860u;
    {
        const bool branch_taken_0x19b860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B860u;
        // 0x19b864: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b860) {
            ctx->pc = 0x19B86Cu;
            goto label_19b86c;
        }
    }
    ctx->pc = 0x19B868u;
label_19b868:
    // 0x19b868: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19b868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b86c:
    // 0x19b86c: 0xc054074  jal         func_1501D0
    ctx->pc = 0x19B86Cu;
    SET_GPR_U32(ctx, 31, 0x19B874u);
    ctx->pc = 0x19B870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B86Cu;
    // 0x19b870: 0x8e650250  lw          $a1, 0x250($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501D0u, 0x19B86Cu, 0x19B874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B874u;
label_19b874:
    // 0x19b874: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x19b874u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19b878: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x19b878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19b87c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x19b87cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19b880: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x19b880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19b884: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x19b884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x19b888: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19b888u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x19b88c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19b88cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19b890: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x19B890u;
    SET_GPR_U32(ctx, 31, 0x19B898u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x19B890u, 0x19B898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B898u;
label_19b898:
    // 0x19b898: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x19b898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b89c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x19b89cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x19b8a0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x19b8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x19b8a4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19b8a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x19b8a8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x19b8a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x19b8ac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19b8acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19b8b0: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x19B8B0u;
    SET_GPR_U32(ctx, 31, 0x19B8B8u);
    ctx->pc = 0x19B8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B8B0u;
    // 0x19b8b4: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x19B8B0u, 0x19B8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B8B8u;
label_19b8b8:
    // 0x19b8b8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x19b8b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x19b8bc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x19b8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b8c0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19b8c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19b8c4: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x19B8C4u;
    SET_GPR_U32(ctx, 31, 0x19B8CCu);
    ctx->pc = 0x19B8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B8C4u;
    // 0x19b8c8: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x19B8C4u, 0x19B8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B8CCu;
label_19b8cc:
    // 0x19b8cc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x19b8ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x19b8d0: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x19b8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b8d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19b8d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19b8d8: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x19B8D8u;
    SET_GPR_U32(ctx, 31, 0x19B8E0u);
    ctx->pc = 0x19B8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B8D8u;
    // 0x19b8dc: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x19B8D8u, 0x19B8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B8E0u;
label_19b8e0:
    // 0x19b8e0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x19b8e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x19b8e4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x19b8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b8e8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19b8e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19b8ec: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x19B8ECu;
    SET_GPR_U32(ctx, 31, 0x19B8F4u);
    ctx->pc = 0x19B8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B8ECu;
    // 0x19b8f0: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x19B8ECu, 0x19B8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B8F4u;
label_19b8f4:
    // 0x19b8f4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x19b8f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x19b8f8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x19b8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b8fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19b8fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19b900: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x19B900u;
    SET_GPR_U32(ctx, 31, 0x19B908u);
    ctx->pc = 0x19B904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B900u;
    // 0x19b904: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x19B900u, 0x19B908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B908u;
label_19b908:
    // 0x19b908: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x19b908u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x19b90c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x19b90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b910: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x19b910u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x19b914: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19b914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b918: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19b918u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19b91c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x19b91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x19b920: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x19B920u;
    {
        const bool branch_taken_0x19b920 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x19B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B920u;
        // 0x19b924: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b920) {
            ctx->pc = 0x19B92Cu;
            goto label_19b92c;
        }
    }
    ctx->pc = 0x19B928u;
    // 0x19b928: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x19b928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_19b92c:
    // 0x19b92c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19b92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19b930: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B930u;
    {
        const bool branch_taken_0x19b930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B930u;
        // 0x19b934: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b930) {
            ctx->pc = 0x19B948u;
            goto label_19b948;
        }
    }
    ctx->pc = 0x19B938u;
    // 0x19b938: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x19b938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x19b93c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19b93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19b940: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19B940u;
    {
        const bool branch_taken_0x19b940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B940u;
        // 0x19b944: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b940) {
            ctx->pc = 0x19B94Cu;
            goto label_19b94c;
        }
    }
    ctx->pc = 0x19B948u;
label_19b948:
    // 0x19b948: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19b948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b94c:
    // 0x19b94c: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x19b94cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x19b950: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x19b950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x19b954: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x19b954u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19b958: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19b958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b95c: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x19b95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x19b960: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x19b960u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x19b964: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19b964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19b968: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x19b968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x19b96c: 0x26100610  addiu       $s0, $s0, 0x610
    ctx->pc = 0x19b96cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x19b970: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x19B970u;
    SET_GPR_U32(ctx, 31, 0x19B978u);
    ctx->pc = 0x19B974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B970u;
    // 0x19b974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x19B970u, 0x19B978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B978u;
label_19b978:
    // 0x19b978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b97c: 0xc05ce66  jal         func_173998
    ctx->pc = 0x19B97Cu;
    SET_GPR_U32(ctx, 31, 0x19B984u);
    ctx->pc = 0x19B980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B97Cu;
    // 0x19b980: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x19B97Cu, 0x19B984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B984u;
label_19b984:
    // 0x19b984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b988: 0xc051f18  jal         func_147C60
    ctx->pc = 0x19B988u;
    SET_GPR_U32(ctx, 31, 0x19B990u);
    ctx->pc = 0x19B98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B988u;
    // 0x19b98c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x19B988u, 0x19B990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B990u;
label_19b990:
    // 0x19b990: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19b990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b994: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19b994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b998: 0xc051f22  jal         func_147C88
    ctx->pc = 0x19B998u;
    SET_GPR_U32(ctx, 31, 0x19B9A0u);
    ctx->pc = 0x19B99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B998u;
    // 0x19b99c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x19B998u, 0x19B9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B9A0u;
label_19b9a0:
    // 0x19b9a0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x19b9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19b9a4: 0xc05ce42  jal         func_173908
    ctx->pc = 0x19B9A4u;
    SET_GPR_U32(ctx, 31, 0x19B9ACu);
    ctx->pc = 0x19B9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B9A4u;
    // 0x19b9a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x19B9A4u, 0x19B9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B9ACu;
label_19b9ac:
    // 0x19b9ac: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x19b9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19b9b0: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x19B9B0u;
    SET_GPR_U32(ctx, 31, 0x19B9B8u);
    ctx->pc = 0x19B9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B9B0u;
    // 0x19b9b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x19B9B0u, 0x19B9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B9B8u;
label_19b9b8:
    // 0x19b9b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19b9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19b9bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19b9bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b9c0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x19b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19b9c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b9c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19b9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b9cc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x19b9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x19b9d0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x19b9d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x19b9d4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x19b9d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x19b9d8: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x19B9D8u;
    SET_GPR_U32(ctx, 31, 0x19B9E0u);
    ctx->pc = 0x19B9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B9D8u;
    // 0x19b9dc: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x19B9D8u, 0x19B9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B9E0u;
label_19b9e0:
    // 0x19b9e0: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x19b9e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x19b9e4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x19b9e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19b9e8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x19b9e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19b9ec: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x19b9ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19b9f0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x19b9f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19b9f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19b9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b9f8: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x19b9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x19b9fc: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x19b9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19ba00: 0x3e00008  jr          $ra
    ctx->pc = 0x19BA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA00u;
        // 0x19ba04: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BA08u;
}
