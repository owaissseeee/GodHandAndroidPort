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

// Function: func_00101EB8
// Address: 0x101eb8 - 0x1020f0
void func_00101EB8_0x101eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00101EB8_0x101eb8");
#endif

    switch (ctx->pc) {
        case 0x101ef0u: goto label_101ef0;
        case 0x101f18u: goto label_101f18;
        case 0x101f2cu: goto label_101f2c;
        case 0x101f50u: goto label_101f50;
        case 0x101f88u: goto label_101f88;
        case 0x101f98u: goto label_101f98;
        case 0x101fa4u: goto label_101fa4;
        case 0x101fd8u: goto label_101fd8;
        case 0x102034u: goto label_102034;
        case 0x10207cu: goto label_10207c;
        case 0x102084u: goto label_102084;
        default: break;
    }

    ctx->pc = 0x101eb8u;

    // 0x101eb8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x101eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x101ebc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x101ebcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101ec0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x101ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x101ec4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x101ec4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101ec8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x101ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x101ecc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x101eccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101ed0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x101ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x101ed4: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x101ed4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x101ed8: 0x8e260304  lw          $a2, 0x304($s1)
    ctx->pc = 0x101ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x101edc: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x101edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x101ee0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x101ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x101ee4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x101ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x101ee8: 0xc0525ce  jal         func_149738
    ctx->pc = 0x101EE8u;
    SET_GPR_U32(ctx, 31, 0x101EF0u);
    ctx->pc = 0x101EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101EE8u;
    // 0x101eec: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149738u, 0x101EE8u, 0x101EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101EF0u;
label_101ef0:
    // 0x101ef0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x101EF0u;
    {
        const bool branch_taken_0x101ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101ef0) {
            ctx->pc = 0x101EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101EF0u;
            // 0x101ef4: 0x8e220254  lw          $v0, 0x254($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101F00u;
            goto label_101f00;
        }
    }
    ctx->pc = 0x101EF8u;
    // 0x101ef8: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x101EF8u;
    {
        const bool branch_taken_0x101ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101EF8u;
        // 0x101efc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ef8) {
            ctx->pc = 0x1020D4u;
            goto label_1020d4;
        }
    }
    ctx->pc = 0x101F00u;
label_101f00:
    // 0x101f00: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x101f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x101f04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x101f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101f08: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x101f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x101f0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x101f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x101f10: 0xc05404a  jal         func_150128
    ctx->pc = 0x101F10u;
    SET_GPR_U32(ctx, 31, 0x101F18u);
    ctx->pc = 0x101F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F10u;
    // 0x101f14: 0xae220254  sw          $v0, 0x254($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150128u, 0x101F10u, 0x101F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F18u;
label_101f18:
    // 0x101f18: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x101f18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x101f1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x101f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101f20: 0x24c63f58  addiu       $a2, $a2, 0x3F58
    ctx->pc = 0x101f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16216));
    // 0x101f24: 0xc053bd4  jal         func_14EF50
    ctx->pc = 0x101F24u;
    SET_GPR_U32(ctx, 31, 0x101F2Cu);
    ctx->pc = 0x101F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F24u;
    // 0x101f28: 0x262505c0  addiu       $a1, $s1, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF50u, 0x101F24u, 0x101F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F2Cu;
label_101f2c:
    // 0x101f2c: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x101f2cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x101f30: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x101f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x101f34: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x101f34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x101f38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x101f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x101f3c: 0x26102fc0  addiu       $s0, $s0, 0x2FC0
    ctx->pc = 0x101f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12224));
    // 0x101f40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x101f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101f44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101f48: 0xc04d1be  jal         func_1346F8
    ctx->pc = 0x101F48u;
    SET_GPR_U32(ctx, 31, 0x101F50u);
    ctx->pc = 0x101F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F48u;
    // 0x101f4c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1346F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1346F8u, 0x101F48u, 0x101F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F50u;
label_101f50:
    // 0x101f50: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x101f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x101f54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x101f54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x101f58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101f5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x101f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x101f60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x101f60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x101f64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x101f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101f68: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x101f68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x101f6c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x101f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x101f70: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x101f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x101f74: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x101f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x101f78: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x101f78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x101f7c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x101f7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101f80: 0xc04d220  jal         func_134880
    ctx->pc = 0x101F80u;
    SET_GPR_U32(ctx, 31, 0x101F88u);
    ctx->pc = 0x101F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F80u;
    // 0x101f84: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134880u, 0x101F80u, 0x101F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F88u;
label_101f88:
    // 0x101f88: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x101f88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x101f8c: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x101f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x101f90: 0xc07eb20  jal         func_1FAC80
    ctx->pc = 0x101F90u;
    SET_GPR_U32(ctx, 31, 0x101F98u);
    ctx->pc = 0x101F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F90u;
    // 0x101f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC80u, 0x101F90u, 0x101F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F98u;
label_101f98:
    // 0x101f98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101f9c: 0xc07eb1a  jal         func_1FAC68
    ctx->pc = 0x101F9Cu;
    SET_GPR_U32(ctx, 31, 0x101FA4u);
    ctx->pc = 0x101FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F9Cu;
    // 0x101fa0: 0xa6220548  sh          $v0, 0x548($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1352), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC68u, 0x101F9Cu, 0x101FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101FA4u;
label_101fa4:
    // 0x101fa4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x101fa4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101fa8: 0x86220548  lh          $v0, 0x548($s1)
    ctx->pc = 0x101fa8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
    // 0x101fac: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x101facu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x101fb0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x101FB0u;
    {
        const bool branch_taken_0x101fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101FB0u;
        // 0x101fb4: 0x96240548  lhu         $a0, 0x548($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101fb0) {
            ctx->pc = 0x101FC0u;
            goto label_101fc0;
        }
    }
    ctx->pc = 0x101FB8u;
    // 0x101fb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x101FB8u;
    {
        const bool branch_taken_0x101fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101FB8u;
        // 0x101fbc: 0xa624054a  sh          $a0, 0x54A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101fb8) {
            ctx->pc = 0x101FC4u;
            goto label_101fc4;
        }
    }
    ctx->pc = 0x101FC0u;
label_101fc0:
    // 0x101fc0: 0xa623054a  sh          $v1, 0x54A($s1)
    ctx->pc = 0x101fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 3));
label_101fc4:
    // 0x101fc4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x101fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x101fc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x101fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101fcc: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x101fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x101fd0: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x101FD0u;
    SET_GPR_U32(ctx, 31, 0x101FD8u);
    ctx->pc = 0x101FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101FD0u;
    // 0x101fd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x101FD0u, 0x101FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101FD8u;
label_101fd8:
    // 0x101fd8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x101FD8u;
    {
        const bool branch_taken_0x101fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101FD8u;
        // 0x101fdc: 0xae2205b0  sw          $v0, 0x5B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101fd8) {
            ctx->pc = 0x102038u;
            goto label_102038;
        }
    }
    ctx->pc = 0x101FE0u;
    // 0x101fe0: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x101fe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x101fe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x101fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101fe8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x101fe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x101fec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x101FECu;
    {
        const bool branch_taken_0x101fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101FECu;
        // 0x101ff0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101fec) {
            ctx->pc = 0x102000u;
            goto label_102000;
        }
    }
    ctx->pc = 0x101FF4u;
    // 0x101ff4: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x101ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x101ff8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x101FF8u;
    {
        const bool branch_taken_0x101ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101FF8u;
        // 0x101ffc: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ff8) {
            ctx->pc = 0x102004u;
            goto label_102004;
        }
    }
    ctx->pc = 0x102000u;
label_102000:
    // 0x102000: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x102000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102004:
    // 0x102004: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x102004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x102008: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x102008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10200c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x10200cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x102010: 0x8e2405b0  lw          $a0, 0x5B0($s1)
    ctx->pc = 0x102010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
    // 0x102014: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x102014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102018: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x102018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x10201c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10201cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x102020: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x102020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x102024: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x102024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x102028: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x102028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x10202c: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x10202Cu;
    SET_GPR_U32(ctx, 31, 0x102034u);
    ctx->pc = 0x102030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10202Cu;
    // 0x102030: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x10202Cu, 0x102034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102034u;
label_102034:
    // 0x102034: 0xae2205b4  sw          $v0, 0x5B4($s1)
    ctx->pc = 0x102034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1460), GPR_U32(ctx, 2));
label_102038:
    // 0x102038: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x102038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10203c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x10203cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x102040: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x102040u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x102044: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x102044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102048: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x102048u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x10204c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10204cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102050: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x102050u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x102054: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x102054u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102058: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x102058u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x10205c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10205cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102060: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x102060u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x102064: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x102064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x102068: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x102068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x10206c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10206cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x102070: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x102070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x102074: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x102074u;
    SET_GPR_U32(ctx, 31, 0x10207Cu);
    ctx->pc = 0x102078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102074u;
    // 0x102078: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x102074u, 0x10207Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10207Cu;
label_10207c:
    // 0x10207c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x10207Cu;
    SET_GPR_U32(ctx, 31, 0x102084u);
    ctx->pc = 0x102080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10207Cu;
    // 0x102080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x10207Cu, 0x102084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102084u;
label_102084:
    // 0x102084: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x102084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x102088: 0x26240490  addiu       $a0, $s1, 0x490
    ctx->pc = 0x102088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
    // 0x10208c: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x10208cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x102090: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x102090u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x102094: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x102094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x102098: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x102098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x10209c: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x10209cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1020a0: 0xe63405bc  swc1        $f20, 0x5BC($s1)
    ctx->pc = 0x1020a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1468), bits); }
    // 0x1020a4: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x1020a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    // 0x1020a8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1020A8u;
    {
        const bool branch_taken_0x1020a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1020ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1020A8u;
        // 0x1020ac: 0xe62005b8  swc1        $f0, 0x5B8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1464), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1020a8) {
            ctx->pc = 0x1020C8u;
            goto label_1020c8;
        }
    }
    ctx->pc = 0x1020B0u;
    // 0x1020b0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1020b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1020b4: 0xe6200490  swc1        $f0, 0x490($s1)
    ctx->pc = 0x1020b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1168), bits); }
    // 0x1020b8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1020b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1020bc: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1020bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1020c0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1020c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1020c4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1020c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1020c8:
    // 0x1020c8: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x1020c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x1020cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1020ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1020d0: 0xac716a88  sw          $s1, 0x6A88($v1)
    ctx->pc = 0x1020d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x586A88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x586A88u, _value); } while (0);
label_1020d4:
    // 0x1020d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1020d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1020d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1020d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1020dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1020dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1020e0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1020e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1020e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1020E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1020E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1020E4u;
        // 0x1020e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1020E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1020ECu;
    // 0x1020ec: 0x0  nop
    ctx->pc = 0x1020ecu;
    // NOP
    ctx->pc = 0x1020f0u;
}
