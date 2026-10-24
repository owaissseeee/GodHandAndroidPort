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

// Function: func_001BE498
// Address: 0x1be498 - 0x1be740
void func_001BE498_0x1be498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BE498_0x1be498");
#endif

    switch (ctx->pc) {
        case 0x1be56cu: goto label_1be56c;
        case 0x1be58cu: goto label_1be58c;
        case 0x1be5acu: goto label_1be5ac;
        case 0x1be5c0u: goto label_1be5c0;
        case 0x1be5d4u: goto label_1be5d4;
        case 0x1be5e8u: goto label_1be5e8;
        case 0x1be660u: goto label_1be660;
        case 0x1be66cu: goto label_1be66c;
        case 0x1be678u: goto label_1be678;
        case 0x1be688u: goto label_1be688;
        case 0x1be694u: goto label_1be694;
        case 0x1be6a0u: goto label_1be6a0;
        case 0x1be6c0u: goto label_1be6c0;
        default: break;
    }

    ctx->pc = 0x1be498u;

    // 0x1be498: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1be498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1be49c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1be49cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be4a0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1be4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1be4a4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1be4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1be4a8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1be4a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be4ac: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1be4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1be4b0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1be4b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be4b4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1be4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1be4b8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1be4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1be4bc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1be4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1be4c0: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x1be4c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1be4c4: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1be4c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1be4c8: 0x928302b4  lbu         $v1, 0x2B4($s4)
    ctx->pc = 0x1be4c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 692)));
    // 0x1be4cc: 0x6600002  bltz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE4CCu;
    {
        const bool branch_taken_0x1be4cc = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x1BE4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE4CCu;
        // 0x1be4d0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be4cc) {
            ctx->pc = 0x1BE4D8u;
            goto label_1be4d8;
        }
    }
    ctx->pc = 0x1BE4D4u;
    // 0x1be4d4: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x1be4d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1be4d8:
    // 0x1be4d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1be4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1be4dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE4DCu;
    {
        const bool branch_taken_0x1be4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE4DCu;
        // 0x1be4e0: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be4dc) {
            ctx->pc = 0x1BE4F4u;
            goto label_1be4f4;
        }
    }
    ctx->pc = 0x1BE4E4u;
    // 0x1be4e4: 0x8e830278  lw          $v1, 0x278($s4)
    ctx->pc = 0x1be4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 632)));
    // 0x1be4e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1be4ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE4ECu;
    {
        const bool branch_taken_0x1be4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE4ECu;
        // 0x1be4f0: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be4ec) {
            ctx->pc = 0x1BE4F8u;
            goto label_1be4f8;
        }
    }
    ctx->pc = 0x1BE4F4u;
label_1be4f4:
    // 0x1be4f4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1be4f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1be4f8:
    // 0x1be4f8: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1be4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1be4fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1be4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be500: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1be500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1be504: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1be504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x1be508: 0x928202b4  lbu         $v0, 0x2B4($s4)
    ctx->pc = 0x1be508u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 692)));
    // 0x1be50c: 0x6600003  bltz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE50Cu;
    {
        const bool branch_taken_0x1be50c = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x1BE510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE50Cu;
        // 0x1be510: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be50c) {
            ctx->pc = 0x1BE51Cu;
            goto label_1be51c;
        }
    }
    ctx->pc = 0x1BE514u;
    // 0x1be514: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1be514u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1be518: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1be518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1be51c:
    // 0x1be51c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1be51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1be520: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE520u;
    {
        const bool branch_taken_0x1be520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE520u;
        // 0x1be524: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be520) {
            ctx->pc = 0x1BE538u;
            goto label_1be538;
        }
    }
    ctx->pc = 0x1BE528u;
    // 0x1be528: 0x8e830278  lw          $v1, 0x278($s4)
    ctx->pc = 0x1be528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 632)));
    // 0x1be52c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1be530: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE530u;
    {
        const bool branch_taken_0x1be530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE530u;
        // 0x1be534: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be530) {
            ctx->pc = 0x1BE53Cu;
            goto label_1be53c;
        }
    }
    ctx->pc = 0x1BE538u;
label_1be538:
    // 0x1be538: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1be538u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1be53c:
    // 0x1be53c: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1be53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1be540: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1be540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1be544: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1be544u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x1be548: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1be548u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1be54c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1be54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1be550: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1be550u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1be554: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1be554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1be558: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1be558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1be55c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1be55cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1be560: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1be560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1be564: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1BE564u;
    SET_GPR_U32(ctx, 31, 0x1BE56Cu);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1BE564u, 0x1BE56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE56Cu;
label_1be56c:
    // 0x1be56c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1be56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be570: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1be570u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1be574: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1be574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1be578: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1be578u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1be57c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1be57cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1be580: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1be580u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1be584: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x1BE584u;
    SET_GPR_U32(ctx, 31, 0x1BE58Cu);
    ctx->pc = 0x1BE588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE584u;
    // 0x1be588: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x1BE584u, 0x1BE58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE58Cu;
label_1be58c:
    // 0x1be58c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1be58cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1be590: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1be590u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1be594: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1be594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1be598: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1be598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be59c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1be59cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1be5a0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1be5a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1be5a4: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1BE5A4u;
    SET_GPR_U32(ctx, 31, 0x1BE5ACu);
    ctx->pc = 0x1BE5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE5A4u;
    // 0x1be5a8: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1BE5A4u, 0x1BE5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE5ACu;
label_1be5ac:
    // 0x1be5ac: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1be5acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1be5b0: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1be5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be5b4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1be5b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1be5b8: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1BE5B8u;
    SET_GPR_U32(ctx, 31, 0x1BE5C0u);
    ctx->pc = 0x1BE5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE5B8u;
    // 0x1be5bc: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1BE5B8u, 0x1BE5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE5C0u;
label_1be5c0:
    // 0x1be5c0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1be5c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1be5c4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1be5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be5c8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1be5c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1be5cc: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1BE5CCu;
    SET_GPR_U32(ctx, 31, 0x1BE5D4u);
    ctx->pc = 0x1BE5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE5CCu;
    // 0x1be5d0: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1BE5CCu, 0x1BE5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE5D4u;
label_1be5d4:
    // 0x1be5d4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1be5d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1be5d8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1be5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be5dc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1be5dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1be5e0: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1BE5E0u;
    SET_GPR_U32(ctx, 31, 0x1BE5E8u);
    ctx->pc = 0x1BE5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE5E0u;
    // 0x1be5e4: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1BE5E0u, 0x1BE5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE5E8u;
label_1be5e8:
    // 0x1be5e8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1be5e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1be5ec: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1be5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be5f0: 0x928302b4  lbu         $v1, 0x2B4($s4)
    ctx->pc = 0x1be5f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 692)));
    // 0x1be5f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1be5f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be5f8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1be5f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1be5fc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1be5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1be600: 0x6600002  bltz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE600u;
    {
        const bool branch_taken_0x1be600 = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x1BE604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE600u;
        // 0x1be604: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be600) {
            ctx->pc = 0x1BE60Cu;
            goto label_1be60c;
        }
    }
    ctx->pc = 0x1BE608u;
    // 0x1be608: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x1be608u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1be60c:
    // 0x1be60c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1be60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1be610: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE610u;
    {
        const bool branch_taken_0x1be610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE610u;
        // 0x1be614: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be610) {
            ctx->pc = 0x1BE628u;
            goto label_1be628;
        }
    }
    ctx->pc = 0x1BE618u;
    // 0x1be618: 0x8e830278  lw          $v1, 0x278($s4)
    ctx->pc = 0x1be618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 632)));
    // 0x1be61c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1be620: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE620u;
    {
        const bool branch_taken_0x1be620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE620u;
        // 0x1be624: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be620) {
            ctx->pc = 0x1BE62Cu;
            goto label_1be62c;
        }
    }
    ctx->pc = 0x1BE628u;
label_1be628:
    // 0x1be628: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1be628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1be62c:
    // 0x1be62c: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x1be62cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1be630: 0x24120060  addiu       $s2, $zero, 0x60
    ctx->pc = 0x1be630u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1be634: 0x2721018  mult        $v0, $s3, $s2
    ctx->pc = 0x1be634u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1be638: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1be638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be63c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1be63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1be640: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1be640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1be644: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1be644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x1be648: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1be648u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1be64c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1be64cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1be650: 0x548821  addu        $s1, $v0, $s4
    ctx->pc = 0x1be650u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1be654: 0x26310600  addiu       $s1, $s1, 0x600
    ctx->pc = 0x1be654u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1536));
    // 0x1be658: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1BE658u;
    SET_GPR_U32(ctx, 31, 0x1BE660u);
    ctx->pc = 0x1BE65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE658u;
    // 0x1be65c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1BE658u, 0x1BE660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE660u;
label_1be660:
    // 0x1be660: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1be660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be664: 0xc05ce66  jal         func_173998
    ctx->pc = 0x1BE664u;
    SET_GPR_U32(ctx, 31, 0x1BE66Cu);
    ctx->pc = 0x1BE668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE664u;
    // 0x1be668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x1BE664u, 0x1BE66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE66Cu;
label_1be66c:
    // 0x1be66c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1be66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be670: 0xc051f18  jal         func_147C60
    ctx->pc = 0x1BE670u;
    SET_GPR_U32(ctx, 31, 0x1BE678u);
    ctx->pc = 0x1BE674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE670u;
    // 0x1be674: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1BE670u, 0x1BE678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE678u;
label_1be678:
    // 0x1be678: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1be678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be67c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1be67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be680: 0xc051f22  jal         func_147C88
    ctx->pc = 0x1BE680u;
    SET_GPR_U32(ctx, 31, 0x1BE688u);
    ctx->pc = 0x1BE684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE680u;
    // 0x1be684: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x1BE680u, 0x1BE688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE688u;
label_1be688:
    // 0x1be688: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1be688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1be68c: 0xc05ce42  jal         func_173908
    ctx->pc = 0x1BE68Cu;
    SET_GPR_U32(ctx, 31, 0x1BE694u);
    ctx->pc = 0x1BE690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE68Cu;
    // 0x1be690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x1BE68Cu, 0x1BE694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE694u;
label_1be694:
    // 0x1be694: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1be694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1be698: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x1BE698u;
    SET_GPR_U32(ctx, 31, 0x1BE6A0u);
    ctx->pc = 0x1BE69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE698u;
    // 0x1be69c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x1BE698u, 0x1BE6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE6A0u;
label_1be6a0:
    // 0x1be6a0: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1be6a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1be6a4: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1be6a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1be6a8: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x1be6a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1be6ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1be6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be6b0: 0xe6140008  swc1        $f20, 0x8($s0)
    ctx->pc = 0x1be6b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1be6b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1be6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be6b8: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x1BE6B8u;
    SET_GPR_U32(ctx, 31, 0x1BE6C0u);
    ctx->pc = 0x1BE6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE6B8u;
    // 0x1be6bc: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x1BE6B8u, 0x1BE6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE6C0u;
label_1be6c0:
    // 0x1be6c0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1be6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1be6c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1be6c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be6c8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1be6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1be6cc: 0xe6350058  swc1        $f21, 0x58($s1)
    ctx->pc = 0x1be6ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
    // 0x1be6d0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1be6d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1be6d4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1be6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1be6d8: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x1be6d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1be6dc: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1be6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1be6e0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1be6e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1be6e4: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1be6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1be6e8: 0x2721818  mult        $v1, $s3, $s2
    ctx->pc = 0x1be6e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1be6ec: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x1be6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1be6f0: 0x24840600  addiu       $a0, $a0, 0x600
    ctx->pc = 0x1be6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1536));
    // 0x1be6f4: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x1be6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1be6f8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE6F8u;
    {
        const bool branch_taken_0x1be6f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BE6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6F8u;
        // 0x1be6fc: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be6f8) {
            ctx->pc = 0x1BE714u;
            goto label_1be714;
        }
    }
    ctx->pc = 0x1BE700u;
    // 0x1be700: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x1be700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x1be704: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1be704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be708: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1be708u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1be70c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1be70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be710: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1be710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1be714:
    // 0x1be714: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1be714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1be718: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1be718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1be71c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1be71cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1be720: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1be720u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1be724: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1be724u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1be728: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1be728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1be72c: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x1be72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1be730: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1be730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1be734: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE734u;
        // 0x1be738: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE73Cu;
    // 0x1be73c: 0x0  nop
    ctx->pc = 0x1be73cu;
    // NOP
    ctx->pc = 0x1be740u;
}
