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
// Function: Exec03__15cR305_Chihuahua
// Address: 0x799c98 - 0x799e40
void Exec03__15cR305_Chihuahua_0x799c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Exec03__15cR305_Chihuahua_0x799c98");
#endif

    switch (ctx->pc) {
        case 0x799ce4u: goto label_799ce4;
        case 0x799d00u: goto label_799d00;
        case 0x799d14u: goto label_799d14;
        case 0x799d3cu: goto label_799d3c;
        case 0x799d90u: goto label_799d90;
        case 0x799db8u: goto label_799db8;
        case 0x799dc0u: goto label_799dc0;
        case 0x799df0u: goto label_799df0;
        default: break;
    }

    ctx->pc = 0x799c98u;

    // 0x799c98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x799c9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x799ca0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799ca4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x799ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ca8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x799ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x799cac: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x799cacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x799cb0: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x799CB0u;
    {
        const bool branch_taken_0x799cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CB0u;
        // 0x799cb4: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799cb0) {
            ctx->pc = 0x799E30u;
            goto label_799e30;
        }
    }
    ctx->pc = 0x799CB8u;
    // 0x799cb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x799cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x799cbc: 0x2442a730  addiu       $v0, $v0, -0x58D0
    ctx->pc = 0x799cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944560));
    // 0x799cc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x799cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x799cc4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x799cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799cc8: 0x800008  jr          $a0
    ctx->pc = 0x799CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x799CD0u: goto label_799cd0;
            case 0x799D20u: goto label_799d20;
            case 0x799D4Cu: goto label_799d4c;
            case 0x799DDCu: goto label_799ddc;
            case 0x799E30u: goto label_799e30;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799CC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x799CD0u;
label_799cd0:
    // 0x799cd0: 0x3c01401c  lui         $at, 0x401C
    ctx->pc = 0x799cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16412 << 16));
    // 0x799cd4: 0x342161aa  ori         $at, $at, 0x61AA
    ctx->pc = 0x799cd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25002);
    // 0x799cd8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799cd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799cdc: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x799CDCu;
    SET_GPR_U32(ctx, 31, 0x799CE4u);
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x799CDCu, 0x799CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CE4u;
label_799ce4:
    // 0x799ce4: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x799ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x799ce8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x799ce8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799cec: 0x0  nop
    ctx->pc = 0x799cecu;
    // NOP
    // 0x799cf0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x799CF0u;
    {
        const bool branch_taken_0x799cf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x799cf0) {
            ctx->pc = 0x799D0Cu;
            goto label_799d0c;
        }
    }
    ctx->pc = 0x799CF8u;
    // 0x799cf8: 0xc06c7f8  jal         func_1B1FE0
    ctx->pc = 0x799CF8u;
    SET_GPR_U32(ctx, 31, 0x799D00u);
    ctx->pc = 0x799CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CF8u;
    // 0x799cfc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1FE0u, 0x799CF8u, 0x799D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D00u;
label_799d00:
    // 0x799d00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799d04: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x799D04u;
    {
        const bool branch_taken_0x799d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D04u;
        // 0x799d08: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d04) {
            ctx->pc = 0x799E30u;
            goto label_799e30;
        }
    }
    ctx->pc = 0x799D0Cu;
label_799d0c:
    // 0x799d0c: 0xc06c7d6  jal         func_1B1F58
    ctx->pc = 0x799D0Cu;
    SET_GPR_U32(ctx, 31, 0x799D14u);
    ctx->pc = 0x799D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D0Cu;
    // 0x799d10: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1F58u, 0x799D0Cu, 0x799D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D14u;
label_799d14:
    // 0x799d14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x799d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799d18: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x799D18u;
    {
        const bool branch_taken_0x799d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D18u;
        // 0x799d1c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d18) {
            ctx->pc = 0x799E30u;
            goto label_799e30;
        }
    }
    ctx->pc = 0x799D20u;
label_799d20:
    // 0x799d20: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x799d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799d24: 0x90820601  lbu         $v0, 0x601($a0)
    ctx->pc = 0x799d24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1537)));
    // 0x799d28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x799d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x799d2c: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x799D2Cu;
    {
        const bool branch_taken_0x799d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799d2c) {
            ctx->pc = 0x799D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799D2Cu;
            // 0x799d30: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799E34u;
            goto label_799e34;
        }
    }
    ctx->pc = 0x799D34u;
    // 0x799d34: 0xc06c7d6  jal         func_1B1F58
    ctx->pc = 0x799D34u;
    SET_GPR_U32(ctx, 31, 0x799D3Cu);
    ctx->pc = 0x1B1F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1F58u, 0x799D34u, 0x799D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D3Cu;
label_799d3c:
    // 0x799d3c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x799d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x799d40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799d44: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x799D44u;
    {
        const bool branch_taken_0x799d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D44u;
        // 0x799d48: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d44) {
            ctx->pc = 0x799E30u;
            goto label_799e30;
        }
    }
    ctx->pc = 0x799D4Cu;
label_799d4c:
    // 0x799d4c: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x799d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x799d50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x799d50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799d54: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x799d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x799d58: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799d58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799d5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x799d5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799d60: 0x0  nop
    ctx->pc = 0x799d60u;
    // NOP
    // 0x799d64: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x799D64u;
    {
        const bool branch_taken_0x799d64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x799d64) {
            ctx->pc = 0x799D74u;
            goto label_799d74;
        }
    }
    ctx->pc = 0x799D6Cu;
    // 0x799d6c: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x799d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x799d70: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799d70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_799d74:
    // 0x799d74: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x799d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x799d78: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x799d78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x799d7c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799d7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799d80: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x799d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x799d84: 0x46026303  div.s       $f12, $f12, $f2
    ctx->pc = 0x799d84u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[2]);
    // 0x799d88: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x799D88u;
    SET_GPR_U32(ctx, 31, 0x799D90u);
    ctx->pc = 0x799D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D88u;
    // 0x799d8c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x799D88u, 0x799D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D90u;
label_799d90:
    // 0x799d90: 0xc6010080  lwc1        $f1, 0x80($s0)
    ctx->pc = 0x799d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x799d94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799d98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799d98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799d9c: 0x0  nop
    ctx->pc = 0x799d9cu;
    // NOP
    // 0x799da0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x799da0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799da4: 0x0  nop
    ctx->pc = 0x799da4u;
    // NOP
    // 0x799da8: 0x45020022  bc1fl       . + 4 + (0x22 << 2)
    ctx->pc = 0x799DA8u;
    {
        const bool branch_taken_0x799da8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x799da8) {
            ctx->pc = 0x799DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799DA8u;
            // 0x799dac: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799E34u;
            goto label_799e34;
        }
    }
    ctx->pc = 0x799DB0u;
    // 0x799db0: 0xc06c7c0  jal         func_1B1F00
    ctx->pc = 0x799DB0u;
    SET_GPR_U32(ctx, 31, 0x799DB8u);
    ctx->pc = 0x799DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DB0u;
    // 0x799db4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1F00u, 0x799DB0u, 0x799DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DB8u;
label_799db8:
    // 0x799db8: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x799DB8u;
    SET_GPR_U32(ctx, 31, 0x799DC0u);
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x799DB8u, 0x799DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DC0u;
label_799dc0:
    // 0x799dc0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x799dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x799dc4: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x799dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x799dc8: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x799dc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x799dcc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x799dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x799dd0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x799dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x799dd4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x799DD4u;
    {
        const bool branch_taken_0x799dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DD4u;
        // 0x799dd8: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799dd4) {
            ctx->pc = 0x799E2Cu;
            goto label_799e2c;
        }
    }
    ctx->pc = 0x799DDCu;
label_799ddc:
    // 0x799ddc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x799ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x799de0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x799DE0u;
    {
        const bool branch_taken_0x799de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DE0u;
        // 0x799de4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799de0) {
            ctx->pc = 0x799E2Cu;
            goto label_799e2c;
        }
    }
    ctx->pc = 0x799DE8u;
    // 0x799de8: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x799DE8u;
    SET_GPR_U32(ctx, 31, 0x799DF0u);
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x799DE8u, 0x799DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DF0u;
label_799df0:
    // 0x799df0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x799DF0u;
    {
        const bool branch_taken_0x799df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DF0u;
        // 0x799df4: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799df0) {
            ctx->pc = 0x799E14u;
            goto label_799e14;
        }
    }
    ctx->pc = 0x799DF8u;
    // 0x799df8: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x799df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x799dfc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x799dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x799e00: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x799e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x799e04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x799e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x799e08: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x799e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x799e0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x799E0Cu;
    {
        const bool branch_taken_0x799e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E0Cu;
        // 0x799e10: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e0c) {
            ctx->pc = 0x799E30u;
            goto label_799e30;
        }
    }
    ctx->pc = 0x799E14u;
label_799e14:
    // 0x799e14: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x799e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x799e18: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x799e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x799e1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x799e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x799e20: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x799e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x799e24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x799E24u;
    {
        const bool branch_taken_0x799e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E24u;
        // 0x799e28: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e24) {
            ctx->pc = 0x799E30u;
            goto label_799e30;
        }
    }
    ctx->pc = 0x799E2Cu;
label_799e2c:
    // 0x799e2c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x799e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_799e30:
    // 0x799e30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x799e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_799e34:
    // 0x799e34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799e38: 0x3e00008  jr          $ra
    ctx->pc = 0x799E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E38u;
        // 0x799e3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799E40u;
}
} // namespace gh_r305
