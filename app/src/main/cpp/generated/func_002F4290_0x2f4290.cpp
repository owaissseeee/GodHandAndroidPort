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

// Function: func_002F4290
// Address: 0x2f4290 - 0x2f43e8
void func_002F4290_0x2f4290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F4290_0x2f4290");
#endif

    switch (ctx->pc) {
        case 0x2f42b8u: goto label_2f42b8;
        case 0x2f42c8u: goto label_2f42c8;
        case 0x2f42e0u: goto label_2f42e0;
        case 0x2f4300u: goto label_2f4300;
        case 0x2f4318u: goto label_2f4318;
        case 0x2f4320u: goto label_2f4320;
        case 0x2f43d4u: goto label_2f43d4;
        default: break;
    }

    ctx->pc = 0x2f4290u;

    // 0x2f4290: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2f4290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2f4294: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2f4294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2f4298: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2f4298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f429c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2f429cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2f42a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f42a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f42a4: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x2f42a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x2f42a8: 0x27a70084  addiu       $a3, $sp, 0x84
    ctx->pc = 0x2f42a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x2f42ac: 0x8e0502b4  lw          $a1, 0x2B4($s0)
    ctx->pc = 0x2f42acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2f42b0: 0xc0c1b1e  jal         func_306C78
    ctx->pc = 0x2F42B0u;
    SET_GPR_U32(ctx, 31, 0x2F42B8u);
    ctx->pc = 0x2F42B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F42B0u;
    // 0x2f42b4: 0x24841dc8  addiu       $a0, $a0, 0x1DC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306C78u, 0x2F42B0u, 0x2F42B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F42B8u;
label_2f42b8:
    // 0x2f42b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F42B8u;
    {
        const bool branch_taken_0x2f42b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F42BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F42B8u;
        // 0x2f42bc: 0x24040500  addiu       $a0, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f42b8) {
            ctx->pc = 0x2F42D0u;
            goto label_2f42d0;
        }
    }
    ctx->pc = 0x2F42C0u;
    // 0x2f42c0: 0xc0c3ea6  jal         func_30FA98
    ctx->pc = 0x2F42C0u;
    SET_GPR_U32(ctx, 31, 0x2F42C8u);
    ctx->pc = 0x2F42C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F42C0u;
    // 0x2f42c4: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x2F42C0u, 0x2F42C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F42C8u;
label_2f42c8:
    // 0x2f42c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F42C8u;
    {
        const bool branch_taken_0x2f42c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F42CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F42C8u;
        // 0x2f42cc: 0xae0202b0  sw          $v0, 0x2B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f42c8) {
            ctx->pc = 0x2F42E8u;
            goto label_2f42e8;
        }
    }
    ctx->pc = 0x2F42D0u;
label_2f42d0:
    // 0x2f42d0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f42d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2f42d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f42d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f42d8: 0xc0b67da  jal         func_2D9F68
    ctx->pc = 0x2F42D8u;
    SET_GPR_U32(ctx, 31, 0x2F42E0u);
    ctx->pc = 0x2F42DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F42D8u;
    // 0x2f42dc: 0x24a5f110  addiu       $a1, $a1, -0xEF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9F68u, 0x2F42D8u, 0x2F42E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F42E0u;
label_2f42e0:
    // 0x2f42e0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2F42E0u;
    {
        const bool branch_taken_0x2f42e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F42E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F42E0u;
        // 0x2f42e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f42e0) {
            ctx->pc = 0x2F43D8u;
            goto label_2f43d8;
        }
    }
    ctx->pc = 0x2F42E8u;
label_2f42e8:
    // 0x2f42e8: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x2f42e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f42ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f42ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f42f0: 0x8fa60084  lw          $a2, 0x84($sp)
    ctx->pc = 0x2f42f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x2f42f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f42f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f42f8: 0xc0525ce  jal         func_149738
    ctx->pc = 0x2F42F8u;
    SET_GPR_U32(ctx, 31, 0x2F4300u);
    ctx->pc = 0x2F42FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F42F8u;
    // 0x2f42fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149738u, 0x2F42F8u, 0x2F4300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4300u;
label_2f4300:
    // 0x2f4300: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F4300u;
    {
        const bool branch_taken_0x2f4300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4300) {
            ctx->pc = 0x2F4304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4300u;
            // 0x2f4304: 0x920a02dc  lbu         $t2, 0x2DC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 732)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4328u;
            goto label_2f4328;
        }
    }
    ctx->pc = 0x2F4308u;
    // 0x2f4308: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f4308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2f430c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f430cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4310: 0xc0b67da  jal         func_2D9F68
    ctx->pc = 0x2F4310u;
    SET_GPR_U32(ctx, 31, 0x2F4318u);
    ctx->pc = 0x2F4314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4310u;
    // 0x2f4314: 0x24a5f130  addiu       $a1, $a1, -0xED0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9F68u, 0x2F4310u, 0x2F4318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4318u;
label_2f4318:
    // 0x2f4318: 0xc0c49c2  jal         func_312708
    ctx->pc = 0x2F4318u;
    SET_GPR_U32(ctx, 31, 0x2F4320u);
    ctx->pc = 0x2F431Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4318u;
    // 0x2f431c: 0x8e0402b0  lw          $a0, 0x2B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x2F4318u, 0x2F4320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4320u;
label_2f4320:
    // 0x2f4320: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2F4320u;
    {
        const bool branch_taken_0x2f4320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4320u;
        // 0x2f4324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4320) {
            ctx->pc = 0x2F43D8u;
            goto label_2f43d8;
        }
    }
    ctx->pc = 0x2F4328u;
label_2f4328:
    // 0x2f4328: 0x1140002b  beqz        $t2, . + 4 + (0x2B << 2)
    ctx->pc = 0x2F4328u;
    {
        const bool branch_taken_0x2f4328 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4328u;
        // 0x2f432c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4328) {
            ctx->pc = 0x2F43D8u;
            goto label_2f43d8;
        }
    }
    ctx->pc = 0x2F4330u;
    // 0x2f4330: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f4330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f4334: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f4334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4338: 0x0  nop
    ctx->pc = 0x2f4338u;
    // NOP
    // 0x2f433c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2f433cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2f4340: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2f4340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2f4344: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2f4344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2f4348: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2f4348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2f434c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2f434cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f4350: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2f4350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f4354: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2f4354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f4358: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2f4358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2f435c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2f435cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f4360: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2f4360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f4364: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2f4364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f4368: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2f4368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2f436c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2f436cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2f4370: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2f4370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2f4374: 0xa3a4004c  sb          $a0, 0x4C($sp)
    ctx->pc = 0x2f4374u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f4378: 0xa3a3004f  sb          $v1, 0x4F($sp)
    ctx->pc = 0x2f4378u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f437c: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2f437cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x2f4380: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2f4380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x2f4384: 0xa3a0004d  sb          $zero, 0x4D($sp)
    ctx->pc = 0x2f4384u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f4388: 0xa3a0004e  sb          $zero, 0x4E($sp)
    ctx->pc = 0x2f4388u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f438c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2f438cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2f4390: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2f4390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f4394: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x2f4394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2f4398: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2f4398u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2f439c: 0xc60002e0  lwc1        $f0, 0x2E0($s0)
    ctx->pc = 0x2f439cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f43a0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2f43a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f43a4: 0x8e0602b0  lw          $a2, 0x2B0($s0)
    ctx->pc = 0x2f43a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
    // 0x2f43a8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2f43a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f43ac: 0x8604023a  lh          $a0, 0x23A($s0)
    ctx->pc = 0x2f43acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 570)));
    // 0x2f43b0: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x2f43b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x2f43b4: 0x9605023c  lhu         $a1, 0x23C($s0)
    ctx->pc = 0x2f43b4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x2f43b8: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x2f43b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x2f43bc: 0xa3aa0074  sb          $t2, 0x74($sp)
    ctx->pc = 0x2f43bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 10));
    // 0x2f43c0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2f43c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2f43c4: 0xa7a00070  sh          $zero, 0x70($sp)
    ctx->pc = 0x2f43c4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x2f43c8: 0xa7a00072  sh          $zero, 0x72($sp)
    ctx->pc = 0x2f43c8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x2f43cc: 0xc0c194a  jal         func_306528
    ctx->pc = 0x2F43CCu;
    SET_GPR_U32(ctx, 31, 0x2F43D4u);
    ctx->pc = 0x2F43D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F43CCu;
    // 0x2f43d0: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x2F43CCu, 0x2F43D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F43D4u;
label_2f43d4:
    // 0x2f43d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f43d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f43d8:
    // 0x2f43d8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2f43d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f43dc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2f43dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f43e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F43E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F43E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43E0u;
        // 0x2f43e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F43E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F43E8u;
}
