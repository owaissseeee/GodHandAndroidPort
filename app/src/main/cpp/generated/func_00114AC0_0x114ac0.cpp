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

// Function: func_00114AC0
// Address: 0x114ac0 - 0x114cb8
void func_00114AC0_0x114ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00114AC0_0x114ac0");
#endif

    switch (ctx->pc) {
        case 0x114b2cu: goto label_114b2c;
        case 0x114b44u: goto label_114b44;
        case 0x114b88u: goto label_114b88;
        case 0x114b94u: goto label_114b94;
        case 0x114c0cu: goto label_114c0c;
        case 0x114c8cu: goto label_114c8c;
        case 0x114c98u: goto label_114c98;
        default: break;
    }

    ctx->pc = 0x114ac0u;

    // 0x114ac0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x114ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x114ac4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x114ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x114ac8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x114ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x114acc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x114accu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114ad0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x114ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x114ad4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114ad8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x114ad8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x114adc: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x114adcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x114ae0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x114AE0u;
    {
        const bool branch_taken_0x114ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114AE0u;
        // 0x114ae4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ae0) {
            ctx->pc = 0x114AF8u;
            goto label_114af8;
        }
    }
    ctx->pc = 0x114AE8u;
    // 0x114ae8: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x114AE8u;
    {
        const bool branch_taken_0x114ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x114AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114AE8u;
        // 0x114aec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ae8) {
            ctx->pc = 0x114B6Cu;
            goto label_114b6c;
        }
    }
    ctx->pc = 0x114AF0u;
    // 0x114af0: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x114AF0u;
    {
        const bool branch_taken_0x114af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114AF0u;
        // 0x114af4: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114af0) {
            ctx->pc = 0x114CA0u;
            goto label_114ca0;
        }
    }
    ctx->pc = 0x114AF8u;
label_114af8:
    // 0x114af8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x114af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x114afc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114b00: 0xa64005e0  sh          $zero, 0x5E0($s2)
    ctx->pc = 0x114b00u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x114b04: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x114b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x114b08: 0xa64005e2  sh          $zero, 0x5E2($s2)
    ctx->pc = 0x114b08u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1506), (uint16_t)GPR_U32(ctx, 0));
    // 0x114b0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x114b0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114b10: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x114b10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x114b14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x114b14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114b18: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x114b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x114b1c: 0x8c46004c  lw          $a2, 0x4C($v0)
    ctx->pc = 0x114b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x114b20: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x114b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x114b24: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x114B24u;
    SET_GPR_U32(ctx, 31, 0x114B2Cu);
    ctx->pc = 0x114B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114B24u;
    // 0x114b28: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x114B24u, 0x114B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114B2Cu;
label_114b2c:
    // 0x114b2c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x114b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x114b30: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x114b30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x114b34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x114b34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x114b38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114b3c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x114B3Cu;
    SET_GPR_U32(ctx, 31, 0x114B44u);
    ctx->pc = 0x114B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114B3Cu;
    // 0x114b40: 0x26450580  addiu       $a1, $s2, 0x580 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x114B3Cu, 0x114B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114B44u;
label_114b44:
    // 0x114b44: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x114b44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x114b48: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x114b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
    // 0x114b4c: 0x34214ff3  ori         $at, $at, 0x4FF3
    ctx->pc = 0x114b4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20467);
    // 0x114b50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x114b50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114b54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x114b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x114b58: 0xae4015b4  sw          $zero, 0x15B4($s2)
    ctx->pc = 0x114b58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5556), GPR_U32(ctx, 0));
    // 0x114b5c: 0xe6401598  swc1        $f0, 0x1598($s2)
    ctx->pc = 0x114b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5528), bits); }
    // 0x114b60: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x114b60u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x114b64: 0xe6401590  swc1        $f0, 0x1590($s2)
    ctx->pc = 0x114b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5520), bits); }
    // 0x114b68: 0xe6401594  swc1        $f0, 0x1594($s2)
    ctx->pc = 0x114b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5524), bits); }
label_114b6c:
    // 0x114b6c: 0x96420434  lhu         $v0, 0x434($s2)
    ctx->pc = 0x114b6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1076)));
    // 0x114b70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114b74: 0x26501590  addiu       $s0, $s2, 0x1590
    ctx->pc = 0x114b74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5520));
    // 0x114b78: 0x26510490  addiu       $s1, $s2, 0x490
    ctx->pc = 0x114b78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
    // 0x114b7c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x114b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x114b80: 0xc055f06  jal         func_157C18
    ctx->pc = 0x114B80u;
    SET_GPR_U32(ctx, 31, 0x114B88u);
    ctx->pc = 0x114B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114B80u;
    // 0x114b84: 0xa6420434  sh          $v0, 0x434($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x114B80u, 0x114B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114B88u;
label_114b88:
    // 0x114b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x114b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114b8c: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x114B8Cu;
    SET_GPR_U32(ctx, 31, 0x114B94u);
    ctx->pc = 0x114B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114B8Cu;
    // 0x114b90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x114B8Cu, 0x114B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114B94u;
label_114b94:
    // 0x114b94: 0xc6411588  lwc1        $f1, 0x1588($s2)
    ctx->pc = 0x114b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x114b98: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x114b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x114b9c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x114b9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x114ba0: 0x0  nop
    ctx->pc = 0x114ba0u;
    // NOP
    // 0x114ba4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x114ba4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x114ba8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x114ba8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x114bac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x114bacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x114bb0: 0x0  nop
    ctx->pc = 0x114bb0u;
    // NOP
    // 0x114bb4: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x114BB4u;
    {
        const bool branch_taken_0x114bb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x114bb4) {
            ctx->pc = 0x114BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114BB4u;
            // 0x114bb8: 0xae4015b4  sw          $zero, 0x15B4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 5556), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114BE0u;
            goto label_114be0;
        }
    }
    ctx->pc = 0x114BBCu;
    // 0x114bbc: 0x8e4215b4  lw          $v0, 0x15B4($s2)
    ctx->pc = 0x114bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5556)));
    // 0x114bc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x114bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x114bc4: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x114bc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x114bc8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x114BC8u;
    {
        const bool branch_taken_0x114bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x114BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114BC8u;
        // 0x114bcc: 0xae4215b4  sw          $v0, 0x15B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114bc8) {
            ctx->pc = 0x114BE0u;
            goto label_114be0;
        }
    }
    ctx->pc = 0x114BD0u;
    // 0x114bd0: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x114bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x114bd4: 0xa24002f5  sb          $zero, 0x2F5($s2)
    ctx->pc = 0x114bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x114bd8: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x114bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x114bdc: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x114bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_114be0:
    // 0x114be0: 0x52110008  beql        $s0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x114BE0u;
    {
        const bool branch_taken_0x114be0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        if (branch_taken_0x114be0) {
            ctx->pc = 0x114BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114BE0u;
            // 0x114be4: 0x8e4400f0  lw          $a0, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114C04u;
            goto label_114c04;
        }
    }
    ctx->pc = 0x114BE8u;
    // 0x114be8: 0xc6400490  lwc1        $f0, 0x490($s2)
    ctx->pc = 0x114be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x114bec: 0xe6401590  swc1        $f0, 0x1590($s2)
    ctx->pc = 0x114becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5520), bits); }
    // 0x114bf0: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x114bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x114bf4: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x114bf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x114bf8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x114bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x114bfc: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x114bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x114c00: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x114c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_114c04:
    // 0x114c04: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x114C04u;
    SET_GPR_U32(ctx, 31, 0x114C0Cu);
    ctx->pc = 0x114C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114C04u;
    // 0x114c08: 0x26450580  addiu       $a1, $s2, 0x580 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x114C04u, 0x114C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114C0Cu;
label_114c0c:
    // 0x114c0c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x114c0cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x114c10: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x114c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x114c14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x114c14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114c18: 0x0  nop
    ctx->pc = 0x114c18u;
    // NOP
    // 0x114c1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x114c1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x114c20: 0x0  nop
    ctx->pc = 0x114c20u;
    // NOP
    // 0x114c24: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x114C24u;
    {
        const bool branch_taken_0x114c24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x114c24) {
            ctx->pc = 0x114C3Cu;
            goto label_114c3c;
        }
    }
    ctx->pc = 0x114C2Cu;
    // 0x114c2c: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x114c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x114c30: 0xa24002f5  sb          $zero, 0x2F5($s2)
    ctx->pc = 0x114c30u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x114c34: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x114c34u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x114c38: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x114c38u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_114c3c:
    // 0x114c3c: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x114c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
    // 0x114c40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x114c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114c44: 0xae400330  sw          $zero, 0x330($s2)
    ctx->pc = 0x114c44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 816), GPR_U32(ctx, 0));
    // 0x114c48: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x114c48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x114c4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x114c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x114c50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x114c50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114c54: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x114C54u;
    {
        const bool branch_taken_0x114c54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x114C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C54u;
        // 0x114c58: 0xae400334  sw          $zero, 0x334($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 820), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114c54) {
            ctx->pc = 0x114C64u;
            goto label_114c64;
        }
    }
    ctx->pc = 0x114C5Cu;
    // 0x114c5c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x114c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x114c60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x114c60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_114c64:
    // 0x114c64: 0x0  nop
    ctx->pc = 0x114c64u;
    // NOP
    // 0x114c68: 0xe6400338  swc1        $f0, 0x338($s2)
    ctx->pc = 0x114c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 824), bits); }
    // 0x114c6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x114c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x114c70: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x114c70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x114c74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114c78: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x114c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x114c7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x114c7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114c80: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x114c80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x114c84: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x114C84u;
    SET_GPR_U32(ctx, 31, 0x114C8Cu);
    ctx->pc = 0x114C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114C84u;
    // 0x114c88: 0xe6400338  swc1        $f0, 0x338($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 824), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x114C84u, 0x114C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114C8Cu;
label_114c8c:
    // 0x114c8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114c90: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x114C90u;
    SET_GPR_U32(ctx, 31, 0x114C98u);
    ctx->pc = 0x114C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114C90u;
    // 0x114c94: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x114C90u, 0x114C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114C98u;
label_114c98:
    // 0x114c98: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x114c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x114c9c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x114c9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_114ca0:
    // 0x114ca0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x114ca0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114ca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114ca8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x114ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x114cac: 0x3e00008  jr          $ra
    ctx->pc = 0x114CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114CACu;
        // 0x114cb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114CB4u;
    // 0x114cb4: 0x0  nop
    ctx->pc = 0x114cb4u;
    // NOP
    ctx->pc = 0x114cb8u;
}
