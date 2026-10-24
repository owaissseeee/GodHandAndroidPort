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

// Function: func_00174FD0
// Address: 0x174fd0 - 0x175220
void func_00174FD0_0x174fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00174FD0_0x174fd0");
#endif

    switch (ctx->pc) {
        case 0x1750a0u: goto label_1750a0;
        case 0x1750c0u: goto label_1750c0;
        case 0x1750e0u: goto label_1750e0;
        case 0x1750f4u: goto label_1750f4;
        case 0x175108u: goto label_175108;
        case 0x17511cu: goto label_17511c;
        case 0x17518cu: goto label_17518c;
        case 0x175198u: goto label_175198;
        case 0x1751a4u: goto label_1751a4;
        case 0x1751b4u: goto label_1751b4;
        case 0x1751c0u: goto label_1751c0;
        case 0x1751ccu: goto label_1751cc;
        case 0x1751f4u: goto label_1751f4;
        default: break;
    }

    ctx->pc = 0x174fd0u;

    // 0x174fd0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x174fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x174fd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x174fd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174fd8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x174fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x174fdc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x174fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x174fe0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x174fe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174fe4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x174fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x174fe8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x174fe8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174fec: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x174fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x174ff0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x174ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x174ff4: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x174ff4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x174ff8: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x174ff8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x174ffc: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x174ffcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x175000: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x175000u;
    {
        const bool branch_taken_0x175000 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x175004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175000u;
        // 0x175004: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175000) {
            ctx->pc = 0x17500Cu;
            goto label_17500c;
        }
    }
    ctx->pc = 0x175008u;
    // 0x175008: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x175008u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_17500c:
    // 0x17500c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17500cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x175010: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x175010u;
    {
        const bool branch_taken_0x175010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175010u;
        // 0x175014: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175010) {
            ctx->pc = 0x175028u;
            goto label_175028;
        }
    }
    ctx->pc = 0x175018u;
    // 0x175018: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x175018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x17501c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17501cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175020: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x175020u;
    {
        const bool branch_taken_0x175020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175020u;
        // 0x175024: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175020) {
            ctx->pc = 0x17502Cu;
            goto label_17502c;
        }
    }
    ctx->pc = 0x175028u;
label_175028:
    // 0x175028: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x175028u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17502c:
    // 0x17502c: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x17502cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x175030: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x175030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175034: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x175034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x175038: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x175038u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x17503c: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x17503cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x175040: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x175040u;
    {
        const bool branch_taken_0x175040 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x175044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175040u;
        // 0x175044: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175040) {
            ctx->pc = 0x175050u;
            goto label_175050;
        }
    }
    ctx->pc = 0x175048u;
    // 0x175048: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x175048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17504c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17504cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175050:
    // 0x175050: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x175050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x175054: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x175054u;
    {
        const bool branch_taken_0x175054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175054u;
        // 0x175058: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175054) {
            ctx->pc = 0x17506Cu;
            goto label_17506c;
        }
    }
    ctx->pc = 0x17505Cu;
    // 0x17505c: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x17505cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x175060: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175064: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x175064u;
    {
        const bool branch_taken_0x175064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175064u;
        // 0x175068: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175064) {
            ctx->pc = 0x175070u;
            goto label_175070;
        }
    }
    ctx->pc = 0x17506Cu;
label_17506c:
    // 0x17506c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17506cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175070:
    // 0x175070: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x175070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x175074: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x175074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x175078: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x175078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x17507c: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x17507cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x175080: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x175080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x175084: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x175084u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x175088: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x175088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17508c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x17508cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x175090: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x175090u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x175094: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x175094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x175098: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x175098u;
    SET_GPR_U32(ctx, 31, 0x1750A0u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x175098u, 0x1750A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1750A0u;
label_1750a0:
    // 0x1750a0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1750a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1750a4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1750a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1750a8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1750a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1750ac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1750acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1750b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1750b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1750b4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1750b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1750b8: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x1750B8u;
    SET_GPR_U32(ctx, 31, 0x1750C0u);
    ctx->pc = 0x1750BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1750B8u;
    // 0x1750bc: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x1750B8u, 0x1750C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1750C0u;
label_1750c0:
    // 0x1750c0: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1750c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1750c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1750c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1750c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1750c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1750cc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1750ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1750d0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1750d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1750d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1750d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1750d8: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1750D8u;
    SET_GPR_U32(ctx, 31, 0x1750E0u);
    ctx->pc = 0x1750DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1750D8u;
    // 0x1750dc: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1750D8u, 0x1750E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1750E0u;
label_1750e0:
    // 0x1750e0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1750e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1750e4: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1750e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1750e8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1750e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1750ec: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1750ECu;
    SET_GPR_U32(ctx, 31, 0x1750F4u);
    ctx->pc = 0x1750F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1750ECu;
    // 0x1750f0: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1750ECu, 0x1750F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1750F4u;
label_1750f4:
    // 0x1750f4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1750f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1750f8: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1750f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1750fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1750fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x175100: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x175100u;
    SET_GPR_U32(ctx, 31, 0x175108u);
    ctx->pc = 0x175104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175100u;
    // 0x175104: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x175100u, 0x175108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175108u;
label_175108:
    // 0x175108: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x175108u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x17510c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x17510cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175110: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x175110u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x175114: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x175114u;
    SET_GPR_U32(ctx, 31, 0x17511Cu);
    ctx->pc = 0x175118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175114u;
    // 0x175118: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x175114u, 0x17511Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17511Cu;
label_17511c:
    // 0x17511c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x17511cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x175120: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x175120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175124: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x175124u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x175128: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x175128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17512c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x17512cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x175130: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x175130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x175134: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x175134u;
    {
        const bool branch_taken_0x175134 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x175138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175134u;
        // 0x175138: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x175134) {
            ctx->pc = 0x175140u;
            goto label_175140;
        }
    }
    ctx->pc = 0x17513Cu;
    // 0x17513c: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x17513cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_175140:
    // 0x175140: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x175140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x175144: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x175144u;
    {
        const bool branch_taken_0x175144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175144u;
        // 0x175148: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175144) {
            ctx->pc = 0x17515Cu;
            goto label_17515c;
        }
    }
    ctx->pc = 0x17514Cu;
    // 0x17514c: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x17514cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x175150: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175154: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x175154u;
    {
        const bool branch_taken_0x175154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175154u;
        // 0x175158: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175154) {
            ctx->pc = 0x175160u;
            goto label_175160;
        }
    }
    ctx->pc = 0x17515Cu;
label_17515c:
    // 0x17515c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17515cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175160:
    // 0x175160: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x175160u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x175164: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x175164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x175168: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x175168u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17516c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17516cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175170: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x175170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x175174: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x175174u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x175178: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x175178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17517c: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x17517cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x175180: 0x26100660  addiu       $s0, $s0, 0x660
    ctx->pc = 0x175180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
    // 0x175184: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x175184u;
    SET_GPR_U32(ctx, 31, 0x17518Cu);
    ctx->pc = 0x175188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175184u;
    // 0x175188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x175184u, 0x17518Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17518Cu;
label_17518c:
    // 0x17518c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17518cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175190: 0xc05ce66  jal         func_173998
    ctx->pc = 0x175190u;
    SET_GPR_U32(ctx, 31, 0x175198u);
    ctx->pc = 0x175194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175190u;
    // 0x175194: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x175190u, 0x175198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175198u;
label_175198:
    // 0x175198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17519c: 0xc051f18  jal         func_147C60
    ctx->pc = 0x17519Cu;
    SET_GPR_U32(ctx, 31, 0x1751A4u);
    ctx->pc = 0x1751A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17519Cu;
    // 0x1751a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x17519Cu, 0x1751A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1751A4u;
label_1751a4:
    // 0x1751a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1751a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1751a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1751a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1751ac: 0xc051f22  jal         func_147C88
    ctx->pc = 0x1751ACu;
    SET_GPR_U32(ctx, 31, 0x1751B4u);
    ctx->pc = 0x1751B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1751ACu;
    // 0x1751b0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x1751ACu, 0x1751B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1751B4u;
label_1751b4:
    // 0x1751b4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1751b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1751b8: 0xc05ce42  jal         func_173908
    ctx->pc = 0x1751B8u;
    SET_GPR_U32(ctx, 31, 0x1751C0u);
    ctx->pc = 0x1751BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1751B8u;
    // 0x1751bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x1751B8u, 0x1751C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1751C0u;
label_1751c0:
    // 0x1751c0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1751c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1751c4: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x1751C4u;
    SET_GPR_U32(ctx, 31, 0x1751CCu);
    ctx->pc = 0x1751C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1751C4u;
    // 0x1751c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x1751C4u, 0x1751CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1751CCu;
label_1751cc:
    // 0x1751cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1751ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1751d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1751d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1751d4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1751d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1751d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1751d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1751dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1751dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1751e0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1751e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1751e4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1751e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1751e8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1751e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1751ec: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x1751ECu;
    SET_GPR_U32(ctx, 31, 0x1751F4u);
    ctx->pc = 0x1751F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1751ECu;
    // 0x1751f0: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x1751ECu, 0x1751F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1751F4u;
label_1751f4:
    // 0x1751f4: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x1751f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1751f8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1751f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1751fc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1751fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x175200: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x175200u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x175204: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x175204u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x175208: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x175208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17520c: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x17520cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x175210: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x175210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x175214: 0x3e00008  jr          $ra
    ctx->pc = 0x175214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175214u;
        // 0x175218: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17521Cu;
    // 0x17521c: 0x0  nop
    ctx->pc = 0x17521cu;
    // NOP
    ctx->pc = 0x175220u;
}
