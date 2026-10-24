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

// Function: func_001997E8
// Address: 0x1997e8 - 0x199a38
void func_001997E8_0x1997e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001997E8_0x1997e8");
#endif

    switch (ctx->pc) {
        case 0x1998b8u: goto label_1998b8;
        case 0x1998d8u: goto label_1998d8;
        case 0x1998f8u: goto label_1998f8;
        case 0x19990cu: goto label_19990c;
        case 0x199920u: goto label_199920;
        case 0x199934u: goto label_199934;
        case 0x1999a4u: goto label_1999a4;
        case 0x1999b0u: goto label_1999b0;
        case 0x1999bcu: goto label_1999bc;
        case 0x1999ccu: goto label_1999cc;
        case 0x1999d8u: goto label_1999d8;
        case 0x1999e4u: goto label_1999e4;
        case 0x199a0cu: goto label_199a0c;
        default: break;
    }

    ctx->pc = 0x1997e8u;

    // 0x1997e8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1997e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1997ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1997ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1997f0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1997f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1997f4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1997f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1997f8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1997f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1997fc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1997fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x199800: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x199800u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199804: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x199804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x199808: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x199808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19980c: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x19980cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x199810: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x199810u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x199814: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x199814u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x199818: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x199818u;
    {
        const bool branch_taken_0x199818 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x19981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199818u;
        // 0x19981c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199818) {
            ctx->pc = 0x199824u;
            goto label_199824;
        }
    }
    ctx->pc = 0x199820u;
    // 0x199820: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x199820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_199824:
    // 0x199824: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x199824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x199828: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x199828u;
    {
        const bool branch_taken_0x199828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199828u;
        // 0x19982c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199828) {
            ctx->pc = 0x199840u;
            goto label_199840;
        }
    }
    ctx->pc = 0x199830u;
    // 0x199830: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x199830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x199834: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x199834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x199838: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x199838u;
    {
        const bool branch_taken_0x199838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199838u;
        // 0x19983c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199838) {
            ctx->pc = 0x199844u;
            goto label_199844;
        }
    }
    ctx->pc = 0x199840u;
label_199840:
    // 0x199840: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x199840u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199844:
    // 0x199844: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x199844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x199848: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x199848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19984c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x19984cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x199850: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x199850u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x199854: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x199854u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x199858: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x199858u;
    {
        const bool branch_taken_0x199858 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x19985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199858u;
        // 0x19985c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199858) {
            ctx->pc = 0x199868u;
            goto label_199868;
        }
    }
    ctx->pc = 0x199860u;
    // 0x199860: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x199860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x199864: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_199868:
    // 0x199868: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x199868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x19986c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19986Cu;
    {
        const bool branch_taken_0x19986c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19986Cu;
        // 0x199870: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19986c) {
            ctx->pc = 0x199884u;
            goto label_199884;
        }
    }
    ctx->pc = 0x199874u;
    // 0x199874: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x199874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x199878: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x199878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19987c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19987Cu;
    {
        const bool branch_taken_0x19987c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19987Cu;
        // 0x199880: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19987c) {
            ctx->pc = 0x199888u;
            goto label_199888;
        }
    }
    ctx->pc = 0x199884u;
label_199884:
    // 0x199884: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x199884u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199888:
    // 0x199888: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x199888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x19988c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x19988cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x199890: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x199890u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x199894: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x199894u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199898: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x199898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19989c: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x19989cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1998a0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1998a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1998a4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1998a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1998a8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1998a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1998ac: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1998acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1998b0: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1998B0u;
    SET_GPR_U32(ctx, 31, 0x1998B8u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1998B0u, 0x1998B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1998B8u;
label_1998b8:
    // 0x1998b8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1998b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1998bc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1998bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1998c0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1998c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1998c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1998c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1998c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1998c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1998cc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1998ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1998d0: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x1998D0u;
    SET_GPR_U32(ctx, 31, 0x1998D8u);
    ctx->pc = 0x1998D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1998D0u;
    // 0x1998d4: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x1998D0u, 0x1998D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1998D8u;
label_1998d8:
    // 0x1998d8: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1998d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1998dc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1998dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1998e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1998e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1998e4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1998e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1998e8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1998e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1998ec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1998ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1998f0: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1998F0u;
    SET_GPR_U32(ctx, 31, 0x1998F8u);
    ctx->pc = 0x1998F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1998F0u;
    // 0x1998f4: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1998F0u, 0x1998F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1998F8u;
label_1998f8:
    // 0x1998f8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1998f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1998fc: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1998fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199900: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x199900u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x199904: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x199904u;
    SET_GPR_U32(ctx, 31, 0x19990Cu);
    ctx->pc = 0x199908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199904u;
    // 0x199908: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x199904u, 0x19990Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19990Cu;
label_19990c:
    // 0x19990c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x19990cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x199910: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x199910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199914: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x199914u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x199918: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x199918u;
    SET_GPR_U32(ctx, 31, 0x199920u);
    ctx->pc = 0x19991Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199918u;
    // 0x19991c: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x199918u, 0x199920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199920u;
label_199920:
    // 0x199920: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x199920u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x199924: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x199924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199928: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x199928u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19992c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x19992Cu;
    SET_GPR_U32(ctx, 31, 0x199934u);
    ctx->pc = 0x199930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19992Cu;
    // 0x199930: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x19992Cu, 0x199934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199934u;
label_199934:
    // 0x199934: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x199934u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x199938: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x199938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19993c: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x19993cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x199940: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x199940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199944: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x199944u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x199948: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x199948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x19994c: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x19994Cu;
    {
        const bool branch_taken_0x19994c = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x199950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19994Cu;
        // 0x199950: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19994c) {
            ctx->pc = 0x199958u;
            goto label_199958;
        }
    }
    ctx->pc = 0x199954u;
    // 0x199954: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x199954u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_199958:
    // 0x199958: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x199958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19995c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19995Cu;
    {
        const bool branch_taken_0x19995c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19995Cu;
        // 0x199960: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19995c) {
            ctx->pc = 0x199974u;
            goto label_199974;
        }
    }
    ctx->pc = 0x199964u;
    // 0x199964: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x199964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x199968: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x199968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19996c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19996Cu;
    {
        const bool branch_taken_0x19996c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19996Cu;
        // 0x199970: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19996c) {
            ctx->pc = 0x199978u;
            goto label_199978;
        }
    }
    ctx->pc = 0x199974u;
label_199974:
    // 0x199974: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x199974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199978:
    // 0x199978: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x199978u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x19997c: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x19997cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x199980: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x199980u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x199984: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x199984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199988: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x199988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x19998c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x19998cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x199990: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x199990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x199994: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x199994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x199998: 0x26100660  addiu       $s0, $s0, 0x660
    ctx->pc = 0x199998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
    // 0x19999c: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x19999Cu;
    SET_GPR_U32(ctx, 31, 0x1999A4u);
    ctx->pc = 0x1999A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19999Cu;
    // 0x1999a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x19999Cu, 0x1999A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1999A4u;
label_1999a4:
    // 0x1999a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1999a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1999a8: 0xc05ce66  jal         func_173998
    ctx->pc = 0x1999A8u;
    SET_GPR_U32(ctx, 31, 0x1999B0u);
    ctx->pc = 0x1999ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1999A8u;
    // 0x1999ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x1999A8u, 0x1999B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1999B0u;
label_1999b0:
    // 0x1999b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1999b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1999b4: 0xc051f18  jal         func_147C60
    ctx->pc = 0x1999B4u;
    SET_GPR_U32(ctx, 31, 0x1999BCu);
    ctx->pc = 0x1999B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1999B4u;
    // 0x1999b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1999B4u, 0x1999BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1999BCu;
label_1999bc:
    // 0x1999bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1999bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1999c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1999c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1999c4: 0xc051f22  jal         func_147C88
    ctx->pc = 0x1999C4u;
    SET_GPR_U32(ctx, 31, 0x1999CCu);
    ctx->pc = 0x1999C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1999C4u;
    // 0x1999c8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x1999C4u, 0x1999CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1999CCu;
label_1999cc:
    // 0x1999cc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1999ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1999d0: 0xc05ce42  jal         func_173908
    ctx->pc = 0x1999D0u;
    SET_GPR_U32(ctx, 31, 0x1999D8u);
    ctx->pc = 0x1999D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1999D0u;
    // 0x1999d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x1999D0u, 0x1999D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1999D8u;
label_1999d8:
    // 0x1999d8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1999d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1999dc: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x1999DCu;
    SET_GPR_U32(ctx, 31, 0x1999E4u);
    ctx->pc = 0x1999E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1999DCu;
    // 0x1999e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x1999DCu, 0x1999E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1999E4u;
label_1999e4:
    // 0x1999e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1999e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1999e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1999e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1999ec: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1999ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1999f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1999f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1999f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1999f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1999f8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1999f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1999fc: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1999fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x199a00: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x199a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x199a04: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x199A04u;
    SET_GPR_U32(ctx, 31, 0x199A0Cu);
    ctx->pc = 0x199A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199A04u;
    // 0x199a08: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x199A04u, 0x199A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199A0Cu;
label_199a0c:
    // 0x199a0c: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x199a0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x199a10: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x199a10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x199a14: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x199a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x199a18: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x199a18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x199a1c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x199a1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x199a20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x199a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x199a24: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x199a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x199a28: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x199a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x199a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x199A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A2Cu;
        // 0x199a30: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199A34u;
    // 0x199a34: 0x0  nop
    ctx->pc = 0x199a34u;
    // NOP
    ctx->pc = 0x199a38u;
}
