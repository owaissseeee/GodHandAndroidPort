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

// Function: func_00184A40
// Address: 0x184a40 - 0x184b60
void func_00184A40_0x184a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00184A40_0x184a40");
#endif

    switch (ctx->pc) {
        case 0x184b34u: goto label_184b34;
        default: break;
    }

    ctx->pc = 0x184a40u;

    // 0x184a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x184a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x184a44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x184a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x184a48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x184a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x184a4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x184a4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184a50: 0x8602061e  lh          $v0, 0x61E($s0)
    ctx->pc = 0x184a50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1566)));
    // 0x184a54: 0x8603062c  lh          $v1, 0x62C($s0)
    ctx->pc = 0x184a54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1580)));
    // 0x184a58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x184a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x184a5c: 0x0  nop
    ctx->pc = 0x184a5cu;
    // NOP
    // 0x184a60: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x184a60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x184a64: 0x92050655  lbu         $a1, 0x655($s0)
    ctx->pc = 0x184a64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1621)));
    // 0x184a68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x184a68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184a6c: 0x0  nop
    ctx->pc = 0x184a6cu;
    // NOP
    // 0x184a70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x184a70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x184a74: 0x2ca40005  sltiu       $a0, $a1, 0x5
    ctx->pc = 0x184a74u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x184a78: 0x0  nop
    ctx->pc = 0x184a78u;
    // NOP
    // 0x184a7c: 0x0  nop
    ctx->pc = 0x184a7cu;
    // NOP
    // 0x184a80: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x184a80u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x184a84: 0x10800031  beqz        $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x184A84u;
    {
        const bool branch_taken_0x184a84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x184A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184A84u;
        // 0x184a88: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184a84) {
            ctx->pc = 0x184B4Cu;
            goto label_184b4c;
        }
    }
    ctx->pc = 0x184A8Cu;
    // 0x184a8c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x184a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x184a90: 0x24422d60  addiu       $v0, $v0, 0x2D60
    ctx->pc = 0x184a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11616));
    // 0x184a94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x184a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x184a98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x184a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184a9c: 0x800008  jr          $a0
    ctx->pc = 0x184A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x184AA4u: goto label_184aa4;
            case 0x184AC8u: goto label_184ac8;
            case 0x184AECu: goto label_184aec;
            case 0x184B10u: goto label_184b10;
            case 0x184B44u: goto label_184b44;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184A9Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x184AA4u;
label_184aa4:
    // 0x184aa4: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x184aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x184aa8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x184aa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184aac: 0x0  nop
    ctx->pc = 0x184aacu;
    // NOP
    // 0x184ab0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x184ab0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184ab4: 0x0  nop
    ctx->pc = 0x184ab4u;
    // NOP
    // 0x184ab8: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x184AB8u;
    {
        const bool branch_taken_0x184ab8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x184ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184AB8u;
        // 0x184abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ab8) {
            ctx->pc = 0x184B4Cu;
            goto label_184b4c;
        }
    }
    ctx->pc = 0x184AC0u;
    // 0x184ac0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x184AC0u;
    {
        const bool branch_taken_0x184ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184AC0u;
        // 0x184ac4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ac0) {
            ctx->pc = 0x184B2Cu;
            goto label_184b2c;
        }
    }
    ctx->pc = 0x184AC8u;
label_184ac8:
    // 0x184ac8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x184ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x184acc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x184accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184ad0: 0x0  nop
    ctx->pc = 0x184ad0u;
    // NOP
    // 0x184ad4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x184ad4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184ad8: 0x0  nop
    ctx->pc = 0x184ad8u;
    // NOP
    // 0x184adc: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x184ADCu;
    {
        const bool branch_taken_0x184adc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x184AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184ADCu;
        // 0x184ae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184adc) {
            ctx->pc = 0x184B4Cu;
            goto label_184b4c;
        }
    }
    ctx->pc = 0x184AE4u;
    // 0x184ae4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x184AE4u;
    {
        const bool branch_taken_0x184ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184AE4u;
        // 0x184ae8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ae4) {
            ctx->pc = 0x184B2Cu;
            goto label_184b2c;
        }
    }
    ctx->pc = 0x184AECu;
label_184aec:
    // 0x184aec: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x184aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x184af0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x184af0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184af4: 0x0  nop
    ctx->pc = 0x184af4u;
    // NOP
    // 0x184af8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x184af8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184afc: 0x0  nop
    ctx->pc = 0x184afcu;
    // NOP
    // 0x184b00: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x184B00u;
    {
        const bool branch_taken_0x184b00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x184B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B00u;
        // 0x184b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184b00) {
            ctx->pc = 0x184B4Cu;
            goto label_184b4c;
        }
    }
    ctx->pc = 0x184B08u;
    // 0x184b08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x184B08u;
    {
        const bool branch_taken_0x184b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B08u;
        // 0x184b0c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184b08) {
            ctx->pc = 0x184B2Cu;
            goto label_184b2c;
        }
    }
    ctx->pc = 0x184B10u;
label_184b10:
    // 0x184b10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x184b10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184b14: 0x0  nop
    ctx->pc = 0x184b14u;
    // NOP
    // 0x184b18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x184b18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184b1c: 0x0  nop
    ctx->pc = 0x184b1cu;
    // NOP
    // 0x184b20: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x184B20u;
    {
        const bool branch_taken_0x184b20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x184B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B20u;
        // 0x184b24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184b20) {
            ctx->pc = 0x184B4Cu;
            goto label_184b4c;
        }
    }
    ctx->pc = 0x184B28u;
    // 0x184b28: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x184b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_184b2c:
    // 0x184b2c: 0xc0614ba  jal         func_1852E8
    ctx->pc = 0x184B2Cu;
    SET_GPR_U32(ctx, 31, 0x184B34u);
    ctx->pc = 0x1852E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1852E8u, 0x184B2Cu, 0x184B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184B34u;
label_184b34:
    // 0x184b34: 0x92020655  lbu         $v0, 0x655($s0)
    ctx->pc = 0x184b34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1621)));
    // 0x184b38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x184b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x184b3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x184B3Cu;
    {
        const bool branch_taken_0x184b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B3Cu;
        // 0x184b40: 0xa2020655  sb          $v0, 0x655($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1621), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184b3c) {
            ctx->pc = 0x184B4Cu;
            goto label_184b4c;
        }
    }
    ctx->pc = 0x184B44u;
label_184b44:
    // 0x184b44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x184b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184b48: 0xa202065c  sb          $v0, 0x65C($s0)
    ctx->pc = 0x184b48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1628), (uint8_t)GPR_U32(ctx, 2));
label_184b4c:
    // 0x184b4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x184b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184b50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184b54: 0x3e00008  jr          $ra
    ctx->pc = 0x184B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B54u;
        // 0x184b58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184B5Cu;
    // 0x184b5c: 0x0  nop
    ctx->pc = 0x184b5cu;
    // NOP
    ctx->pc = 0x184b60u;
}
