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

// Function: cSnd_BgmHitBeSet
// Address: 0x2d2c18 - 0x2d2cf0
void cSnd_BgmHitBeSet_0x2d2c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_BgmHitBeSet_0x2d2c18");
#endif

    switch (ctx->pc) {
        case 0x2d2c4cu: goto label_2d2c4c;
        case 0x2d2c98u: goto label_2d2c98;
        default: break;
    }

    ctx->pc = 0x2d2c18u;

    // 0x2d2c18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d2c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d2c1c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d2c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2d2c20: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d2c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d2c24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d2c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2c28: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d2c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2d2c2c: 0x30d1ffff  andi        $s1, $a2, 0xFFFF
    ctx->pc = 0x2d2c2cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2d2c30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d2c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d2c34: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x2d2c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2d2c38: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2D2C38u;
    {
        const bool branch_taken_0x2d2c38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C38u;
        // 0x2d2c3c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2c38) {
            ctx->pc = 0x2D2CD4u;
            goto label_2d2cd4;
        }
    }
    ctx->pc = 0x2D2C40u;
    // 0x2d2c40: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2d2c40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2d2c44: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x2D2C44u;
    SET_GPR_U32(ctx, 31, 0x2D2C4Cu);
    ctx->pc = 0x2D2C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2C44u;
    // 0x2d2c48: 0x24a5d100  addiu       $a1, $a1, -0x2F00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x2D2C44u, 0x2D2C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2C4Cu;
label_2d2c4c:
    // 0x2d2c4c: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D2C4Cu;
    {
        const bool branch_taken_0x2d2c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2c4c) {
            ctx->pc = 0x2D2C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2C4Cu;
            // 0x2d2c50: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2CD8u;
            goto label_2d2cd8;
        }
    }
    ctx->pc = 0x2D2C54u;
    // 0x2d2c54: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x2d2c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2d2c58: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x2d2c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x2d2c5c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2d2c5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2d2c60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d2c60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d2c64: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2d2c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2c68: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2d2c68u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2c6c: 0x0  nop
    ctx->pc = 0x2d2c6cu;
    // NOP
    // 0x2d2c70: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
    ctx->pc = 0x2D2C70u;
    {
        const bool branch_taken_0x2d2c70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2c70) {
            ctx->pc = 0x2D2C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2C70u;
            // 0x2d2c74: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2CD8u;
            goto label_2d2cd8;
        }
    }
    ctx->pc = 0x2D2C78u;
    // 0x2d2c78: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x2d2c78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d2c7c: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D2C7Cu;
    {
        const bool branch_taken_0x2d2c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2c7c) {
            ctx->pc = 0x2D2C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2C7Cu;
            // 0x2d2c80: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2CD8u;
            goto label_2d2cd8;
        }
    }
    ctx->pc = 0x2D2C84u;
    // 0x2d2c84: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x2d2c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2d2c88: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D2C88u;
    {
        const bool branch_taken_0x2d2c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C88u;
        // 0x2d2c8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2c88) {
            ctx->pc = 0x2D2CD4u;
            goto label_2d2cd4;
        }
    }
    ctx->pc = 0x2D2C90u;
    // 0x2d2c90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d2c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2c94: 0x0  nop
    ctx->pc = 0x2d2c94u;
    // NOP
label_2d2c98:
    // 0x2d2c98: 0x80820028  lb          $v0, 0x28($a0)
    ctx->pc = 0x2d2c98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2d2c9c: 0x54510008  bnel        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D2C9Cu;
    {
        const bool branch_taken_0x2d2c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2d2c9c) {
            ctx->pc = 0x2D2CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2C9Cu;
            // 0x2d2ca0: 0x8e030024  lw          $v1, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2CC0u;
            goto label_2d2cc0;
        }
    }
    ctx->pc = 0x2D2CA4u;
    // 0x2d2ca4: 0x16460003  bne         $s2, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2CA4u;
    {
        const bool branch_taken_0x2d2ca4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 6));
        ctx->pc = 0x2D2CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2CA4u;
        // 0x2d2ca8: 0x90820029  lbu         $v0, 0x29($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 41)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2ca4) {
            ctx->pc = 0x2D2CB4u;
            goto label_2d2cb4;
        }
    }
    ctx->pc = 0x2D2CACu;
    // 0x2d2cac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2CACu;
    {
        const bool branch_taken_0x2d2cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2CACu;
        // 0x2d2cb0: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2cac) {
            ctx->pc = 0x2D2CB8u;
            goto label_2d2cb8;
        }
    }
    ctx->pc = 0x2D2CB4u;
label_2d2cb4:
    // 0x2d2cb4: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x2d2cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
label_2d2cb8:
    // 0x2d2cb8: 0xa0820029  sb          $v0, 0x29($a0)
    ctx->pc = 0x2d2cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d2cbc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x2d2cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2d2cc0:
    // 0x2d2cc0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2d2cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d2cc4: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x2d2cc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d2cc8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2d2cc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d2ccc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2D2CCCu;
    {
        const bool branch_taken_0x2d2ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2CCCu;
        // 0x2d2cd0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2ccc) {
            ctx->pc = 0x2D2C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2c98;
        }
    }
    ctx->pc = 0x2D2CD4u;
label_2d2cd4:
    // 0x2d2cd4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d2cd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d2cd8:
    // 0x2d2cd8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d2cd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2cdc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d2cdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2ce0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d2ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2CE4u;
        // 0x2d2ce8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2CECu;
    // 0x2d2cec: 0x0  nop
    ctx->pc = 0x2d2cecu;
    // NOP
    ctx->pc = 0x2d2cf0u;
}
