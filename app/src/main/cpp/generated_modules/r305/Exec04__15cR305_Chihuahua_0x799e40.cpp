#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r305_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r305
{
// Function: Exec04__15cR305_Chihuahua
// Address: 0x799e40 - 0x799fa8
void Exec04__15cR305_Chihuahua_0x799e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Exec04__15cR305_Chihuahua_0x799e40");
#endif

    switch (ctx->pc) {
        case 0x799e94u: goto label_799e94;
        case 0x799eb0u: goto label_799eb0;
        case 0x799eccu: goto label_799ecc;
        case 0x799edcu: goto label_799edc;
        case 0x799f04u: goto label_799f04;
        case 0x799f54u: goto label_799f54;
        default: break;
    }

    ctx->pc = 0x799e40u;

    // 0x799e40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x799e44: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x799e48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x799e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x799e4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x799e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799e54: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x799e54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799e58: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x799e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x799e5c: 0x10710022  beq         $v1, $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x799E5Cu;
    {
        const bool branch_taken_0x799e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x799E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E5Cu;
        // 0x799e60: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e5c) {
            ctx->pc = 0x799EE8u;
            goto label_799ee8;
        }
    }
    ctx->pc = 0x799E64u;
    // 0x799e64: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x799E64u;
    {
        const bool branch_taken_0x799e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799e64) {
            ctx->pc = 0x799E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799E64u;
            // 0x799e68: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799E7Cu;
            goto label_799e7c;
        }
    }
    ctx->pc = 0x799E6Cu;
    // 0x799e6c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x799E6Cu;
    {
        const bool branch_taken_0x799e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x799e6c) {
            ctx->pc = 0x799E8Cu;
            goto label_799e8c;
        }
    }
    ctx->pc = 0x799E74u;
    // 0x799e74: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x799E74u;
    {
        const bool branch_taken_0x799e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E74u;
        // 0x799e78: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e74) {
            ctx->pc = 0x799F98u;
            goto label_799f98;
        }
    }
    ctx->pc = 0x799E7Cu;
label_799e7c:
    // 0x799e7c: 0x50620025  beql        $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x799E7Cu;
    {
        const bool branch_taken_0x799e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x799e7c) {
            ctx->pc = 0x799E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799E7Cu;
            // 0x799e80: 0xc6010064  lwc1        $f1, 0x64($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x799F14u;
            goto label_799f14;
        }
    }
    ctx->pc = 0x799E84u;
    // 0x799e84: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x799E84u;
    {
        const bool branch_taken_0x799e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E84u;
        // 0x799e88: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e84) {
            ctx->pc = 0x799F98u;
            goto label_799f98;
        }
    }
    ctx->pc = 0x799E8Cu;
label_799e8c:
    // 0x799e8c: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x799E8Cu;
    SET_GPR_U32(ctx, 31, 0x799E94u);
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x799E8Cu, 0x799E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E94u;
label_799e94:
    // 0x799e94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x799e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x799e98: 0x3c01401c  lui         $at, 0x401C
    ctx->pc = 0x799e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16412 << 16));
    // 0x799e9c: 0x342161aa  ori         $at, $at, 0x61AA
    ctx->pc = 0x799e9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25002);
    // 0x799ea0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799ea4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x799ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x799ea8: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x799EA8u;
    SET_GPR_U32(ctx, 31, 0x799EB0u);
    ctx->pc = 0x799EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EA8u;
    // 0x799eac: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x799EA8u, 0x799EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EB0u;
label_799eb0:
    // 0x799eb0: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x799eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x799eb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x799eb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799eb8: 0x0  nop
    ctx->pc = 0x799eb8u;
    // NOP
    // 0x799ebc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x799EBCu;
    {
        const bool branch_taken_0x799ebc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x799ebc) {
            ctx->pc = 0x799ED4u;
            goto label_799ed4;
        }
    }
    ctx->pc = 0x799EC4u;
    // 0x799ec4: 0xc06c7f8  jal         func_1B1FE0
    ctx->pc = 0x799EC4u;
    SET_GPR_U32(ctx, 31, 0x799ECCu);
    ctx->pc = 0x799EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EC4u;
    // 0x799ec8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1FE0u, 0x799EC4u, 0x799ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799ECCu;
label_799ecc:
    // 0x799ecc: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x799ECCu;
    {
        const bool branch_taken_0x799ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799ECCu;
        // 0x799ed0: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ecc) {
            ctx->pc = 0x799F94u;
            goto label_799f94;
        }
    }
    ctx->pc = 0x799ED4u;
label_799ed4:
    // 0x799ed4: 0xc06c82a  jal         func_1B20A8
    ctx->pc = 0x799ED4u;
    SET_GPR_U32(ctx, 31, 0x799EDCu);
    ctx->pc = 0x799ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799ED4u;
    // 0x799ed8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B20A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B20A8u, 0x799ED4u, 0x799EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EDCu;
label_799edc:
    // 0x799edc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x799edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799ee0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x799EE0u;
    {
        const bool branch_taken_0x799ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EE0u;
        // 0x799ee4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ee0) {
            ctx->pc = 0x799F94u;
            goto label_799f94;
        }
    }
    ctx->pc = 0x799EE8u;
label_799ee8:
    // 0x799ee8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x799ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799eec: 0x90820601  lbu         $v0, 0x601($a0)
    ctx->pc = 0x799eecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1537)));
    // 0x799ef0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x799ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x799ef4: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x799EF4u;
    {
        const bool branch_taken_0x799ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799ef4) {
            ctx->pc = 0x799EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799EF4u;
            // 0x799ef8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799F98u;
            goto label_799f98;
        }
    }
    ctx->pc = 0x799EFCu;
    // 0x799efc: 0xc06c82a  jal         func_1B20A8
    ctx->pc = 0x799EFCu;
    SET_GPR_U32(ctx, 31, 0x799F04u);
    ctx->pc = 0x1B20A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B20A8u, 0x799EFCu, 0x799F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F04u;
label_799f04:
    // 0x799f04: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x799f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x799f08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799f0c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x799F0Cu;
    {
        const bool branch_taken_0x799f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F0Cu;
        // 0x799f10: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f0c) {
            ctx->pc = 0x799F94u;
            goto label_799f94;
        }
    }
    ctx->pc = 0x799F14u;
label_799f14:
    // 0x799f14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x799f14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799f18: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x799f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x799f1c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799f20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x799f20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799f24: 0x0  nop
    ctx->pc = 0x799f24u;
    // NOP
    // 0x799f28: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x799F28u;
    {
        const bool branch_taken_0x799f28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x799f28) {
            ctx->pc = 0x799F38u;
            goto label_799f38;
        }
    }
    ctx->pc = 0x799F30u;
    // 0x799f30: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x799f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x799f34: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_799f38:
    // 0x799f38: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x799f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x799f3c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x799f3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x799f40: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799f44: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x799f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x799f48: 0x46026303  div.s       $f12, $f12, $f2
    ctx->pc = 0x799f48u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[2]);
    // 0x799f4c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x799F4Cu;
    SET_GPR_U32(ctx, 31, 0x799F54u);
    ctx->pc = 0x799F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F4Cu;
    // 0x799f50: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x799F4Cu, 0x799F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F54u;
label_799f54:
    // 0x799f54: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x799f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799f58: 0x90620601  lbu         $v0, 0x601($v1)
    ctx->pc = 0x799f58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1537)));
    // 0x799f5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x799f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x799f60: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x799F60u;
    {
        const bool branch_taken_0x799f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799f60) {
            ctx->pc = 0x799F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799F60u;
            // 0x799f64: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799F98u;
            goto label_799f98;
        }
    }
    ctx->pc = 0x799F68u;
    // 0x799f68: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x799f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x799f6c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x799F6Cu;
    {
        const bool branch_taken_0x799f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F6Cu;
        // 0x799f70: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f6c) {
            ctx->pc = 0x799F90u;
            goto label_799f90;
        }
    }
    ctx->pc = 0x799F74u;
    // 0x799f74: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x799f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x799f78: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x799f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x799f7c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x799f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x799f80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x799f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x799f84: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x799f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x799f88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x799F88u;
    {
        const bool branch_taken_0x799f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F88u;
        // 0x799f8c: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f88) {
            ctx->pc = 0x799F94u;
            goto label_799f94;
        }
    }
    ctx->pc = 0x799F90u;
label_799f90:
    // 0x799f90: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x799f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_799f94:
    // 0x799f94: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x799f94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_799f98:
    // 0x799f98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x799f98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799f9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x799FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FA0u;
        // 0x799fa4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799FA8u;
}
} // namespace gh_r305
