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

// Function: func_0018C8C8
// Address: 0x18c8c8 - 0x18cb18
void func_0018C8C8_0x18c8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018C8C8_0x18c8c8");
#endif

    switch (ctx->pc) {
        case 0x18c998u: goto label_18c998;
        case 0x18c9b8u: goto label_18c9b8;
        case 0x18c9d8u: goto label_18c9d8;
        case 0x18c9ecu: goto label_18c9ec;
        case 0x18ca00u: goto label_18ca00;
        case 0x18ca14u: goto label_18ca14;
        case 0x18ca84u: goto label_18ca84;
        case 0x18ca90u: goto label_18ca90;
        case 0x18ca9cu: goto label_18ca9c;
        case 0x18caacu: goto label_18caac;
        case 0x18cab8u: goto label_18cab8;
        case 0x18cac4u: goto label_18cac4;
        case 0x18caecu: goto label_18caec;
        default: break;
    }

    ctx->pc = 0x18c8c8u;

    // 0x18c8c8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x18c8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x18c8cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18c8ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c8d0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x18c8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x18c8d4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x18c8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x18c8d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18c8d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c8dc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x18c8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x18c8e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18c8e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c8e4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x18c8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x18c8e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18c8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18c8ec: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x18c8ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x18c8f0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x18c8f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x18c8f4: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x18c8f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x18c8f8: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x18C8F8u;
    {
        const bool branch_taken_0x18c8f8 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x18C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C8F8u;
        // 0x18c8fc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c8f8) {
            ctx->pc = 0x18C904u;
            goto label_18c904;
        }
    }
    ctx->pc = 0x18C900u;
    // 0x18c900: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x18c900u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_18c904:
    // 0x18c904: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c908: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18C908u;
    {
        const bool branch_taken_0x18c908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C908u;
        // 0x18c90c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c908) {
            ctx->pc = 0x18C920u;
            goto label_18c920;
        }
    }
    ctx->pc = 0x18C910u;
    // 0x18c910: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x18c910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x18c914: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18c918: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18C918u;
    {
        const bool branch_taken_0x18c918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C918u;
        // 0x18c91c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c918) {
            ctx->pc = 0x18C924u;
            goto label_18c924;
        }
    }
    ctx->pc = 0x18C920u;
label_18c920:
    // 0x18c920: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18c920u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18c924:
    // 0x18c924: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x18c924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x18c928: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18c928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c92c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x18c92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x18c930: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x18c930u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x18c934: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x18c934u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x18c938: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C938u;
    {
        const bool branch_taken_0x18c938 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x18C93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C938u;
        // 0x18c93c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c938) {
            ctx->pc = 0x18C948u;
            goto label_18c948;
        }
    }
    ctx->pc = 0x18C940u;
    // 0x18c940: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x18c940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18c944: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18c944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18c948:
    // 0x18c948: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x18c948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18c94c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18C94Cu;
    {
        const bool branch_taken_0x18c94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C94Cu;
        // 0x18c950: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c94c) {
            ctx->pc = 0x18C964u;
            goto label_18c964;
        }
    }
    ctx->pc = 0x18C954u;
    // 0x18c954: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x18c954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x18c958: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18c95c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18C95Cu;
    {
        const bool branch_taken_0x18c95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C95Cu;
        // 0x18c960: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c95c) {
            ctx->pc = 0x18C968u;
            goto label_18c968;
        }
    }
    ctx->pc = 0x18C964u;
label_18c964:
    // 0x18c964: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18c964u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18c968:
    // 0x18c968: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x18c968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x18c96c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x18c96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x18c970: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x18c970u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x18c974: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x18c974u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18c978: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18c978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18c97c: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x18c97cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18c980: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18c980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18c984: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x18c984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x18c988: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18c988u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x18c98c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x18c98cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x18c990: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18C990u;
    SET_GPR_U32(ctx, 31, 0x18C998u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18C990u, 0x18C998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C998u;
label_18c998:
    // 0x18c998: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x18c998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c99c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x18c99cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x18c9a0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x18c9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x18c9a4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18c9a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x18c9a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18c9a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18c9ac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18c9acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18c9b0: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x18C9B0u;
    SET_GPR_U32(ctx, 31, 0x18C9B8u);
    ctx->pc = 0x18C9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C9B0u;
    // 0x18c9b4: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x18C9B0u, 0x18C9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C9B8u;
label_18c9b8:
    // 0x18c9b8: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x18c9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x18c9bc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18c9bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x18c9c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18c9c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18c9c4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x18c9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c9c8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x18c9c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x18c9cc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18c9ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18c9d0: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18C9D0u;
    SET_GPR_U32(ctx, 31, 0x18C9D8u);
    ctx->pc = 0x18C9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C9D0u;
    // 0x18c9d4: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18C9D0u, 0x18C9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C9D8u;
label_18c9d8:
    // 0x18c9d8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x18c9d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x18c9dc: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x18c9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c9e0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18c9e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18c9e4: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18C9E4u;
    SET_GPR_U32(ctx, 31, 0x18C9ECu);
    ctx->pc = 0x18C9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C9E4u;
    // 0x18c9e8: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18C9E4u, 0x18C9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C9ECu;
label_18c9ec:
    // 0x18c9ec: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18c9ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18c9f0: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x18c9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c9f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18c9f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18c9f8: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18C9F8u;
    SET_GPR_U32(ctx, 31, 0x18CA00u);
    ctx->pc = 0x18C9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C9F8u;
    // 0x18c9fc: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18C9F8u, 0x18CA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA00u;
label_18ca00:
    // 0x18ca00: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18ca00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18ca04: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x18ca04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ca08: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18ca08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18ca0c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18CA0Cu;
    SET_GPR_U32(ctx, 31, 0x18CA14u);
    ctx->pc = 0x18CA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CA0Cu;
    // 0x18ca10: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18CA0Cu, 0x18CA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA14u;
label_18ca14:
    // 0x18ca14: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18ca14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18ca18: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x18ca18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ca1c: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x18ca1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x18ca20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18ca20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ca24: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18ca24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18ca28: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x18ca28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x18ca2c: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x18CA2Cu;
    {
        const bool branch_taken_0x18ca2c = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x18CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CA2Cu;
        // 0x18ca30: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ca2c) {
            ctx->pc = 0x18CA38u;
            goto label_18ca38;
        }
    }
    ctx->pc = 0x18CA34u;
    // 0x18ca34: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x18ca34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_18ca38:
    // 0x18ca38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18ca38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18ca3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18CA3Cu;
    {
        const bool branch_taken_0x18ca3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CA3Cu;
        // 0x18ca40: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ca3c) {
            ctx->pc = 0x18CA54u;
            goto label_18ca54;
        }
    }
    ctx->pc = 0x18CA44u;
    // 0x18ca44: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x18ca44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x18ca48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18ca4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18CA4Cu;
    {
        const bool branch_taken_0x18ca4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CA4Cu;
        // 0x18ca50: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ca4c) {
            ctx->pc = 0x18CA58u;
            goto label_18ca58;
        }
    }
    ctx->pc = 0x18CA54u;
label_18ca54:
    // 0x18ca54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18ca54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ca58:
    // 0x18ca58: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x18ca58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x18ca5c: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x18ca5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x18ca60: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x18ca60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18ca64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18ca64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ca68: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x18ca68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x18ca6c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x18ca6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x18ca70: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18ca70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18ca74: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x18ca74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18ca78: 0x26100660  addiu       $s0, $s0, 0x660
    ctx->pc = 0x18ca78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
    // 0x18ca7c: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x18CA7Cu;
    SET_GPR_U32(ctx, 31, 0x18CA84u);
    ctx->pc = 0x18CA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CA7Cu;
    // 0x18ca80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x18CA7Cu, 0x18CA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA84u;
label_18ca84:
    // 0x18ca84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ca84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ca88: 0xc05ce66  jal         func_173998
    ctx->pc = 0x18CA88u;
    SET_GPR_U32(ctx, 31, 0x18CA90u);
    ctx->pc = 0x18CA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CA88u;
    // 0x18ca8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x18CA88u, 0x18CA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA90u;
label_18ca90:
    // 0x18ca90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ca90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ca94: 0xc051f18  jal         func_147C60
    ctx->pc = 0x18CA94u;
    SET_GPR_U32(ctx, 31, 0x18CA9Cu);
    ctx->pc = 0x18CA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CA94u;
    // 0x18ca98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x18CA94u, 0x18CA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA9Cu;
label_18ca9c:
    // 0x18ca9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18ca9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18caa0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18caa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18caa4: 0xc051f22  jal         func_147C88
    ctx->pc = 0x18CAA4u;
    SET_GPR_U32(ctx, 31, 0x18CAACu);
    ctx->pc = 0x18CAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CAA4u;
    // 0x18caa8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x18CAA4u, 0x18CAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CAACu;
label_18caac:
    // 0x18caac: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x18caacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18cab0: 0xc05ce42  jal         func_173908
    ctx->pc = 0x18CAB0u;
    SET_GPR_U32(ctx, 31, 0x18CAB8u);
    ctx->pc = 0x18CAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CAB0u;
    // 0x18cab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x18CAB0u, 0x18CAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CAB8u;
label_18cab8:
    // 0x18cab8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x18cab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18cabc: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x18CABCu;
    SET_GPR_U32(ctx, 31, 0x18CAC4u);
    ctx->pc = 0x18CAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CABCu;
    // 0x18cac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x18CABCu, 0x18CAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CAC4u;
label_18cac4:
    // 0x18cac4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18cac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18cac8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18cac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18cacc: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x18caccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18cad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cad4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18cad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cad8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x18cad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x18cadc: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x18cadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x18cae0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x18cae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x18cae4: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x18CAE4u;
    SET_GPR_U32(ctx, 31, 0x18CAECu);
    ctx->pc = 0x18CAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CAE4u;
    // 0x18cae8: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x18CAE4u, 0x18CAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CAECu;
label_18caec:
    // 0x18caec: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x18caecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x18caf0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x18caf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18caf4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x18caf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18caf8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x18caf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18cafc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x18cafcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18cb00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18cb00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18cb04: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x18cb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18cb08: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x18cb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18cb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x18CB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB0Cu;
        // 0x18cb10: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CB14u;
    // 0x18cb14: 0x0  nop
    ctx->pc = 0x18cb14u;
    // NOP
    ctx->pc = 0x18cb18u;
}
