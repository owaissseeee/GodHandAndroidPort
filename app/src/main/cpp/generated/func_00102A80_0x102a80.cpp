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

// Function: func_00102A80
// Address: 0x102a80 - 0x102bd8
void func_00102A80_0x102a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00102A80_0x102a80");
#endif

    switch (ctx->pc) {
        case 0x102a9cu: goto label_102a9c;
        case 0x102ae8u: goto label_102ae8;
        case 0x102b8cu: goto label_102b8c;
        case 0x102ba0u: goto label_102ba0;
        case 0x102bacu: goto label_102bac;
        case 0x102bb8u: goto label_102bb8;
        case 0x102bc0u: goto label_102bc0;
        default: break;
    }

    ctx->pc = 0x102a80u;

    // 0x102a80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x102a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x102a84: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x102a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x102a88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x102a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x102a8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x102a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102a90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102a94: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x102A94u;
    SET_GPR_U32(ctx, 31, 0x102A9Cu);
    ctx->pc = 0x102A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102A94u;
    // 0x102a98: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x102A94u, 0x102A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102A9Cu;
label_102a9c:
    // 0x102a9c: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x102a9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x102aa0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x102AA0u;
    {
        const bool branch_taken_0x102aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x102AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102AA0u;
        // 0x102aa4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102aa0) {
            ctx->pc = 0x102ABCu;
            goto label_102abc;
        }
    }
    ctx->pc = 0x102AA8u;
    // 0x102aa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x102aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102aac: 0x50620012  beql        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x102AACu;
    {
        const bool branch_taken_0x102aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x102aac) {
            ctx->pc = 0x102AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102AACu;
            // 0x102ab0: 0x9222061f  lbu         $v0, 0x61F($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1567)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102AF8u;
            goto label_102af8;
        }
    }
    ctx->pc = 0x102AB4u;
    // 0x102ab4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x102AB4u;
    {
        const bool branch_taken_0x102ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x102ab4) {
            ctx->pc = 0x102BB8u;
            goto label_102bb8;
        }
    }
    ctx->pc = 0x102ABCu;
label_102abc:
    // 0x102abc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x102abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x102ac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ac4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x102ac4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x102ac8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x102ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x102acc: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x102accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x102ad0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x102ad0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ad4: 0x8c460020  lw          $a2, 0x20($v0)
    ctx->pc = 0x102ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x102ad8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x102ad8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102adc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x102adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x102ae0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x102AE0u;
    SET_GPR_U32(ctx, 31, 0x102AE8u);
    ctx->pc = 0x102AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102AE0u;
    // 0x102ae4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x102AE0u, 0x102AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102AE8u;
label_102ae8:
    // 0x102ae8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x102ae8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x102aec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x102aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x102af0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x102af0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x102af4: 0x9222061f  lbu         $v0, 0x61F($s1)
    ctx->pc = 0x102af4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1567)));
label_102af8:
    // 0x102af8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x102AF8u;
    {
        const bool branch_taken_0x102af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102af8) {
            ctx->pc = 0x102B90u;
            goto label_102b90;
        }
    }
    ctx->pc = 0x102B00u;
    // 0x102b00: 0xc6200608  lwc1        $f0, 0x608($s1)
    ctx->pc = 0x102b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x102b04: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x102b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x102b08: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x102b08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x102b0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x102b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x102b10: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x102b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x102b14: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x102b14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x102b18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x102b18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x102b1c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x102b1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x102b20: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x102b20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x102b24: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x102b24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x102b28: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x102b28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x102b2c: 0x0  nop
    ctx->pc = 0x102b2cu;
    // NOP
    // 0x102b30: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x102B30u;
    {
        const bool branch_taken_0x102b30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x102b30) {
            ctx->pc = 0x102B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102B30u;
            // 0x102b34: 0x46001846  mov.s       $f1, $f3 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x102B38u;
            goto label_102b38;
        }
    }
    ctx->pc = 0x102B38u;
label_102b38:
    // 0x102b38: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x102b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x102b3c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x102b3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x102b40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x102b40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x102b44: 0x3c013d2b  lui         $at, 0x3D2B
    ctx->pc = 0x102b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15659 << 16));
    // 0x102b48: 0x342192a6  ori         $at, $at, 0x92A6
    ctx->pc = 0x102b48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37542);
    // 0x102b4c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x102b4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x102b50: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x102b50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x102b54: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x102b54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x102b58: 0x0  nop
    ctx->pc = 0x102b58u;
    // NOP
    // 0x102b5c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x102B5Cu;
    {
        const bool branch_taken_0x102b5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x102b5c) {
            ctx->pc = 0x102B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102B5Cu;
            // 0x102b60: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x102B64u;
            goto label_102b64;
        }
    }
    ctx->pc = 0x102B64u;
label_102b64:
    // 0x102b64: 0xc6200604  lwc1        $f0, 0x604($s1)
    ctx->pc = 0x102b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x102b68: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x102b68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x102b6c: 0x0  nop
    ctx->pc = 0x102b6cu;
    // NOP
    // 0x102b70: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x102B70u;
    {
        const bool branch_taken_0x102b70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x102b70) {
            ctx->pc = 0x102B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102B70u;
            // 0x102b74: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x102B78u;
            goto label_102b78;
        }
    }
    ctx->pc = 0x102B78u;
label_102b78:
    // 0x102b78: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x102b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x102b7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x102b7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x102b80: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x102b80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x102b84: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x102B84u;
    SET_GPR_U32(ctx, 31, 0x102B8Cu);
    ctx->pc = 0x102B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B84u;
    // 0x102b88: 0xe6000104  swc1        $f0, 0x104($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x102B84u, 0x102B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B8Cu;
label_102b8c:
    // 0x102b8c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x102b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_102b90:
    // 0x102b90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x102b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x102b94: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x102b94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x102b98: 0xc055f06  jal         func_157C18
    ctx->pc = 0x102B98u;
    SET_GPR_U32(ctx, 31, 0x102BA0u);
    ctx->pc = 0x102B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B98u;
    // 0x102b9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x102B98u, 0x102BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102BA0u;
label_102ba0:
    // 0x102ba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ba4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x102BA4u;
    SET_GPR_U32(ctx, 31, 0x102BACu);
    ctx->pc = 0x102BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102BA4u;
    // 0x102ba8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x102BA4u, 0x102BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102BACu;
label_102bac:
    // 0x102bac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x102bacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x102bb0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x102BB0u;
    SET_GPR_U32(ctx, 31, 0x102BB8u);
    ctx->pc = 0x102BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102BB0u;
    // 0x102bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x102BB0u, 0x102BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102BB8u;
label_102bb8:
    // 0x102bb8: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x102BB8u;
    SET_GPR_U32(ctx, 31, 0x102BC0u);
    ctx->pc = 0x102BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102BB8u;
    // 0x102bbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1034E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1034E0u, 0x102BB8u, 0x102BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102BC0u;
label_102bc0:
    // 0x102bc0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x102bc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102bc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x102bc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102bc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x102bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102bcc: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x102bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x102bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x102BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BD0u;
        // 0x102bd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102BD8u;
}
