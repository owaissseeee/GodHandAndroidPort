#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r604_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r604
{
// Function: func_00799E60
// Address: 0x799e60 - 0x79a160
void func_00799E60_0x799e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799E60_0x799e60");
#endif

    switch (ctx->pc) {
        case 0x799ea0u: goto label_799ea0;
        case 0x799eb4u: goto label_799eb4;
        case 0x799ec8u: goto label_799ec8;
        case 0x799ef4u: goto label_799ef4;
        case 0x799f08u: goto label_799f08;
        case 0x799f18u: goto label_799f18;
        case 0x799f20u: goto label_799f20;
        case 0x799f30u: goto label_799f30;
        case 0x799f50u: goto label_799f50;
        case 0x799f74u: goto label_799f74;
        case 0x799f84u: goto label_799f84;
        case 0x799f90u: goto label_799f90;
        case 0x799f9cu: goto label_799f9c;
        case 0x799fa8u: goto label_799fa8;
        case 0x799fb4u: goto label_799fb4;
        case 0x799fc4u: goto label_799fc4;
        case 0x799ffcu: goto label_799ffc;
        case 0x79a004u: goto label_79a004;
        case 0x79a00cu: goto label_79a00c;
        case 0x79a014u: goto label_79a014;
        case 0x79a094u: goto label_79a094;
        case 0x79a0a4u: goto label_79a0a4;
        case 0x79a0bcu: goto label_79a0bc;
        case 0x79a0d4u: goto label_79a0d4;
        case 0x79a0e8u: goto label_79a0e8;
        case 0x79a0fcu: goto label_79a0fc;
        case 0x79a110u: goto label_79a110;
        case 0x79a124u: goto label_79a124;
        case 0x79a130u: goto label_79a130;
        default: break;
    }

    ctx->pc = 0x799e60u;

    // 0x799e60: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x799e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x799e64: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x799e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x799e68: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x799e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x799e6c: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x799e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x799e70: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x799e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x799e74: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x799e74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799e78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x799e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x799e7c: 0x3c122000  lui         $s2, 0x2000
    ctx->pc = 0x799e7cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)8192 << 16));
    // 0x799e80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x799e84: 0x3c130074  lui         $s3, 0x74
    ctx->pc = 0x799e84u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)116 << 16));
    // 0x799e88: 0xe7b70088  swc1        $f23, 0x88($sp)
    ctx->pc = 0x799e88u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x799e8c: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x799e8cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x799e90: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x799e90u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x799e94: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x799e94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x799e98: 0x8e627a8c  lw          $v0, 0x7A8C($s3)
    ctx->pc = 0x799e98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A8Cu));
    // 0x799e9c: 0x0  nop
    ctx->pc = 0x799e9cu;
    // NOP
label_799ea0:
    // 0x799ea0: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x799ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x799ea4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x799EA4u;
    {
        const bool branch_taken_0x799ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EA4u;
        // 0x799ea8: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ea4) {
            ctx->pc = 0x799EBCu;
            goto label_799ebc;
        }
    }
    ctx->pc = 0x799EACu;
    // 0x799eac: 0xc1e6998  jal         func_79A660
    ctx->pc = 0x799EACu;
    SET_GPR_U32(ctx, 31, 0x799EB4u);
    ctx->pc = 0x79A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A660u, 0x799EACu, 0x799EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EB4u;
label_799eb4:
    // 0x799eb4: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x799EB4u;
    {
        const bool branch_taken_0x799eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x799EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EB4u;
        // 0x799eb8: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799eb4) {
            ctx->pc = 0x799ED0u;
            goto label_799ed0;
        }
    }
    ctx->pc = 0x799EBCu;
label_799ebc:
    // 0x799ebc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799ec0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799EC0u;
    SET_GPR_U32(ctx, 31, 0x799EC8u);
    ctx->pc = 0x799EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EC0u;
    // 0x799ec4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799EC0u, 0x799EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EC8u;
label_799ec8:
    // 0x799ec8: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x799EC8u;
    {
        const bool branch_taken_0x799ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EC8u;
        // 0x799ecc: 0x8e627a8c  lw          $v0, 0x7A8C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ec8) {
            ctx->pc = 0x799EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799ea0;
        }
    }
    ctx->pc = 0x799ED0u;
label_799ed0:
    // 0x799ed0: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x799ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x799ed4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x799ed4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799ed8: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799edc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x799edcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ee0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x799ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x799ee4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x799ee4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x799ee8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x799ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x799eec: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x799EECu;
    SET_GPR_U32(ctx, 31, 0x799EF4u);
    ctx->pc = 0x799EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EECu;
    // 0x799ef0: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x799EECu, 0x799EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EF4u;
label_799ef4:
    // 0x799ef4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799ef8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x799ef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x799efc: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799f00: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x799F00u;
    SET_GPR_U32(ctx, 31, 0x799F08u);
    ctx->pc = 0x799F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F00u;
    // 0x799f04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799F00u, 0x799F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F08u;
label_799f08:
    // 0x799f08: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799f0c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799f10: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799F10u;
    SET_GPR_U32(ctx, 31, 0x799F18u);
    ctx->pc = 0x799F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F10u;
    // 0x799f14: 0x24a5b490  addiu       $a1, $a1, -0x4B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799F10u, 0x799F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F18u;
label_799f18:
    // 0x799f18: 0xc1e6928  jal         func_79A4A0
    ctx->pc = 0x799F18u;
    SET_GPR_U32(ctx, 31, 0x799F20u);
    ctx->pc = 0x799F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F18u;
    // 0x799f1c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A4A0u, 0x799F18u, 0x799F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F20u;
label_799f20:
    // 0x799f20: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x799f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799f24: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x799f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x799f28: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799F28u;
    SET_GPR_U32(ctx, 31, 0x799F30u);
    ctx->pc = 0x799F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F28u;
    // 0x799f2c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799F28u, 0x799F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F30u;
label_799f30:
    // 0x799f30: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x799f30u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x799f34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799f38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799f3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799f40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f44: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799f44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799f48: 0xc0c194a  jal         func_306528
    ctx->pc = 0x799F48u;
    SET_GPR_U32(ctx, 31, 0x799F50u);
    ctx->pc = 0x799F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F48u;
    // 0x799f4c: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x799F48u, 0x799F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F50u;
label_799f50:
    // 0x799f50: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799f50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799f54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799f54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f58: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x799f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x799f5c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799f60: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799f60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799f64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799f64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f68: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799f6c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799F6Cu;
    SET_GPR_U32(ctx, 31, 0x799F74u);
    ctx->pc = 0x799F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F6Cu;
    // 0x799f70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799F6Cu, 0x799F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F74u;
label_799f74:
    // 0x799f74: 0x8e032f84  lw          $v1, 0x2F84($s0)
    ctx->pc = 0x799f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799f78: 0x24050082  addiu       $a1, $zero, 0x82
    ctx->pc = 0x799f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x799f7c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799F7Cu;
    SET_GPR_U32(ctx, 31, 0x799F84u);
    ctx->pc = 0x799F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F7Cu;
    // 0x799f80: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799F7Cu, 0x799F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F84u;
label_799f84:
    // 0x799f84: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x799f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799f88: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799F88u;
    SET_GPR_U32(ctx, 31, 0x799F90u);
    ctx->pc = 0x799F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F88u;
    // 0x799f8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799F88u, 0x799F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F90u;
label_799f90:
    // 0x799f90: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x799f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799f94: 0xc0b6cc6  jal         func_2DB318
    ctx->pc = 0x799F94u;
    SET_GPR_U32(ctx, 31, 0x799F9Cu);
    ctx->pc = 0x799F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F94u;
    // 0x799f98: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x799F94u, 0x799F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F9Cu;
label_799f9c:
    // 0x799f9c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x799f9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799fa0: 0x4617ad40  add.s       $f21, $f21, $f23
    ctx->pc = 0x799fa0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
    // 0x799fa4: 0x0  nop
    ctx->pc = 0x799fa4u;
    // NOP
label_799fa8:
    // 0x799fa8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x799fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799fac: 0xc0b6cc6  jal         func_2DB318
    ctx->pc = 0x799FACu;
    SET_GPR_U32(ctx, 31, 0x799FB4u);
    ctx->pc = 0x799FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FACu;
    // 0x799fb0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x799FACu, 0x799FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FB4u;
label_799fb4:
    // 0x799fb4: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x799fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x799fb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799fbc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799FBCu;
    SET_GPR_U32(ctx, 31, 0x799FC4u);
    ctx->pc = 0x799FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FBCu;
    // 0x799fc0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799FBCu, 0x799FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FC4u;
label_799fc4:
    // 0x799fc4: 0x4616a834  c.lt.s      $f21, $f22
    ctx->pc = 0x799fc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799fc8: 0x0  nop
    ctx->pc = 0x799fc8u;
    // NOP
    // 0x799fcc: 0x4503fff6  bc1tl       . + 4 + (-0xA << 2)
    ctx->pc = 0x799FCCu;
    {
        const bool branch_taken_0x799fcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x799fcc) {
            ctx->pc = 0x799FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799FCCu;
            // 0x799fd0: 0x4617ad40  add.s       $f21, $f21, $f23 (Delay Slot)
            ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x799FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799fa8;
        }
    }
    ctx->pc = 0x799FD4u;
    // 0x799fd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799fd8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799fd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799fdc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x799fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799fe0: 0x3c01c479  lui         $at, 0xC479
    ctx->pc = 0x799fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50297 << 16));
    // 0x799fe4: 0x3421f99a  ori         $at, $at, 0xF99A
    ctx->pc = 0x799fe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63898);
    // 0x799fe8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x799fe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x799fec: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x799fecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x799ff0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799ff0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799ff4: 0xc0b6cc6  jal         func_2DB318
    ctx->pc = 0x799FF4u;
    SET_GPR_U32(ctx, 31, 0x799FFCu);
    ctx->pc = 0x799FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FF4u;
    // 0x799ff8: 0x2610ae50  addiu       $s0, $s0, -0x51B0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x799FF4u, 0x799FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FFCu;
label_799ffc:
    // 0x799ffc: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799FFCu;
    SET_GPR_U32(ctx, 31, 0x79A004u);
    ctx->pc = 0x79A000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FFCu;
    // 0x79a000: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799FFCu, 0x79A004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A004u;
label_79a004:
    // 0x79a004: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79A004u;
    SET_GPR_U32(ctx, 31, 0x79A00Cu);
    ctx->pc = 0x79A008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A004u;
    // 0x79a008: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79A004u, 0x79A00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A00Cu;
label_79a00c:
    // 0x79a00c: 0xc1e6928  jal         func_79A4A0
    ctx->pc = 0x79A00Cu;
    SET_GPR_U32(ctx, 31, 0x79A014u);
    ctx->pc = 0x79A010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A00Cu;
    // 0x79a010: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A4A0u, 0x79A00Cu, 0x79A014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A014u;
label_79a014:
    // 0x79a014: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79a014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x79a018: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x79a018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x79a01c: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x79a01cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79a020: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x79a020u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a024: 0x3c013eeb  lui         $at, 0x3EEB
    ctx->pc = 0x79a024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16107 << 16));
    // 0x79a028: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x79a028u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x79a02c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79a02cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79a030: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x79a030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a034: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79a038: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a03c: 0x3c01c0f7  lui         $at, 0xC0F7
    ctx->pc = 0x79a03cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49399 << 16));
    // 0x79a040: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x79a040u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x79a044: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79a048: 0x3c01c2d6  lui         $at, 0xC2D6
    ctx->pc = 0x79a048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49878 << 16));
    // 0x79a04c: 0x3421051f  ori         $at, $at, 0x51F
    ctx->pc = 0x79a04cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1311);
    // 0x79a050: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a054: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x79a054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x79a058: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x79a058u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x79a05c: 0x3c014047  lui         $at, 0x4047
    ctx->pc = 0x79a05cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16455 << 16));
    // 0x79a060: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x79a060u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x79a064: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a068: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79a068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79a06c: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x79a06cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x79a070: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x79a070u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x79a074: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x79a074u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x79a078: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x79a078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x79a07c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x79a07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x79a080: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x79a080u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x79a084: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x79a084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x79a088: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x79a088u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C264Cu));
    // 0x79a08c: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x79A08Cu;
    SET_GPR_U32(ctx, 31, 0x79A094u);
    ctx->pc = 0x79A090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A08Cu;
    // 0x79a090: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x79A08Cu, 0x79A094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A094u;
label_79a094:
    // 0x79a094: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79a094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79a098: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a09c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A09Cu;
    SET_GPR_U32(ctx, 31, 0x79A0A4u);
    ctx->pc = 0x79A0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A09Cu;
    // 0x79a0a0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A09Cu, 0x79A0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0A4u;
label_79a0a4:
    // 0x79a0a4: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79a0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
    // 0x79a0a8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x79a0a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x79a0ac: 0x2484b430  addiu       $a0, $a0, -0x4BD0
    ctx->pc = 0x79a0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947888));
    // 0x79a0b0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x79a0b0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x79a0b4: 0xc1e6b64  jal         func_79AD90
    ctx->pc = 0x79A0B4u;
    SET_GPR_U32(ctx, 31, 0x79A0BCu);
    ctx->pc = 0x79A0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0B4u;
    // 0x79a0b8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AD90u, 0x79A0B4u, 0x79A0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0BCu;
label_79a0bc:
    // 0x79a0bc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x79a0bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x79a0c0: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79a0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
    // 0x79a0c4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x79a0c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x79a0c8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79a0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a0cc: 0xc1e6b64  jal         func_79AD90
    ctx->pc = 0x79A0CCu;
    SET_GPR_U32(ctx, 31, 0x79A0D4u);
    ctx->pc = 0x79A0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0CCu;
    // 0x79a0d0: 0x2484b438  addiu       $a0, $a0, -0x4BC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AD90u, 0x79A0CCu, 0x79A0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0D4u;
label_79a0d4:
    // 0x79a0d4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a0d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0dc: 0x24a5b440  addiu       $a1, $a1, -0x4BC0
    ctx->pc = 0x79a0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947904));
    // 0x79a0e0: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x79A0E0u;
    SET_GPR_U32(ctx, 31, 0x79A0E8u);
    ctx->pc = 0x79A0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0E0u;
    // 0x79a0e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x79A0E0u, 0x79A0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0E8u;
label_79a0e8:
    // 0x79a0e8: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a0ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0f0: 0x24a5b450  addiu       $a1, $a1, -0x4BB0
    ctx->pc = 0x79a0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947920));
    // 0x79a0f4: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x79A0F4u;
    SET_GPR_U32(ctx, 31, 0x79A0FCu);
    ctx->pc = 0x79A0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0F4u;
    // 0x79a0f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x79A0F4u, 0x79A0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0FCu;
label_79a0fc:
    // 0x79a0fc: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a104: 0x24a5b460  addiu       $a1, $a1, -0x4BA0
    ctx->pc = 0x79a104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947936));
    // 0x79a108: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x79A108u;
    SET_GPR_U32(ctx, 31, 0x79A110u);
    ctx->pc = 0x79A10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A108u;
    // 0x79a10c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x79A108u, 0x79A110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A110u;
label_79a110:
    // 0x79a110: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79a110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79a114: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a118: 0x24a598f8  addiu       $a1, $a1, -0x6708
    ctx->pc = 0x79a118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940920));
    // 0x79a11c: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79A11Cu;
    SET_GPR_U32(ctx, 31, 0x79A124u);
    ctx->pc = 0x79A120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A11Cu;
    // 0x79a120: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79A11Cu, 0x79A124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A124u;
label_79a124:
    // 0x79a124: 0x8e432f84  lw          $v1, 0x2F84($s2)
    ctx->pc = 0x79a124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79a128: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A128u;
    SET_GPR_U32(ctx, 31, 0x79A130u);
    ctx->pc = 0x79A12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A128u;
    // 0x79a12c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A128u, 0x79A130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A130u;
label_79a130:
    // 0x79a130: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x79a130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79a134: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x79a134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a138: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x79a138u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a13c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x79a13cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a140: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79a140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a144: 0xc7b70088  lwc1        $f23, 0x88($sp)
    ctx->pc = 0x79a144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x79a148: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x79a148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x79a14c: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x79a14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x79a150: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x79a150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79a154: 0x3e00008  jr          $ra
    ctx->pc = 0x79A154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A154u;
        // 0x79a158: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A15Cu;
    // 0x79a15c: 0x0  nop
    ctx->pc = 0x79a15cu;
    // NOP
    ctx->pc = 0x79a160u;
}
} // namespace gh_r604
