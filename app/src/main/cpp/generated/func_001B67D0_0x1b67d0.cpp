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

// Function: func_001B67D0
// Address: 0x1b67d0 - 0x1b6968
void func_001B67D0_0x1b67d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B67D0_0x1b67d0");
#endif

    switch (ctx->pc) {
        case 0x1b67f8u: goto label_1b67f8;
        case 0x1b6878u: goto label_1b6878;
        case 0x1b68a0u: goto label_1b68a0;
        case 0x1b68b4u: goto label_1b68b4;
        case 0x1b68c8u: goto label_1b68c8;
        case 0x1b68d4u: goto label_1b68d4;
        default: break;
    }

    ctx->pc = 0x1b67d0u;

    // 0x1b67d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1b67d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1b67d4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1b67d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1b67d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b67d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b67dc: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1b67dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1b67e0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1b67e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1b67e4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1b67e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1b67e8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1b67e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1b67ec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b67ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b67f0: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1B67F0u;
    SET_GPR_U32(ctx, 31, 0x1B67F8u);
    ctx->pc = 0x1B67F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B67F0u;
    // 0x1b67f4: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1B67F0u, 0x1B67F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B67F8u;
label_1b67f8:
    // 0x1b67f8: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1b67f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b67fc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b67fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1b6800: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b6800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b6804: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x1b6804u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6808: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1b6808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x1b680c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b680cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6810: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x1b6810u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b6814: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1b6814u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b6818: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b6818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b681c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b681cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b6820: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x1b6820u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6824: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x1b6824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x1b6828: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1b6828u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b682c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b682cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b6830: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1b6830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1b6834: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1b6834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1b6838: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x1b6838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x1b683c: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x1b683cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b6840: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b6840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b6844: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1b6844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1b6848: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b6848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b684c: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1b684cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x1b6850: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x1b6850u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x1b6854: 0xe662000c  swc1        $f2, 0xC($s3)
    ctx->pc = 0x1b6854u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x1b6858: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1b6858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1b685c: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x1b685cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x1b6860: 0xe682000c  swc1        $f2, 0xC($s4)
    ctx->pc = 0x1b6860u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x1b6864: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1b6864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1b6868: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1b6868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1b686c: 0xe642000c  swc1        $f2, 0xC($s2)
    ctx->pc = 0x1b686cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1b6870: 0xc07f83a  jal         func_1FE0E8
    ctx->pc = 0x1B6870u;
    SET_GPR_U32(ctx, 31, 0x1B6878u);
    ctx->pc = 0x1B6874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6870u;
    // 0x1b6874: 0xe6420008  swc1        $f2, 0x8($s2) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x1B6870u, 0x1B6878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6878u;
label_1b6878:
    // 0x1b6878: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1B6878u;
    {
        const bool branch_taken_0x1b6878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6878u;
        // 0x1b687c: 0xae220620  sw          $v0, 0x620($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6878) {
            ctx->pc = 0x1B6930u;
            goto label_1b6930;
        }
    }
    ctx->pc = 0x1B6880u;
    // 0x1b6880: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1b6880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1b6884: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b6884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b6888: 0x26300080  addiu       $s0, $s1, 0x80
    ctx->pc = 0x1b6888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x1b688c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b688cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6890: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6894: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b6894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6898: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x1B6898u;
    SET_GPR_U32(ctx, 31, 0x1B68A0u);
    ctx->pc = 0x1B689Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6898u;
    // 0x1b689c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x1B6898u, 0x1B68A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B68A0u;
label_1b68a0:
    // 0x1b68a0: 0x8e240620  lw          $a0, 0x620($s1)
    ctx->pc = 0x1b68a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
    // 0x1b68a4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1b68a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b68a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b68a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b68ac: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x1B68ACu;
    SET_GPR_U32(ctx, 31, 0x1B68B4u);
    ctx->pc = 0x1B68B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B68ACu;
    // 0x1b68b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x1B68ACu, 0x1B68B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B68B4u;
label_1b68b4:
    // 0x1b68b4: 0x8e240620  lw          $a0, 0x620($s1)
    ctx->pc = 0x1b68b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
    // 0x1b68b8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1b68b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b68bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b68bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b68c0: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x1B68C0u;
    SET_GPR_U32(ctx, 31, 0x1B68C8u);
    ctx->pc = 0x1B68C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B68C0u;
    // 0x1b68c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x1B68C0u, 0x1B68C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B68C8u;
label_1b68c8:
    // 0x1b68c8: 0x8e240620  lw          $a0, 0x620($s1)
    ctx->pc = 0x1b68c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
    // 0x1b68cc: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1B68CCu;
    SET_GPR_U32(ctx, 31, 0x1B68D4u);
    ctx->pc = 0x1B68D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B68CCu;
    // 0x1b68d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B68CCu, 0x1B68D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B68D4u;
label_1b68d4:
    // 0x1b68d4: 0x8e240620  lw          $a0, 0x620($s1)
    ctx->pc = 0x1b68d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
    // 0x1b68d8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b68d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b68dc: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1b68dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1b68e0: 0x240700f0  addiu       $a3, $zero, 0xF0
    ctx->pc = 0x1b68e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x1b68e4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b68e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b68e8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1b68e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1b68ec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1b68ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1b68f0: 0x8e230620  lw          $v1, 0x620($s1)
    ctx->pc = 0x1b68f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
    // 0x1b68f4: 0xa4650046  sh          $a1, 0x46($v1)
    ctx->pc = 0x1b68f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 5));
    // 0x1b68f8: 0x8e220620  lw          $v0, 0x620($s1)
    ctx->pc = 0x1b68f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
    // 0x1b68fc: 0xac46004c  sw          $a2, 0x4C($v0)
    ctx->pc = 0x1b68fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 6));
    // 0x1b6900: 0x8e230620  lw          $v1, 0x620($s1)
    ctx->pc = 0x1b6900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
    // 0x1b6904: 0xa4670044  sh          $a3, 0x44($v1)
    ctx->pc = 0x1b6904u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 7));
    // 0x1b6908: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x1b6908u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x1b690c: 0x8e230620  lw          $v1, 0x620($s1)
    ctx->pc = 0x1b690cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
    // 0x1b6910: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x1b6910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b6914: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6914u;
    {
        const bool branch_taken_0x1b6914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1B6918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6914u;
        // 0x1b6918: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6914) {
            ctx->pc = 0x1B6930u;
            goto label_1b6930;
        }
    }
    ctx->pc = 0x1B691Cu;
    // 0x1b691c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x1b691cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x1b6920: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1b6920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6924: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1b6924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b6928: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1b6928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b692c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1b692cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1b6930:
    // 0x1b6930: 0x8e2305b8  lw          $v1, 0x5B8($s1)
    ctx->pc = 0x1b6930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x1b6934: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x1b6934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1b6938: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1b6938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b693c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b693cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6940: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1b6940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1b6944: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1b6944u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b6948: 0xae2305b8  sw          $v1, 0x5B8($s1)
    ctx->pc = 0x1b6948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1464), GPR_U32(ctx, 3));
    // 0x1b694c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1b694cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b6950: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1b6950u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b6954: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1b6954u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b6958: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b6958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b695c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1b695cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b6960: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6960u;
        // 0x1b6964: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6968u;
}
