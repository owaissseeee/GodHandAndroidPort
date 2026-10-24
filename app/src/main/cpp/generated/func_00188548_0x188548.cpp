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

// Function: func_00188548
// Address: 0x188548 - 0x188798
void func_00188548_0x188548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00188548_0x188548");
#endif

    switch (ctx->pc) {
        case 0x188618u: goto label_188618;
        case 0x188638u: goto label_188638;
        case 0x188658u: goto label_188658;
        case 0x18866cu: goto label_18866c;
        case 0x188680u: goto label_188680;
        case 0x188694u: goto label_188694;
        case 0x188704u: goto label_188704;
        case 0x188710u: goto label_188710;
        case 0x18871cu: goto label_18871c;
        case 0x18872cu: goto label_18872c;
        case 0x188738u: goto label_188738;
        case 0x188744u: goto label_188744;
        case 0x18876cu: goto label_18876c;
        default: break;
    }

    ctx->pc = 0x188548u;

    // 0x188548: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x188548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x18854c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18854cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188550: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x188550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x188554: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x188554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x188558: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x188558u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18855c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x18855cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x188560: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x188560u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188564: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x188564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x188568: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x188568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18856c: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x18856cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x188570: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x188570u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x188574: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x188574u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x188578: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x188578u;
    {
        const bool branch_taken_0x188578 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x18857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188578u;
        // 0x18857c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188578) {
            ctx->pc = 0x188584u;
            goto label_188584;
        }
    }
    ctx->pc = 0x188580u;
    // 0x188580: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x188580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_188584:
    // 0x188584: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x188584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x188588: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x188588u;
    {
        const bool branch_taken_0x188588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188588u;
        // 0x18858c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188588) {
            ctx->pc = 0x1885A0u;
            goto label_1885a0;
        }
    }
    ctx->pc = 0x188590u;
    // 0x188590: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x188590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x188594: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x188594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x188598: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x188598u;
    {
        const bool branch_taken_0x188598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188598u;
        // 0x18859c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188598) {
            ctx->pc = 0x1885A4u;
            goto label_1885a4;
        }
    }
    ctx->pc = 0x1885A0u;
label_1885a0:
    // 0x1885a0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1885a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1885a4:
    // 0x1885a4: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1885a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1885a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1885a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1885ac: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1885acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1885b0: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1885b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x1885b4: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x1885b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1885b8: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1885B8u;
    {
        const bool branch_taken_0x1885b8 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1885BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885B8u;
        // 0x1885bc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1885b8) {
            ctx->pc = 0x1885C8u;
            goto label_1885c8;
        }
    }
    ctx->pc = 0x1885C0u;
    // 0x1885c0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1885c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1885c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1885c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1885c8:
    // 0x1885c8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1885c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1885cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1885CCu;
    {
        const bool branch_taken_0x1885cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1885D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885CCu;
        // 0x1885d0: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1885cc) {
            ctx->pc = 0x1885E4u;
            goto label_1885e4;
        }
    }
    ctx->pc = 0x1885D4u;
    // 0x1885d4: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1885d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1885d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1885d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1885dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1885DCu;
    {
        const bool branch_taken_0x1885dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1885E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885DCu;
        // 0x1885e0: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1885dc) {
            ctx->pc = 0x1885E8u;
            goto label_1885e8;
        }
    }
    ctx->pc = 0x1885E4u;
label_1885e4:
    // 0x1885e4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1885e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1885e8:
    // 0x1885e8: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1885e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1885ec: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1885ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1885f0: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1885f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x1885f4: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1885f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1885f8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1885f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1885fc: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1885fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x188600: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x188600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x188604: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x188604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x188608: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x188608u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x18860c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x18860cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x188610: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x188610u;
    SET_GPR_U32(ctx, 31, 0x188618u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x188610u, 0x188618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188618u;
label_188618:
    // 0x188618: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x188618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18861c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x18861cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x188620: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x188620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x188624: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x188624u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x188628: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x188628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18862c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18862cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x188630: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x188630u;
    SET_GPR_U32(ctx, 31, 0x188638u);
    ctx->pc = 0x188634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188630u;
    // 0x188634: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x188630u, 0x188638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188638u;
label_188638:
    // 0x188638: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x188638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x18863c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18863cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x188640: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x188640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x188644: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x188644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188648: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x188648u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x18864c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18864cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x188650: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x188650u;
    SET_GPR_U32(ctx, 31, 0x188658u);
    ctx->pc = 0x188654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188650u;
    // 0x188654: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x188650u, 0x188658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188658u;
label_188658:
    // 0x188658: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x188658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x18865c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x18865cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188660: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x188660u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x188664: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x188664u;
    SET_GPR_U32(ctx, 31, 0x18866Cu);
    ctx->pc = 0x188668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188664u;
    // 0x188668: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x188664u, 0x18866Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18866Cu;
label_18866c:
    // 0x18866c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18866cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x188670: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x188670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188674: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x188674u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x188678: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x188678u;
    SET_GPR_U32(ctx, 31, 0x188680u);
    ctx->pc = 0x18867Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188678u;
    // 0x18867c: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x188678u, 0x188680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188680u;
label_188680:
    // 0x188680: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x188680u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x188684: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x188684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188688: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x188688u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18868c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18868Cu;
    SET_GPR_U32(ctx, 31, 0x188694u);
    ctx->pc = 0x188690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18868Cu;
    // 0x188690: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18868Cu, 0x188694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188694u;
label_188694:
    // 0x188694: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x188694u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x188698: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x188698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18869c: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x18869cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1886a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1886a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1886a4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1886a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1886a8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1886a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1886ac: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1886ACu;
    {
        const bool branch_taken_0x1886ac = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1886B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886ACu;
        // 0x1886b0: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1886ac) {
            ctx->pc = 0x1886B8u;
            goto label_1886b8;
        }
    }
    ctx->pc = 0x1886B4u;
    // 0x1886b4: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1886b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1886b8:
    // 0x1886b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1886b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1886bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1886BCu;
    {
        const bool branch_taken_0x1886bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1886C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886BCu;
        // 0x1886c0: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1886bc) {
            ctx->pc = 0x1886D4u;
            goto label_1886d4;
        }
    }
    ctx->pc = 0x1886C4u;
    // 0x1886c4: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1886c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1886c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1886c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1886cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1886CCu;
    {
        const bool branch_taken_0x1886cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1886D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886CCu;
        // 0x1886d0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1886cc) {
            ctx->pc = 0x1886D8u;
            goto label_1886d8;
        }
    }
    ctx->pc = 0x1886D4u;
label_1886d4:
    // 0x1886d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1886d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1886d8:
    // 0x1886d8: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x1886d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1886dc: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x1886dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1886e0: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x1886e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1886e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1886e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1886e8: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1886e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x1886ec: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1886ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1886f0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1886f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1886f4: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x1886f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1886f8: 0x26100610  addiu       $s0, $s0, 0x610
    ctx->pc = 0x1886f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x1886fc: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1886FCu;
    SET_GPR_U32(ctx, 31, 0x188704u);
    ctx->pc = 0x188700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1886FCu;
    // 0x188700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1886FCu, 0x188704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188704u;
label_188704:
    // 0x188704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188708: 0xc05ce66  jal         func_173998
    ctx->pc = 0x188708u;
    SET_GPR_U32(ctx, 31, 0x188710u);
    ctx->pc = 0x18870Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188708u;
    // 0x18870c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x188708u, 0x188710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188710u;
label_188710:
    // 0x188710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188714: 0xc051f18  jal         func_147C60
    ctx->pc = 0x188714u;
    SET_GPR_U32(ctx, 31, 0x18871Cu);
    ctx->pc = 0x188718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188714u;
    // 0x188718: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x188714u, 0x18871Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18871Cu;
label_18871c:
    // 0x18871c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18871cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188720: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x188720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188724: 0xc051f22  jal         func_147C88
    ctx->pc = 0x188724u;
    SET_GPR_U32(ctx, 31, 0x18872Cu);
    ctx->pc = 0x188728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188724u;
    // 0x188728: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x188724u, 0x18872Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18872Cu;
label_18872c:
    // 0x18872c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x18872cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x188730: 0xc05ce42  jal         func_173908
    ctx->pc = 0x188730u;
    SET_GPR_U32(ctx, 31, 0x188738u);
    ctx->pc = 0x188734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188730u;
    // 0x188734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x188730u, 0x188738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188738u;
label_188738:
    // 0x188738: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x188738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18873c: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x18873Cu;
    SET_GPR_U32(ctx, 31, 0x188744u);
    ctx->pc = 0x188740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18873Cu;
    // 0x188740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x18873Cu, 0x188744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188744u;
label_188744:
    // 0x188744: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x188744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x188748: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x188748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18874c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x18874cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x188750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188754: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x188754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188758: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x188758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x18875c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x18875cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x188760: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x188760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x188764: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x188764u;
    SET_GPR_U32(ctx, 31, 0x18876Cu);
    ctx->pc = 0x188768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188764u;
    // 0x188768: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x188764u, 0x18876Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18876Cu;
label_18876c:
    // 0x18876c: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x18876cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x188770: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x188770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x188774: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x188774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x188778: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x188778u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18877c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x18877cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x188780: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x188780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x188784: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x188784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x188788: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x188788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18878c: 0x3e00008  jr          $ra
    ctx->pc = 0x18878Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18878Cu;
        // 0x188790: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18878Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188794u;
    // 0x188794: 0x0  nop
    ctx->pc = 0x188794u;
    // NOP
    ctx->pc = 0x188798u;
}
