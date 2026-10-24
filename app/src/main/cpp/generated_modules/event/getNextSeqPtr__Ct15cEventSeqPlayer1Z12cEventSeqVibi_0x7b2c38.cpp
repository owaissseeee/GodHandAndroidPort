#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: getNextSeqPtr__Ct15cEventSeqPlayer1Z12cEventSeqVibi
// Address: 0x7b2c38 - 0x7b2dc8
void getNextSeqPtr__Ct15cEventSeqPlayer1Z12cEventSeqVibi_0x7b2c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getNextSeqPtr__Ct15cEventSeqPlayer1Z12cEventSeqVibi_0x7b2c38");
#endif

    switch (ctx->pc) {
        case 0x7b2c7cu: goto label_7b2c7c;
        case 0x7b2c8cu: goto label_7b2c8c;
        case 0x7b2c9cu: goto label_7b2c9c;
        case 0x7b2cc8u: goto label_7b2cc8;
        default: break;
    }

    ctx->pc = 0x7b2c38u;

    // 0x7b2c38: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7b2c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7b2c3c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x7b2c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x7b2c40: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7b2c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7b2c44: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x7b2c44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2c48: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7b2c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7b2c4c: 0x3c10007b  lui         $s0, 0x7B
    ctx->pc = 0x7b2c4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)123 << 16));
    // 0x7b2c50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x7b2c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x7b2c54: 0x158e00  sll         $s1, $s5, 24
    ctx->pc = 0x7b2c54u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 24));
    // 0x7b2c58: 0x261058d8  addiu       $s0, $s0, 0x58D8
    ctx->pc = 0x7b2c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22744));
    // 0x7b2c5c: 0x118e03  sra         $s1, $s1, 24
    ctx->pc = 0x7b2c5cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 24));
    // 0x7b2c60: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x7b2c60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2c64: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7b2c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7b2c68: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x7b2c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x7b2c6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b2c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2c70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b2c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b2c74: 0xc1ec13a  jal         func_7B04E8
    ctx->pc = 0x7B2C74u;
    SET_GPR_U32(ctx, 31, 0x7B2C7Cu);
    ctx->pc = 0x7B2C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2C74u;
    // 0x7b2c78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B04E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B04E8u, 0x7B2C74u, 0x7B2C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2C7Cu;
label_7b2c7c:
    // 0x7b2c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b2c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2c80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7b2c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2c84: 0xc1ec148  jal         func_7B0520
    ctx->pc = 0x7B2C84u;
    SET_GPR_U32(ctx, 31, 0x7B2C8Cu);
    ctx->pc = 0x7B2C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2C84u;
    // 0x7b2c88: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0520u, 0x7B2C84u, 0x7B2C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2C8Cu;
label_7b2c8c:
    // 0x7b2c8c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7b2c8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2c90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b2c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2c94: 0xc1ec156  jal         func_7B0558
    ctx->pc = 0x7B2C94u;
    SET_GPR_U32(ctx, 31, 0x7B2C9Cu);
    ctx->pc = 0x7B2C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2C94u;
    // 0x7b2c98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0558u, 0x7B2C94u, 0x7B2C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2C9Cu;
label_7b2c9c:
    // 0x7b2c9c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x7b2c9cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x7b2ca0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7b2ca0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2ca4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7b2ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7b2ca8: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B2CA8u;
    {
        const bool branch_taken_0x7b2ca8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x7B2CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2CA8u;
        // 0x7b2cac: 0x8e660010  lw          $a2, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2ca8) {
            ctx->pc = 0x7B2CB8u;
            goto label_7b2cb8;
        }
    }
    ctx->pc = 0x7B2CB0u;
    // 0x7b2cb0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x7B2CB0u;
    {
        const bool branch_taken_0x7b2cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B2CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2CB0u;
        // 0x7b2cb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2cb0) {
            ctx->pc = 0x7B2DA0u;
            goto label_7b2da0;
        }
    }
    ctx->pc = 0x7B2CB8u;
label_7b2cb8:
    // 0x7b2cb8: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x7b2cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x7b2cbc: 0x18800038  blez        $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x7B2CBCu;
    {
        const bool branch_taken_0x7b2cbc = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x7B2CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2CBCu;
        // 0x7b2cc0: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2cbc) {
            ctx->pc = 0x7B2DA0u;
            goto label_7b2da0;
        }
    }
    ctx->pc = 0x7B2CC4u;
    // 0x7b2cc4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x7b2cc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7b2cc8:
    // 0x7b2cc8: 0x80c20005  lb          $v0, 0x5($a2)
    ctx->pc = 0x7b2cc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x7b2ccc: 0x54550031  bnel        $v0, $s5, . + 4 + (0x31 << 2)
    ctx->pc = 0x7B2CCCu;
    {
        const bool branch_taken_0x7b2ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x7b2ccc) {
            ctx->pc = 0x7B2CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2CCCu;
            // 0x7b2cd0: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2D94u;
            goto label_7b2d94;
        }
    }
    ctx->pc = 0x7B2CD4u;
    // 0x7b2cd4: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x7b2cd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x7b2cd8: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x7b2cd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x7b2cdc: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x7B2CDCu;
    {
        const bool branch_taken_0x7b2cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b2cdc) {
            ctx->pc = 0x7B2CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2CDCu;
            // 0x7b2ce0: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2D94u;
            goto label_7b2d94;
        }
    }
    ctx->pc = 0x7B2CE4u;
    // 0x7b2ce4: 0x14740012  bne         $v1, $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x7B2CE4u;
    {
        const bool branch_taken_0x7b2ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x7b2ce4) {
            ctx->pc = 0x7B2D30u;
            goto label_7b2d30;
        }
    }
    ctx->pc = 0x7B2CECu;
    // 0x7b2cec: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x7b2cecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7b2cf0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B2CF0u;
    {
        const bool branch_taken_0x7b2cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b2cf0) {
            ctx->pc = 0x7B2D08u;
            goto label_7b2d08;
        }
    }
    ctx->pc = 0x7B2CF8u;
    // 0x7b2cf8: 0x52480026  beql        $s2, $t0, . + 4 + (0x26 << 2)
    ctx->pc = 0x7B2CF8u;
    {
        const bool branch_taken_0x7b2cf8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 8));
        if (branch_taken_0x7b2cf8) {
            ctx->pc = 0x7B2CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2CF8u;
            // 0x7b2cfc: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2D94u;
            goto label_7b2d94;
        }
    }
    ctx->pc = 0x7B2D00u;
    // 0x7b2d00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B2D00u;
    {
        const bool branch_taken_0x7b2d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B2D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2D00u;
        // 0x7b2d04: 0x84c20006  lh          $v0, 0x6($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2d00) {
            ctx->pc = 0x7B2D14u;
            goto label_7b2d14;
        }
    }
    ctx->pc = 0x7B2D08u;
label_7b2d08:
    // 0x7b2d08: 0x16480009  bne         $s2, $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7B2D08u;
    {
        const bool branch_taken_0x7b2d08 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 8));
        if (branch_taken_0x7b2d08) {
            ctx->pc = 0x7B2D30u;
            goto label_7b2d30;
        }
    }
    ctx->pc = 0x7B2D10u;
    // 0x7b2d10: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x7b2d10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_7b2d14:
    // 0x7b2d14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x7b2d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7b2d18: 0x0  nop
    ctx->pc = 0x7b2d18u;
    // NOP
    // 0x7b2d1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7b2d1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7b2d20: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x7b2d20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7b2d24: 0x0  nop
    ctx->pc = 0x7b2d24u;
    // NOP
    // 0x7b2d28: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
    ctx->pc = 0x7B2D28u;
    {
        const bool branch_taken_0x7b2d28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7b2d28) {
            ctx->pc = 0x7B2D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2D28u;
            // 0x7b2d2c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2D94u;
            goto label_7b2d94;
        }
    }
    ctx->pc = 0x7B2D30u;
label_7b2d30:
    // 0x7b2d30: 0x50e00017  beql        $a3, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x7B2D30u;
    {
        const bool branch_taken_0x7b2d30 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b2d30) {
            ctx->pc = 0x7B2D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2D30u;
            // 0x7b2d34: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2D90u;
            goto label_7b2d90;
        }
    }
    ctx->pc = 0x7B2D38u;
    // 0x7b2d38: 0x90c50003  lbu         $a1, 0x3($a2)
    ctx->pc = 0x7b2d38u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x7b2d3c: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x7b2d3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x7b2d40: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x7b2d40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x7b2d44: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x7B2D44u;
    {
        const bool branch_taken_0x7b2d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b2d44) {
            ctx->pc = 0x7B2D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2D44u;
            // 0x7b2d48: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2D94u;
            goto label_7b2d94;
        }
    }
    ctx->pc = 0x7B2D4Cu;
    // 0x7b2d4c: 0x54a30010  bnel        $a1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x7B2D4Cu;
    {
        const bool branch_taken_0x7b2d4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x7b2d4c) {
            ctx->pc = 0x7B2D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2D4Cu;
            // 0x7b2d50: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2D90u;
            goto label_7b2d90;
        }
    }
    ctx->pc = 0x7B2D54u;
    // 0x7b2d54: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x7b2d54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7b2d58: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B2D58u;
    {
        const bool branch_taken_0x7b2d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B2D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2D58u;
        // 0x7b2d5c: 0x90e20004  lbu         $v0, 0x4($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2d58) {
            ctx->pc = 0x7B2D70u;
            goto label_7b2d70;
        }
    }
    ctx->pc = 0x7B2D60u;
    // 0x7b2d60: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x7B2D60u;
    {
        const bool branch_taken_0x7b2d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b2d60) {
            ctx->pc = 0x7B2D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2D60u;
            // 0x7b2d64: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2D90u;
            goto label_7b2d90;
        }
    }
    ctx->pc = 0x7B2D68u;
    // 0x7b2d68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B2D68u;
    {
        const bool branch_taken_0x7b2d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B2D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2D68u;
        // 0x7b2d6c: 0x84c30006  lh          $v1, 0x6($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2d68) {
            ctx->pc = 0x7B2D7Cu;
            goto label_7b2d7c;
        }
    }
    ctx->pc = 0x7B2D70u;
label_7b2d70:
    // 0x7b2d70: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x7B2D70u;
    {
        const bool branch_taken_0x7b2d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b2d70) {
            ctx->pc = 0x7B2D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2D70u;
            // 0x7b2d74: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2D94u;
            goto label_7b2d94;
        }
    }
    ctx->pc = 0x7B2D78u;
    // 0x7b2d78: 0x84c30006  lh          $v1, 0x6($a2)
    ctx->pc = 0x7b2d78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_7b2d7c:
    // 0x7b2d7c: 0x84e20006  lh          $v0, 0x6($a3)
    ctx->pc = 0x7b2d7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x7b2d80: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x7b2d80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7b2d84: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B2D84u;
    {
        const bool branch_taken_0x7b2d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b2d84) {
            ctx->pc = 0x7B2D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2D84u;
            // 0x7b2d88: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2D94u;
            goto label_7b2d94;
        }
    }
    ctx->pc = 0x7B2D8Cu;
    // 0x7b2d8c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x7b2d8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_7b2d90:
    // 0x7b2d90: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x7b2d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_7b2d94:
    // 0x7b2d94: 0x1480ffcc  bnez        $a0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x7B2D94u;
    {
        const bool branch_taken_0x7b2d94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B2D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2D94u;
        // 0x7b2d98: 0x24c60018  addiu       $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2d94) {
            ctx->pc = 0x7B2CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b2cc8;
        }
    }
    ctx->pc = 0x7B2D9Cu;
    // 0x7b2d9c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x7b2d9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_7b2da0:
    // 0x7b2da0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x7b2da0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7b2da4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x7b2da4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7b2da8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x7b2da8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7b2dac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x7b2dacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b2db0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x7b2db0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b2db4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x7b2db4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b2db8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b2db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b2dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x7B2DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B2DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2DBCu;
        // 0x7b2dc0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B2DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B2DC4u;
    // 0x7b2dc4: 0x0  nop
    ctx->pc = 0x7b2dc4u;
    // NOP
    ctx->pc = 0x7b2dc8u;
}
} // namespace gh_event
