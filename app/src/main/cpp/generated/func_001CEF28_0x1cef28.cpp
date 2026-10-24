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

// Function: func_001CEF28
// Address: 0x1cef28 - 0x1cf140
void func_001CEF28_0x1cef28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001CEF28_0x1cef28");
#endif

    switch (ctx->pc) {
        case 0x1cef4cu: goto label_1cef4c;
        case 0x1cef60u: goto label_1cef60;
        case 0x1cefc4u: goto label_1cefc4;
        case 0x1cefe8u: goto label_1cefe8;
        case 0x1ceff0u: goto label_1ceff0;
        case 0x1ceffcu: goto label_1ceffc;
        case 0x1cf07cu: goto label_1cf07c;
        case 0x1cf0a4u: goto label_1cf0a4;
        case 0x1cf0b0u: goto label_1cf0b0;
        case 0x1cf0bcu: goto label_1cf0bc;
        default: break;
    }

    ctx->pc = 0x1cef28u;

    // 0x1cef28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cef28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cef2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cef2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cef30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cef30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cef34: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x1cef34u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1cef38: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1cef38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1cef3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cef3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cef40: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1cef40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1cef44: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1CEF44u;
    SET_GPR_U32(ctx, 31, 0x1CEF4Cu);
    ctx->pc = 0x1CEF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEF44u;
    // 0x1cef48: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1CEF44u, 0x1CEF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEF4Cu;
label_1cef4c:
    // 0x1cef4c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1cef4cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x1cef50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cef50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cef54: 0xe61505a8  swc1        $f21, 0x5A8($s0)
    ctx->pc = 0x1cef54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
    // 0x1cef58: 0xc0560a2  jal         func_158288
    ctx->pc = 0x1CEF58u;
    SET_GPR_U32(ctx, 31, 0x1CEF60u);
    ctx->pc = 0x1CEF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEF58u;
    // 0x1cef5c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x1CEF58u, 0x1CEF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEF60u;
label_1cef60:
    // 0x1cef60: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1cef60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1cef64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cef64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cef68: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1CEF68u;
    {
        const bool branch_taken_0x1cef68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CEF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEF68u;
        // 0x1cef6c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cef68) {
            ctx->pc = 0x1CEFE0u;
            goto label_1cefe0;
        }
    }
    ctx->pc = 0x1CEF70u;
    // 0x1cef70: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CEF70u;
    {
        const bool branch_taken_0x1cef70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cef70) {
            ctx->pc = 0x1CEF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CEF70u;
            // 0x1cef74: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CEF88u;
            goto label_1cef88;
        }
    }
    ctx->pc = 0x1CEF78u;
    // 0x1cef78: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CEF78u;
    {
        const bool branch_taken_0x1cef78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cef78) {
            ctx->pc = 0x1CEF7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CEF78u;
            // 0x1cef7c: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CEFA0u;
            goto label_1cefa0;
        }
    }
    ctx->pc = 0x1CEF80u;
    // 0x1cef80: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1CEF80u;
    {
        const bool branch_taken_0x1cef80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEF80u;
        // 0x1cef84: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cef80) {
            ctx->pc = 0x1CF128u;
            goto label_1cf128;
        }
    }
    ctx->pc = 0x1CEF88u;
label_1cef88:
    // 0x1cef88: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1CEF88u;
    {
        const bool branch_taken_0x1cef88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CEF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEF88u;
        // 0x1cef8c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cef88) {
            ctx->pc = 0x1CF054u;
            goto label_1cf054;
        }
    }
    ctx->pc = 0x1CEF90u;
    // 0x1cef90: 0x10620040  beq         $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1CEF90u;
    {
        const bool branch_taken_0x1cef90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cef90) {
            ctx->pc = 0x1CF094u;
            goto label_1cf094;
        }
    }
    ctx->pc = 0x1CEF98u;
    // 0x1cef98: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1CEF98u;
    {
        const bool branch_taken_0x1cef98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEF98u;
        // 0x1cef9c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cef98) {
            ctx->pc = 0x1CF128u;
            goto label_1cf128;
        }
    }
    ctx->pc = 0x1CEFA0u;
label_1cefa0:
    // 0x1cefa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cefa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cefa4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cefa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cefa8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cefa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cefac: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1cefacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1cefb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cefb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cefb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cefb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cefb8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cefb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cefbc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1CEFBCu;
    SET_GPR_U32(ctx, 31, 0x1CEFC4u);
    ctx->pc = 0x1CEFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEFBCu;
    // 0x1cefc0: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1CEFBCu, 0x1CEFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEFC4u;
label_1cefc4:
    // 0x1cefc4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1cefc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1cefc8: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x1cefc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x1cefcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cefccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cefd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cefd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cefd4: 0xa6000568  sh          $zero, 0x568($s0)
    ctx->pc = 0x1cefd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cefd8: 0xe6000674  swc1        $f0, 0x674($s0)
    ctx->pc = 0x1cefd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1652), bits); }
    // 0x1cefdc: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1cefdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1cefe0:
    // 0x1cefe0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1CEFE0u;
    SET_GPR_U32(ctx, 31, 0x1CEFE8u);
    ctx->pc = 0x1CEFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEFE0u;
    // 0x1cefe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1CEFE0u, 0x1CEFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEFE8u;
label_1cefe8:
    // 0x1cefe8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1CEFE8u;
    SET_GPR_U32(ctx, 31, 0x1CEFF0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1CEFE8u, 0x1CEFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEFF0u;
label_1ceff0:
    // 0x1ceff0: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x1ceff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1ceff4: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x1CEFF4u;
    SET_GPR_U32(ctx, 31, 0x1CEFFCu);
    ctx->pc = 0x1CEFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEFF4u;
    // 0x1ceff8: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x1CEFF4u, 0x1CEFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEFFCu;
label_1ceffc:
    // 0x1ceffc: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1ceffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1cf000: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cf000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cf004: 0x0  nop
    ctx->pc = 0x1cf004u;
    // NOP
    // 0x1cf008: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cf008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf00c: 0x0  nop
    ctx->pc = 0x1cf00cu;
    // NOP
    // 0x1cf010: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF010u;
    {
        const bool branch_taken_0x1cf010 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CF014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF010u;
        // 0x1cf014: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf010) {
            ctx->pc = 0x1CF01Cu;
            goto label_1cf01c;
        }
    }
    ctx->pc = 0x1CF018u;
    // 0x1cf018: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x1cf018u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
label_1cf01c:
    // 0x1cf01c: 0x86020568  lh          $v0, 0x568($s0)
    ctx->pc = 0x1cf01cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x1cf020: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x1CF020u;
    {
        const bool branch_taken_0x1cf020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf020) {
            ctx->pc = 0x1CF024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF020u;
            // 0x1cf024: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF128u;
            goto label_1cf128;
        }
    }
    ctx->pc = 0x1CF028u;
    // 0x1cf028: 0xc6000674  lwc1        $f0, 0x674($s0)
    ctx->pc = 0x1cf028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf02c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1cf02cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cf030: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x1cf030u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x1cf034: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1cf034u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf038: 0x0  nop
    ctx->pc = 0x1cf038u;
    // NOP
    // 0x1cf03c: 0x45000039  bc1f        . + 4 + (0x39 << 2)
    ctx->pc = 0x1CF03Cu;
    {
        const bool branch_taken_0x1cf03c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CF040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF03Cu;
        // 0x1cf040: 0xe6000674  swc1        $f0, 0x674($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1652), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf03c) {
            ctx->pc = 0x1CF124u;
            goto label_1cf124;
        }
    }
    ctx->pc = 0x1CF044u;
    // 0x1cf044: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1cf044u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1cf048: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cf048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cf04c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1CF04Cu;
    {
        const bool branch_taken_0x1cf04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF04Cu;
        // 0x1cf050: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf04c) {
            ctx->pc = 0x1CF124u;
            goto label_1cf124;
        }
    }
    ctx->pc = 0x1CF054u;
label_1cf054:
    // 0x1cf054: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cf054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cf058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf05c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cf05cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cf060: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cf060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf064: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x1cf064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1cf068: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cf068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf06c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cf06cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf070: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cf070u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf074: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1CF074u;
    SET_GPR_U32(ctx, 31, 0x1CF07Cu);
    ctx->pc = 0x1CF078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF074u;
    // 0x1cf078: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1CF074u, 0x1CF07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF07Cu;
label_1cf07c:
    // 0x1cf07c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1cf07cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1cf080: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x1cf080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x1cf084: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cf084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf088: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cf088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cf08c: 0xe6000674  swc1        $f0, 0x674($s0)
    ctx->pc = 0x1cf08cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1652), bits); }
    // 0x1cf090: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1cf090u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1cf094:
    // 0x1cf094: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cf094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cf098: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1cf098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1cf09c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1CF09Cu;
    SET_GPR_U32(ctx, 31, 0x1CF0A4u);
    ctx->pc = 0x1CF0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF09Cu;
    // 0x1cf0a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1CF09Cu, 0x1CF0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0A4u;
label_1cf0a4:
    // 0x1cf0a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf0a8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x1CF0A8u;
    SET_GPR_U32(ctx, 31, 0x1CF0B0u);
    ctx->pc = 0x1CF0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0A8u;
    // 0x1cf0ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x1CF0A8u, 0x1CF0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0B0u;
label_1cf0b0:
    // 0x1cf0b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1cf0b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1cf0b4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1CF0B4u;
    SET_GPR_U32(ctx, 31, 0x1CF0BCu);
    ctx->pc = 0x1CF0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0B4u;
    // 0x1cf0b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1CF0B4u, 0x1CF0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0BCu;
label_1cf0bc:
    // 0x1cf0bc: 0xc6000674  lwc1        $f0, 0x674($s0)
    ctx->pc = 0x1cf0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf0c0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1cf0c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cf0c4: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x1cf0c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x1cf0c8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1cf0c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf0cc: 0x0  nop
    ctx->pc = 0x1cf0ccu;
    // NOP
    // 0x1cf0d0: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x1CF0D0u;
    {
        const bool branch_taken_0x1cf0d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CF0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF0D0u;
        // 0x1cf0d4: 0xe6000674  swc1        $f0, 0x674($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1652), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf0d0) {
            ctx->pc = 0x1CF124u;
            goto label_1cf124;
        }
    }
    ctx->pc = 0x1CF0D8u;
    // 0x1cf0d8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1cf0d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1cf0dc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1cf0dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1cf0e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cf0e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf0e4: 0xc601024c  lwc1        $f1, 0x24C($s0)
    ctx->pc = 0x1cf0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf0e8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1cf0e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1cf0ec: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x1cf0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1cf0f0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1cf0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1cf0f4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1cf0f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cf0f8: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x1cf0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    // 0x1cf0fc: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1cf0fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf100: 0x0  nop
    ctx->pc = 0x1cf100u;
    // NOP
    // 0x1cf104: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF104u;
    {
        const bool branch_taken_0x1cf104 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CF108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF104u;
        // 0x1cf108: 0xe601024c  swc1        $f1, 0x24C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf104) {
            ctx->pc = 0x1CF124u;
            goto label_1cf124;
        }
    }
    ctx->pc = 0x1CF10Cu;
    // 0x1cf10c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cf10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf110: 0xe602024c  swc1        $f2, 0x24C($s0)
    ctx->pc = 0x1cf110u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x1cf114: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x1cf114u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cf118: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1cf118u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf11c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1cf11cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf120: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1cf120u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1cf124:
    // 0x1cf124: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cf124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cf128:
    // 0x1cf128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf12c: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x1cf12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1cf130: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1cf130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cf134: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF134u;
        // 0x1cf138: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF13Cu;
    // 0x1cf13c: 0x0  nop
    ctx->pc = 0x1cf13cu;
    // NOP
    ctx->pc = 0x1cf140u;
}
