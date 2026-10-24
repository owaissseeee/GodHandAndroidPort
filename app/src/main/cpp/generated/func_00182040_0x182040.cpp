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

// Function: func_00182040
// Address: 0x182040 - 0x182280
void func_00182040_0x182040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00182040_0x182040");
#endif

    switch (ctx->pc) {
        case 0x182110u: goto label_182110;
        case 0x182130u: goto label_182130;
        case 0x182144u: goto label_182144;
        case 0x182158u: goto label_182158;
        case 0x18216cu: goto label_18216c;
        case 0x182180u: goto label_182180;
        case 0x1821f0u: goto label_1821f0;
        case 0x1821fcu: goto label_1821fc;
        case 0x182208u: goto label_182208;
        case 0x182218u: goto label_182218;
        case 0x182224u: goto label_182224;
        case 0x182230u: goto label_182230;
        case 0x182258u: goto label_182258;
        default: break;
    }

    ctx->pc = 0x182040u;

    // 0x182040: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x182040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x182044: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x182044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182048: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x182048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x18204c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x18204cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x182050: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x182050u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182054: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x182054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x182058: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x182058u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18205c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x18205cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x182060: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x182060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x182064: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x182064u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x182068: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x182068u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x18206c: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x18206cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x182070: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x182070u;
    {
        const bool branch_taken_0x182070 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x182074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182070u;
        // 0x182074: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182070) {
            ctx->pc = 0x18207Cu;
            goto label_18207c;
        }
    }
    ctx->pc = 0x182078u;
    // 0x182078: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x182078u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_18207c:
    // 0x18207c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18207cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x182080: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x182080u;
    {
        const bool branch_taken_0x182080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182080u;
        // 0x182084: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182080) {
            ctx->pc = 0x182098u;
            goto label_182098;
        }
    }
    ctx->pc = 0x182088u;
    // 0x182088: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x182088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x18208c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18208cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182090: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x182090u;
    {
        const bool branch_taken_0x182090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182090u;
        // 0x182094: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182090) {
            ctx->pc = 0x18209Cu;
            goto label_18209c;
        }
    }
    ctx->pc = 0x182098u;
label_182098:
    // 0x182098: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x182098u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18209c:
    // 0x18209c: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x18209cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1820a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1820a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1820a4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1820a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1820a8: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1820a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x1820ac: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x1820acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1820b0: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1820B0u;
    {
        const bool branch_taken_0x1820b0 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1820B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1820B0u;
        // 0x1820b4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1820b0) {
            ctx->pc = 0x1820C0u;
            goto label_1820c0;
        }
    }
    ctx->pc = 0x1820B8u;
    // 0x1820b8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1820b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1820bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1820bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1820c0:
    // 0x1820c0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1820c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1820c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1820C4u;
    {
        const bool branch_taken_0x1820c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1820C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1820C4u;
        // 0x1820c8: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1820c4) {
            ctx->pc = 0x1820DCu;
            goto label_1820dc;
        }
    }
    ctx->pc = 0x1820CCu;
    // 0x1820cc: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1820ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1820d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1820d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1820d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1820D4u;
    {
        const bool branch_taken_0x1820d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1820D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1820D4u;
        // 0x1820d8: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1820d4) {
            ctx->pc = 0x1820E0u;
            goto label_1820e0;
        }
    }
    ctx->pc = 0x1820DCu;
label_1820dc:
    // 0x1820dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1820dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1820e0:
    // 0x1820e0: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1820e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1820e4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1820e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1820e8: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1820e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x1820ec: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1820ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1820f0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1820f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1820f4: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1820f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1820f8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1820f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1820fc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1820fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x182100: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x182100u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x182104: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x182104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x182108: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x182108u;
    SET_GPR_U32(ctx, 31, 0x182110u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x182108u, 0x182110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182110u;
label_182110:
    // 0x182110: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x182110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182114: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x182114u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x182118: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x182118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x18211c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18211cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x182120: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x182120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x182124: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x182124u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x182128: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x182128u;
    SET_GPR_U32(ctx, 31, 0x182130u);
    ctx->pc = 0x18212Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182128u;
    // 0x18212c: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x182128u, 0x182130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182130u;
label_182130:
    // 0x182130: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x182130u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x182134: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x182134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182138: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x182138u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18213c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18213Cu;
    SET_GPR_U32(ctx, 31, 0x182144u);
    ctx->pc = 0x182140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18213Cu;
    // 0x182140: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18213Cu, 0x182144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182144u;
label_182144:
    // 0x182144: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x182144u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x182148: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x182148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18214c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18214cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x182150: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x182150u;
    SET_GPR_U32(ctx, 31, 0x182158u);
    ctx->pc = 0x182154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182150u;
    // 0x182154: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x182150u, 0x182158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182158u;
label_182158:
    // 0x182158: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x182158u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x18215c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x18215cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182160: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x182160u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x182164: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x182164u;
    SET_GPR_U32(ctx, 31, 0x18216Cu);
    ctx->pc = 0x182168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182164u;
    // 0x182168: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x182164u, 0x18216Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18216Cu;
label_18216c:
    // 0x18216c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x18216cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x182170: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x182170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182174: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x182174u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x182178: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x182178u;
    SET_GPR_U32(ctx, 31, 0x182180u);
    ctx->pc = 0x18217Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182178u;
    // 0x18217c: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x182178u, 0x182180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182180u;
label_182180:
    // 0x182180: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x182180u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x182184: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x182184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182188: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x182188u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x18218c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18218cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182190: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x182190u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x182194: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x182194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x182198: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x182198u;
    {
        const bool branch_taken_0x182198 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x18219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182198u;
        // 0x18219c: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x182198) {
            ctx->pc = 0x1821A4u;
            goto label_1821a4;
        }
    }
    ctx->pc = 0x1821A0u;
    // 0x1821a0: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1821a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1821a4:
    // 0x1821a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1821a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1821a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1821A8u;
    {
        const bool branch_taken_0x1821a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1821ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1821A8u;
        // 0x1821ac: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1821a8) {
            ctx->pc = 0x1821C0u;
            goto label_1821c0;
        }
    }
    ctx->pc = 0x1821B0u;
    // 0x1821b0: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1821b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1821b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1821b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1821b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1821B8u;
    {
        const bool branch_taken_0x1821b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1821BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1821B8u;
        // 0x1821bc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1821b8) {
            ctx->pc = 0x1821C4u;
            goto label_1821c4;
        }
    }
    ctx->pc = 0x1821C0u;
label_1821c0:
    // 0x1821c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1821c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1821c4:
    // 0x1821c4: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x1821c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1821c8: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x1821c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1821cc: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x1821ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1821d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1821d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1821d4: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1821d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x1821d8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1821d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1821dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1821dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1821e0: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x1821e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1821e4: 0x26100660  addiu       $s0, $s0, 0x660
    ctx->pc = 0x1821e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
    // 0x1821e8: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1821E8u;
    SET_GPR_U32(ctx, 31, 0x1821F0u);
    ctx->pc = 0x1821ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1821E8u;
    // 0x1821ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1821E8u, 0x1821F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1821F0u;
label_1821f0:
    // 0x1821f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1821f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1821f4: 0xc05ce66  jal         func_173998
    ctx->pc = 0x1821F4u;
    SET_GPR_U32(ctx, 31, 0x1821FCu);
    ctx->pc = 0x1821F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1821F4u;
    // 0x1821f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x1821F4u, 0x1821FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1821FCu;
label_1821fc:
    // 0x1821fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1821fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182200: 0xc051f18  jal         func_147C60
    ctx->pc = 0x182200u;
    SET_GPR_U32(ctx, 31, 0x182208u);
    ctx->pc = 0x182204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182200u;
    // 0x182204: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x182200u, 0x182208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182208u;
label_182208:
    // 0x182208: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x182208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18220c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18220cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182210: 0xc051f22  jal         func_147C88
    ctx->pc = 0x182210u;
    SET_GPR_U32(ctx, 31, 0x182218u);
    ctx->pc = 0x182214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182210u;
    // 0x182214: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x182210u, 0x182218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182218u;
label_182218:
    // 0x182218: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x182218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18221c: 0xc05ce42  jal         func_173908
    ctx->pc = 0x18221Cu;
    SET_GPR_U32(ctx, 31, 0x182224u);
    ctx->pc = 0x182220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18221Cu;
    // 0x182220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x18221Cu, 0x182224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182224u;
label_182224:
    // 0x182224: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x182224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x182228: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x182228u;
    SET_GPR_U32(ctx, 31, 0x182230u);
    ctx->pc = 0x18222Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182228u;
    // 0x18222c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x182228u, 0x182230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182230u;
label_182230:
    // 0x182230: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x182230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x182234: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x182234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182238: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x182238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18223c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18223cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182240: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x182240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182244: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x182244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x182248: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x182248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x18224c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x18224cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x182250: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x182250u;
    SET_GPR_U32(ctx, 31, 0x182258u);
    ctx->pc = 0x182254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182250u;
    // 0x182254: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x182250u, 0x182258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182258u;
label_182258:
    // 0x182258: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x182258u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x18225c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x18225cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x182260: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x182260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x182264: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x182264u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x182268: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x182268u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18226c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18226cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182270: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x182270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x182274: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x182274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x182278: 0x3e00008  jr          $ra
    ctx->pc = 0x182278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182278u;
        // 0x18227c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182280u;
}
