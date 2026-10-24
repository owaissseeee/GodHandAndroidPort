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

// Function: func_00253048
// Address: 0x253048 - 0x253de8
void func_00253048_0x253048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00253048_0x253048");
#endif

    switch (ctx->pc) {
        case 0x253074u: goto label_253074;
        case 0x2530acu: goto label_2530ac;
        case 0x2530e8u: goto label_2530e8;
        case 0x253108u: goto label_253108;
        case 0x253118u: goto label_253118;
        case 0x253124u: goto label_253124;
        case 0x253138u: goto label_253138;
        case 0x253174u: goto label_253174;
        case 0x253180u: goto label_253180;
        case 0x2531b8u: goto label_2531b8;
        case 0x253248u: goto label_253248;
        case 0x2532a8u: goto label_2532a8;
        case 0x253308u: goto label_253308;
        case 0x253398u: goto label_253398;
        case 0x253428u: goto label_253428;
        case 0x253488u: goto label_253488;
        case 0x2534c4u: goto label_2534c4;
        case 0x2534f0u: goto label_2534f0;
        case 0x253514u: goto label_253514;
        case 0x25354cu: goto label_25354c;
        case 0x25357cu: goto label_25357c;
        case 0x2535a8u: goto label_2535a8;
        case 0x2535b8u: goto label_2535b8;
        case 0x253618u: goto label_253618;
        case 0x253678u: goto label_253678;
        case 0x253708u: goto label_253708;
        case 0x253798u: goto label_253798;
        case 0x253828u: goto label_253828;
        case 0x2538a8u: goto label_2538a8;
        case 0x253904u: goto label_253904;
        case 0x253930u: goto label_253930;
        case 0x25399cu: goto label_25399c;
        case 0x2539c0u: goto label_2539c0;
        case 0x2539ecu: goto label_2539ec;
        case 0x253a08u: goto label_253a08;
        case 0x253a44u: goto label_253a44;
        case 0x253a6cu: goto label_253a6c;
        case 0x253a74u: goto label_253a74;
        case 0x253a94u: goto label_253a94;
        case 0x253a9cu: goto label_253a9c;
        case 0x253ac0u: goto label_253ac0;
        case 0x253ad8u: goto label_253ad8;
        case 0x253b74u: goto label_253b74;
        case 0x253c0cu: goto label_253c0c;
        case 0x253cf4u: goto label_253cf4;
        case 0x253d58u: goto label_253d58;
        case 0x253d8cu: goto label_253d8c;
        case 0x253d94u: goto label_253d94;
        case 0x253da4u: goto label_253da4;
        case 0x253db4u: goto label_253db4;
        default: break;
    }

    ctx->pc = 0x253048u;

    // 0x253048: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x253048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x25304c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x25304cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x253050: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x253050u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253054: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x253054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x253058: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x253058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x25305c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x25305cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x253060: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x253060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x253064: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x253064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x253068: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x253068u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x25306c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x25306Cu;
    SET_GPR_U32(ctx, 31, 0x253074u);
    ctx->pc = 0x253070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25306Cu;
    // 0x253070: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x25306Cu, 0x253074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253074u;
label_253074:
    // 0x253074: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x253074u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253078: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x253078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x25307c: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x25307cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x253080: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x253080u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x253084: 0x34421020  ori         $v0, $v0, 0x1020
    ctx->pc = 0x253084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4128);
    // 0x253088: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x253088u;
    {
        const bool branch_taken_0x253088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253088u;
        // 0x25308c: 0xae4216d0  sw          $v0, 0x16D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253088) {
            ctx->pc = 0x2530A4u;
            goto label_2530a4;
        }
    }
    ctx->pc = 0x253090u;
    // 0x253090: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253094: 0x10620288  beq         $v1, $v0, . + 4 + (0x288 << 2)
    ctx->pc = 0x253094u;
    {
        const bool branch_taken_0x253094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x253094) {
            ctx->pc = 0x253AB8u;
            goto label_253ab8;
        }
    }
    ctx->pc = 0x25309Cu;
    // 0x25309c: 0x10000346  b           . + 4 + (0x346 << 2)
    ctx->pc = 0x25309Cu;
    {
        const bool branch_taken_0x25309c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2530A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25309Cu;
        // 0x2530a0: 0x964203ac  lhu         $v0, 0x3AC($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25309c) {
            ctx->pc = 0x253DB8u;
            goto label_253db8;
        }
    }
    ctx->pc = 0x2530A4u;
label_2530a4:
    // 0x2530a4: 0xc09ac7a  jal         func_26B1E8
    ctx->pc = 0x2530A4u;
    SET_GPR_U32(ctx, 31, 0x2530ACu);
    ctx->pc = 0x2530A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2530A4u;
    // 0x2530a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x2530A4u, 0x2530ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2530ACu;
label_2530ac:
    // 0x2530ac: 0x8e420698  lw          $v0, 0x698($s2)
    ctx->pc = 0x2530acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
    // 0x2530b0: 0xa24017c2  sb          $zero, 0x17C2($s2)
    ctx->pc = 0x2530b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6082), (uint8_t)GPR_U32(ctx, 0));
    // 0x2530b4: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2530B4u;
    {
        const bool branch_taken_0x2530b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2530B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2530B4u;
        // 0x2530b8: 0xae401710  sw          $zero, 0x1710($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2530b4) {
            ctx->pc = 0x253178u;
            goto label_253178;
        }
    }
    ctx->pc = 0x2530BCu;
    // 0x2530bc: 0x8c500034  lw          $s0, 0x34($v0)
    ctx->pc = 0x2530bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2530c0: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2530C0u;
    {
        const bool branch_taken_0x2530c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2530C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2530C0u;
        // 0x2530c4: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2530c0) {
            ctx->pc = 0x253178u;
            goto label_253178;
        }
    }
    ctx->pc = 0x2530C8u;
    // 0x2530c8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2530c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2530cc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2530ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2530d0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2530d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2530d4: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x2530d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x2530d8: 0xc64c0104  lwc1        $f12, 0x104($s2)
    ctx->pc = 0x2530d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2530dc: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2530dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2530e0: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x2530E0u;
    SET_GPR_U32(ctx, 31, 0x2530E8u);
    ctx->pc = 0x2530E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2530E0u;
    // 0x2530e4: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x2530E0u, 0x2530E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2530E8u;
label_2530e8:
    // 0x2530e8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2530e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2530ec: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2530ecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2530f0: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2530f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2530f4: 0x0  nop
    ctx->pc = 0x2530f4u;
    // NOP
    // 0x2530f8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2530F8u;
    {
        const bool branch_taken_0x2530f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2530f8) {
            ctx->pc = 0x2530FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2530F8u;
            // 0x2530fc: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
            ctx->f[20] = FPU_NEG_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x253100u;
            goto label_253100;
        }
    }
    ctx->pc = 0x253100u;
label_253100:
    // 0x253100: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x253100u;
    SET_GPR_U32(ctx, 31, 0x253108u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x253100u, 0x253108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253108u;
label_253108:
    // 0x253108: 0x56020008  bnel        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x253108u;
    {
        const bool branch_taken_0x253108 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x253108) {
            ctx->pc = 0x25310Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253108u;
            // 0x25310c: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25312Cu;
            goto label_25312c;
        }
    }
    ctx->pc = 0x253110u;
    // 0x253110: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x253110u;
    SET_GPR_U32(ctx, 31, 0x253118u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x253110u, 0x253118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253118u;
label_253118:
    // 0x253118: 0xc44c0104  lwc1        $f12, 0x104($v0)
    ctx->pc = 0x253118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25311c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x25311Cu;
    SET_GPR_U32(ctx, 31, 0x253124u);
    ctx->pc = 0x253120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25311Cu;
    // 0x253120: 0x46156300  add.s       $f12, $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x25311Cu, 0x253124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253124u;
label_253124:
    // 0x253124: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x253124u;
    {
        const bool branch_taken_0x253124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253124u;
        // 0x253128: 0xe6400104  swc1        $f0, 0x104($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253124) {
            ctx->pc = 0x253138u;
            goto label_253138;
        }
    }
    ctx->pc = 0x25312Cu;
label_25312c:
    // 0x25312c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x25312cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x253130: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x253130u;
    SET_GPR_U32(ctx, 31, 0x253138u);
    ctx->pc = 0x253134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253130u;
    // 0x253134: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x253130u, 0x253138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253138u;
label_253138:
    // 0x253138: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x253138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x25313c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x25313cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x253140: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x253140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253144: 0x0  nop
    ctx->pc = 0x253144u;
    // NOP
    // 0x253148: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x253148u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25314c: 0x0  nop
    ctx->pc = 0x25314cu;
    // NOP
    // 0x253150: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x253150u;
    {
        const bool branch_taken_0x253150 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x253154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253150u;
        // 0x253154: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253150) {
            ctx->pc = 0x253178u;
            goto label_253178;
        }
    }
    ctx->pc = 0x253158u;
    // 0x253158: 0xc64c0104  lwc1        $f12, 0x104($s2)
    ctx->pc = 0x253158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25315c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x25315cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x253160: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x253160u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x253164: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x253164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253168: 0xa24202f7  sb          $v0, 0x2F7($s2)
    ctx->pc = 0x253168u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x25316c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x25316Cu;
    SET_GPR_U32(ctx, 31, 0x253174u);
    ctx->pc = 0x253170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25316Cu;
    // 0x253170: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x25316Cu, 0x253174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253174u;
label_253174:
    // 0x253174: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x253174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
label_253178:
    // 0x253178: 0xc09d91a  jal         func_276468
    ctx->pc = 0x253178u;
    SET_GPR_U32(ctx, 31, 0x253180u);
    ctx->pc = 0x25317Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253178u;
    // 0x25317c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x253178u, 0x253180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253180u;
label_253180:
    // 0x253180: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x253180u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x253184: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x253184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x253188: 0x2444fdfb  addiu       $a0, $v0, -0x205
    ctx->pc = 0x253188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966779));
    // 0x25318c: 0x2c83007a  sltiu       $v1, $a0, 0x7A
    ctx->pc = 0x25318cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)122) ? 1 : 0);
    // 0x253190: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x253190u;
    {
        const bool branch_taken_0x253190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x253194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253190u;
        // 0x253194: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253190) {
            ctx->pc = 0x2531B0u;
            goto label_2531b0;
        }
    }
    ctx->pc = 0x253198u;
    // 0x253198: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x253198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25319c: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x25319cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x2531a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2531a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2531a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2531a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2531a8: 0x800008  jr          $a0
    ctx->pc = 0x2531A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2531B0u: goto label_2531b0;
            case 0x253240u: goto label_253240;
            case 0x2532A0u: goto label_2532a0;
            case 0x253300u: goto label_253300;
            case 0x253390u: goto label_253390;
            case 0x253420u: goto label_253420;
            case 0x253480u: goto label_253480;
            case 0x2534F8u: goto label_2534f8;
            case 0x2535B0u: goto label_2535b0;
            case 0x253610u: goto label_253610;
            case 0x253670u: goto label_253670;
            case 0x253700u: goto label_253700;
            case 0x253790u: goto label_253790;
            case 0x253820u: goto label_253820;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2531A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2531B0u;
label_2531b0:
    // 0x2531b0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2531B0u;
    SET_GPR_U32(ctx, 31, 0x2531B8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2531B0u, 0x2531B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2531B8u;
label_2531b8:
    // 0x2531b8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2531b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2531bc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2531bcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2531c0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2531C0u;
    {
        const bool branch_taken_0x2531c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2531c0) {
            ctx->pc = 0x2531C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2531C0u;
            // 0x2531c4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2531C8u;
            goto label_2531c8;
        }
    }
    ctx->pc = 0x2531C8u;
label_2531c8:
    // 0x2531c8: 0x2010  mfhi        $a0
    ctx->pc = 0x2531c8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2531cc: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x2531ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2531d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2531D0u;
    {
        const bool branch_taken_0x2531d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2531D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531D0u;
        // 0x2531d4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2531d0) {
            ctx->pc = 0x2531F0u;
            goto label_2531f0;
        }
    }
    ctx->pc = 0x2531D8u;
    // 0x2531d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2531d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2531dc: 0x24420170  addiu       $v0, $v0, 0x170
    ctx->pc = 0x2531dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x2531e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2531e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2531e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2531e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2531e8: 0x800008  jr          $a0
    ctx->pc = 0x2531E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2531F0u: goto label_2531f0;
            case 0x253200u: goto label_253200;
            case 0x253210u: goto label_253210;
            case 0x253220u: goto label_253220;
            case 0x253230u: goto label_253230;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2531E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2531F0u;
label_2531f0:
    // 0x2531f0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2531f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2531f4: 0x8c430310  lw          $v1, 0x310($v0)
    ctx->pc = 0x2531f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 784)));
    // 0x2531f8: 0x100001a0  b           . + 4 + (0x1A0 << 2)
    ctx->pc = 0x2531F8u;
    {
        const bool branch_taken_0x2531f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2531FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531F8u;
        // 0x2531fc: 0x8c440314  lw          $a0, 0x314($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2531f8) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253200u;
label_253200:
    // 0x253200: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x253200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x253204: 0x8c430318  lw          $v1, 0x318($v0)
    ctx->pc = 0x253204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 792)));
    // 0x253208: 0x1000019c  b           . + 4 + (0x19C << 2)
    ctx->pc = 0x253208u;
    {
        const bool branch_taken_0x253208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25320Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253208u;
        // 0x25320c: 0x8c44031c  lw          $a0, 0x31C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 796)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253208) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253210u;
label_253210:
    // 0x253210: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x253210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x253214: 0x8c430320  lw          $v1, 0x320($v0)
    ctx->pc = 0x253214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x253218: 0x10000198  b           . + 4 + (0x198 << 2)
    ctx->pc = 0x253218u;
    {
        const bool branch_taken_0x253218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253218u;
        // 0x25321c: 0x8c440324  lw          $a0, 0x324($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253218) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253220u;
label_253220:
    // 0x253220: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x253220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x253224: 0x8c430328  lw          $v1, 0x328($v0)
    ctx->pc = 0x253224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 808)));
    // 0x253228: 0x10000194  b           . + 4 + (0x194 << 2)
    ctx->pc = 0x253228u;
    {
        const bool branch_taken_0x253228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253228u;
        // 0x25322c: 0x8c44032c  lw          $a0, 0x32C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253228) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253230u;
label_253230:
    // 0x253230: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x253230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x253234: 0x8c430330  lw          $v1, 0x330($v0)
    ctx->pc = 0x253234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x253238: 0x10000190  b           . + 4 + (0x190 << 2)
    ctx->pc = 0x253238u;
    {
        const bool branch_taken_0x253238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253238u;
        // 0x25323c: 0x8c440334  lw          $a0, 0x334($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253238) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253240u;
label_253240:
    // 0x253240: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x253240u;
    SET_GPR_U32(ctx, 31, 0x253248u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x253240u, 0x253248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253248u;
label_253248:
    // 0x253248: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x253248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25324c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25324cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253250: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x253250u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x253254: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x253254u;
    {
        const bool branch_taken_0x253254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x253254) {
            ctx->pc = 0x253258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253254u;
            // 0x253258: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25325Cu;
            goto label_25325c;
        }
    }
    ctx->pc = 0x25325Cu;
label_25325c:
    // 0x25325c: 0x2810  mfhi        $a1
    ctx->pc = 0x25325cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x253260: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x253260u;
    {
        const bool branch_taken_0x253260 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x253260) {
            ctx->pc = 0x253264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253260u;
            // 0x253264: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253288u;
            goto label_253288;
        }
    }
    ctx->pc = 0x253268u;
    // 0x253268: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x253268u;
    {
        const bool branch_taken_0x253268 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253268u;
        // 0x25326c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253268) {
            ctx->pc = 0x253278u;
            goto label_253278;
        }
    }
    ctx->pc = 0x253270u;
    // 0x253270: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x253270u;
    {
        const bool branch_taken_0x253270 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x253270) {
            ctx->pc = 0x253274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253270u;
            // 0x253274: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253294u;
            goto label_253294;
        }
    }
    ctx->pc = 0x253278u;
label_253278:
    // 0x253278: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x253278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x25327c: 0x8c431b68  lw          $v1, 0x1B68($v0)
    ctx->pc = 0x25327cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7016)));
    // 0x253280: 0x1000017e  b           . + 4 + (0x17E << 2)
    ctx->pc = 0x253280u;
    {
        const bool branch_taken_0x253280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253280u;
        // 0x253284: 0x8c441b6c  lw          $a0, 0x1B6C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253280) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253288u;
label_253288:
    // 0x253288: 0x8c431b70  lw          $v1, 0x1B70($v0)
    ctx->pc = 0x253288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7024)));
    // 0x25328c: 0x1000017b  b           . + 4 + (0x17B << 2)
    ctx->pc = 0x25328Cu;
    {
        const bool branch_taken_0x25328c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25328Cu;
        // 0x253290: 0x8c441b74  lw          $a0, 0x1B74($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25328c) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253294u;
label_253294:
    // 0x253294: 0x8c431b78  lw          $v1, 0x1B78($v0)
    ctx->pc = 0x253294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7032)));
    // 0x253298: 0x10000178  b           . + 4 + (0x178 << 2)
    ctx->pc = 0x253298u;
    {
        const bool branch_taken_0x253298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25329Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253298u;
        // 0x25329c: 0x8c441b7c  lw          $a0, 0x1B7C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253298) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x2532A0u;
label_2532a0:
    // 0x2532a0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2532A0u;
    SET_GPR_U32(ctx, 31, 0x2532A8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2532A0u, 0x2532A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2532A8u;
label_2532a8:
    // 0x2532a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2532a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2532ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2532acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2532b0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2532b0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2532b4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2532B4u;
    {
        const bool branch_taken_0x2532b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2532b4) {
            ctx->pc = 0x2532B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2532B4u;
            // 0x2532b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2532BCu;
            goto label_2532bc;
        }
    }
    ctx->pc = 0x2532BCu;
label_2532bc:
    // 0x2532bc: 0x2810  mfhi        $a1
    ctx->pc = 0x2532bcu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2532c0: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2532C0u;
    {
        const bool branch_taken_0x2532c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2532c0) {
            ctx->pc = 0x2532C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2532C0u;
            // 0x2532c4: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2532E8u;
            goto label_2532e8;
        }
    }
    ctx->pc = 0x2532C8u;
    // 0x2532c8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2532C8u;
    {
        const bool branch_taken_0x2532c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2532CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2532C8u;
        // 0x2532cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2532c8) {
            ctx->pc = 0x2532D8u;
            goto label_2532d8;
        }
    }
    ctx->pc = 0x2532D0u;
    // 0x2532d0: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2532D0u;
    {
        const bool branch_taken_0x2532d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2532d0) {
            ctx->pc = 0x2532D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2532D0u;
            // 0x2532d4: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2532F4u;
            goto label_2532f4;
        }
    }
    ctx->pc = 0x2532D8u;
label_2532d8:
    // 0x2532d8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2532d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2532dc: 0x8c432c04  lw          $v1, 0x2C04($v0)
    ctx->pc = 0x2532dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    // 0x2532e0: 0x10000166  b           . + 4 + (0x166 << 2)
    ctx->pc = 0x2532E0u;
    {
        const bool branch_taken_0x2532e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2532E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2532E0u;
        // 0x2532e4: 0x8c442c08  lw          $a0, 0x2C08($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2532e0) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x2532E8u;
label_2532e8:
    // 0x2532e8: 0x8c432c0c  lw          $v1, 0x2C0C($v0)
    ctx->pc = 0x2532e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11276)));
    // 0x2532ec: 0x10000163  b           . + 4 + (0x163 << 2)
    ctx->pc = 0x2532ECu;
    {
        const bool branch_taken_0x2532ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2532F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2532ECu;
        // 0x2532f0: 0x8c442c10  lw          $a0, 0x2C10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2532ec) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x2532F4u;
label_2532f4:
    // 0x2532f4: 0x8c432c14  lw          $v1, 0x2C14($v0)
    ctx->pc = 0x2532f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11284)));
    // 0x2532f8: 0x10000160  b           . + 4 + (0x160 << 2)
    ctx->pc = 0x2532F8u;
    {
        const bool branch_taken_0x2532f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2532FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2532F8u;
        // 0x2532fc: 0x8c442c18  lw          $a0, 0x2C18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2532f8) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253300u;
label_253300:
    // 0x253300: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x253300u;
    SET_GPR_U32(ctx, 31, 0x253308u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x253300u, 0x253308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253308u;
label_253308:
    // 0x253308: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x253308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x25330c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x25330cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x253310: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x253310u;
    {
        const bool branch_taken_0x253310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x253310) {
            ctx->pc = 0x253314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253310u;
            // 0x253314: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x253318u;
            goto label_253318;
        }
    }
    ctx->pc = 0x253318u;
label_253318:
    // 0x253318: 0x2010  mfhi        $a0
    ctx->pc = 0x253318u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x25331c: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x25331cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x253320: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x253320u;
    {
        const bool branch_taken_0x253320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253320u;
        // 0x253324: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253320) {
            ctx->pc = 0x253340u;
            goto label_253340;
        }
    }
    ctx->pc = 0x253328u;
    // 0x253328: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x253328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25332c: 0x24420190  addiu       $v0, $v0, 0x190
    ctx->pc = 0x25332cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x253330: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x253330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x253334: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x253334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x253338: 0x800008  jr          $a0
    ctx->pc = 0x253338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x253340u: goto label_253340;
            case 0x253350u: goto label_253350;
            case 0x253360u: goto label_253360;
            case 0x253370u: goto label_253370;
            case 0x253380u: goto label_253380;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253338u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253340u;
label_253340:
    // 0x253340: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x253340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x253344: 0x8c430ed4  lw          $v1, 0xED4($v0)
    ctx->pc = 0x253344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3796)));
    // 0x253348: 0x1000014c  b           . + 4 + (0x14C << 2)
    ctx->pc = 0x253348u;
    {
        const bool branch_taken_0x253348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253348u;
        // 0x25334c: 0x8c440ed8  lw          $a0, 0xED8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253348) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253350u;
label_253350:
    // 0x253350: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x253350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x253354: 0x8c430edc  lw          $v1, 0xEDC($v0)
    ctx->pc = 0x253354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3804)));
    // 0x253358: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x253358u;
    {
        const bool branch_taken_0x253358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253358u;
        // 0x25335c: 0x8c440ee0  lw          $a0, 0xEE0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253358) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253360u;
label_253360:
    // 0x253360: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x253360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x253364: 0x8c430ee4  lw          $v1, 0xEE4($v0)
    ctx->pc = 0x253364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3812)));
    // 0x253368: 0x10000144  b           . + 4 + (0x144 << 2)
    ctx->pc = 0x253368u;
    {
        const bool branch_taken_0x253368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253368u;
        // 0x25336c: 0x8c440ee8  lw          $a0, 0xEE8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3816)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253368) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253370u;
label_253370:
    // 0x253370: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x253370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x253374: 0x8c430eec  lw          $v1, 0xEEC($v0)
    ctx->pc = 0x253374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3820)));
    // 0x253378: 0x10000140  b           . + 4 + (0x140 << 2)
    ctx->pc = 0x253378u;
    {
        const bool branch_taken_0x253378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253378u;
        // 0x25337c: 0x8c440ef0  lw          $a0, 0xEF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253378) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253380u;
label_253380:
    // 0x253380: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x253380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x253384: 0x8c430ef4  lw          $v1, 0xEF4($v0)
    ctx->pc = 0x253384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3828)));
    // 0x253388: 0x1000013c  b           . + 4 + (0x13C << 2)
    ctx->pc = 0x253388u;
    {
        const bool branch_taken_0x253388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253388u;
        // 0x25338c: 0x8c440ef8  lw          $a0, 0xEF8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253388) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253390u;
label_253390:
    // 0x253390: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x253390u;
    SET_GPR_U32(ctx, 31, 0x253398u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x253390u, 0x253398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253398u;
label_253398:
    // 0x253398: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x253398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x25339c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x25339cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2533a0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2533A0u;
    {
        const bool branch_taken_0x2533a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2533a0) {
            ctx->pc = 0x2533A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2533A0u;
            // 0x2533a4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2533A8u;
            goto label_2533a8;
        }
    }
    ctx->pc = 0x2533A8u;
label_2533a8:
    // 0x2533a8: 0x2010  mfhi        $a0
    ctx->pc = 0x2533a8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2533ac: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x2533acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2533b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2533B0u;
    {
        const bool branch_taken_0x2533b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2533B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2533B0u;
        // 0x2533b4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2533b0) {
            ctx->pc = 0x2533D0u;
            goto label_2533d0;
        }
    }
    ctx->pc = 0x2533B8u;
    // 0x2533b8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2533b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2533bc: 0x244201b0  addiu       $v0, $v0, 0x1B0
    ctx->pc = 0x2533bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
    // 0x2533c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2533c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2533c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2533c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2533c8: 0x800008  jr          $a0
    ctx->pc = 0x2533C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2533D0u: goto label_2533d0;
            case 0x2533E0u: goto label_2533e0;
            case 0x2533F0u: goto label_2533f0;
            case 0x253400u: goto label_253400;
            case 0x253410u: goto label_253410;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2533C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2533D0u;
label_2533d0:
    // 0x2533d0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2533d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2533d4: 0x8c430a94  lw          $v1, 0xA94($v0)
    ctx->pc = 0x2533d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2708)));
    // 0x2533d8: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x2533D8u;
    {
        const bool branch_taken_0x2533d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2533DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2533D8u;
        // 0x2533dc: 0x8c440a98  lw          $a0, 0xA98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2533d8) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x2533E0u;
label_2533e0:
    // 0x2533e0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2533e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2533e4: 0x8c430a9c  lw          $v1, 0xA9C($v0)
    ctx->pc = 0x2533e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2716)));
    // 0x2533e8: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x2533E8u;
    {
        const bool branch_taken_0x2533e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2533ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2533E8u;
        // 0x2533ec: 0x8c440aa0  lw          $a0, 0xAA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2533e8) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x2533F0u;
label_2533f0:
    // 0x2533f0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2533f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2533f4: 0x8c430aa4  lw          $v1, 0xAA4($v0)
    ctx->pc = 0x2533f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2724)));
    // 0x2533f8: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x2533F8u;
    {
        const bool branch_taken_0x2533f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2533FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2533F8u;
        // 0x2533fc: 0x8c440aa8  lw          $a0, 0xAA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2533f8) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253400u;
label_253400:
    // 0x253400: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x253400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x253404: 0x8c430aac  lw          $v1, 0xAAC($v0)
    ctx->pc = 0x253404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2732)));
    // 0x253408: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x253408u;
    {
        const bool branch_taken_0x253408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253408u;
        // 0x25340c: 0x8c440ab0  lw          $a0, 0xAB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253408) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253410u;
label_253410:
    // 0x253410: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x253410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x253414: 0x8c430ab4  lw          $v1, 0xAB4($v0)
    ctx->pc = 0x253414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2740)));
    // 0x253418: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x253418u;
    {
        const bool branch_taken_0x253418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253418u;
        // 0x25341c: 0x8c440ab8  lw          $a0, 0xAB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253418) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253420u;
label_253420:
    // 0x253420: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x253420u;
    SET_GPR_U32(ctx, 31, 0x253428u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x253420u, 0x253428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253428u;
label_253428:
    // 0x253428: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x253428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25342c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25342cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253430: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x253430u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x253434: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x253434u;
    {
        const bool branch_taken_0x253434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x253434) {
            ctx->pc = 0x253438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253434u;
            // 0x253438: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25343Cu;
            goto label_25343c;
        }
    }
    ctx->pc = 0x25343Cu;
label_25343c:
    // 0x25343c: 0x2810  mfhi        $a1
    ctx->pc = 0x25343cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x253440: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x253440u;
    {
        const bool branch_taken_0x253440 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x253440) {
            ctx->pc = 0x253444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253440u;
            // 0x253444: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253468u;
            goto label_253468;
        }
    }
    ctx->pc = 0x253448u;
    // 0x253448: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x253448u;
    {
        const bool branch_taken_0x253448 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253448u;
        // 0x25344c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253448) {
            ctx->pc = 0x253458u;
            goto label_253458;
        }
    }
    ctx->pc = 0x253450u;
    // 0x253450: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x253450u;
    {
        const bool branch_taken_0x253450 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x253450) {
            ctx->pc = 0x253454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253450u;
            // 0x253454: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253474u;
            goto label_253474;
        }
    }
    ctx->pc = 0x253458u;
label_253458:
    // 0x253458: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x253458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x25345c: 0x8c43318c  lw          $v1, 0x318C($v0)
    ctx->pc = 0x25345cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12684)));
    // 0x253460: 0x10000106  b           . + 4 + (0x106 << 2)
    ctx->pc = 0x253460u;
    {
        const bool branch_taken_0x253460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253460u;
        // 0x253464: 0x8c443190  lw          $a0, 0x3190($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253460) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253468u;
label_253468:
    // 0x253468: 0x8c433194  lw          $v1, 0x3194($v0)
    ctx->pc = 0x253468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12692)));
    // 0x25346c: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x25346Cu;
    {
        const bool branch_taken_0x25346c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25346Cu;
        // 0x253470: 0x8c443198  lw          $a0, 0x3198($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25346c) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253474u;
label_253474:
    // 0x253474: 0x8c433194  lw          $v1, 0x3194($v0)
    ctx->pc = 0x253474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12692)));
    // 0x253478: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x253478u;
    {
        const bool branch_taken_0x253478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253478u;
        // 0x25347c: 0x8c4431a0  lw          $a0, 0x31A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253478) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253480u;
label_253480:
    // 0x253480: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x253480u;
    SET_GPR_U32(ctx, 31, 0x253488u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x253480u, 0x253488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253488u;
label_253488:
    // 0x253488: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x253488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25348c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25348Cu;
    {
        const bool branch_taken_0x25348c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x253490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25348Cu;
        // 0x253490: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25348c) {
            ctx->pc = 0x25349Cu;
            goto label_25349c;
        }
    }
    ctx->pc = 0x253494u;
    // 0x253494: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x253494u;
    {
        const bool branch_taken_0x253494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x253494) {
            ctx->pc = 0x253498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253494u;
            // 0x253498: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2534CCu;
            goto label_2534cc;
        }
    }
    ctx->pc = 0x25349Cu;
label_25349c:
    // 0x25349c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25349cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2534a0: 0x8e470740  lw          $a3, 0x740($s2)
    ctx->pc = 0x2534a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1856)));
    // 0x2534a4: 0x8c433368  lw          $v1, 0x3368($v0)
    ctx->pc = 0x2534a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13160)));
    // 0x2534a8: 0x8c44336c  lw          $a0, 0x336C($v0)
    ctx->pc = 0x2534a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13164)));
    // 0x2534ac: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x2534acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2534b0: 0x10e000f4  beqz        $a3, . + 4 + (0xF4 << 2)
    ctx->pc = 0x2534B0u;
    {
        const bool branch_taken_0x2534b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2534B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2534B0u;
        // 0x2534b4: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2534b0) {
            ctx->pc = 0x253884u;
            goto label_253884;
        }
    }
    ctx->pc = 0x2534B8u;
    // 0x2534b8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2534b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2534bc: 0xc09f72e  jal         func_27DCB8
    ctx->pc = 0x2534BCu;
    SET_GPR_U32(ctx, 31, 0x2534C4u);
    ctx->pc = 0x2534C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2534BCu;
    // 0x2534c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DCB8u, 0x2534BCu, 0x2534C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2534C4u;
label_2534c4:
    // 0x2534c4: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x2534C4u;
    {
        const bool branch_taken_0x2534c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2534c4) {
            ctx->pc = 0x253884u;
            goto label_253884;
        }
    }
    ctx->pc = 0x2534CCu;
label_2534cc:
    // 0x2534cc: 0x8e470740  lw          $a3, 0x740($s2)
    ctx->pc = 0x2534ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1856)));
    // 0x2534d0: 0x8c433378  lw          $v1, 0x3378($v0)
    ctx->pc = 0x2534d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13176)));
    // 0x2534d4: 0x8c44337c  lw          $a0, 0x337C($v0)
    ctx->pc = 0x2534d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13180)));
    // 0x2534d8: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x2534d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2534dc: 0x10e000e9  beqz        $a3, . + 4 + (0xE9 << 2)
    ctx->pc = 0x2534DCu;
    {
        const bool branch_taken_0x2534dc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2534E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2534DCu;
        // 0x2534e0: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2534dc) {
            ctx->pc = 0x253884u;
            goto label_253884;
        }
    }
    ctx->pc = 0x2534E4u;
    // 0x2534e4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2534e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2534e8: 0xc09f72e  jal         func_27DCB8
    ctx->pc = 0x2534E8u;
    SET_GPR_U32(ctx, 31, 0x2534F0u);
    ctx->pc = 0x2534ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2534E8u;
    // 0x2534ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DCB8u, 0x2534E8u, 0x2534F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2534F0u;
label_2534f0:
    // 0x2534f0: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x2534F0u;
    {
        const bool branch_taken_0x2534f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2534f0) {
            ctx->pc = 0x253884u;
            goto label_253884;
        }
    }
    ctx->pc = 0x2534F8u;
label_2534f8:
    // 0x2534f8: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x2534f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x2534fc: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2534fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x253500: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x253500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x253504: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x253504u;
    {
        const bool branch_taken_0x253504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x253504) {
            ctx->pc = 0x253544u;
            goto label_253544;
        }
    }
    ctx->pc = 0x25350Cu;
    // 0x25350c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x25350Cu;
    SET_GPR_U32(ctx, 31, 0x253514u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x25350Cu, 0x253514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253514u;
label_253514:
    // 0x253514: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x253514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x253518: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x253518u;
    {
        const bool branch_taken_0x253518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253518u;
        // 0x25351c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253518) {
            ctx->pc = 0x253528u;
            goto label_253528;
        }
    }
    ctx->pc = 0x253520u;
    // 0x253520: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x253520u;
    {
        const bool branch_taken_0x253520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x253520) {
            ctx->pc = 0x253524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253520u;
            // 0x253524: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253538u;
            goto label_253538;
        }
    }
    ctx->pc = 0x253528u;
label_253528:
    // 0x253528: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x253528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x25352c: 0x8c433790  lw          $v1, 0x3790($v0)
    ctx->pc = 0x25352cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14224)));
    // 0x253530: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x253530u;
    {
        const bool branch_taken_0x253530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253530u;
        // 0x253534: 0x8c443794  lw          $a0, 0x3794($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253530) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253538u;
label_253538:
    // 0x253538: 0x8c433798  lw          $v1, 0x3798($v0)
    ctx->pc = 0x253538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14232)));
    // 0x25353c: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x25353Cu;
    {
        const bool branch_taken_0x25353c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25353Cu;
        // 0x253540: 0x8c44379c  lw          $a0, 0x379C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25353c) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253544u;
label_253544:
    // 0x253544: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x253544u;
    SET_GPR_U32(ctx, 31, 0x25354Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x253544u, 0x25354Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25354Cu;
label_25354c:
    // 0x25354c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25354cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x253550: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x253550u;
    {
        const bool branch_taken_0x253550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253550u;
        // 0x253554: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253550) {
            ctx->pc = 0x253584u;
            goto label_253584;
        }
    }
    ctx->pc = 0x253558u;
    // 0x253558: 0x8e470744  lw          $a3, 0x744($s2)
    ctx->pc = 0x253558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1860)));
    // 0x25355c: 0x8c433780  lw          $v1, 0x3780($v0)
    ctx->pc = 0x25355cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14208)));
    // 0x253560: 0x8c443784  lw          $a0, 0x3784($v0)
    ctx->pc = 0x253560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14212)));
    // 0x253564: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x253564u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x253568: 0x10e000c6  beqz        $a3, . + 4 + (0xC6 << 2)
    ctx->pc = 0x253568u;
    {
        const bool branch_taken_0x253568 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x25356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253568u;
        // 0x25356c: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253568) {
            ctx->pc = 0x253884u;
            goto label_253884;
        }
    }
    ctx->pc = 0x253570u;
    // 0x253570: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x253570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253574: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x253574u;
    SET_GPR_U32(ctx, 31, 0x25357Cu);
    ctx->pc = 0x253578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253574u;
    // 0x253578: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x253574u, 0x25357Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25357Cu;
label_25357c:
    // 0x25357c: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x25357Cu;
    {
        const bool branch_taken_0x25357c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25357c) {
            ctx->pc = 0x253884u;
            goto label_253884;
        }
    }
    ctx->pc = 0x253584u;
label_253584:
    // 0x253584: 0x8e470744  lw          $a3, 0x744($s2)
    ctx->pc = 0x253584u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1860)));
    // 0x253588: 0x8c433788  lw          $v1, 0x3788($v0)
    ctx->pc = 0x253588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14216)));
    // 0x25358c: 0x8c44378c  lw          $a0, 0x378C($v0)
    ctx->pc = 0x25358cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14220)));
    // 0x253590: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x253590u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x253594: 0x10e000bb  beqz        $a3, . + 4 + (0xBB << 2)
    ctx->pc = 0x253594u;
    {
        const bool branch_taken_0x253594 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x253598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253594u;
        // 0x253598: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253594) {
            ctx->pc = 0x253884u;
            goto label_253884;
        }
    }
    ctx->pc = 0x25359Cu;
    // 0x25359c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25359cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2535a0: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x2535A0u;
    SET_GPR_U32(ctx, 31, 0x2535A8u);
    ctx->pc = 0x2535A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2535A0u;
    // 0x2535a4: 0x24050031  addiu       $a1, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x2535A0u, 0x2535A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2535A8u;
label_2535a8:
    // 0x2535a8: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x2535A8u;
    {
        const bool branch_taken_0x2535a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2535a8) {
            ctx->pc = 0x253884u;
            goto label_253884;
        }
    }
    ctx->pc = 0x2535B0u;
label_2535b0:
    // 0x2535b0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2535B0u;
    SET_GPR_U32(ctx, 31, 0x2535B8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2535B0u, 0x2535B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2535B8u;
label_2535b8:
    // 0x2535b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2535b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2535bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2535bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2535c0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2535c0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2535c4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2535C4u;
    {
        const bool branch_taken_0x2535c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2535c4) {
            ctx->pc = 0x2535C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2535C4u;
            // 0x2535c8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2535CCu;
            goto label_2535cc;
        }
    }
    ctx->pc = 0x2535CCu;
label_2535cc:
    // 0x2535cc: 0x2810  mfhi        $a1
    ctx->pc = 0x2535ccu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2535d0: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2535D0u;
    {
        const bool branch_taken_0x2535d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2535d0) {
            ctx->pc = 0x2535D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2535D0u;
            // 0x2535d4: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2535F8u;
            goto label_2535f8;
        }
    }
    ctx->pc = 0x2535D8u;
    // 0x2535d8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2535D8u;
    {
        const bool branch_taken_0x2535d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2535DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2535D8u;
        // 0x2535dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2535d8) {
            ctx->pc = 0x2535E8u;
            goto label_2535e8;
        }
    }
    ctx->pc = 0x2535E0u;
    // 0x2535e0: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2535E0u;
    {
        const bool branch_taken_0x2535e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2535e0) {
            ctx->pc = 0x2535E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2535E0u;
            // 0x2535e4: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253604u;
            goto label_253604;
        }
    }
    ctx->pc = 0x2535E8u;
label_2535e8:
    // 0x2535e8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2535e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2535ec: 0x8c431738  lw          $v1, 0x1738($v0)
    ctx->pc = 0x2535ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5944)));
    // 0x2535f0: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x2535F0u;
    {
        const bool branch_taken_0x2535f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2535F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2535F0u;
        // 0x2535f4: 0x8c44173c  lw          $a0, 0x173C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5948)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2535f0) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x2535F8u;
label_2535f8:
    // 0x2535f8: 0x8c431740  lw          $v1, 0x1740($v0)
    ctx->pc = 0x2535f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5952)));
    // 0x2535fc: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x2535FCu;
    {
        const bool branch_taken_0x2535fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2535FCu;
        // 0x253600: 0x8c441744  lw          $a0, 0x1744($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5956)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2535fc) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253604u;
label_253604:
    // 0x253604: 0x8c431748  lw          $v1, 0x1748($v0)
    ctx->pc = 0x253604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5960)));
    // 0x253608: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x253608u;
    {
        const bool branch_taken_0x253608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253608u;
        // 0x25360c: 0x8c44174c  lw          $a0, 0x174C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5964)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253608) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253610u;
label_253610:
    // 0x253610: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x253610u;
    SET_GPR_U32(ctx, 31, 0x253618u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x253610u, 0x253618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253618u;
label_253618:
    // 0x253618: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x253618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25361c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25361cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253620: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x253620u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x253624: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x253624u;
    {
        const bool branch_taken_0x253624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x253624) {
            ctx->pc = 0x253628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253624u;
            // 0x253628: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25362Cu;
            goto label_25362c;
        }
    }
    ctx->pc = 0x25362Cu;
label_25362c:
    // 0x25362c: 0x2810  mfhi        $a1
    ctx->pc = 0x25362cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x253630: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x253630u;
    {
        const bool branch_taken_0x253630 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x253630) {
            ctx->pc = 0x253634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253630u;
            // 0x253634: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253658u;
            goto label_253658;
        }
    }
    ctx->pc = 0x253638u;
    // 0x253638: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x253638u;
    {
        const bool branch_taken_0x253638 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253638u;
        // 0x25363c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253638) {
            ctx->pc = 0x253648u;
            goto label_253648;
        }
    }
    ctx->pc = 0x253640u;
    // 0x253640: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x253640u;
    {
        const bool branch_taken_0x253640 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x253640) {
            ctx->pc = 0x253644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253640u;
            // 0x253644: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253664u;
            goto label_253664;
        }
    }
    ctx->pc = 0x253648u;
label_253648:
    // 0x253648: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x253648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x25364c: 0x8c431738  lw          $v1, 0x1738($v0)
    ctx->pc = 0x25364cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5944)));
    // 0x253650: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x253650u;
    {
        const bool branch_taken_0x253650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253650u;
        // 0x253654: 0x8c44173c  lw          $a0, 0x173C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5948)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253650) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253658u;
label_253658:
    // 0x253658: 0x8c431740  lw          $v1, 0x1740($v0)
    ctx->pc = 0x253658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5952)));
    // 0x25365c: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x25365Cu;
    {
        const bool branch_taken_0x25365c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25365Cu;
        // 0x253660: 0x8c441744  lw          $a0, 0x1744($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5956)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25365c) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253664u;
label_253664:
    // 0x253664: 0x8c431748  lw          $v1, 0x1748($v0)
    ctx->pc = 0x253664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5960)));
    // 0x253668: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x253668u;
    {
        const bool branch_taken_0x253668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253668u;
        // 0x25366c: 0x8c44174c  lw          $a0, 0x174C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5964)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253668) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253670u;
label_253670:
    // 0x253670: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x253670u;
    SET_GPR_U32(ctx, 31, 0x253678u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x253670u, 0x253678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253678u;
label_253678:
    // 0x253678: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x253678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x25367c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x25367cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x253680: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x253680u;
    {
        const bool branch_taken_0x253680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x253680) {
            ctx->pc = 0x253684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253680u;
            // 0x253684: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x253688u;
            goto label_253688;
        }
    }
    ctx->pc = 0x253688u;
label_253688:
    // 0x253688: 0x2010  mfhi        $a0
    ctx->pc = 0x253688u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x25368c: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x25368cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x253690: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x253690u;
    {
        const bool branch_taken_0x253690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253690u;
        // 0x253694: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253690) {
            ctx->pc = 0x2536B0u;
            goto label_2536b0;
        }
    }
    ctx->pc = 0x253698u;
    // 0x253698: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x253698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25369c: 0x244201d0  addiu       $v0, $v0, 0x1D0
    ctx->pc = 0x25369cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
    // 0x2536a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2536a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2536a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2536a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2536a8: 0x800008  jr          $a0
    ctx->pc = 0x2536A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2536B0u: goto label_2536b0;
            case 0x2536C0u: goto label_2536c0;
            case 0x2536D0u: goto label_2536d0;
            case 0x2536E0u: goto label_2536e0;
            case 0x2536F0u: goto label_2536f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2536A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2536B0u;
label_2536b0:
    // 0x2536b0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2536b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2536b4: 0x8c431d18  lw          $v1, 0x1D18($v0)
    ctx->pc = 0x2536b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7448)));
    // 0x2536b8: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x2536B8u;
    {
        const bool branch_taken_0x2536b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2536BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2536B8u;
        // 0x2536bc: 0x8c441d1c  lw          $a0, 0x1D1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2536b8) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x2536C0u;
label_2536c0:
    // 0x2536c0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2536c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2536c4: 0x8c431d20  lw          $v1, 0x1D20($v0)
    ctx->pc = 0x2536c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7456)));
    // 0x2536c8: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2536C8u;
    {
        const bool branch_taken_0x2536c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2536CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2536C8u;
        // 0x2536cc: 0x8c441d24  lw          $a0, 0x1D24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2536c8) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x2536D0u;
label_2536d0:
    // 0x2536d0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2536d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2536d4: 0x8c431d28  lw          $v1, 0x1D28($v0)
    ctx->pc = 0x2536d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7464)));
    // 0x2536d8: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2536D8u;
    {
        const bool branch_taken_0x2536d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2536DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2536D8u;
        // 0x2536dc: 0x8c441d2c  lw          $a0, 0x1D2C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2536d8) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x2536E0u;
label_2536e0:
    // 0x2536e0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2536e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2536e4: 0x8c431d30  lw          $v1, 0x1D30($v0)
    ctx->pc = 0x2536e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7472)));
    // 0x2536e8: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x2536E8u;
    {
        const bool branch_taken_0x2536e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2536ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2536E8u;
        // 0x2536ec: 0x8c441d34  lw          $a0, 0x1D34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2536e8) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x2536F0u;
label_2536f0:
    // 0x2536f0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2536f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2536f4: 0x8c431d38  lw          $v1, 0x1D38($v0)
    ctx->pc = 0x2536f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7480)));
    // 0x2536f8: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x2536F8u;
    {
        const bool branch_taken_0x2536f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2536FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2536F8u;
        // 0x2536fc: 0x8c441d3c  lw          $a0, 0x1D3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2536f8) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253700u;
label_253700:
    // 0x253700: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x253700u;
    SET_GPR_U32(ctx, 31, 0x253708u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x253700u, 0x253708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253708u;
label_253708:
    // 0x253708: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x253708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x25370c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x25370cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x253710: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x253710u;
    {
        const bool branch_taken_0x253710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x253710) {
            ctx->pc = 0x253714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253710u;
            // 0x253714: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x253718u;
            goto label_253718;
        }
    }
    ctx->pc = 0x253718u;
label_253718:
    // 0x253718: 0x2010  mfhi        $a0
    ctx->pc = 0x253718u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x25371c: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x25371cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x253720: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x253720u;
    {
        const bool branch_taken_0x253720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253720u;
        // 0x253724: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253720) {
            ctx->pc = 0x253740u;
            goto label_253740;
        }
    }
    ctx->pc = 0x253728u;
    // 0x253728: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x253728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25372c: 0x244201f0  addiu       $v0, $v0, 0x1F0
    ctx->pc = 0x25372cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 496));
    // 0x253730: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x253730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x253734: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x253734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x253738: 0x800008  jr          $a0
    ctx->pc = 0x253738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x253740u: goto label_253740;
            case 0x253750u: goto label_253750;
            case 0x253760u: goto label_253760;
            case 0x253770u: goto label_253770;
            case 0x253780u: goto label_253780;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253738u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253740u;
label_253740:
    // 0x253740: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x253740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x253744: 0x8c432ebc  lw          $v1, 0x2EBC($v0)
    ctx->pc = 0x253744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11964)));
    // 0x253748: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x253748u;
    {
        const bool branch_taken_0x253748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253748u;
        // 0x25374c: 0x8c442ec0  lw          $a0, 0x2EC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253748) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253750u;
label_253750:
    // 0x253750: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x253750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x253754: 0x8c432ebc  lw          $v1, 0x2EBC($v0)
    ctx->pc = 0x253754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11964)));
    // 0x253758: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x253758u;
    {
        const bool branch_taken_0x253758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253758u;
        // 0x25375c: 0x8c442ec0  lw          $a0, 0x2EC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253758) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253760u;
label_253760:
    // 0x253760: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x253760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x253764: 0x8c432ebc  lw          $v1, 0x2EBC($v0)
    ctx->pc = 0x253764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11964)));
    // 0x253768: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x253768u;
    {
        const bool branch_taken_0x253768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253768u;
        // 0x25376c: 0x8c442ec0  lw          $a0, 0x2EC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253768) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253770u;
label_253770:
    // 0x253770: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x253770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x253774: 0x8c432ebc  lw          $v1, 0x2EBC($v0)
    ctx->pc = 0x253774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11964)));
    // 0x253778: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x253778u;
    {
        const bool branch_taken_0x253778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253778u;
        // 0x25377c: 0x8c442ec0  lw          $a0, 0x2EC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253778) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253780u;
label_253780:
    // 0x253780: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x253780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x253784: 0x8c432ebc  lw          $v1, 0x2EBC($v0)
    ctx->pc = 0x253784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11964)));
    // 0x253788: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x253788u;
    {
        const bool branch_taken_0x253788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253788u;
        // 0x25378c: 0x8c442ec0  lw          $a0, 0x2EC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253788) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253790u;
label_253790:
    // 0x253790: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x253790u;
    SET_GPR_U32(ctx, 31, 0x253798u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x253790u, 0x253798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253798u;
label_253798:
    // 0x253798: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x253798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x25379c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x25379cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2537a0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2537A0u;
    {
        const bool branch_taken_0x2537a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2537a0) {
            ctx->pc = 0x2537A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2537A0u;
            // 0x2537a4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2537A8u;
            goto label_2537a8;
        }
    }
    ctx->pc = 0x2537A8u;
label_2537a8:
    // 0x2537a8: 0x2010  mfhi        $a0
    ctx->pc = 0x2537a8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2537ac: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x2537acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2537b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2537B0u;
    {
        const bool branch_taken_0x2537b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2537B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2537B0u;
        // 0x2537b4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2537b0) {
            ctx->pc = 0x2537D0u;
            goto label_2537d0;
        }
    }
    ctx->pc = 0x2537B8u;
    // 0x2537b8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2537b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2537bc: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x2537bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x2537c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2537c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2537c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2537c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2537c8: 0x800008  jr          $a0
    ctx->pc = 0x2537C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2537D0u: goto label_2537d0;
            case 0x2537E0u: goto label_2537e0;
            case 0x2537F0u: goto label_2537f0;
            case 0x253800u: goto label_253800;
            case 0x253810u: goto label_253810;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2537C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2537D0u;
label_2537d0:
    // 0x2537d0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2537d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2537d4: 0x8c431300  lw          $v1, 0x1300($v0)
    ctx->pc = 0x2537d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4864)));
    // 0x2537d8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2537D8u;
    {
        const bool branch_taken_0x2537d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2537DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2537D8u;
        // 0x2537dc: 0x8c441304  lw          $a0, 0x1304($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4868)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2537d8) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x2537E0u;
label_2537e0:
    // 0x2537e0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2537e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2537e4: 0x8c431308  lw          $v1, 0x1308($v0)
    ctx->pc = 0x2537e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x2537e8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2537E8u;
    {
        const bool branch_taken_0x2537e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2537ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2537E8u;
        // 0x2537ec: 0x8c44130c  lw          $a0, 0x130C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2537e8) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x2537F0u;
label_2537f0:
    // 0x2537f0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2537f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2537f4: 0x8c431310  lw          $v1, 0x1310($v0)
    ctx->pc = 0x2537f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4880)));
    // 0x2537f8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2537F8u;
    {
        const bool branch_taken_0x2537f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2537FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2537F8u;
        // 0x2537fc: 0x8c441314  lw          $a0, 0x1314($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4884)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2537f8) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253800u;
label_253800:
    // 0x253800: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x253800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x253804: 0x8c431318  lw          $v1, 0x1318($v0)
    ctx->pc = 0x253804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4888)));
    // 0x253808: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x253808u;
    {
        const bool branch_taken_0x253808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253808u;
        // 0x25380c: 0x8c44131c  lw          $a0, 0x131C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253808) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253810u;
label_253810:
    // 0x253810: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x253810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x253814: 0x8c431320  lw          $v1, 0x1320($v0)
    ctx->pc = 0x253814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4896)));
    // 0x253818: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x253818u;
    {
        const bool branch_taken_0x253818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253818u;
        // 0x25381c: 0x8c441324  lw          $a0, 0x1324($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4900)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253818) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253820u;
label_253820:
    // 0x253820: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x253820u;
    SET_GPR_U32(ctx, 31, 0x253828u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x253820u, 0x253828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253828u;
label_253828:
    // 0x253828: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x253828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25382c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25382cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253830: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x253830u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x253834: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x253834u;
    {
        const bool branch_taken_0x253834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x253834) {
            ctx->pc = 0x253838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253834u;
            // 0x253838: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25383Cu;
            goto label_25383c;
        }
    }
    ctx->pc = 0x25383Cu;
label_25383c:
    // 0x25383c: 0x2810  mfhi        $a1
    ctx->pc = 0x25383cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x253840: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x253840u;
    {
        const bool branch_taken_0x253840 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x253840) {
            ctx->pc = 0x253844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253840u;
            // 0x253844: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253868u;
            goto label_253868;
        }
    }
    ctx->pc = 0x253848u;
    // 0x253848: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x253848u;
    {
        const bool branch_taken_0x253848 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253848u;
        // 0x25384c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253848) {
            ctx->pc = 0x253858u;
            goto label_253858;
        }
    }
    ctx->pc = 0x253850u;
    // 0x253850: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x253850u;
    {
        const bool branch_taken_0x253850 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x253850) {
            ctx->pc = 0x253854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253850u;
            // 0x253854: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253874u;
            goto label_253874;
        }
    }
    ctx->pc = 0x253858u;
label_253858:
    // 0x253858: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x253858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x25385c: 0x8c4323c0  lw          $v1, 0x23C0($v0)
    ctx->pc = 0x25385cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9152)));
    // 0x253860: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x253860u;
    {
        const bool branch_taken_0x253860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253860u;
        // 0x253864: 0x8c4423c4  lw          $a0, 0x23C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253860) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253868u;
label_253868:
    // 0x253868: 0x8c4323c8  lw          $v1, 0x23C8($v0)
    ctx->pc = 0x253868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9160)));
    // 0x25386c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25386Cu;
    {
        const bool branch_taken_0x25386c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25386Cu;
        // 0x253870: 0x8c4423cc  lw          $a0, 0x23CC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25386c) {
            ctx->pc = 0x25387Cu;
            goto label_25387c;
        }
    }
    ctx->pc = 0x253874u;
label_253874:
    // 0x253874: 0x8c4323d0  lw          $v1, 0x23D0($v0)
    ctx->pc = 0x253874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9168)));
    // 0x253878: 0x8c4423d4  lw          $a0, 0x23D4($v0)
    ctx->pc = 0x253878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9172)));
label_25387c:
    // 0x25387c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x25387cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x253880: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x253880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_253884:
    // 0x253884: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x253884u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x253888: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x253888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25388c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25388cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253890: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x253890u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253894: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253898: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x253898u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25389c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25389cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2538a0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2538A0u;
    SET_GPR_U32(ctx, 31, 0x2538A8u);
    ctx->pc = 0x2538A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2538A0u;
    // 0x2538a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2538A0u, 0x2538A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2538A8u;
label_2538a8:
    // 0x2538a8: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x2538a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x2538ac: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2538acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2538b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2538b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2538b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2538B4u;
    {
        const bool branch_taken_0x2538b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2538b4) {
            ctx->pc = 0x2538C4u;
            goto label_2538c4;
        }
    }
    ctx->pc = 0x2538BCu;
    // 0x2538bc: 0x3c01bfc0  lui         $at, 0xBFC0
    ctx->pc = 0x2538bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49088 << 16));
    // 0x2538c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2538c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2538c4:
    // 0x2538c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2538c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2538c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2538c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2538cc: 0xe65405c4  swc1        $f20, 0x5C4($s2)
    ctx->pc = 0x2538ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1476), bits); }
    // 0x2538d0: 0xe64005c8  swc1        $f0, 0x5C8($s2)
    ctx->pc = 0x2538d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1480), bits); }
    // 0x2538d4: 0xe64105cc  swc1        $f1, 0x5CC($s2)
    ctx->pc = 0x2538d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1484), bits); }
    // 0x2538d8: 0xe65405c0  swc1        $f20, 0x5C0($s2)
    ctx->pc = 0x2538d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1472), bits); }
    // 0x2538dc: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2538dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2538e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2538e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2538e4: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2538e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2538e8: 0xae4005f4  sw          $zero, 0x5F4($s2)
    ctx->pc = 0x2538e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 0));
    // 0x2538ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2538ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2538f0: 0xe64005c4  swc1        $f0, 0x5C4($s2)
    ctx->pc = 0x2538f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1476), bits); }
    // 0x2538f4: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x2538f4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x2538f8: 0xae4205f0  sw          $v0, 0x5F0($s2)
    ctx->pc = 0x2538f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 2));
    // 0x2538fc: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x2538FCu;
    SET_GPR_U32(ctx, 31, 0x253904u);
    ctx->pc = 0x253900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2538FCu;
    // 0x253900: 0x2630ee00  addiu       $s0, $s1, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x2538FCu, 0x253904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253904u;
label_253904:
    // 0x253904: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x253904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x253908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25390c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25390cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x253910: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x253910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253914: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x253914u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x253918: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x253918u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25391c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25391cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253920: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x253920u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253924: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x253924u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253928: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x253928u;
    SET_GPR_U32(ctx, 31, 0x253930u);
    ctx->pc = 0x25392Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253928u;
    // 0x25392c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x253928u, 0x253930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253930u;
label_253930:
    // 0x253930: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x253930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x253934: 0x24020226  addiu       $v0, $zero, 0x226
    ctx->pc = 0x253934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x253938: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x253938u;
    {
        const bool branch_taken_0x253938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253938u;
        // 0x25393c: 0x28620227  slti        $v0, $v1, 0x227 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)551) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x253938) {
            ctx->pc = 0x2539C8u;
            goto label_2539c8;
        }
    }
    ctx->pc = 0x253940u;
    // 0x253940: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x253940u;
    {
        const bool branch_taken_0x253940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253940u;
        // 0x253944: 0x28620212  slti        $v0, $v1, 0x212 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)530) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x253940) {
            ctx->pc = 0x253960u;
            goto label_253960;
        }
    }
    ctx->pc = 0x253948u;
    // 0x253948: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x253948u;
    {
        const bool branch_taken_0x253948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253948u;
        // 0x25394c: 0x2862020f  slti        $v0, $v1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)527) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x253948) {
            ctx->pc = 0x253974u;
            goto label_253974;
        }
    }
    ctx->pc = 0x253950u;
    // 0x253950: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x253950u;
    {
        const bool branch_taken_0x253950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253950u;
        // 0x253954: 0x2630ee00  addiu       $s0, $s1, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253950) {
            ctx->pc = 0x253978u;
            goto label_253978;
        }
    }
    ctx->pc = 0x253958u;
    // 0x253958: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x253958u;
    {
        const bool branch_taken_0x253958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253958u;
        // 0x25395c: 0x2624ee00  addiu       $a0, $s1, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253958) {
            ctx->pc = 0x2539CCu;
            goto label_2539cc;
        }
    }
    ctx->pc = 0x253960u;
label_253960:
    // 0x253960: 0x28620275  slti        $v0, $v1, 0x275
    ctx->pc = 0x253960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
    // 0x253964: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x253964u;
    {
        const bool branch_taken_0x253964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253964u;
        // 0x253968: 0x28620270  slti        $v0, $v1, 0x270 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)624) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x253964) {
            ctx->pc = 0x253974u;
            goto label_253974;
        }
    }
    ctx->pc = 0x25396Cu;
    // 0x25396c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x25396Cu;
    {
        const bool branch_taken_0x25396c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25396Cu;
        // 0x253970: 0x2624ee00  addiu       $a0, $s1, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25396c) {
            ctx->pc = 0x2539CCu;
            goto label_2539cc;
        }
    }
    ctx->pc = 0x253974u;
label_253974:
    // 0x253974: 0x2630ee00  addiu       $s0, $s1, -0x1200
    ctx->pc = 0x253974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962688));
label_253978:
    // 0x253978: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25397c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25397cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253980: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x253980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x253984: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x253984u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253988: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x253988u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25398c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25398cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253990: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x253990u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253994: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x253994u;
    SET_GPR_U32(ctx, 31, 0x25399Cu);
    ctx->pc = 0x253998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253994u;
    // 0x253998: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x253994u, 0x25399Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25399Cu;
label_25399c:
    // 0x25399c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25399cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2539a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539a4: 0x2406002e  addiu       $a2, $zero, 0x2E
    ctx->pc = 0x2539a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2539a8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2539a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2539acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2539b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2539b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539b8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x2539B8u;
    SET_GPR_U32(ctx, 31, 0x2539C0u);
    ctx->pc = 0x2539BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2539B8u;
    // 0x2539bc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x2539B8u, 0x2539C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2539C0u;
label_2539c0:
    // 0x2539c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2539C0u;
    {
        const bool branch_taken_0x2539c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2539C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2539C0u;
        // 0x2539c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2539c0) {
            ctx->pc = 0x2539F0u;
            goto label_2539f0;
        }
    }
    ctx->pc = 0x2539C8u;
label_2539c8:
    // 0x2539c8: 0x2624ee00  addiu       $a0, $s1, -0x1200
    ctx->pc = 0x2539c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962688));
label_2539cc:
    // 0x2539cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2539ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2539d0: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x2539d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2539d4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2539d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2539d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2539dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2539e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539e4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x2539E4u;
    SET_GPR_U32(ctx, 31, 0x2539ECu);
    ctx->pc = 0x2539E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2539E4u;
    // 0x2539e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x2539E4u, 0x2539ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2539ECu;
label_2539ec:
    // 0x2539ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2539ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2539f0:
    // 0x2539f0: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x2539f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2539f4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2539f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2539f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2539f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539fc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2539fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x253a00: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x253A00u;
    SET_GPR_U32(ctx, 31, 0x253A08u);
    ctx->pc = 0x253A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253A00u;
    // 0x253a04: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x253A00u, 0x253A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A08u;
label_253a08:
    // 0x253a08: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x253a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x253a0c: 0x264305d0  addiu       $v1, $s2, 0x5D0
    ctx->pc = 0x253a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1488));
    // 0x253a10: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x253A10u;
    {
        const bool branch_taken_0x253a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x253a10) {
            ctx->pc = 0x253A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253A10u;
            // 0x253a14: 0x8642054a  lh          $v0, 0x54A($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253A34u;
            goto label_253a34;
        }
    }
    ctx->pc = 0x253A18u;
    // 0x253a18: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x253a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253a1c: 0xe64005d0  swc1        $f0, 0x5D0($s2)
    ctx->pc = 0x253a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1488), bits); }
    // 0x253a20: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x253a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253a24: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x253a24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x253a28: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x253a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253a2c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x253a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x253a30: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x253a30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
label_253a34:
    // 0x253a34: 0x5c40001a  bgtzl       $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x253A34u;
    {
        const bool branch_taken_0x253a34 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x253a34) {
            ctx->pc = 0x253A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253A34u;
            // 0x253a38: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253AA0u;
            goto label_253aa0;
        }
    }
    ctx->pc = 0x253A3Cu;
    // 0x253a3c: 0xc09cf4c  jal         func_273D30
    ctx->pc = 0x253A3Cu;
    SET_GPR_U32(ctx, 31, 0x253A44u);
    ctx->pc = 0x253A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253A3Cu;
    // 0x253a40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273D30u, 0x253A3Cu, 0x253A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A44u;
label_253a44:
    // 0x253a44: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x253a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x253a48: 0x2402021f  addiu       $v0, $zero, 0x21F
    ctx->pc = 0x253a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 543));
    // 0x253a4c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x253A4Cu;
    {
        const bool branch_taken_0x253a4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x253A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253A4Cu;
        // 0x253a50: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253a4c) {
            ctx->pc = 0x253A64u;
            goto label_253a64;
        }
    }
    ctx->pc = 0x253A54u;
    // 0x253a54: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x253a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x253a58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x253a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x253a5c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x253A5Cu;
    {
        const bool branch_taken_0x253a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x253a5c) {
            ctx->pc = 0x253A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253A5Cu;
            // 0x253a60: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253AA0u;
            goto label_253aa0;
        }
    }
    ctx->pc = 0x253A64u;
label_253a64:
    // 0x253a64: 0xc09cd8c  jal         func_273630
    ctx->pc = 0x253A64u;
    SET_GPR_U32(ctx, 31, 0x253A6Cu);
    ctx->pc = 0x253A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253A64u;
    // 0x253a68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273630u, 0x253A64u, 0x253A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A6Cu;
label_253a6c:
    // 0x253a6c: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x253A6Cu;
    SET_GPR_U32(ctx, 31, 0x253A74u);
    ctx->pc = 0x253A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253A6Cu;
    // 0x253a70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x253A6Cu, 0x253A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A74u;
label_253a74:
    // 0x253a74: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x253A74u;
    {
        const bool branch_taken_0x253a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x253a74) {
            ctx->pc = 0x253A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253A74u;
            // 0x253a78: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253AA0u;
            goto label_253aa0;
        }
    }
    ctx->pc = 0x253A7Cu;
    // 0x253a7c: 0x96430640  lhu         $v1, 0x640($s2)
    ctx->pc = 0x253a7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1600)));
    // 0x253a80: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x253a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x253a84: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x253A84u;
    {
        const bool branch_taken_0x253a84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x253A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253A84u;
        // 0x253a88: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253a84) {
            ctx->pc = 0x253A9Cu;
            goto label_253a9c;
        }
    }
    ctx->pc = 0x253A8Cu;
    // 0x253a8c: 0xc07ef90  jal         func_1FBE40
    ctx->pc = 0x253A8Cu;
    SET_GPR_U32(ctx, 31, 0x253A94u);
    ctx->pc = 0x253A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253A8Cu;
    // 0x253a90: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE40u, 0x253A8Cu, 0x253A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A94u;
label_253a94:
    // 0x253a94: 0xc0a3ec2  jal         func_28FB08
    ctx->pc = 0x253A94u;
    SET_GPR_U32(ctx, 31, 0x253A9Cu);
    ctx->pc = 0x253A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253A94u;
    // 0x253a98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB08u, 0x253A94u, 0x253A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A9Cu;
label_253a9c:
    // 0x253a9c: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x253a9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_253aa0:
    // 0x253aa0: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x253aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x253aa4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x253aa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253aa8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x253aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x253aac: 0xae40054c  sw          $zero, 0x54C($s2)
    ctx->pc = 0x253aacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1356), GPR_U32(ctx, 0));
    // 0x253ab0: 0xe6400600  swc1        $f0, 0x600($s2)
    ctx->pc = 0x253ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
    // 0x253ab4: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x253ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_253ab8:
    // 0x253ab8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x253AB8u;
    SET_GPR_U32(ctx, 31, 0x253AC0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x253AB8u, 0x253AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253AC0u;
label_253ac0:
    // 0x253ac0: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x253ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x253ac4: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x253ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x253ac8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x253ac8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x253acc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x253accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x253ad0: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x253AD0u;
    SET_GPR_U32(ctx, 31, 0x253AD8u);
    ctx->pc = 0x253AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253AD0u;
    // 0x253ad4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x253AD0u, 0x253AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253AD8u;
label_253ad8:
    // 0x253ad8: 0x8e4316d0  lw          $v1, 0x16D0($s2)
    ctx->pc = 0x253ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x253adc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x253adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x253ae0: 0x8e450564  lw          $a1, 0x564($s2)
    ctx->pc = 0x253ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x253ae4: 0x24040264  addiu       $a0, $zero, 0x264
    ctx->pc = 0x253ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
    // 0x253ae8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x253ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x253aec: 0x10a40013  beq         $a1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x253AECu;
    {
        const bool branch_taken_0x253aec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x253AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253AECu;
        // 0x253af0: 0xae4316d0  sw          $v1, 0x16D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253aec) {
            ctx->pc = 0x253B3Cu;
            goto label_253b3c;
        }
    }
    ctx->pc = 0x253AF4u;
    // 0x253af4: 0x28a20265  slti        $v0, $a1, 0x265
    ctx->pc = 0x253af4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)613) ? 1 : 0);
    // 0x253af8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x253AF8u;
    {
        const bool branch_taken_0x253af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253AF8u;
        // 0x253afc: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253af8) {
            ctx->pc = 0x253B10u;
            goto label_253b10;
        }
    }
    ctx->pc = 0x253B00u;
    // 0x253b00: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x253B00u;
    {
        const bool branch_taken_0x253b00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x253b00) {
            ctx->pc = 0x253B2Cu;
            goto label_253b2c;
        }
    }
    ctx->pc = 0x253B08u;
    // 0x253b08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x253B08u;
    {
        const bool branch_taken_0x253b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253b08) {
            ctx->pc = 0x253B1Cu;
            goto label_253b1c;
        }
    }
    ctx->pc = 0x253B10u;
label_253b10:
    // 0x253b10: 0x24020265  addiu       $v0, $zero, 0x265
    ctx->pc = 0x253b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 613));
    // 0x253b14: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x253B14u;
    {
        const bool branch_taken_0x253b14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x253b14) {
            ctx->pc = 0x253B4Cu;
            goto label_253b4c;
        }
    }
    ctx->pc = 0x253B1Cu;
label_253b1c:
    // 0x253b1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x253b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x253b20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x253b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253b24: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x253B24u;
    {
        const bool branch_taken_0x253b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B24u;
        // 0x253b28: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253b24) {
            ctx->pc = 0x253B5Cu;
            goto label_253b5c;
        }
    }
    ctx->pc = 0x253B2Cu;
label_253b2c:
    // 0x253b2c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x253b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x253b30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x253b30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253b34: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x253B34u;
    {
        const bool branch_taken_0x253b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B34u;
        // 0x253b38: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253b34) {
            ctx->pc = 0x253B5Cu;
            goto label_253b5c;
        }
    }
    ctx->pc = 0x253B3Cu;
label_253b3c:
    // 0x253b3c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x253b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x253b40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x253b40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253b44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x253B44u;
    {
        const bool branch_taken_0x253b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B44u;
        // 0x253b48: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253b44) {
            ctx->pc = 0x253B5Cu;
            goto label_253b5c;
        }
    }
    ctx->pc = 0x253B4Cu;
label_253b4c:
    // 0x253b4c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x253b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x253b50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x253b50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253b54: 0x0  nop
    ctx->pc = 0x253b54u;
    // NOP
    // 0x253b58: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x253b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_253b5c:
    // 0x253b5c: 0x26850080  addiu       $a1, $s4, 0x80
    ctx->pc = 0x253b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    // 0x253b60: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x253b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x253b64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x253b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253b68: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x253b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x253b6c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x253B6Cu;
    SET_GPR_U32(ctx, 31, 0x253B74u);
    ctx->pc = 0x253B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253B6Cu;
    // 0x253b70: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x253B6Cu, 0x253B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253B74u;
label_253b74:
    // 0x253b74: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x253b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x253b78: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x253b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x253b7c: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x253b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x253b80: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x253b80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253b84: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x253b84u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253b88: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x253b88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x253b8c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x253b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x253b90: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x253b90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x253b94: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x253b94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x253b98: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x253b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x253b9c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x253b9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ba0: 0x13b00006  beq         $sp, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x253BA0u;
    {
        const bool branch_taken_0x253ba0 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 16));
        ctx->pc = 0x253BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253BA0u;
        // 0x253ba4: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253ba0) {
            ctx->pc = 0x253BBCu;
            goto label_253bbc;
        }
    }
    ctx->pc = 0x253BA8u;
    // 0x253ba8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x253ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253bac: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x253bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x253bb0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x253bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x253bb4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x253bb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x253bb8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x253bb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_253bbc:
    // 0x253bbc: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x253bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253bc0: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x253bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x253bc4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x253bc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x253bc8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x253bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253bcc: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x253bccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x253bd0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x253bd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x253bd4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x253bd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x253bd8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x253bd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x253bdc: 0x0  nop
    ctx->pc = 0x253bdcu;
    // NOP
    // 0x253be0: 0x0  nop
    ctx->pc = 0x253be0u;
    // NOP
    // 0x253be4: 0x46000544  c1          0x544
    ctx->pc = 0x253be4u;
    ctx->f[21] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x253be8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x253be8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x253bec: 0x0  nop
    ctx->pc = 0x253becu;
    // NOP
    // 0x253bf0: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x253bf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253bf4: 0x0  nop
    ctx->pc = 0x253bf4u;
    // NOP
    // 0x253bf8: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x253BF8u;
    {
        const bool branch_taken_0x253bf8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x253bf8) {
            ctx->pc = 0x253CB8u;
            goto label_253cb8;
        }
    }
    ctx->pc = 0x253C00u;
    // 0x253c00: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x253c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x253c04: 0xc04078a  jal         func_101E28
    ctx->pc = 0x253C04u;
    SET_GPR_U32(ctx, 31, 0x253C0Cu);
    ctx->pc = 0x253C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C04u;
    // 0x253c08: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x253C04u, 0x253C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C0Cu;
label_253c0c:
    // 0x253c0c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x253c0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253c10: 0x0  nop
    ctx->pc = 0x253c10u;
    // NOP
    // 0x253c14: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x253C14u;
    {
        const bool branch_taken_0x253c14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x253C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C14u;
        // 0x253c18: 0xc7a40000  lwc1        $f4, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253c14) {
            ctx->pc = 0x253C58u;
            goto label_253c58;
        }
    }
    ctx->pc = 0x253C1Cu;
    // 0x253c1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x253c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x253c20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x253c20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x253c24: 0x0  nop
    ctx->pc = 0x253c24u;
    // NOP
    // 0x253c28: 0x0  nop
    ctx->pc = 0x253c28u;
    // NOP
    // 0x253c2c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x253c2cu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x253c30: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x253c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x253c34: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x253c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x253c38: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x253c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253c3c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x253c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x253c40: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x253c40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x253c44: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x253c44u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x253c48: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x253c48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x253c4c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x253c4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x253c50: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x253c50u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x253c54: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x253c54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_253c58:
    // 0x253c58: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x253c58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x253c5c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x253c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x253c60: 0x13b00006  beq         $sp, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x253C60u;
    {
        const bool branch_taken_0x253c60 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 16));
        ctx->pc = 0x253C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C60u;
        // 0x253c64: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253c60) {
            ctx->pc = 0x253C7Cu;
            goto label_253c7c;
        }
    }
    ctx->pc = 0x253C68u;
    // 0x253c68: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x253c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253c6c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x253c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x253c70: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x253c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x253c74: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x253c74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x253c78: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x253c78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_253c7c:
    // 0x253c7c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x253c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x253c80: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x253c80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x253c84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x253c84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253c88: 0x0  nop
    ctx->pc = 0x253c88u;
    // NOP
    // 0x253c8c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x253c8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x253c90: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x253c90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253c94: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x253c94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x253c98: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x253c98u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x253c9c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x253c9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x253ca0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x253ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x253ca4: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x253ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x253ca8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x253ca8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253cac: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x253cacu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253cb0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x253cb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x253cb4: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x253cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_253cb8:
    // 0x253cb8: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x253cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x253cbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x253cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x253cc0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x253cc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x253cc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x253cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253cc8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x253cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x253ccc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x253cccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x253cd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253cd4: 0xae400474  sw          $zero, 0x474($s2)
    ctx->pc = 0x253cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1140), GPR_U32(ctx, 0));
    // 0x253cd8: 0x26460480  addiu       $a2, $s2, 0x480
    ctx->pc = 0x253cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1152));
    // 0x253cdc: 0xae400480  sw          $zero, 0x480($s2)
    ctx->pc = 0x253cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1152), GPR_U32(ctx, 0));
    // 0x253ce0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x253ce0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x253ce4: 0xe6550484  swc1        $f21, 0x484($s2)
    ctx->pc = 0x253ce4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1156), bits); }
    // 0x253ce8: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x253ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x253cec: 0xc04ca70  jal         func_1329C0
    ctx->pc = 0x253CECu;
    SET_GPR_U32(ctx, 31, 0x253CF4u);
    ctx->pc = 0x253CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253CECu;
    // 0x253cf0: 0xae400488  sw          $zero, 0x488($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1160), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1329C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1329C0u, 0x253CECu, 0x253CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253CF4u;
label_253cf4:
    // 0x253cf4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x253CF4u;
    {
        const bool branch_taken_0x253cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253CF4u;
        // 0x253cf8: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253cf4) {
            ctx->pc = 0x253D0Cu;
            goto label_253d0c;
        }
    }
    ctx->pc = 0x253CFCu;
    // 0x253cfc: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x253cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x253d00: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x253d00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x253d04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x253D04u;
    {
        const bool branch_taken_0x253d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D04u;
        // 0x253d08: 0xae420474  sw          $v0, 0x474($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d04) {
            ctx->pc = 0x253D24u;
            goto label_253d24;
        }
    }
    ctx->pc = 0x253D0Cu;
label_253d0c:
    // 0x253d0c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x253d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x253d10: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x253d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253d14: 0xe6550484  swc1        $f21, 0x484($s2)
    ctx->pc = 0x253d14u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1156), bits); }
    // 0x253d18: 0x46140301  sub.s       $f12, $f0, $f20
    ctx->pc = 0x253d18u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x253d1c: 0xae400480  sw          $zero, 0x480($s2)
    ctx->pc = 0x253d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1152), GPR_U32(ctx, 0));
    // 0x253d20: 0xae400488  sw          $zero, 0x488($s2)
    ctx->pc = 0x253d20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1160), GPR_U32(ctx, 0));
label_253d24:
    // 0x253d24: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x253d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x253d28: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x253d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253d2c: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x253d2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253d30: 0x0  nop
    ctx->pc = 0x253d30u;
    // NOP
    // 0x253d34: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x253D34u;
    {
        const bool branch_taken_0x253d34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x253D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D34u;
        // 0x253d38: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d34) {
            ctx->pc = 0x253D50u;
            goto label_253d50;
        }
    }
    ctx->pc = 0x253D3Cu;
    // 0x253d3c: 0xe44c0004  swc1        $f12, 0x4($v0)
    ctx->pc = 0x253d3cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x253d40: 0xae401710  sw          $zero, 0x1710($s2)
    ctx->pc = 0x253d40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5904), GPR_U32(ctx, 0));
    // 0x253d44: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x253d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x253d48: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x253d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x253d4c: 0xae4216d0  sw          $v0, 0x16D0($s2)
    ctx->pc = 0x253d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
label_253d50:
    // 0x253d50: 0xc055f06  jal         func_157C18
    ctx->pc = 0x253D50u;
    SET_GPR_U32(ctx, 31, 0x253D58u);
    ctx->pc = 0x253D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253D50u;
    // 0x253d54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x253D50u, 0x253D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253D58u;
label_253d58:
    // 0x253d58: 0xc6400600  lwc1        $f0, 0x600($s2)
    ctx->pc = 0x253d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253d5c: 0xc64105a8  lwc1        $f1, 0x5A8($s2)
    ctx->pc = 0x253d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253d60: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x253d60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x253d64: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x253d64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x253d68: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x253d68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253d6c: 0x0  nop
    ctx->pc = 0x253d6cu;
    // NOP
    // 0x253d70: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x253D70u;
    {
        const bool branch_taken_0x253d70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x253D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D70u;
        // 0x253d74: 0xe6400600  swc1        $f0, 0x600($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d70) {
            ctx->pc = 0x253DB4u;
            goto label_253db4;
        }
    }
    ctx->pc = 0x253D78u;
    // 0x253d78: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x253d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x253d7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253d80: 0x3442869f  ori         $v0, $v0, 0x869F
    ctx->pc = 0x253d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
    // 0x253d84: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x253D84u;
    SET_GPR_U32(ctx, 31, 0x253D8Cu);
    ctx->pc = 0x253D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253D84u;
    // 0x253d88: 0xae4205b4  sw          $v0, 0x5B4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1460), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x253D84u, 0x253D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253D8Cu;
label_253d8c:
    // 0x253d8c: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x253D8Cu;
    SET_GPR_U32(ctx, 31, 0x253D94u);
    ctx->pc = 0x253D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253D8Cu;
    // 0x253d90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x253D8Cu, 0x253D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253D94u;
label_253d94:
    // 0x253d94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x253D94u;
    {
        const bool branch_taken_0x253d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x253d94) {
            ctx->pc = 0x253DACu;
            goto label_253dac;
        }
    }
    ctx->pc = 0x253D9Cu;
    // 0x253d9c: 0xc09c31e  jal         func_270C78
    ctx->pc = 0x253D9Cu;
    SET_GPR_U32(ctx, 31, 0x253DA4u);
    ctx->pc = 0x253DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253D9Cu;
    // 0x253da0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270C78u, 0x253D9Cu, 0x253DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253DA4u;
label_253da4:
    // 0x253da4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x253DA4u;
    {
        const bool branch_taken_0x253da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253DA4u;
        // 0x253da8: 0x964203ac  lhu         $v0, 0x3AC($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253da4) {
            ctx->pc = 0x253DB8u;
            goto label_253db8;
        }
    }
    ctx->pc = 0x253DACu;
label_253dac:
    // 0x253dac: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x253DACu;
    SET_GPR_U32(ctx, 31, 0x253DB4u);
    ctx->pc = 0x253DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253DACu;
    // 0x253db0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x253DACu, 0x253DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253DB4u;
label_253db4:
    // 0x253db4: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x253db4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
label_253db8:
    // 0x253db8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x253db8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x253dbc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x253dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x253dc0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x253dc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x253dc4: 0xa64203ac  sh          $v0, 0x3AC($s2)
    ctx->pc = 0x253dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 940), (uint16_t)GPR_U32(ctx, 2));
    // 0x253dc8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x253dc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x253dcc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x253dccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x253dd0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x253dd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x253dd4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x253dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x253dd8: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x253dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x253ddc: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x253ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x253de0: 0x3e00008  jr          $ra
    ctx->pc = 0x253DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253DE0u;
        // 0x253de4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253DE8u;
}
