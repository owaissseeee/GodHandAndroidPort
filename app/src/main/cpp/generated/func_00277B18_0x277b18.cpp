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

// Function: func_00277B18
// Address: 0x277b18 - 0x277c48
void func_00277B18_0x277b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00277B18_0x277b18");
#endif

    switch (ctx->pc) {
        case 0x277b44u: goto label_277b44;
        case 0x277b90u: goto label_277b90;
        case 0x277bc0u: goto label_277bc0;
        case 0x277bccu: goto label_277bcc;
        case 0x277c14u: goto label_277c14;
        case 0x277c20u: goto label_277c20;
        case 0x277c2cu: goto label_277c2c;
        default: break;
    }

    ctx->pc = 0x277b18u;

    // 0x277b18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x277b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x277b1c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x277b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x277b20: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x277b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x277b24: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x277b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x277b28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x277b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x277b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x277b30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x277b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x277b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x277b38: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x277b38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x277b3c: 0xc0b76ac  jal         func_2DDAB0
    ctx->pc = 0x277B3Cu;
    SET_GPR_U32(ctx, 31, 0x277B44u);
    ctx->pc = 0x277B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277B3Cu;
    // 0x277b40: 0x8e0400f0  lw          $a0, 0xF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDAB0u, 0x277B3Cu, 0x277B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277B44u;
label_277b44:
    // 0x277b44: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x277b44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x277b48: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x277B48u;
    {
        const bool branch_taken_0x277b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x277B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B48u;
        // 0x277b4c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277b48) {
            ctx->pc = 0x277B64u;
            goto label_277b64;
        }
    }
    ctx->pc = 0x277B50u;
    // 0x277b50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277b54: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x277B54u;
    {
        const bool branch_taken_0x277b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x277b54) {
            ctx->pc = 0x277B9Cu;
            goto label_277b9c;
        }
    }
    ctx->pc = 0x277B5Cu;
    // 0x277b5c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x277B5Cu;
    {
        const bool branch_taken_0x277b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B5Cu;
        // 0x277b60: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277b5c) {
            ctx->pc = 0x277C30u;
            goto label_277c30;
        }
    }
    ctx->pc = 0x277B64u;
label_277b64:
    // 0x277b64: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x277b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x277b68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x277b6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x277b70: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x277b70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x277b74: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x277b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x277b78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x277b78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b7c: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x277b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x277b80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x277b80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b84: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x277b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x277b88: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x277B88u;
    SET_GPR_U32(ctx, 31, 0x277B90u);
    ctx->pc = 0x277B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277B88u;
    // 0x277b8c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x277B88u, 0x277B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277B90u;
label_277b90:
    // 0x277b90: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x277b90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x277b94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x277b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x277b98: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x277b98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_277b9c:
    // 0x277b9c: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x277B9Cu;
    {
        const bool branch_taken_0x277b9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x277BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B9Cu;
        // 0x277ba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277b9c) {
            ctx->pc = 0x277BF4u;
            goto label_277bf4;
        }
    }
    ctx->pc = 0x277BA4u;
    // 0x277ba4: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x277ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x277ba8: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x277ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x277bac: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x277bacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x277bb0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x277bb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x277bb4: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x277bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x277bb8: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x277BB8u;
    SET_GPR_U32(ctx, 31, 0x277BC0u);
    ctx->pc = 0x277BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277BB8u;
    // 0x277bbc: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x277BB8u, 0x277BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277BC0u;
label_277bc0:
    // 0x277bc0: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x277bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x277bc4: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x277BC4u;
    SET_GPR_U32(ctx, 31, 0x277BCCu);
    ctx->pc = 0x277BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277BC4u;
    // 0x277bc8: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x277BC4u, 0x277BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277BCCu;
label_277bcc:
    // 0x277bcc: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x277bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x277bd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x277bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x277bd4: 0x0  nop
    ctx->pc = 0x277bd4u;
    // NOP
    // 0x277bd8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x277bd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x277bdc: 0x0  nop
    ctx->pc = 0x277bdcu;
    // NOP
    // 0x277be0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x277BE0u;
    {
        const bool branch_taken_0x277be0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277BE0u;
        // 0x277be4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277be0) {
            ctx->pc = 0x277C04u;
            goto label_277c04;
        }
    }
    ctx->pc = 0x277BE8u;
    // 0x277be8: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x277be8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x277bec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x277BECu;
    {
        const bool branch_taken_0x277bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277BECu;
        // 0x277bf0: 0xa20202f5  sb          $v0, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277bec) {
            ctx->pc = 0x277BFCu;
            goto label_277bfc;
        }
    }
    ctx->pc = 0x277BF4u;
label_277bf4:
    // 0x277bf4: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x277bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x277bf8: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x277bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_277bfc:
    // 0x277bfc: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x277bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x277c00: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x277c00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_277c04:
    // 0x277c04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x277c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x277c08: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x277c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x277c0c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x277C0Cu;
    SET_GPR_U32(ctx, 31, 0x277C14u);
    ctx->pc = 0x277C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277C0Cu;
    // 0x277c10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x277C0Cu, 0x277C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277C14u;
label_277c14:
    // 0x277c14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277c18: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x277C18u;
    SET_GPR_U32(ctx, 31, 0x277C20u);
    ctx->pc = 0x277C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277C18u;
    // 0x277c1c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x277C18u, 0x277C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277C20u;
label_277c20:
    // 0x277c20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277c24: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x277C24u;
    SET_GPR_U32(ctx, 31, 0x277C2Cu);
    ctx->pc = 0x277C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277C24u;
    // 0x277c28: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x277C24u, 0x277C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277C2Cu;
label_277c2c:
    // 0x277c2c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x277c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_277c30:
    // 0x277c30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x277c30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277c34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x277c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277c38: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x277c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x277c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x277C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C3Cu;
        // 0x277c40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277C44u;
    // 0x277c44: 0x0  nop
    ctx->pc = 0x277c44u;
    // NOP
    ctx->pc = 0x277c48u;
}
