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

// Function: cOmWeapon_setFall
// Address: 0x1cf4a8 - 0x1cf6e0
void cOmWeapon_setFall_0x1cf4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmWeapon_setFall_0x1cf4a8");
#endif

    switch (ctx->pc) {
        case 0x1cf5ecu: goto label_1cf5ec;
        case 0x1cf6b4u: goto label_1cf6b4;
        default: break;
    }

    ctx->pc = 0x1cf4a8u;

    // 0x1cf4a8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1cf4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1cf4ac: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1cf4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1cf4b0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1cf4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1cf4b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf4b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf4b8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1cf4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1cf4bc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1cf4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1cf4c0: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1cf4c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1cf4c4: 0x8e020600  lw          $v0, 0x600($s0)
    ctx->pc = 0x1cf4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1cf4c8: 0x50400060  beql        $v0, $zero, . + 4 + (0x60 << 2)
    ctx->pc = 0x1CF4C8u;
    {
        const bool branch_taken_0x1cf4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf4c8) {
            ctx->pc = 0x1CF4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF4C8u;
            // 0x1cf4cc: 0x8e030250  lw          $v1, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF64Cu;
            goto label_1cf64c;
        }
    }
    ctx->pc = 0x1CF4D0u;
    // 0x1cf4d0: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1cf4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cf4d4: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1cf4d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1cf4d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF4D8u;
    {
        const bool branch_taken_0x1cf4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4D8u;
        // 0x1cf4dc: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf4d8) {
            ctx->pc = 0x1CF4ECu;
            goto label_1cf4ec;
        }
    }
    ctx->pc = 0x1CF4E0u;
    // 0x1cf4e0: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1cf4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1cf4e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF4E4u;
    {
        const bool branch_taken_0x1cf4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4E4u;
        // 0x1cf4e8: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf4e4) {
            ctx->pc = 0x1CF4F0u;
            goto label_1cf4f0;
        }
    }
    ctx->pc = 0x1CF4ECu;
label_1cf4ec:
    // 0x1cf4ec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1cf4ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf4f0:
    // 0x1cf4f0: 0x8e020600  lw          $v0, 0x600($s0)
    ctx->pc = 0x1cf4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1cf4f4: 0x26120490  addiu       $s2, $s0, 0x490
    ctx->pc = 0x1cf4f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    // 0x1cf4f8: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1cf4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1cf4fc: 0x52420008  beql        $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF4FCu;
    {
        const bool branch_taken_0x1cf4fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cf4fc) {
            ctx->pc = 0x1CF500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF4FCu;
            // 0x1cf500: 0x8e020600  lw          $v0, 0x600($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF520u;
            goto label_1cf520;
        }
    }
    ctx->pc = 0x1CF504u;
    // 0x1cf504: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cf504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf508: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x1cf508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
    // 0x1cf50c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1cf50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf510: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x1cf510u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1cf514: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1cf514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf518: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1cf518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1cf51c: 0x8e020600  lw          $v0, 0x600($s0)
    ctx->pc = 0x1cf51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
label_1cf520:
    // 0x1cf520: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x1cf520u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cf524: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1cf524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1cf528: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF528u;
    {
        const bool branch_taken_0x1cf528 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cf528) {
            ctx->pc = 0x1CF548u;
            goto label_1cf548;
        }
    }
    ctx->pc = 0x1CF530u;
    // 0x1cf530: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cf530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf534: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1cf534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1cf538: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1cf538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf53c: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x1cf53cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1cf540: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1cf540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf544: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1cf544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1cf548:
    // 0x1cf548: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF548u;
    {
        const bool branch_taken_0x1cf548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf548) {
            ctx->pc = 0x1CF54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF548u;
            // 0x1cf54c: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF554u;
            goto label_1cf554;
        }
    }
    ctx->pc = 0x1CF550u;
    // 0x1cf550: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x1cf550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_1cf554:
    // 0x1cf554: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1cf554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf558: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1cf558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1cf55c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1cf55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf560: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1cf560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1cf564: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1cf564u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1cf568: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1cf568u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1cf56c: 0x0  nop
    ctx->pc = 0x1cf56cu;
    // NOP
    // 0x1cf570: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1cf570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1cf574: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1cf574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1cf578: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1cf578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cf57c: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x1cf57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cf580: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1cf580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1cf584: 0x10910006  beq         $a0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CF584u;
    {
        const bool branch_taken_0x1cf584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x1CF588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF584u;
        // 0x1cf588: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf584) {
            ctx->pc = 0x1CF5A0u;
            goto label_1cf5a0;
        }
    }
    ctx->pc = 0x1CF58Cu;
    // 0x1cf58c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1cf58cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1cf590: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1cf590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf594: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1cf594u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1cf598: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1cf598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf59c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1cf59cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1cf5a0:
    // 0x1cf5a0: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1cf5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf5a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cf5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf5a8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1cf5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1cf5ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cf5acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cf5b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cf5b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf5b4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1cf5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1cf5b8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1cf5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cf5bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cf5bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf5c0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1cf5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1cf5c4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1cf5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1cf5c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cf5c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf5cc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1cf5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1cf5d0: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1cf5d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1cf5d4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1cf5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1cf5d8: 0x24090534  addiu       $t1, $zero, 0x534
    ctx->pc = 0x1cf5d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
    // 0x1cf5dc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1cf5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1cf5e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cf5e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf5e4: 0xc04c784  jal         func_131E10
    ctx->pc = 0x1CF5E4u;
    SET_GPR_U32(ctx, 31, 0x1CF5ECu);
    ctx->pc = 0x1CF5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF5E4u;
    // 0x1cf5e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x1CF5E4u, 0x1CF5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF5ECu;
label_1cf5ec:
    // 0x1cf5ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF5ECu;
    {
        const bool branch_taken_0x1cf5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF5ECu;
        // 0x1cf5f0: 0xc7a10034  lwc1        $f1, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf5ec) {
            ctx->pc = 0x1CF60Cu;
            goto label_1cf60c;
        }
    }
    ctx->pc = 0x1CF5F4u;
    // 0x1cf5f4: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1cf5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf5f8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1cf5f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1cf5fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cf5fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf600: 0x0  nop
    ctx->pc = 0x1cf600u;
    // NOP
    // 0x1cf604: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CF604u;
    {
        const bool branch_taken_0x1cf604 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cf604) {
            ctx->pc = 0x1CF608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF604u;
            // 0x1cf608: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF60Cu;
            goto label_1cf60c;
        }
    }
    ctx->pc = 0x1CF60Cu;
label_1cf60c:
    // 0x1cf60c: 0x12510006  beq         $s2, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CF60Cu;
    {
        const bool branch_taken_0x1cf60c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x1CF610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF60Cu;
        // 0x1cf610: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf60c) {
            ctx->pc = 0x1CF628u;
            goto label_1cf628;
        }
    }
    ctx->pc = 0x1CF614u;
    // 0x1cf614: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x1cf614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cf618: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1cf618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf61c: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x1cf61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
    // 0x1cf620: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x1cf620u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1cf624: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x1cf624u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1cf628:
    // 0x1cf628: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1cf628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1cf62c: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CF62Cu;
    {
        const bool branch_taken_0x1cf62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1CF630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF62Cu;
        // 0x1cf630: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf62c) {
            ctx->pc = 0x1CF648u;
            goto label_1cf648;
        }
    }
    ctx->pc = 0x1CF634u;
    // 0x1cf634: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1cf634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1cf638: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1cf638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf63c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1cf63cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1cf640: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1cf640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf644: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1cf644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1cf648:
    // 0x1cf648: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x1cf648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_1cf64c:
    // 0x1cf64c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1cf64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1cf650: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cf650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cf654: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cf654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf658: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x1cf658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x1cf65c: 0x3c013d85  lui         $at, 0x3D85
    ctx->pc = 0x1cf65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15749 << 16));
    // 0x1cf660: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1cf660u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x1cf664: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cf664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cf668: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1cf668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1cf66c: 0x920402b4  lbu         $a0, 0x2B4($s0)
    ctx->pc = 0x1cf66cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1cf670: 0xe600024c  swc1        $f0, 0x24C($s0)
    ctx->pc = 0x1cf670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x1cf674: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x1cf674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x1cf678: 0xe6010630  swc1        $f1, 0x630($s0)
    ctx->pc = 0x1cf678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1584), bits); }
    // 0x1cf67c: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x1cf67cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
    // 0x1cf680: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF680u;
    {
        const bool branch_taken_0x1cf680 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF680u;
        // 0x1cf684: 0xafa40030  sw          $a0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf680) {
            ctx->pc = 0x1CF694u;
            goto label_1cf694;
        }
    }
    ctx->pc = 0x1CF688u;
    // 0x1cf688: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1cf688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1cf68c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF68Cu;
    {
        const bool branch_taken_0x1cf68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF68Cu;
        // 0x1cf690: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf68c) {
            ctx->pc = 0x1CF698u;
            goto label_1cf698;
        }
    }
    ctx->pc = 0x1CF694u;
label_1cf694:
    // 0x1cf694: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cf694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf698:
    // 0x1cf698: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CF698u;
    {
        const bool branch_taken_0x1cf698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF698u;
        // 0x1cf69c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf698) {
            ctx->pc = 0x1CF6C4u;
            goto label_1cf6c4;
        }
    }
    ctx->pc = 0x1CF6A0u;
    // 0x1cf6a0: 0xac400108  sw          $zero, 0x108($v0)
    ctx->pc = 0x1cf6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 0));
    // 0x1cf6a4: 0xac500148  sw          $s0, 0x148($v0)
    ctx->pc = 0x1cf6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 16));
    // 0x1cf6a8: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x1cf6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
    // 0x1cf6ac: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1CF6ACu;
    SET_GPR_U32(ctx, 31, 0x1CF6B4u);
    ctx->pc = 0x1CF6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF6ACu;
    // 0x1cf6b0: 0xac400104  sw          $zero, 0x104($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1CF6ACu, 0x1CF6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF6B4u;
label_1cf6b4:
    // 0x1cf6b4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1cf6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf6b8: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1cf6b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf6bc: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1cf6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf6c0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1cf6c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1cf6c4:
    // 0x1cf6c4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1cf6c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1cf6c8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1cf6c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cf6cc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1cf6ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cf6d0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1cf6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cf6d4: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1cf6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cf6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6D8u;
        // 0x1cf6dc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF6E0u;
}
