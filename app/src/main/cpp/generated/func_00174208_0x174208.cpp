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

// Function: func_00174208
// Address: 0x174208 - 0x174448
void func_00174208_0x174208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00174208_0x174208");
#endif

    switch (ctx->pc) {
        case 0x1742d8u: goto label_1742d8;
        case 0x1742f8u: goto label_1742f8;
        case 0x17430cu: goto label_17430c;
        case 0x174320u: goto label_174320;
        case 0x174334u: goto label_174334;
        case 0x174348u: goto label_174348;
        case 0x1743b8u: goto label_1743b8;
        case 0x1743c4u: goto label_1743c4;
        case 0x1743d0u: goto label_1743d0;
        case 0x1743e0u: goto label_1743e0;
        case 0x1743ecu: goto label_1743ec;
        case 0x1743f8u: goto label_1743f8;
        case 0x174420u: goto label_174420;
        default: break;
    }

    ctx->pc = 0x174208u;

    // 0x174208: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x174208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x17420c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17420cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174210: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x174210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x174214: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x174214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x174218: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x174218u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17421c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x17421cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x174220: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x174220u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174224: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x174224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x174228: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x174228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17422c: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x17422cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x174230: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x174230u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x174234: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x174234u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x174238: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x174238u;
    {
        const bool branch_taken_0x174238 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x17423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174238u;
        // 0x17423c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174238) {
            ctx->pc = 0x174244u;
            goto label_174244;
        }
    }
    ctx->pc = 0x174240u;
    // 0x174240: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x174240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_174244:
    // 0x174244: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x174244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x174248: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x174248u;
    {
        const bool branch_taken_0x174248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174248u;
        // 0x17424c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174248) {
            ctx->pc = 0x174260u;
            goto label_174260;
        }
    }
    ctx->pc = 0x174250u;
    // 0x174250: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x174250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x174254: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174258: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x174258u;
    {
        const bool branch_taken_0x174258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174258u;
        // 0x17425c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174258) {
            ctx->pc = 0x174264u;
            goto label_174264;
        }
    }
    ctx->pc = 0x174260u;
label_174260:
    // 0x174260: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x174260u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174264:
    // 0x174264: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x174264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x174268: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x174268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17426c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x17426cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x174270: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x174270u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x174274: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x174274u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x174278: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x174278u;
    {
        const bool branch_taken_0x174278 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x17427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174278u;
        // 0x17427c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174278) {
            ctx->pc = 0x174288u;
            goto label_174288;
        }
    }
    ctx->pc = 0x174280u;
    // 0x174280: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x174280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x174284: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174288:
    // 0x174288: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x174288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x17428c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17428Cu;
    {
        const bool branch_taken_0x17428c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17428Cu;
        // 0x174290: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17428c) {
            ctx->pc = 0x1742A4u;
            goto label_1742a4;
        }
    }
    ctx->pc = 0x174294u;
    // 0x174294: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x174294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x174298: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17429c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17429Cu;
    {
        const bool branch_taken_0x17429c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1742A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17429Cu;
        // 0x1742a0: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17429c) {
            ctx->pc = 0x1742A8u;
            goto label_1742a8;
        }
    }
    ctx->pc = 0x1742A4u;
label_1742a4:
    // 0x1742a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1742a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1742a8:
    // 0x1742a8: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1742a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1742ac: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1742acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1742b0: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1742b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x1742b4: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1742b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1742b8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1742b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1742bc: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1742bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1742c0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1742c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1742c4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1742c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1742c8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1742c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1742cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1742ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1742d0: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1742D0u;
    SET_GPR_U32(ctx, 31, 0x1742D8u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1742D0u, 0x1742D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1742D8u;
label_1742d8:
    // 0x1742d8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1742d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1742dc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1742dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1742e0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1742e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1742e4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1742e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1742e8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1742e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1742ec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1742ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1742f0: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x1742F0u;
    SET_GPR_U32(ctx, 31, 0x1742F8u);
    ctx->pc = 0x1742F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1742F0u;
    // 0x1742f4: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x1742F0u, 0x1742F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1742F8u;
label_1742f8:
    // 0x1742f8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1742f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1742fc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1742fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174300: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x174300u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x174304: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x174304u;
    SET_GPR_U32(ctx, 31, 0x17430Cu);
    ctx->pc = 0x174308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174304u;
    // 0x174308: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x174304u, 0x17430Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17430Cu;
label_17430c:
    // 0x17430c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x17430cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x174310: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x174310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174314: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x174314u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x174318: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x174318u;
    SET_GPR_U32(ctx, 31, 0x174320u);
    ctx->pc = 0x17431Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174318u;
    // 0x17431c: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x174318u, 0x174320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174320u;
label_174320:
    // 0x174320: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x174320u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x174324: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x174324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174328: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x174328u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17432c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x17432Cu;
    SET_GPR_U32(ctx, 31, 0x174334u);
    ctx->pc = 0x174330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17432Cu;
    // 0x174330: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x17432Cu, 0x174334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174334u;
label_174334:
    // 0x174334: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x174334u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x174338: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x174338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17433c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x17433cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x174340: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x174340u;
    SET_GPR_U32(ctx, 31, 0x174348u);
    ctx->pc = 0x174344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174340u;
    // 0x174344: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x174340u, 0x174348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174348u;
label_174348:
    // 0x174348: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x174348u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x17434c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x17434cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174350: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x174350u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x174354: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x174354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174358: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x174358u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17435c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x17435cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x174360: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x174360u;
    {
        const bool branch_taken_0x174360 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x174364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174360u;
        // 0x174364: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x174360) {
            ctx->pc = 0x17436Cu;
            goto label_17436c;
        }
    }
    ctx->pc = 0x174368u;
    // 0x174368: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x174368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_17436c:
    // 0x17436c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17436cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x174370: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x174370u;
    {
        const bool branch_taken_0x174370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174370u;
        // 0x174374: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174370) {
            ctx->pc = 0x174388u;
            goto label_174388;
        }
    }
    ctx->pc = 0x174378u;
    // 0x174378: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x174378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x17437c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17437cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174380: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x174380u;
    {
        const bool branch_taken_0x174380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174380u;
        // 0x174384: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174380) {
            ctx->pc = 0x17438Cu;
            goto label_17438c;
        }
    }
    ctx->pc = 0x174388u;
label_174388:
    // 0x174388: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x174388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17438c:
    // 0x17438c: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x17438cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x174390: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x174390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x174394: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x174394u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x174398: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x174398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17439c: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x17439cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x1743a0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1743a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1743a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1743a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1743a8: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x1743a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1743ac: 0x26100660  addiu       $s0, $s0, 0x660
    ctx->pc = 0x1743acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
    // 0x1743b0: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1743B0u;
    SET_GPR_U32(ctx, 31, 0x1743B8u);
    ctx->pc = 0x1743B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1743B0u;
    // 0x1743b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1743B0u, 0x1743B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1743B8u;
label_1743b8:
    // 0x1743b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1743b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1743bc: 0xc05ce66  jal         func_173998
    ctx->pc = 0x1743BCu;
    SET_GPR_U32(ctx, 31, 0x1743C4u);
    ctx->pc = 0x1743C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1743BCu;
    // 0x1743c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x1743BCu, 0x1743C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1743C4u;
label_1743c4:
    // 0x1743c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1743c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1743c8: 0xc051f18  jal         func_147C60
    ctx->pc = 0x1743C8u;
    SET_GPR_U32(ctx, 31, 0x1743D0u);
    ctx->pc = 0x1743CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1743C8u;
    // 0x1743cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1743C8u, 0x1743D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1743D0u;
label_1743d0:
    // 0x1743d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1743d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1743d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1743d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1743d8: 0xc051f22  jal         func_147C88
    ctx->pc = 0x1743D8u;
    SET_GPR_U32(ctx, 31, 0x1743E0u);
    ctx->pc = 0x1743DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1743D8u;
    // 0x1743dc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x1743D8u, 0x1743E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1743E0u;
label_1743e0:
    // 0x1743e0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1743e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1743e4: 0xc05ce42  jal         func_173908
    ctx->pc = 0x1743E4u;
    SET_GPR_U32(ctx, 31, 0x1743ECu);
    ctx->pc = 0x1743E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1743E4u;
    // 0x1743e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x1743E4u, 0x1743ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1743ECu;
label_1743ec:
    // 0x1743ec: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1743ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1743f0: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x1743F0u;
    SET_GPR_U32(ctx, 31, 0x1743F8u);
    ctx->pc = 0x1743F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1743F0u;
    // 0x1743f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x1743F0u, 0x1743F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1743F8u;
label_1743f8:
    // 0x1743f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1743f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1743fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1743fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174400: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x174400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x174404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x174404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174408: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x174408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17440c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x17440cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x174410: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x174410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x174414: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x174414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x174418: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x174418u;
    SET_GPR_U32(ctx, 31, 0x174420u);
    ctx->pc = 0x17441Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174418u;
    // 0x17441c: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x174418u, 0x174420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174420u;
label_174420:
    // 0x174420: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x174420u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x174424: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x174424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x174428: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x174428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17442c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x17442cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x174430: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x174430u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x174434: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x174434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174438: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x174438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17443c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x17443cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x174440: 0x3e00008  jr          $ra
    ctx->pc = 0x174440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174440u;
        // 0x174444: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174448u;
}
