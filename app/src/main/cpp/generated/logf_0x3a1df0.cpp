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

// Function: logf
// Address: 0x3a1df0 - 0x3a1f38
void logf_0x3a1df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("logf_0x3a1df0");
#endif

    switch (ctx->pc) {
        case 0x3a1e14u: goto label_3a1e14;
        case 0x3a1e2cu: goto label_3a1e2c;
        case 0x3a1e64u: goto label_3a1e64;
        case 0x3a1e90u: goto label_3a1e90;
        case 0x3a1ebcu: goto label_3a1ebc;
        case 0x3a1ee0u: goto label_3a1ee0;
        case 0x3a1ef0u: goto label_3a1ef0;
        case 0x3a1f0cu: goto label_3a1f0c;
        case 0x3a1f1cu: goto label_3a1f1c;
        default: break;
    }

    ctx->pc = 0x3a1df0u;

    // 0x3a1df0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3a1df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3a1df4: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x3a1df4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3a1df8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3a1df8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3a1dfc: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x3a1dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x3a1e00: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3a1e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x3a1e04: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x3a1e04u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3a1e08: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3a1e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3a1e0c: 0xc0e8aec  jal         func_3A2BB0
    ctx->pc = 0x3A1E0Cu;
    SET_GPR_U32(ctx, 31, 0x3A1E14u);
    ctx->pc = 0x3A1E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1E0Cu;
    // 0x3a1e10: 0x3c110046  lui         $s1, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)70 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2BB0u, 0x3A1E0Cu, 0x3A1E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1E14u;
label_3a1e14:
    // 0x3a1e14: 0x8e30f024  lw          $s0, -0xFDC($s1)
    ctx->pc = 0x3a1e14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963236)));
    // 0x3a1e18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3a1e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a1e1c: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A1E1Cu;
    {
        const bool branch_taken_0x3a1e1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A1E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1E1Cu;
        // 0x3a1e20: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1e1c) {
            ctx->pc = 0x3A1E48u;
            goto label_3a1e48;
        }
    }
    ctx->pc = 0x3A1E24u;
    // 0x3a1e24: 0xc0e9380  jal         func_3A4E00
    ctx->pc = 0x3A1E24u;
    SET_GPR_U32(ctx, 31, 0x3A1E2Cu);
    ctx->pc = 0x3A1E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1E24u;
    // 0x3a1e28: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4E00u, 0x3A1E24u, 0x3A1E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1E2Cu;
label_3a1e2c:
    // 0x3a1e2c: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x3A1E2Cu;
    {
        const bool branch_taken_0x3a1e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1E2Cu;
        // 0x3a1e30: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1e2c) {
            ctx->pc = 0x3A1F1Cu;
            goto label_3a1f1c;
        }
    }
    ctx->pc = 0x3A1E34u;
    // 0x3a1e34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a1e34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a1e38: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x3a1e38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a1e3c: 0x0  nop
    ctx->pc = 0x3a1e3cu;
    // NOP
    // 0x3a1e40: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3A1E40u;
    {
        const bool branch_taken_0x3a1e40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A1E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1E40u;
        // 0x3a1e44: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1e40) {
            ctx->pc = 0x3A1E50u;
            goto label_3a1e50;
        }
    }
    ctx->pc = 0x3A1E48u;
label_3a1e48:
    // 0x3a1e48: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x3A1E48u;
    {
        const bool branch_taken_0x3a1e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1E48u;
        // 0x3a1e4c: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1e48) {
            ctx->pc = 0x3A1F1Cu;
            goto label_3a1f1c;
        }
    }
    ctx->pc = 0x3A1E50u;
label_3a1e50:
    // 0x3a1e50: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3a1e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x3a1e54: 0x2442ea88  addiu       $v0, $v0, -0x1578
    ctx->pc = 0x3a1e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961800));
    // 0x3a1e58: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a1e58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3a1e5c: 0xc0c7b74  jal         func_31EDD0
    ctx->pc = 0x3A1E5Cu;
    SET_GPR_U32(ctx, 31, 0x3A1E64u);
    ctx->pc = 0x3A1E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1E5Cu;
    // 0x3a1e60: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x3A1E5Cu, 0x3A1E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1E64u;
label_3a1e64:
    // 0x3a1e64: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3a1e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3a1e68: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A1E68u;
    {
        const bool branch_taken_0x3a1e68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1E68u;
        // 0x3a1e6c: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1e68) {
            ctx->pc = 0x3A1E80u;
            goto label_3a1e80;
        }
    }
    ctx->pc = 0x3A1E70u;
    // 0x3a1e70: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x3a1e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x3a1e74: 0xdc22ea90  ld          $v0, -0x1570($at)
    ctx->pc = 0x3a1e74u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x45EA90u));
    // 0x3a1e78: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3A1E78u;
    {
        const bool branch_taken_0x3a1e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1E78u;
        // 0x3a1e7c: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1e78) {
            ctx->pc = 0x3A1E94u;
            goto label_3a1e94;
        }
    }
    ctx->pc = 0x3A1E80u;
label_3a1e80:
    // 0x3a1e80: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3a1e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3a1e84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a1e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1e88: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x3A1E88u;
    SET_GPR_U32(ctx, 31, 0x3A1E90u);
    ctx->pc = 0x3A1E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1E88u;
    // 0x3a1e8c: 0xdc45ea00  ld          $a1, -0x1600($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294961664)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x3A1E88u, 0x3A1E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1E90u;
label_3a1e90:
    // 0x3a1e90: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x3a1e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_3a1e94:
    // 0x3a1e94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a1e94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a1e98: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x3a1e98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a1e9c: 0x0  nop
    ctx->pc = 0x3a1e9cu;
    // NOP
    // 0x3a1ea0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x3A1EA0u;
    {
        const bool branch_taken_0x3a1ea0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A1EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1EA0u;
        // 0x3a1ea4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1ea0) {
            ctx->pc = 0x3A1EC4u;
            goto label_3a1ec4;
        }
    }
    ctx->pc = 0x3A1EA8u;
    // 0x3a1ea8: 0x8e23f024  lw          $v1, -0xFDC($s1)
    ctx->pc = 0x3a1ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963236)));
    // 0x3a1eac: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A1EACu;
    {
        const bool branch_taken_0x3a1eac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A1EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1EACu;
        // 0x3a1eb0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1eac) {
            ctx->pc = 0x3A1ED8u;
            goto label_3a1ed8;
        }
    }
    ctx->pc = 0x3A1EB4u;
    // 0x3a1eb4: 0xc0e93ee  jal         func_3A4FB8
    ctx->pc = 0x3A1EB4u;
    SET_GPR_U32(ctx, 31, 0x3A1EBCu);
    ctx->pc = 0x3A4FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4FB8u, 0x3A1EB4u, 0x3A1EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1EBCu;
label_3a1ebc:
    // 0x3a1ebc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3A1EBCu;
    {
        const bool branch_taken_0x3a1ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1EBCu;
        // 0x3a1ec0: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1ebc) {
            ctx->pc = 0x3A1EF4u;
            goto label_3a1ef4;
        }
    }
    ctx->pc = 0x3A1EC4u;
label_3a1ec4:
    // 0x3a1ec4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a1ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a1ec8: 0x8e22f024  lw          $v0, -0xFDC($s1)
    ctx->pc = 0x3a1ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963236)));
    // 0x3a1ecc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3a1eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a1ed0: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A1ED0u;
    {
        const bool branch_taken_0x3a1ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3A1ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1ED0u;
        // 0x3a1ed4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1ed0) {
            ctx->pc = 0x3A1EE8u;
            goto label_3a1ee8;
        }
    }
    ctx->pc = 0x3A1ED8u;
label_3a1ed8:
    // 0x3a1ed8: 0xc0e92b2  jal         func_3A4AC8
    ctx->pc = 0x3A1ED8u;
    SET_GPR_U32(ctx, 31, 0x3A1EE0u);
    ctx->pc = 0x3A1EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1ED8u;
    // 0x3a1edc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4AC8u, 0x3A1ED8u, 0x3A1EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1EE0u;
label_3a1ee0:
    // 0x3a1ee0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A1EE0u;
    {
        const bool branch_taken_0x3a1ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1EE0u;
        // 0x3a1ee4: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1ee0) {
            ctx->pc = 0x3A1EFCu;
            goto label_3a1efc;
        }
    }
    ctx->pc = 0x3A1EE8u;
label_3a1ee8:
    // 0x3a1ee8: 0xc0e93ee  jal         func_3A4FB8
    ctx->pc = 0x3A1EE8u;
    SET_GPR_U32(ctx, 31, 0x3A1EF0u);
    ctx->pc = 0x3A4FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4FB8u, 0x3A1EE8u, 0x3A1EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1EF0u;
label_3a1ef0:
    // 0x3a1ef0: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x3a1ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_3a1ef4:
    // 0x3a1ef4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3a1ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3a1ef8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3a1ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3a1efc:
    // 0x3a1efc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A1EFCu;
    {
        const bool branch_taken_0x3a1efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1efc) {
            ctx->pc = 0x3A1F14u;
            goto label_3a1f14;
        }
    }
    ctx->pc = 0x3A1F04u;
    // 0x3a1f04: 0xc0e93ee  jal         func_3A4FB8
    ctx->pc = 0x3A1F04u;
    SET_GPR_U32(ctx, 31, 0x3A1F0Cu);
    ctx->pc = 0x3A4FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4FB8u, 0x3A1F04u, 0x3A1F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1F0Cu;
label_3a1f0c:
    // 0x3a1f0c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3a1f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a1f10: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3a1f10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3a1f14:
    // 0x3a1f14: 0xc0c7ab8  jal         func_31EAE0
    ctx->pc = 0x3A1F14u;
    SET_GPR_U32(ctx, 31, 0x3A1F1Cu);
    ctx->pc = 0x3A1F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1F14u;
    // 0x3a1f18: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EAE0u, 0x3A1F14u, 0x3A1F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1F1Cu;
label_3a1f1c:
    // 0x3a1f1c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3a1f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a1f20: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x3a1f20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a1f24: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3a1f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a1f28: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x3a1f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3a1f2c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x3a1f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3a1f30: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F30u;
        // 0x3a1f34: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1F38u;
}
