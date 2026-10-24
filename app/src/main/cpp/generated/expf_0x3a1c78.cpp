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

// Function: expf
// Address: 0x3a1c78 - 0x3a1df0
void expf_0x3a1c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("expf_0x3a1c78");
#endif

    switch (ctx->pc) {
        case 0x3a1c9cu: goto label_3a1c9c;
        case 0x3a1cb4u: goto label_3a1cb4;
        case 0x3a1cf4u: goto label_3a1cf4;
        case 0x3a1d68u: goto label_3a1d68;
        case 0x3a1d88u: goto label_3a1d88;
        case 0x3a1d98u: goto label_3a1d98;
        case 0x3a1db4u: goto label_3a1db4;
        case 0x3a1dc4u: goto label_3a1dc4;
        default: break;
    }

    ctx->pc = 0x3a1c78u;

    // 0x3a1c78: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3a1c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3a1c7c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x3a1c7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3a1c80: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3a1c80u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3a1c84: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x3a1c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x3a1c88: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3a1c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x3a1c8c: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x3a1c8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3a1c90: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3a1c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3a1c94: 0xc0e8a3e  jal         func_3A28F8
    ctx->pc = 0x3A1C94u;
    SET_GPR_U32(ctx, 31, 0x3A1C9Cu);
    ctx->pc = 0x3A1C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1C94u;
    // 0x3a1c98: 0x3c110046  lui         $s1, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)70 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A28F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A28F8u, 0x3A1C94u, 0x3A1C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1C9Cu;
label_3a1c9c:
    // 0x3a1c9c: 0x8e30f024  lw          $s0, -0xFDC($s1)
    ctx->pc = 0x3a1c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963236)));
    // 0x3a1ca0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3a1ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a1ca4: 0x1202004a  beq         $s0, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x3A1CA4u;
    {
        const bool branch_taken_0x3a1ca4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A1CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1CA4u;
        // 0x3a1ca8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1ca4) {
            ctx->pc = 0x3A1DD0u;
            goto label_3a1dd0;
        }
    }
    ctx->pc = 0x3A1CACu;
    // 0x3a1cac: 0xc0e933c  jal         func_3A4CF0
    ctx->pc = 0x3A1CACu;
    SET_GPR_U32(ctx, 31, 0x3A1CB4u);
    ctx->pc = 0x3A1CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1CACu;
    // 0x3a1cb0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4CF0u, 0x3A1CACu, 0x3A1CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1CB4u;
label_3a1cb4:
    // 0x3a1cb4: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x3A1CB4u;
    {
        const bool branch_taken_0x3a1cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1CB4u;
        // 0x3a1cb8: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1cb4) {
            ctx->pc = 0x3A1DD0u;
            goto label_3a1dd0;
        }
    }
    ctx->pc = 0x3A1CBCu;
    // 0x3a1cbc: 0x3c0142b1  lui         $at, 0x42B1
    ctx->pc = 0x3a1cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17073 << 16));
    // 0x3a1cc0: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x3a1cc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x3a1cc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a1cc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a1cc8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x3a1cc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a1ccc: 0x0  nop
    ctx->pc = 0x3a1cccu;
    // NOP
    // 0x3a1cd0: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x3A1CD0u;
    {
        const bool branch_taken_0x3a1cd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A1CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1CD0u;
        // 0x3a1cd4: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1cd0) {
            ctx->pc = 0x3A1D34u;
            goto label_3a1d34;
        }
    }
    ctx->pc = 0x3A1CD8u;
    // 0x3a1cd8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a1cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a1cdc: 0x2442ea78  addiu       $v0, $v0, -0x1588
    ctx->pc = 0x3a1cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961784));
    // 0x3a1ce0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3a1ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x3a1ce4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3a1ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3a1ce8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a1ce8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3a1cec: 0xc0c7b74  jal         func_31EDD0
    ctx->pc = 0x3A1CECu;
    SET_GPR_U32(ctx, 31, 0x3A1CF4u);
    ctx->pc = 0x3A1CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1CECu;
    // 0x3a1cf0: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x3A1CECu, 0x3A1CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1CF4u;
label_3a1cf4:
    // 0x3a1cf4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3a1cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3a1cf8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A1CF8u;
    {
        const bool branch_taken_0x3a1cf8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1CF8u;
        // 0x3a1cfc: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1cf8) {
            ctx->pc = 0x3A1D10u;
            goto label_3a1d10;
        }
    }
    ctx->pc = 0x3A1D00u;
    // 0x3a1d00: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x3a1d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x3a1d04: 0xdc22ea80  ld          $v0, -0x1580($at)
    ctx->pc = 0x3a1d04u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x45EA80u));
    // 0x3a1d08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A1D08u;
    {
        const bool branch_taken_0x3a1d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1D08u;
        // 0x3a1d0c: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1d08) {
            ctx->pc = 0x3A1D1Cu;
            goto label_3a1d1c;
        }
    }
    ctx->pc = 0x3A1D10u;
label_3a1d10:
    // 0x3a1d10: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3a1d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3a1d14: 0xdc43ea00  ld          $v1, -0x1600($v0)
    ctx->pc = 0x3a1d14u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x45EA00u));
    // 0x3a1d18: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x3a1d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_3a1d1c:
    // 0x3a1d1c: 0x8e23f024  lw          $v1, -0xFDC($s1)
    ctx->pc = 0x3a1d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963236)));
    // 0x3a1d20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a1d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a1d24: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3A1D24u;
    {
        const bool branch_taken_0x3a1d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a1d24) {
            ctx->pc = 0x3A1D90u;
            goto label_3a1d90;
        }
    }
    ctx->pc = 0x3A1D2Cu;
    // 0x3a1d2c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3A1D2Cu;
    {
        const bool branch_taken_0x3a1d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1d2c) {
            ctx->pc = 0x3A1D80u;
            goto label_3a1d80;
        }
    }
    ctx->pc = 0x3A1D34u;
label_3a1d34:
    // 0x3a1d34: 0x3c01c2cf  lui         $at, 0xC2CF
    ctx->pc = 0x3a1d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49871 << 16));
    // 0x3a1d38: 0x3421f1b5  ori         $at, $at, 0xF1B5
    ctx->pc = 0x3a1d38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61877);
    // 0x3a1d3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a1d3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a1d40: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3a1d40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a1d44: 0x0  nop
    ctx->pc = 0x3a1d44u;
    // NOP
    // 0x3a1d48: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x3A1D48u;
    {
        const bool branch_taken_0x3a1d48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A1D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1D48u;
        // 0x3a1d4c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1d48) {
            ctx->pc = 0x3A1DCCu;
            goto label_3a1dcc;
        }
    }
    ctx->pc = 0x3A1D50u;
    // 0x3a1d50: 0x2442ea78  addiu       $v0, $v0, -0x1588
    ctx->pc = 0x3a1d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961784));
    // 0x3a1d54: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3a1d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x3a1d58: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3a1d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3a1d5c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a1d5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3a1d60: 0xc0c7b74  jal         func_31EDD0
    ctx->pc = 0x3A1D60u;
    SET_GPR_U32(ctx, 31, 0x3A1D68u);
    ctx->pc = 0x3A1D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1D60u;
    // 0x3a1d64: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x3A1D60u, 0x3A1D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1D68u;
label_3a1d68:
    // 0x3a1d68: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3a1d68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1d6c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3a1d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3a1d70: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x3a1d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x3a1d74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a1d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a1d78: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A1D78u;
    {
        const bool branch_taken_0x3a1d78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A1D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1D78u;
        // 0x3a1d7c: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1d78) {
            ctx->pc = 0x3A1D90u;
            goto label_3a1d90;
        }
    }
    ctx->pc = 0x3A1D80u;
label_3a1d80:
    // 0x3a1d80: 0xc0e92b2  jal         func_3A4AC8
    ctx->pc = 0x3A1D80u;
    SET_GPR_U32(ctx, 31, 0x3A1D88u);
    ctx->pc = 0x3A1D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1D80u;
    // 0x3a1d84: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4AC8u, 0x3A1D80u, 0x3A1D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1D88u;
label_3a1d88:
    // 0x3a1d88: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A1D88u;
    {
        const bool branch_taken_0x3a1d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1D88u;
        // 0x3a1d8c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1d88) {
            ctx->pc = 0x3A1DA4u;
            goto label_3a1da4;
        }
    }
    ctx->pc = 0x3A1D90u;
label_3a1d90:
    // 0x3a1d90: 0xc0e93ee  jal         func_3A4FB8
    ctx->pc = 0x3A1D90u;
    SET_GPR_U32(ctx, 31, 0x3A1D98u);
    ctx->pc = 0x3A4FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4FB8u, 0x3A1D90u, 0x3A1D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1D98u;
label_3a1d98:
    // 0x3a1d98: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x3a1d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x3a1d9c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3a1d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3a1da0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3a1da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3a1da4:
    // 0x3a1da4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A1DA4u;
    {
        const bool branch_taken_0x3a1da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1da4) {
            ctx->pc = 0x3A1DBCu;
            goto label_3a1dbc;
        }
    }
    ctx->pc = 0x3A1DACu;
    // 0x3a1dac: 0xc0e93ee  jal         func_3A4FB8
    ctx->pc = 0x3A1DACu;
    SET_GPR_U32(ctx, 31, 0x3A1DB4u);
    ctx->pc = 0x3A4FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4FB8u, 0x3A1DACu, 0x3A1DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1DB4u;
label_3a1db4:
    // 0x3a1db4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3a1db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a1db8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3a1db8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3a1dbc:
    // 0x3a1dbc: 0xc0c7ab8  jal         func_31EAE0
    ctx->pc = 0x3A1DBCu;
    SET_GPR_U32(ctx, 31, 0x3A1DC4u);
    ctx->pc = 0x3A1DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1DBCu;
    // 0x3a1dc0: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EAE0u, 0x3A1DBCu, 0x3A1DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1DC4u;
label_3a1dc4:
    // 0x3a1dc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A1DC4u;
    {
        const bool branch_taken_0x3a1dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1DC4u;
        // 0x3a1dc8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1dc4) {
            ctx->pc = 0x3A1DD4u;
            goto label_3a1dd4;
        }
    }
    ctx->pc = 0x3A1DCCu;
label_3a1dcc:
    // 0x3a1dcc: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x3a1dccu;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_3a1dd0:
    // 0x3a1dd0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3a1dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3a1dd4:
    // 0x3a1dd4: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x3a1dd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a1dd8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3a1dd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a1ddc: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x3a1ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3a1de0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x3a1de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3a1de4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1DE4u;
        // 0x3a1de8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1DECu;
    // 0x3a1dec: 0x0  nop
    ctx->pc = 0x3a1decu;
    // NOP
    ctx->pc = 0x3a1df0u;
}
