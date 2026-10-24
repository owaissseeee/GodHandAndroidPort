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

// Function: func_00281B40
// Address: 0x281b40 - 0x281c60
void func_00281B40_0x281b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00281B40_0x281b40");
#endif

    switch (ctx->pc) {
        case 0x281bccu: goto label_281bcc;
        case 0x281c14u: goto label_281c14;
        default: break;
    }

    ctx->pc = 0x281b40u;

    // 0x281b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x281b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x281b44: 0x2403026c  addiu       $v1, $zero, 0x26C
    ctx->pc = 0x281b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 620));
    // 0x281b48: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x281b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x281b4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x281b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x281b50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x281b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281b54: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x281b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x281b58: 0x5043003d  beql        $v0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x281B58u;
    {
        const bool branch_taken_0x281b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x281b58) {
            ctx->pc = 0x281B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281B58u;
            // 0x281b5c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281C50u;
            goto label_281c50;
        }
    }
    ctx->pc = 0x281B60u;
    // 0x281b60: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x281b60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x281b64: 0x5840003a  blezl       $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x281B64u;
    {
        const bool branch_taken_0x281b64 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x281b64) {
            ctx->pc = 0x281B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281B64u;
            // 0x281b68: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281C50u;
            goto label_281c50;
        }
    }
    ctx->pc = 0x281B6Cu;
    // 0x281b6c: 0x8e020670  lw          $v0, 0x670($s0)
    ctx->pc = 0x281b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
    // 0x281b70: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x281B70u;
    {
        const bool branch_taken_0x281b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281b70) {
            ctx->pc = 0x281B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281B70u;
            // 0x281b74: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281C50u;
            goto label_281c50;
        }
    }
    ctx->pc = 0x281B78u;
    // 0x281b78: 0x9c420060  lwu         $v0, 0x60($v0)
    ctx->pc = 0x281b78u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x281b7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x281b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x281b80: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x281B80u;
    {
        const bool branch_taken_0x281b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281b80) {
            ctx->pc = 0x281B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281B80u;
            // 0x281b84: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281C50u;
            goto label_281c50;
        }
    }
    ctx->pc = 0x281B88u;
    // 0x281b88: 0xc601054c  lwc1        $f1, 0x54C($s0)
    ctx->pc = 0x281b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281b8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x281b8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281b90: 0x0  nop
    ctx->pc = 0x281b90u;
    // NOP
    // 0x281b94: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x281b94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281b98: 0x0  nop
    ctx->pc = 0x281b98u;
    // NOP
    // 0x281b9c: 0x4503002c  bc1tl       . + 4 + (0x2C << 2)
    ctx->pc = 0x281B9Cu;
    {
        const bool branch_taken_0x281b9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x281b9c) {
            ctx->pc = 0x281BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281B9Cu;
            // 0x281ba0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281C50u;
            goto label_281c50;
        }
    }
    ctx->pc = 0x281BA4u;
    // 0x281ba4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x281ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x281ba8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x281ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281bac: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x281bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x281bb0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x281bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x281bb4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x281bb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281bb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x281bb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281bbc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x281bbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281bc0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x281bc0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281bc4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x281BC4u;
    SET_GPR_U32(ctx, 31, 0x281BCCu);
    ctx->pc = 0x281BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281BC4u;
    // 0x281bc8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x281BC4u, 0x281BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281BCCu;
label_281bcc:
    // 0x281bcc: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x281bccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x281bd0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x281bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x281bd4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x281bd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x281bd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x281BD8u;
    {
        const bool branch_taken_0x281bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281BD8u;
        // 0x281bdc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281bd8) {
            ctx->pc = 0x281BECu;
            goto label_281bec;
        }
    }
    ctx->pc = 0x281BE0u;
    // 0x281be0: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x281be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x281be4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x281BE4u;
    {
        const bool branch_taken_0x281be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281BE4u;
        // 0x281be8: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281be4) {
            ctx->pc = 0x281BF0u;
            goto label_281bf0;
        }
    }
    ctx->pc = 0x281BECu;
label_281bec:
    // 0x281bec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x281becu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281bf0:
    // 0x281bf0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x281BF0u;
    {
        const bool branch_taken_0x281bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281BF0u;
        // 0x281bf4: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281bf0) {
            ctx->pc = 0x281C14u;
            goto label_281c14;
        }
    }
    ctx->pc = 0x281BF8u;
    // 0x281bf8: 0x8c4700f0  lw          $a3, 0xF0($v0)
    ctx->pc = 0x281bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x281bfc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x281bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x281c00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x281c00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x281c04: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x281c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x281c08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x281c08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281c0c: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x281C0Cu;
    SET_GPR_U32(ctx, 31, 0x281C14u);
    ctx->pc = 0x281C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281C0Cu;
    // 0x281c10: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x281C0Cu, 0x281C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281C14u;
label_281c14:
    // 0x281c14: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x281c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x281c18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x281c18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281c1c: 0x86020548  lh          $v0, 0x548($s0)
    ctx->pc = 0x281c1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x281c20: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x281c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x281c24: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x281C24u;
    {
        const bool branch_taken_0x281c24 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x281C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281C24u;
        // 0x281c28: 0x96030548  lhu         $v1, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281c24) {
            ctx->pc = 0x281C34u;
            goto label_281c34;
        }
    }
    ctx->pc = 0x281C2Cu;
    // 0x281c2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x281C2Cu;
    {
        const bool branch_taken_0x281c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281C2Cu;
        // 0x281c30: 0xa603054a  sh          $v1, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281c2c) {
            ctx->pc = 0x281C38u;
            goto label_281c38;
        }
    }
    ctx->pc = 0x281C34u;
label_281c34:
    // 0x281c34: 0xa600054a  sh          $zero, 0x54A($s0)
    ctx->pc = 0x281c34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 0));
label_281c38:
    // 0x281c38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x281c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x281c3c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x281c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x281c40: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x281c40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x281c44: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x281c44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x281c48: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x281c48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x281c4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x281c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_281c50:
    // 0x281c50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x281c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281c54: 0x3e00008  jr          $ra
    ctx->pc = 0x281C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281C54u;
        // 0x281c58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281C5Cu;
    // 0x281c5c: 0x0  nop
    ctx->pc = 0x281c5cu;
    // NOP
    ctx->pc = 0x281c60u;
}
