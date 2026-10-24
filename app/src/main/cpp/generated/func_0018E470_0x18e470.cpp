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

// Function: func_0018E470
// Address: 0x18e470 - 0x18e6b0
void func_0018E470_0x18e470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018E470_0x18e470");
#endif

    switch (ctx->pc) {
        case 0x18e540u: goto label_18e540;
        case 0x18e560u: goto label_18e560;
        case 0x18e574u: goto label_18e574;
        case 0x18e588u: goto label_18e588;
        case 0x18e59cu: goto label_18e59c;
        case 0x18e5b0u: goto label_18e5b0;
        case 0x18e620u: goto label_18e620;
        case 0x18e62cu: goto label_18e62c;
        case 0x18e638u: goto label_18e638;
        case 0x18e648u: goto label_18e648;
        case 0x18e654u: goto label_18e654;
        case 0x18e660u: goto label_18e660;
        case 0x18e688u: goto label_18e688;
        default: break;
    }

    ctx->pc = 0x18e470u;

    // 0x18e470: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x18e470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x18e474: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18e474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e478: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x18e478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x18e47c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x18e47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x18e480: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18e480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e484: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x18e484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x18e488: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18e488u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e48c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x18e48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x18e490: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18e490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18e494: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x18e494u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x18e498: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x18e498u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x18e49c: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x18e49cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x18e4a0: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x18E4A0u;
    {
        const bool branch_taken_0x18e4a0 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x18E4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4A0u;
        // 0x18e4a4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e4a0) {
            ctx->pc = 0x18E4ACu;
            goto label_18e4ac;
        }
    }
    ctx->pc = 0x18E4A8u;
    // 0x18e4a8: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x18e4a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_18e4ac:
    // 0x18e4ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18e4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18e4b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18E4B0u;
    {
        const bool branch_taken_0x18e4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4B0u;
        // 0x18e4b4: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e4b0) {
            ctx->pc = 0x18E4C8u;
            goto label_18e4c8;
        }
    }
    ctx->pc = 0x18E4B8u;
    // 0x18e4b8: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x18e4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x18e4bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18e4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18e4c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E4C0u;
    {
        const bool branch_taken_0x18e4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4C0u;
        // 0x18e4c4: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e4c0) {
            ctx->pc = 0x18E4CCu;
            goto label_18e4cc;
        }
    }
    ctx->pc = 0x18E4C8u;
label_18e4c8:
    // 0x18e4c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18e4c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e4cc:
    // 0x18e4cc: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x18e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x18e4d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18e4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e4d4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x18e4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x18e4d8: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x18e4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x18e4dc: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x18e4dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x18e4e0: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E4E0u;
    {
        const bool branch_taken_0x18e4e0 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x18E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4E0u;
        // 0x18e4e4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e4e0) {
            ctx->pc = 0x18E4F0u;
            goto label_18e4f0;
        }
    }
    ctx->pc = 0x18E4E8u;
    // 0x18e4e8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x18e4e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18e4ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e4f0:
    // 0x18e4f0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x18e4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18e4f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18E4F4u;
    {
        const bool branch_taken_0x18e4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4F4u;
        // 0x18e4f8: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e4f4) {
            ctx->pc = 0x18E50Cu;
            goto label_18e50c;
        }
    }
    ctx->pc = 0x18E4FCu;
    // 0x18e4fc: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x18e4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x18e500: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18e500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18e504: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E504u;
    {
        const bool branch_taken_0x18e504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E504u;
        // 0x18e508: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e504) {
            ctx->pc = 0x18E510u;
            goto label_18e510;
        }
    }
    ctx->pc = 0x18E50Cu;
label_18e50c:
    // 0x18e50c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18e50cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e510:
    // 0x18e510: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x18e510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x18e514: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x18e514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x18e518: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x18e518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x18e51c: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x18e51cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18e520: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18e520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18e524: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x18e524u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18e528: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18e528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18e52c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x18e52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x18e530: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18e530u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x18e534: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18e534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18e538: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18E538u;
    SET_GPR_U32(ctx, 31, 0x18E540u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18E538u, 0x18E540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E540u;
label_18e540:
    // 0x18e540: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x18e540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18e544: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18e544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18e548: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x18e548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x18e54c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18e54cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x18e550: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x18e550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x18e554: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18e554u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18e558: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x18E558u;
    SET_GPR_U32(ctx, 31, 0x18E560u);
    ctx->pc = 0x18E55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E558u;
    // 0x18e55c: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x18E558u, 0x18E560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E560u;
label_18e560:
    // 0x18e560: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18e560u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18e564: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x18e564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18e568: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18e568u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18e56c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18E56Cu;
    SET_GPR_U32(ctx, 31, 0x18E574u);
    ctx->pc = 0x18E570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E56Cu;
    // 0x18e570: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18E56Cu, 0x18E574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E574u;
label_18e574:
    // 0x18e574: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18e574u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18e578: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x18e578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18e57c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18e57cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18e580: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18E580u;
    SET_GPR_U32(ctx, 31, 0x18E588u);
    ctx->pc = 0x18E584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E580u;
    // 0x18e584: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18E580u, 0x18E588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E588u;
label_18e588:
    // 0x18e588: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x18e588u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x18e58c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x18e58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18e590: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18e590u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18e594: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18E594u;
    SET_GPR_U32(ctx, 31, 0x18E59Cu);
    ctx->pc = 0x18E598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E594u;
    // 0x18e598: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18E594u, 0x18E59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E59Cu;
label_18e59c:
    // 0x18e59c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x18e59cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x18e5a0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x18e5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18e5a4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18e5a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18e5a8: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18E5A8u;
    SET_GPR_U32(ctx, 31, 0x18E5B0u);
    ctx->pc = 0x18E5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E5A8u;
    // 0x18e5ac: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18E5A8u, 0x18E5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E5B0u;
label_18e5b0:
    // 0x18e5b0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x18e5b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x18e5b4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x18e5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18e5b8: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x18e5b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x18e5bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18e5bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e5c0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18e5c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18e5c4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x18e5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x18e5c8: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x18E5C8u;
    {
        const bool branch_taken_0x18e5c8 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x18E5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E5C8u;
        // 0x18e5cc: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e5c8) {
            ctx->pc = 0x18E5D4u;
            goto label_18e5d4;
        }
    }
    ctx->pc = 0x18E5D0u;
    // 0x18e5d0: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x18e5d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_18e5d4:
    // 0x18e5d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18e5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18e5d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18E5D8u;
    {
        const bool branch_taken_0x18e5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E5D8u;
        // 0x18e5dc: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e5d8) {
            ctx->pc = 0x18E5F0u;
            goto label_18e5f0;
        }
    }
    ctx->pc = 0x18E5E0u;
    // 0x18e5e0: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x18e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x18e5e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18e5e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E5E8u;
    {
        const bool branch_taken_0x18e5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E5E8u;
        // 0x18e5ec: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e5e8) {
            ctx->pc = 0x18E5F4u;
            goto label_18e5f4;
        }
    }
    ctx->pc = 0x18E5F0u;
label_18e5f0:
    // 0x18e5f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18e5f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e5f4:
    // 0x18e5f4: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x18e5f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x18e5f8: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x18e5f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x18e5fc: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x18e5fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18e600: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18e600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e604: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x18e604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x18e608: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x18e608u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x18e60c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18e60cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18e610: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x18e610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18e614: 0x26100660  addiu       $s0, $s0, 0x660
    ctx->pc = 0x18e614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
    // 0x18e618: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x18E618u;
    SET_GPR_U32(ctx, 31, 0x18E620u);
    ctx->pc = 0x18E61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E618u;
    // 0x18e61c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x18E618u, 0x18E620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E620u;
label_18e620:
    // 0x18e620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e624: 0xc05ce66  jal         func_173998
    ctx->pc = 0x18E624u;
    SET_GPR_U32(ctx, 31, 0x18E62Cu);
    ctx->pc = 0x18E628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E624u;
    // 0x18e628: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x18E624u, 0x18E62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E62Cu;
label_18e62c:
    // 0x18e62c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e630: 0xc051f18  jal         func_147C60
    ctx->pc = 0x18E630u;
    SET_GPR_U32(ctx, 31, 0x18E638u);
    ctx->pc = 0x18E634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E630u;
    // 0x18e634: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x18E630u, 0x18E638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E638u;
label_18e638:
    // 0x18e638: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18e638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e63c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18e63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e640: 0xc051f22  jal         func_147C88
    ctx->pc = 0x18E640u;
    SET_GPR_U32(ctx, 31, 0x18E648u);
    ctx->pc = 0x18E644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E640u;
    // 0x18e644: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x18E640u, 0x18E648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E648u;
label_18e648:
    // 0x18e648: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x18e648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18e64c: 0xc05ce42  jal         func_173908
    ctx->pc = 0x18E64Cu;
    SET_GPR_U32(ctx, 31, 0x18E654u);
    ctx->pc = 0x18E650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E64Cu;
    // 0x18e650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x18E64Cu, 0x18E654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E654u;
label_18e654:
    // 0x18e654: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x18e654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18e658: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x18E658u;
    SET_GPR_U32(ctx, 31, 0x18E660u);
    ctx->pc = 0x18E65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E658u;
    // 0x18e65c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x18E658u, 0x18E660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E660u;
label_18e660:
    // 0x18e660: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18e660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18e664: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18e664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18e668: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x18e668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18e66c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e670: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18e670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e674: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x18e674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x18e678: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x18e678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x18e67c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x18e67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x18e680: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x18E680u;
    SET_GPR_U32(ctx, 31, 0x18E688u);
    ctx->pc = 0x18E684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E680u;
    // 0x18e684: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x18E680u, 0x18E688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E688u;
label_18e688:
    // 0x18e688: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x18e688u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x18e68c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x18e68cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18e690: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x18e690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18e694: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x18e694u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18e698: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x18e698u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18e69c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18e69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e6a0: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x18e6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18e6a4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x18e6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18e6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x18E6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6A8u;
        // 0x18e6ac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E6B0u;
}
