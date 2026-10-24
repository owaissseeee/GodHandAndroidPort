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

// Function: func_001A20C8
// Address: 0x1a20c8 - 0x1a2350
void func_001A20C8_0x1a20c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A20C8_0x1a20c8");
#endif

    switch (ctx->pc) {
        case 0x1a21bcu: goto label_1a21bc;
        case 0x1a21e0u: goto label_1a21e0;
        case 0x1a2200u: goto label_1a2200;
        case 0x1a2214u: goto label_1a2214;
        case 0x1a2228u: goto label_1a2228;
        case 0x1a223cu: goto label_1a223c;
        case 0x1a2250u: goto label_1a2250;
        case 0x1a22c0u: goto label_1a22c0;
        case 0x1a22ccu: goto label_1a22cc;
        case 0x1a22d8u: goto label_1a22d8;
        case 0x1a22e8u: goto label_1a22e8;
        case 0x1a22f4u: goto label_1a22f4;
        case 0x1a2300u: goto label_1a2300;
        case 0x1a2328u: goto label_1a2328;
        default: break;
    }

    ctx->pc = 0x1a20c8u;

    // 0x1a20c8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1a20c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1a20cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a20ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a20d0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1a20d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1a20d4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1a20d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1a20d8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a20d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a20dc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1a20dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1a20e0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1a20e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a20e4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1a20e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1a20e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a20e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a20ec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a20ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a20f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a20f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a20f4: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x1a20f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1a20f8: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1a20f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1a20fc: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x1a20fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1a2100: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A2100u;
    {
        const bool branch_taken_0x1a2100 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1A2104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2100u;
        // 0x1a2104: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2100) {
            ctx->pc = 0x1A210Cu;
            goto label_1a210c;
        }
    }
    ctx->pc = 0x1A2108u;
    // 0x1a2108: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1a2108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a210c:
    // 0x1a210c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a210cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a2110: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2110u;
    {
        const bool branch_taken_0x1a2110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2110u;
        // 0x1a2114: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2110) {
            ctx->pc = 0x1A2128u;
            goto label_1a2128;
        }
    }
    ctx->pc = 0x1A2118u;
    // 0x1a2118: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1a2118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1a211c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a211cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a2120: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A2120u;
    {
        const bool branch_taken_0x1a2120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2120u;
        // 0x1a2124: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2120) {
            ctx->pc = 0x1A212Cu;
            goto label_1a212c;
        }
    }
    ctx->pc = 0x1A2128u;
label_1a2128:
    // 0x1a2128: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a2128u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a212c:
    // 0x1a212c: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1a212cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1a2130: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a2130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2134: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1a2134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1a2138: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1a2138u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x1a213c: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x1a213cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1a2140: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2140u;
    {
        const bool branch_taken_0x1a2140 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1A2144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2140u;
        // 0x1a2144: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2140) {
            ctx->pc = 0x1A2150u;
            goto label_1a2150;
        }
    }
    ctx->pc = 0x1A2148u;
    // 0x1a2148: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1a2148u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a214c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a214cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2150:
    // 0x1a2150: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1a2150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a2154: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2154u;
    {
        const bool branch_taken_0x1a2154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2154u;
        // 0x1a2158: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2154) {
            ctx->pc = 0x1A216Cu;
            goto label_1a216c;
        }
    }
    ctx->pc = 0x1A215Cu;
    // 0x1a215c: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1a215cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1a2160: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a2160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a2164: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A2164u;
    {
        const bool branch_taken_0x1a2164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2164u;
        // 0x1a2168: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2164) {
            ctx->pc = 0x1A2170u;
            goto label_1a2170;
        }
    }
    ctx->pc = 0x1A216Cu;
label_1a216c:
    // 0x1a216c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a216cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2170:
    // 0x1a2170: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1a2170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1a2174: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a2174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2178: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1a2178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1a217c: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1a217cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x1a2180: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x1a2180u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1a2184: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2184u;
    {
        const bool branch_taken_0x1a2184 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1A2188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2184u;
        // 0x1a2188: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2184) {
            ctx->pc = 0x1A2194u;
            goto label_1a2194;
        }
    }
    ctx->pc = 0x1A218Cu;
    // 0x1a218c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1a218cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a2190: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a2190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2194:
    // 0x1a2194: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1a2194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a2198: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2198u;
    {
        const bool branch_taken_0x1a2198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2198u;
        // 0x1a219c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2198) {
            ctx->pc = 0x1A21B0u;
            goto label_1a21b0;
        }
    }
    ctx->pc = 0x1A21A0u;
    // 0x1a21a0: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1a21a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1a21a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a21a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a21a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A21A8u;
    {
        const bool branch_taken_0x1a21a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A21ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A21A8u;
        // 0x1a21ac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a21a8) {
            ctx->pc = 0x1A21B4u;
            goto label_1a21b4;
        }
    }
    ctx->pc = 0x1A21B0u;
label_1a21b0:
    // 0x1a21b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a21b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a21b4:
    // 0x1a21b4: 0xc054074  jal         func_1501D0
    ctx->pc = 0x1A21B4u;
    SET_GPR_U32(ctx, 31, 0x1A21BCu);
    ctx->pc = 0x1A21B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A21B4u;
    // 0x1a21b8: 0x8e650250  lw          $a1, 0x250($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501D0u, 0x1A21B4u, 0x1A21BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A21BCu;
label_1a21bc:
    // 0x1a21bc: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1a21bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a21c0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1a21c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a21c4: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1a21c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a21c8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1a21c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a21cc: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1a21ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1a21d0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a21d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a21d4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a21d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a21d8: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1A21D8u;
    SET_GPR_U32(ctx, 31, 0x1A21E0u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1A21D8u, 0x1A21E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A21E0u;
label_1a21e0:
    // 0x1a21e0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1a21e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a21e4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a21e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a21e8: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x1a21e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x1a21ec: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a21ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1a21f0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1a21f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1a21f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a21f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a21f8: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x1A21F8u;
    SET_GPR_U32(ctx, 31, 0x1A2200u);
    ctx->pc = 0x1A21FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A21F8u;
    // 0x1a21fc: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x1A21F8u, 0x1A2200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2200u;
label_1a2200:
    // 0x1a2200: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a2200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a2204: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1a2204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2208: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a2208u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a220c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1A220Cu;
    SET_GPR_U32(ctx, 31, 0x1A2214u);
    ctx->pc = 0x1A2210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A220Cu;
    // 0x1a2210: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1A220Cu, 0x1A2214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2214u;
label_1a2214:
    // 0x1a2214: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a2214u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a2218: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1a2218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a221c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a221cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a2220: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1A2220u;
    SET_GPR_U32(ctx, 31, 0x1A2228u);
    ctx->pc = 0x1A2224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2220u;
    // 0x1a2224: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1A2220u, 0x1A2228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2228u;
label_1a2228:
    // 0x1a2228: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1a2228u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1a222c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1a222cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2230: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a2230u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a2234: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1A2234u;
    SET_GPR_U32(ctx, 31, 0x1A223Cu);
    ctx->pc = 0x1A2238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2234u;
    // 0x1a2238: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1A2234u, 0x1A223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A223Cu;
label_1a223c:
    // 0x1a223c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1a223cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1a2240: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1a2240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2244: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a2244u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a2248: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1A2248u;
    SET_GPR_U32(ctx, 31, 0x1A2250u);
    ctx->pc = 0x1A224Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2248u;
    // 0x1a224c: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1A2248u, 0x1A2250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2250u;
label_1a2250:
    // 0x1a2250: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1a2250u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1a2254: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1a2254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2258: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x1a2258u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1a225c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a225cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2260: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a2260u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a2264: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a2264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1a2268: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A2268u;
    {
        const bool branch_taken_0x1a2268 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1A226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2268u;
        // 0x1a226c: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2268) {
            ctx->pc = 0x1A2274u;
            goto label_1a2274;
        }
    }
    ctx->pc = 0x1A2270u;
    // 0x1a2270: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1a2270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a2274:
    // 0x1a2274: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a2274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a2278: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2278u;
    {
        const bool branch_taken_0x1a2278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2278u;
        // 0x1a227c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2278) {
            ctx->pc = 0x1A2290u;
            goto label_1a2290;
        }
    }
    ctx->pc = 0x1A2280u;
    // 0x1a2280: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1a2280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1a2284: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a2284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a2288: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A2288u;
    {
        const bool branch_taken_0x1a2288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2288u;
        // 0x1a228c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2288) {
            ctx->pc = 0x1A2294u;
            goto label_1a2294;
        }
    }
    ctx->pc = 0x1A2290u;
label_1a2290:
    // 0x1a2290: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a2290u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2294:
    // 0x1a2294: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x1a2294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1a2298: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x1a2298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1a229c: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x1a229cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a22a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a22a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a22a4: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1a22a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x1a22a8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a22a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1a22ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a22acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a22b0: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x1a22b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1a22b4: 0x26100610  addiu       $s0, $s0, 0x610
    ctx->pc = 0x1a22b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x1a22b8: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1A22B8u;
    SET_GPR_U32(ctx, 31, 0x1A22C0u);
    ctx->pc = 0x1A22BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A22B8u;
    // 0x1a22bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1A22B8u, 0x1A22C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A22C0u;
label_1a22c0:
    // 0x1a22c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a22c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a22c4: 0xc05ce66  jal         func_173998
    ctx->pc = 0x1A22C4u;
    SET_GPR_U32(ctx, 31, 0x1A22CCu);
    ctx->pc = 0x1A22C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A22C4u;
    // 0x1a22c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x1A22C4u, 0x1A22CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A22CCu;
label_1a22cc:
    // 0x1a22cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a22ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a22d0: 0xc051f18  jal         func_147C60
    ctx->pc = 0x1A22D0u;
    SET_GPR_U32(ctx, 31, 0x1A22D8u);
    ctx->pc = 0x1A22D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A22D0u;
    // 0x1a22d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1A22D0u, 0x1A22D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A22D8u;
label_1a22d8:
    // 0x1a22d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a22d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a22dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a22dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a22e0: 0xc051f22  jal         func_147C88
    ctx->pc = 0x1A22E0u;
    SET_GPR_U32(ctx, 31, 0x1A22E8u);
    ctx->pc = 0x1A22E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A22E0u;
    // 0x1a22e4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x1A22E0u, 0x1A22E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A22E8u;
label_1a22e8:
    // 0x1a22e8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1a22e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a22ec: 0xc05ce42  jal         func_173908
    ctx->pc = 0x1A22ECu;
    SET_GPR_U32(ctx, 31, 0x1A22F4u);
    ctx->pc = 0x1A22F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A22ECu;
    // 0x1a22f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x1A22ECu, 0x1A22F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A22F4u;
label_1a22f4:
    // 0x1a22f4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1a22f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a22f8: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x1A22F8u;
    SET_GPR_U32(ctx, 31, 0x1A2300u);
    ctx->pc = 0x1A22FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A22F8u;
    // 0x1a22fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x1A22F8u, 0x1A2300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2300u;
label_1a2300:
    // 0x1a2300: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a2300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a2304: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2308: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a2308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a230c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a230cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2310: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a2310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2314: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1a2314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a2318: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1a2318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1a231c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1a231cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1a2320: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x1A2320u;
    SET_GPR_U32(ctx, 31, 0x1A2328u);
    ctx->pc = 0x1A2324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2320u;
    // 0x1a2324: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x1A2320u, 0x1A2328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2328u;
label_1a2328:
    // 0x1a2328: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x1a2328u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1a232c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1a232cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a2330: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1a2330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a2334: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1a2334u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a2338: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1a2338u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a233c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a233cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a2340: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x1a2340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a2344: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1a2344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a2348: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2348u;
        // 0x1a234c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2350u;
}
