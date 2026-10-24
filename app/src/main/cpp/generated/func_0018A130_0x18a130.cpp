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

// Function: func_0018A130
// Address: 0x18a130 - 0x18a3b8
void func_0018A130_0x18a130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018A130_0x18a130");
#endif

    switch (ctx->pc) {
        case 0x18a224u: goto label_18a224;
        case 0x18a248u: goto label_18a248;
        case 0x18a268u: goto label_18a268;
        case 0x18a27cu: goto label_18a27c;
        case 0x18a290u: goto label_18a290;
        case 0x18a2a4u: goto label_18a2a4;
        case 0x18a2b8u: goto label_18a2b8;
        case 0x18a328u: goto label_18a328;
        case 0x18a334u: goto label_18a334;
        case 0x18a340u: goto label_18a340;
        case 0x18a350u: goto label_18a350;
        case 0x18a35cu: goto label_18a35c;
        case 0x18a368u: goto label_18a368;
        case 0x18a390u: goto label_18a390;
        default: break;
    }

    ctx->pc = 0x18a130u;

    // 0x18a130: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x18a130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x18a134: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18a134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a138: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x18a138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x18a13c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x18a13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x18a140: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x18a140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a144: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x18a144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x18a148: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x18a148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a14c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x18a14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x18a150: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18a150u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a154: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18a154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18a158: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18a158u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a15c: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x18a15cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x18a160: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x18a160u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x18a164: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x18a164u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x18a168: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x18A168u;
    {
        const bool branch_taken_0x18a168 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x18A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A168u;
        // 0x18a16c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a168) {
            ctx->pc = 0x18A174u;
            goto label_18a174;
        }
    }
    ctx->pc = 0x18A170u;
    // 0x18a170: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x18a170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_18a174:
    // 0x18a174: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18a174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18a178: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18A178u;
    {
        const bool branch_taken_0x18a178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A178u;
        // 0x18a17c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a178) {
            ctx->pc = 0x18A190u;
            goto label_18a190;
        }
    }
    ctx->pc = 0x18A180u;
    // 0x18a180: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x18a180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x18a184: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a188: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18A188u;
    {
        const bool branch_taken_0x18a188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A188u;
        // 0x18a18c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a188) {
            ctx->pc = 0x18A194u;
            goto label_18a194;
        }
    }
    ctx->pc = 0x18A190u;
label_18a190:
    // 0x18a190: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18a190u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a194:
    // 0x18a194: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x18a194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x18a198: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18a198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a19c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x18a19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x18a1a0: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x18a1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x18a1a4: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x18a1a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x18a1a8: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A1A8u;
    {
        const bool branch_taken_0x18a1a8 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x18A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A1A8u;
        // 0x18a1ac: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a1a8) {
            ctx->pc = 0x18A1B8u;
            goto label_18a1b8;
        }
    }
    ctx->pc = 0x18A1B0u;
    // 0x18a1b0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x18a1b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18a1b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18a1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18a1b8:
    // 0x18a1b8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x18a1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18a1bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18A1BCu;
    {
        const bool branch_taken_0x18a1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A1BCu;
        // 0x18a1c0: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a1bc) {
            ctx->pc = 0x18A1D4u;
            goto label_18a1d4;
        }
    }
    ctx->pc = 0x18A1C4u;
    // 0x18a1c4: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x18a1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x18a1c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a1cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18A1CCu;
    {
        const bool branch_taken_0x18a1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A1CCu;
        // 0x18a1d0: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a1cc) {
            ctx->pc = 0x18A1D8u;
            goto label_18a1d8;
        }
    }
    ctx->pc = 0x18A1D4u;
label_18a1d4:
    // 0x18a1d4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18a1d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a1d8:
    // 0x18a1d8: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x18a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x18a1dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18a1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a1e0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x18a1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x18a1e4: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x18a1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x18a1e8: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x18a1e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x18a1ec: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A1ECu;
    {
        const bool branch_taken_0x18a1ec = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x18A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A1ECu;
        // 0x18a1f0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a1ec) {
            ctx->pc = 0x18A1FCu;
            goto label_18a1fc;
        }
    }
    ctx->pc = 0x18A1F4u;
    // 0x18a1f4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x18a1f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18a1f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18a1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18a1fc:
    // 0x18a1fc: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x18a1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18a200: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18A200u;
    {
        const bool branch_taken_0x18a200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A200u;
        // 0x18a204: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a200) {
            ctx->pc = 0x18A218u;
            goto label_18a218;
        }
    }
    ctx->pc = 0x18A208u;
    // 0x18a208: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x18a208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x18a20c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a210: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18A210u;
    {
        const bool branch_taken_0x18a210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A210u;
        // 0x18a214: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a210) {
            ctx->pc = 0x18A21Cu;
            goto label_18a21c;
        }
    }
    ctx->pc = 0x18A218u;
label_18a218:
    // 0x18a218: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18a218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a21c:
    // 0x18a21c: 0xc054074  jal         func_1501D0
    ctx->pc = 0x18A21Cu;
    SET_GPR_U32(ctx, 31, 0x18A224u);
    ctx->pc = 0x18A220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A21Cu;
    // 0x18a220: 0x8e650250  lw          $a1, 0x250($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501D0u, 0x18A21Cu, 0x18A224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A224u;
label_18a224:
    // 0x18a224: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x18a224u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18a228: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18a228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18a22c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x18a22cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18a230: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18a230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18a234: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x18a234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x18a238: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18a238u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x18a23c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18a23cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18a240: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18A240u;
    SET_GPR_U32(ctx, 31, 0x18A248u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18A240u, 0x18A248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A248u;
label_18a248:
    // 0x18a248: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x18a248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18a24c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18a24cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18a250: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x18a250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x18a254: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x18a254u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x18a258: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x18a258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x18a25c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18a25cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18a260: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x18A260u;
    SET_GPR_U32(ctx, 31, 0x18A268u);
    ctx->pc = 0x18A264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A260u;
    // 0x18a264: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x18A260u, 0x18A268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A268u;
label_18a268:
    // 0x18a268: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18a268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18a26c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x18a26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18a270: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18a270u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18a274: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18A274u;
    SET_GPR_U32(ctx, 31, 0x18A27Cu);
    ctx->pc = 0x18A278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A274u;
    // 0x18a278: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18A274u, 0x18A27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A27Cu;
label_18a27c:
    // 0x18a27c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18a27cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18a280: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x18a280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18a284: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18a284u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18a288: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18A288u;
    SET_GPR_U32(ctx, 31, 0x18A290u);
    ctx->pc = 0x18A28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A288u;
    // 0x18a28c: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18A288u, 0x18A290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A290u;
label_18a290:
    // 0x18a290: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x18a290u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x18a294: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x18a294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18a298: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18a298u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18a29c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18A29Cu;
    SET_GPR_U32(ctx, 31, 0x18A2A4u);
    ctx->pc = 0x18A2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A29Cu;
    // 0x18a2a0: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18A29Cu, 0x18A2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A2A4u;
label_18a2a4:
    // 0x18a2a4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x18a2a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x18a2a8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x18a2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18a2ac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18a2acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18a2b0: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18A2B0u;
    SET_GPR_U32(ctx, 31, 0x18A2B8u);
    ctx->pc = 0x18A2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A2B0u;
    // 0x18a2b4: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18A2B0u, 0x18A2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A2B8u;
label_18a2b8:
    // 0x18a2b8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x18a2b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x18a2bc: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x18a2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18a2c0: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x18a2c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x18a2c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18a2c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a2c8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18a2c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18a2cc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x18a2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x18a2d0: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x18A2D0u;
    {
        const bool branch_taken_0x18a2d0 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x18A2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A2D0u;
        // 0x18a2d4: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a2d0) {
            ctx->pc = 0x18A2DCu;
            goto label_18a2dc;
        }
    }
    ctx->pc = 0x18A2D8u;
    // 0x18a2d8: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x18a2d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_18a2dc:
    // 0x18a2dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18a2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18a2e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18A2E0u;
    {
        const bool branch_taken_0x18a2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A2E0u;
        // 0x18a2e4: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a2e0) {
            ctx->pc = 0x18A2F8u;
            goto label_18a2f8;
        }
    }
    ctx->pc = 0x18A2E8u;
    // 0x18a2e8: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x18a2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x18a2ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a2f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18A2F0u;
    {
        const bool branch_taken_0x18a2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A2F0u;
        // 0x18a2f4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a2f0) {
            ctx->pc = 0x18A2FCu;
            goto label_18a2fc;
        }
    }
    ctx->pc = 0x18A2F8u;
label_18a2f8:
    // 0x18a2f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18a2f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a2fc:
    // 0x18a2fc: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x18a2fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x18a300: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x18a300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x18a304: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x18a304u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18a308: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18a308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a30c: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x18a30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x18a310: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x18a310u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x18a314: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18a314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18a318: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x18a318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18a31c: 0x26100610  addiu       $s0, $s0, 0x610
    ctx->pc = 0x18a31cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x18a320: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x18A320u;
    SET_GPR_U32(ctx, 31, 0x18A328u);
    ctx->pc = 0x18A324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A320u;
    // 0x18a324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x18A320u, 0x18A328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A328u;
label_18a328:
    // 0x18a328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18a328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a32c: 0xc05ce66  jal         func_173998
    ctx->pc = 0x18A32Cu;
    SET_GPR_U32(ctx, 31, 0x18A334u);
    ctx->pc = 0x18A330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A32Cu;
    // 0x18a330: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x18A32Cu, 0x18A334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A334u;
label_18a334:
    // 0x18a334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18a334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a338: 0xc051f18  jal         func_147C60
    ctx->pc = 0x18A338u;
    SET_GPR_U32(ctx, 31, 0x18A340u);
    ctx->pc = 0x18A33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A338u;
    // 0x18a33c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x18A338u, 0x18A340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A340u;
label_18a340:
    // 0x18a340: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18a340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a344: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18a344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a348: 0xc051f22  jal         func_147C88
    ctx->pc = 0x18A348u;
    SET_GPR_U32(ctx, 31, 0x18A350u);
    ctx->pc = 0x18A34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A348u;
    // 0x18a34c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x18A348u, 0x18A350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A350u;
label_18a350:
    // 0x18a350: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x18a350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18a354: 0xc05ce42  jal         func_173908
    ctx->pc = 0x18A354u;
    SET_GPR_U32(ctx, 31, 0x18A35Cu);
    ctx->pc = 0x18A358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A354u;
    // 0x18a358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x18A354u, 0x18A35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A35Cu;
label_18a35c:
    // 0x18a35c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x18a35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18a360: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x18A360u;
    SET_GPR_U32(ctx, 31, 0x18A368u);
    ctx->pc = 0x18A364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A360u;
    // 0x18a364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x18A360u, 0x18A368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A368u;
label_18a368:
    // 0x18a368: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18a368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18a36c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18a36cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a370: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x18a370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18a374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18a374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a378: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18a378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a37c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x18a37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x18a380: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x18a380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x18a384: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x18a384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x18a388: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x18A388u;
    SET_GPR_U32(ctx, 31, 0x18A390u);
    ctx->pc = 0x18A38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A388u;
    // 0x18a38c: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x18A388u, 0x18A390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A390u;
label_18a390:
    // 0x18a390: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x18a390u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x18a394: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x18a394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18a398: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x18a398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18a39c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x18a39cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18a3a0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x18a3a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18a3a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18a3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a3a8: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x18a3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18a3ac: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x18a3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18a3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x18A3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A3B0u;
        // 0x18a3b4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A3B8u;
}
