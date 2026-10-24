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

// Function: func_001953E8
// Address: 0x1953e8 - 0x195620
void func_001953E8_0x1953e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001953E8_0x1953e8");
#endif

    switch (ctx->pc) {
        case 0x1954b4u: goto label_1954b4;
        case 0x1954c8u: goto label_1954c8;
        case 0x1954e8u: goto label_1954e8;
        case 0x1954fcu: goto label_1954fc;
        case 0x195510u: goto label_195510;
        case 0x195524u: goto label_195524;
        case 0x195594u: goto label_195594;
        case 0x1955a0u: goto label_1955a0;
        case 0x1955acu: goto label_1955ac;
        case 0x1955bcu: goto label_1955bc;
        case 0x1955c8u: goto label_1955c8;
        case 0x1955d4u: goto label_1955d4;
        case 0x1955fcu: goto label_1955fc;
        default: break;
    }

    ctx->pc = 0x1953e8u;

    // 0x1953e8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1953e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1953ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1953ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1953f0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1953f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1953f4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1953f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1953f8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1953f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1953fc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1953fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x195400: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x195400u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195404: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x195404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x195408: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x195408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19540c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x19540cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x195410: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x195410u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x195414: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x195414u;
    {
        const bool branch_taken_0x195414 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x195418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195414u;
        // 0x195418: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195414) {
            ctx->pc = 0x195420u;
            goto label_195420;
        }
    }
    ctx->pc = 0x19541Cu;
    // 0x19541c: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x19541cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_195420:
    // 0x195420: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x195424: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x195424u;
    {
        const bool branch_taken_0x195424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195424u;
        // 0x195428: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195424) {
            ctx->pc = 0x19543Cu;
            goto label_19543c;
        }
    }
    ctx->pc = 0x19542Cu;
    // 0x19542c: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x19542cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x195430: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x195430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x195434: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x195434u;
    {
        const bool branch_taken_0x195434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195434u;
        // 0x195438: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195434) {
            ctx->pc = 0x195440u;
            goto label_195440;
        }
    }
    ctx->pc = 0x19543Cu;
label_19543c:
    // 0x19543c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19543cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195440:
    // 0x195440: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x195440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x195444: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x195444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195448: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x195448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x19544c: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x19544cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x195450: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x195450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x195454: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x195454u;
    {
        const bool branch_taken_0x195454 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x195458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195454u;
        // 0x195458: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195454) {
            ctx->pc = 0x195464u;
            goto label_195464;
        }
    }
    ctx->pc = 0x19545Cu;
    // 0x19545c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x19545cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x195460: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x195460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_195464:
    // 0x195464: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x195464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x195468: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x195468u;
    {
        const bool branch_taken_0x195468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195468u;
        // 0x19546c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195468) {
            ctx->pc = 0x195480u;
            goto label_195480;
        }
    }
    ctx->pc = 0x195470u;
    // 0x195470: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x195470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x195474: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x195474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x195478: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x195478u;
    {
        const bool branch_taken_0x195478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195478u;
        // 0x19547c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195478) {
            ctx->pc = 0x195484u;
            goto label_195484;
        }
    }
    ctx->pc = 0x195480u;
label_195480:
    // 0x195480: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x195480u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195484:
    // 0x195484: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x195484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x195488: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x195488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x19548c: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x19548cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x195490: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x195490u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x195494: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x195494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x195498: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x195498u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19549c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x19549cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1954a0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1954a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1954a4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1954a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1954a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1954a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1954ac: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1954ACu;
    SET_GPR_U32(ctx, 31, 0x1954B4u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1954ACu, 0x1954B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1954B4u;
label_1954b4:
    // 0x1954b4: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1954b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1954b8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1954b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1954bc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1954bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1954c0: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x1954C0u;
    SET_GPR_U32(ctx, 31, 0x1954C8u);
    ctx->pc = 0x1954C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1954C0u;
    // 0x1954c4: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x1954C0u, 0x1954C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1954C8u;
label_1954c8:
    // 0x1954c8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1954c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1954cc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1954ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1954d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1954d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1954d4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1954d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1954d8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1954d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1954dc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1954dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1954e0: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1954E0u;
    SET_GPR_U32(ctx, 31, 0x1954E8u);
    ctx->pc = 0x1954E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1954E0u;
    // 0x1954e4: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1954E0u, 0x1954E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1954E8u;
label_1954e8:
    // 0x1954e8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1954e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1954ec: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1954ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1954f0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1954f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1954f4: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1954F4u;
    SET_GPR_U32(ctx, 31, 0x1954FCu);
    ctx->pc = 0x1954F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1954F4u;
    // 0x1954f8: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1954F4u, 0x1954FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1954FCu;
label_1954fc:
    // 0x1954fc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1954fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x195500: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x195500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195504: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x195504u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x195508: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x195508u;
    SET_GPR_U32(ctx, 31, 0x195510u);
    ctx->pc = 0x19550Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195508u;
    // 0x19550c: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x195508u, 0x195510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195510u;
label_195510:
    // 0x195510: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x195510u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x195514: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x195514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195518: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x195518u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19551c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x19551Cu;
    SET_GPR_U32(ctx, 31, 0x195524u);
    ctx->pc = 0x195520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19551Cu;
    // 0x195520: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x19551Cu, 0x195524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195524u;
label_195524:
    // 0x195524: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x195524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x195528: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x195528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19552c: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x19552cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x195530: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x195530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195534: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x195534u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x195538: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x195538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x19553c: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x19553Cu;
    {
        const bool branch_taken_0x19553c = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x195540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19553Cu;
        // 0x195540: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19553c) {
            ctx->pc = 0x195548u;
            goto label_195548;
        }
    }
    ctx->pc = 0x195544u;
    // 0x195544: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x195544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_195548:
    // 0x195548: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x195548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19554c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19554Cu;
    {
        const bool branch_taken_0x19554c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19554Cu;
        // 0x195550: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19554c) {
            ctx->pc = 0x195564u;
            goto label_195564;
        }
    }
    ctx->pc = 0x195554u;
    // 0x195554: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x195554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x195558: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x195558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19555c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19555Cu;
    {
        const bool branch_taken_0x19555c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19555Cu;
        // 0x195560: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19555c) {
            ctx->pc = 0x195568u;
            goto label_195568;
        }
    }
    ctx->pc = 0x195564u;
label_195564:
    // 0x195564: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x195564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195568:
    // 0x195568: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x195568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x19556c: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x19556cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x195570: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x195570u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x195574: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x195574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195578: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x195578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x19557c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x19557cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x195580: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x195580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x195584: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x195584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x195588: 0x26100630  addiu       $s0, $s0, 0x630
    ctx->pc = 0x195588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1584));
    // 0x19558c: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x19558Cu;
    SET_GPR_U32(ctx, 31, 0x195594u);
    ctx->pc = 0x195590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19558Cu;
    // 0x195590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x19558Cu, 0x195594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195594u;
label_195594:
    // 0x195594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195598: 0xc05ce66  jal         func_173998
    ctx->pc = 0x195598u;
    SET_GPR_U32(ctx, 31, 0x1955A0u);
    ctx->pc = 0x19559Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195598u;
    // 0x19559c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x195598u, 0x1955A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1955A0u;
label_1955a0:
    // 0x1955a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1955a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1955a4: 0xc051f18  jal         func_147C60
    ctx->pc = 0x1955A4u;
    SET_GPR_U32(ctx, 31, 0x1955ACu);
    ctx->pc = 0x1955A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1955A4u;
    // 0x1955a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1955A4u, 0x1955ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1955ACu;
label_1955ac:
    // 0x1955ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1955acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1955b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1955b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1955b4: 0xc051f22  jal         func_147C88
    ctx->pc = 0x1955B4u;
    SET_GPR_U32(ctx, 31, 0x1955BCu);
    ctx->pc = 0x1955B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1955B4u;
    // 0x1955b8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x1955B4u, 0x1955BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1955BCu;
label_1955bc:
    // 0x1955bc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1955bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1955c0: 0xc05ce42  jal         func_173908
    ctx->pc = 0x1955C0u;
    SET_GPR_U32(ctx, 31, 0x1955C8u);
    ctx->pc = 0x1955C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1955C0u;
    // 0x1955c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x1955C0u, 0x1955C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1955C8u;
label_1955c8:
    // 0x1955c8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1955c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1955cc: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x1955CCu;
    SET_GPR_U32(ctx, 31, 0x1955D4u);
    ctx->pc = 0x1955D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1955CCu;
    // 0x1955d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x1955CCu, 0x1955D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1955D4u;
label_1955d4:
    // 0x1955d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1955d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1955d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1955d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1955dc: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1955dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1955e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1955e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1955e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1955e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1955e8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1955e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1955ec: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1955ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1955f0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1955f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1955f4: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x1955F4u;
    SET_GPR_U32(ctx, 31, 0x1955FCu);
    ctx->pc = 0x1955F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1955F4u;
    // 0x1955f8: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x1955F4u, 0x1955FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1955FCu;
label_1955fc:
    // 0x1955fc: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x1955fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x195600: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x195600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x195604: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x195604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x195608: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x195608u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19560c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x19560cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x195610: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x195610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x195614: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x195614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x195618: 0x3e00008  jr          $ra
    ctx->pc = 0x195618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195618u;
        // 0x19561c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195620u;
}
