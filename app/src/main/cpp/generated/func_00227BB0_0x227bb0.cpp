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

// Function: func_00227BB0
// Address: 0x227bb0 - 0x227ca8
void func_00227BB0_0x227bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00227BB0_0x227bb0");
#endif

    switch (ctx->pc) {
        case 0x227c00u: goto label_227c00;
        case 0x227c2cu: goto label_227c2c;
        case 0x227c48u: goto label_227c48;
        case 0x227c54u: goto label_227c54;
        case 0x227c60u: goto label_227c60;
        default: break;
    }

    ctx->pc = 0x227bb0u;

    // 0x227bb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x227bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x227bb4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x227bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x227bb8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x227bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x227bbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227bc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227bc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227bc4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x227bc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x227bc8: 0xa203186a  sb          $v1, 0x186A($s0)
    ctx->pc = 0x227bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6250), (uint8_t)GPR_U32(ctx, 3));
    // 0x227bcc: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x227bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x227bd0: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x227bd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x227bd4: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x227bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x227bd8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x227BD8u;
    {
        const bool branch_taken_0x227bd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x227BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227BD8u;
        // 0x227bdc: 0xae0216d4  sw          $v0, 0x16D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227bd8) {
            ctx->pc = 0x227BF4u;
            goto label_227bf4;
        }
    }
    ctx->pc = 0x227BE0u;
    // 0x227be0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x227be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227be4: 0x10820014  beq         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x227BE4u;
    {
        const bool branch_taken_0x227be4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x227be4) {
            ctx->pc = 0x227C38u;
            goto label_227c38;
        }
    }
    ctx->pc = 0x227BECu;
    // 0x227bec: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x227BECu;
    {
        const bool branch_taken_0x227bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227BECu;
        // 0x227bf0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227bec) {
            ctx->pc = 0x227C94u;
            goto label_227c94;
        }
    }
    ctx->pc = 0x227BF4u;
label_227bf4:
    // 0x227bf4: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x227bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x227bf8: 0xc09d91a  jal         func_276468
    ctx->pc = 0x227BF8u;
    SET_GPR_U32(ctx, 31, 0x227C00u);
    ctx->pc = 0x227BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227BF8u;
    // 0x227bfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x227BF8u, 0x227C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C00u;
label_227c00:
    // 0x227c00: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x227c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x227c04: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x227c04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x227c08: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x227c08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x227c0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c10: 0x8c651eac  lw          $a1, 0x1EAC($v1)
    ctx->pc = 0x227c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7852)));
    // 0x227c14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x227c14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c18: 0x8c661eb0  lw          $a2, 0x1EB0($v1)
    ctx->pc = 0x227c18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7856)));
    // 0x227c1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x227c1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c20: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x227c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x227c24: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x227C24u;
    SET_GPR_U32(ctx, 31, 0x227C2Cu);
    ctx->pc = 0x227C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227C24u;
    // 0x227c28: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x227C24u, 0x227C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C2Cu;
label_227c2c:
    // 0x227c2c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x227c2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x227c30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x227c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x227c34: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x227c34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_227c38:
    // 0x227c38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x227c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x227c3c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x227c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x227c40: 0xc055f06  jal         func_157C18
    ctx->pc = 0x227C40u;
    SET_GPR_U32(ctx, 31, 0x227C48u);
    ctx->pc = 0x227C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227C40u;
    // 0x227c44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x227C40u, 0x227C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C48u;
label_227c48:
    // 0x227c48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c4c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x227C4Cu;
    SET_GPR_U32(ctx, 31, 0x227C54u);
    ctx->pc = 0x227C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227C4Cu;
    // 0x227c50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x227C4Cu, 0x227C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C54u;
label_227c54:
    // 0x227c54: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x227c54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x227c58: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x227C58u;
    SET_GPR_U32(ctx, 31, 0x227C60u);
    ctx->pc = 0x227C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227C58u;
    // 0x227c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x227C58u, 0x227C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C60u;
label_227c60:
    // 0x227c60: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x227c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227c64: 0x3c0143f2  lui         $at, 0x43F2
    ctx->pc = 0x227c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17394 << 16));
    // 0x227c68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x227c68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227c6c: 0x0  nop
    ctx->pc = 0x227c6cu;
    // NOP
    // 0x227c70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x227c70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227c74: 0x0  nop
    ctx->pc = 0x227c74u;
    // NOP
    // 0x227c78: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x227C78u;
    {
        const bool branch_taken_0x227c78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x227C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227C78u;
        // 0x227c7c: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227c78) {
            ctx->pc = 0x227C90u;
            goto label_227c90;
        }
    }
    ctx->pc = 0x227C80u;
    // 0x227c80: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x227c80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x227c84: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x227c84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x227c88: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x227c88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x227c8c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x227c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_227c90:
    // 0x227c90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x227c90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_227c94:
    // 0x227c94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227c98: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x227c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x227c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x227C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227C9Cu;
        // 0x227ca0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227CA4u;
    // 0x227ca4: 0x0  nop
    ctx->pc = 0x227ca4u;
    // NOP
    ctx->pc = 0x227ca8u;
}
