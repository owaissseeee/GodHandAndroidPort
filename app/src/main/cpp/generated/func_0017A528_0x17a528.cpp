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

// Function: func_0017A528
// Address: 0x17a528 - 0x17a778
void func_0017A528_0x17a528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017A528_0x17a528");
#endif

    switch (ctx->pc) {
        case 0x17a5f8u: goto label_17a5f8;
        case 0x17a618u: goto label_17a618;
        case 0x17a638u: goto label_17a638;
        case 0x17a64cu: goto label_17a64c;
        case 0x17a660u: goto label_17a660;
        case 0x17a674u: goto label_17a674;
        case 0x17a6e4u: goto label_17a6e4;
        case 0x17a6f0u: goto label_17a6f0;
        case 0x17a6fcu: goto label_17a6fc;
        case 0x17a70cu: goto label_17a70c;
        case 0x17a718u: goto label_17a718;
        case 0x17a724u: goto label_17a724;
        case 0x17a74cu: goto label_17a74c;
        default: break;
    }

    ctx->pc = 0x17a528u;

    // 0x17a528: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x17a528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x17a52c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17a52cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a530: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x17a530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x17a534: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x17a534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x17a538: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17a538u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a53c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x17a53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x17a540: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17a540u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a544: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x17a544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x17a548: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17a548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17a54c: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x17a54cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x17a550: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x17a550u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x17a554: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x17a554u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x17a558: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x17A558u;
    {
        const bool branch_taken_0x17a558 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x17A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A558u;
        // 0x17a55c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a558) {
            ctx->pc = 0x17A564u;
            goto label_17a564;
        }
    }
    ctx->pc = 0x17A560u;
    // 0x17a560: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x17a560u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_17a564:
    // 0x17a564: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17a564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17a568: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17A568u;
    {
        const bool branch_taken_0x17a568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A568u;
        // 0x17a56c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a568) {
            ctx->pc = 0x17A580u;
            goto label_17a580;
        }
    }
    ctx->pc = 0x17A570u;
    // 0x17a570: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x17a570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x17a574: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17a578: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17A578u;
    {
        const bool branch_taken_0x17a578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A578u;
        // 0x17a57c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a578) {
            ctx->pc = 0x17A584u;
            goto label_17a584;
        }
    }
    ctx->pc = 0x17A580u;
label_17a580:
    // 0x17a580: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17a580u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a584:
    // 0x17a584: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x17a584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x17a588: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17a588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a58c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x17a58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x17a590: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x17a590u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x17a594: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x17a594u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x17a598: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A598u;
    {
        const bool branch_taken_0x17a598 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x17A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A598u;
        // 0x17a59c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a598) {
            ctx->pc = 0x17A5A8u;
            goto label_17a5a8;
        }
    }
    ctx->pc = 0x17A5A0u;
    // 0x17a5a0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x17a5a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17a5a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17a5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a5a8:
    // 0x17a5a8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x17a5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x17a5ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17A5ACu;
    {
        const bool branch_taken_0x17a5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A5ACu;
        // 0x17a5b0: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a5ac) {
            ctx->pc = 0x17A5C4u;
            goto label_17a5c4;
        }
    }
    ctx->pc = 0x17A5B4u;
    // 0x17a5b4: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x17a5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x17a5b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17a5bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17A5BCu;
    {
        const bool branch_taken_0x17a5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A5BCu;
        // 0x17a5c0: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a5bc) {
            ctx->pc = 0x17A5C8u;
            goto label_17a5c8;
        }
    }
    ctx->pc = 0x17A5C4u;
label_17a5c4:
    // 0x17a5c4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17a5c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a5c8:
    // 0x17a5c8: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x17a5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x17a5cc: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x17a5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x17a5d0: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x17a5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x17a5d4: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x17a5d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17a5d8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x17a5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17a5dc: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x17a5dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17a5e0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x17a5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17a5e4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x17a5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x17a5e8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x17a5e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x17a5ec: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x17a5ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x17a5f0: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x17A5F0u;
    SET_GPR_U32(ctx, 31, 0x17A5F8u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x17A5F0u, 0x17A5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A5F8u;
label_17a5f8:
    // 0x17a5f8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x17a5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17a5fc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x17a5fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x17a600: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x17a600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x17a604: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x17a604u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x17a608: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17a608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17a60c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x17a60cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17a610: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x17A610u;
    SET_GPR_U32(ctx, 31, 0x17A618u);
    ctx->pc = 0x17A614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A610u;
    // 0x17a614: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x17A610u, 0x17A618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A618u;
label_17a618:
    // 0x17a618: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x17a618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x17a61c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x17a61cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x17a620: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x17a620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17a624: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x17a624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17a628: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x17a628u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x17a62c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x17a62cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17a630: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x17A630u;
    SET_GPR_U32(ctx, 31, 0x17A638u);
    ctx->pc = 0x17A634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A630u;
    // 0x17a634: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x17A630u, 0x17A638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A638u;
label_17a638:
    // 0x17a638: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x17a638u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x17a63c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x17a63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17a640: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x17a640u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17a644: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x17A644u;
    SET_GPR_U32(ctx, 31, 0x17A64Cu);
    ctx->pc = 0x17A648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A644u;
    // 0x17a648: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x17A644u, 0x17A64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A64Cu;
label_17a64c:
    // 0x17a64c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x17a64cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x17a650: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x17a650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17a654: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x17a654u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17a658: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x17A658u;
    SET_GPR_U32(ctx, 31, 0x17A660u);
    ctx->pc = 0x17A65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A658u;
    // 0x17a65c: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x17A658u, 0x17A660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A660u;
label_17a660:
    // 0x17a660: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x17a660u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x17a664: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x17a664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17a668: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x17a668u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17a66c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x17A66Cu;
    SET_GPR_U32(ctx, 31, 0x17A674u);
    ctx->pc = 0x17A670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A66Cu;
    // 0x17a670: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x17A66Cu, 0x17A674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A674u;
label_17a674:
    // 0x17a674: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x17a674u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x17a678: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x17a678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17a67c: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x17a67cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x17a680: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17a680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a684: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x17a684u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17a688: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x17a688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x17a68c: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x17A68Cu;
    {
        const bool branch_taken_0x17a68c = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x17A690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A68Cu;
        // 0x17a690: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a68c) {
            ctx->pc = 0x17A698u;
            goto label_17a698;
        }
    }
    ctx->pc = 0x17A694u;
    // 0x17a694: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x17a694u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_17a698:
    // 0x17a698: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17a698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17a69c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17A69Cu;
    {
        const bool branch_taken_0x17a69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A69Cu;
        // 0x17a6a0: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a69c) {
            ctx->pc = 0x17A6B4u;
            goto label_17a6b4;
        }
    }
    ctx->pc = 0x17A6A4u;
    // 0x17a6a4: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x17a6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x17a6a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17a6ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17A6ACu;
    {
        const bool branch_taken_0x17a6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A6ACu;
        // 0x17a6b0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a6ac) {
            ctx->pc = 0x17A6B8u;
            goto label_17a6b8;
        }
    }
    ctx->pc = 0x17A6B4u;
label_17a6b4:
    // 0x17a6b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17a6b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a6b8:
    // 0x17a6b8: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x17a6b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x17a6bc: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x17a6bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x17a6c0: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x17a6c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17a6c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17a6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a6c8: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x17a6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x17a6cc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x17a6ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x17a6d0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17a6d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17a6d4: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x17a6d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x17a6d8: 0x26100660  addiu       $s0, $s0, 0x660
    ctx->pc = 0x17a6d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
    // 0x17a6dc: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x17A6DCu;
    SET_GPR_U32(ctx, 31, 0x17A6E4u);
    ctx->pc = 0x17A6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A6DCu;
    // 0x17a6e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x17A6DCu, 0x17A6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A6E4u;
label_17a6e4:
    // 0x17a6e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17a6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a6e8: 0xc05ce66  jal         func_173998
    ctx->pc = 0x17A6E8u;
    SET_GPR_U32(ctx, 31, 0x17A6F0u);
    ctx->pc = 0x17A6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A6E8u;
    // 0x17a6ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x17A6E8u, 0x17A6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A6F0u;
label_17a6f0:
    // 0x17a6f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17a6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a6f4: 0xc051f18  jal         func_147C60
    ctx->pc = 0x17A6F4u;
    SET_GPR_U32(ctx, 31, 0x17A6FCu);
    ctx->pc = 0x17A6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A6F4u;
    // 0x17a6f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x17A6F4u, 0x17A6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A6FCu;
label_17a6fc:
    // 0x17a6fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a6fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a700: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17a700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a704: 0xc051f22  jal         func_147C88
    ctx->pc = 0x17A704u;
    SET_GPR_U32(ctx, 31, 0x17A70Cu);
    ctx->pc = 0x17A708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A704u;
    // 0x17a708: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x17A704u, 0x17A70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A70Cu;
label_17a70c:
    // 0x17a70c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x17a70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17a710: 0xc05ce42  jal         func_173908
    ctx->pc = 0x17A710u;
    SET_GPR_U32(ctx, 31, 0x17A718u);
    ctx->pc = 0x17A714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A710u;
    // 0x17a714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x17A710u, 0x17A718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A718u;
label_17a718:
    // 0x17a718: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x17a718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17a71c: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x17A71Cu;
    SET_GPR_U32(ctx, 31, 0x17A724u);
    ctx->pc = 0x17A720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A71Cu;
    // 0x17a720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x17A71Cu, 0x17A724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A724u;
label_17a724:
    // 0x17a724: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17a724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17a728: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17a728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17a72c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x17a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17a730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17a730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a734: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17a734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a738: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x17a738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x17a73c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x17a73cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x17a740: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x17a740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x17a744: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x17A744u;
    SET_GPR_U32(ctx, 31, 0x17A74Cu);
    ctx->pc = 0x17A748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A744u;
    // 0x17a748: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x17A744u, 0x17A74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A74Cu;
label_17a74c:
    // 0x17a74c: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x17a74cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x17a750: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x17a750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17a754: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x17a754u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17a758: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x17a758u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17a75c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x17a75cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17a760: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17a760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a764: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x17a764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17a768: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x17a768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17a76c: 0x3e00008  jr          $ra
    ctx->pc = 0x17A76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A76Cu;
        // 0x17a770: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A76Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A774u;
    // 0x17a774: 0x0  nop
    ctx->pc = 0x17a774u;
    // NOP
    ctx->pc = 0x17a778u;
}
