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
// Function: getNextSeqPtr__Ct15cEventSeqPlayer1Z17cEventSeqObjLighti
// Address: 0x7b3bb8 - 0x7b3d48
void getNextSeqPtr__Ct15cEventSeqPlayer1Z17cEventSeqObjLighti_0x7b3bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getNextSeqPtr__Ct15cEventSeqPlayer1Z17cEventSeqObjLighti_0x7b3bb8");
#endif

    switch (ctx->pc) {
        case 0x7b3bfcu: goto label_7b3bfc;
        case 0x7b3c0cu: goto label_7b3c0c;
        case 0x7b3c1cu: goto label_7b3c1c;
        case 0x7b3c48u: goto label_7b3c48;
        default: break;
    }

    ctx->pc = 0x7b3bb8u;

    // 0x7b3bb8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7b3bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7b3bbc: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x7b3bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x7b3bc0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7b3bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7b3bc4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x7b3bc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3bc8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7b3bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7b3bcc: 0x3c10007b  lui         $s0, 0x7B
    ctx->pc = 0x7b3bccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)123 << 16));
    // 0x7b3bd0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x7b3bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x7b3bd4: 0x158e00  sll         $s1, $s5, 24
    ctx->pc = 0x7b3bd4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 24));
    // 0x7b3bd8: 0x261058d8  addiu       $s0, $s0, 0x58D8
    ctx->pc = 0x7b3bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22744));
    // 0x7b3bdc: 0x118e03  sra         $s1, $s1, 24
    ctx->pc = 0x7b3bdcu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 24));
    // 0x7b3be0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x7b3be0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3be4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7b3be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7b3be8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x7b3be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x7b3bec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b3becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3bf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b3bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b3bf4: 0xc1ec13a  jal         func_7B04E8
    ctx->pc = 0x7B3BF4u;
    SET_GPR_U32(ctx, 31, 0x7B3BFCu);
    ctx->pc = 0x7B3BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B3BF4u;
    // 0x7b3bf8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B04E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B04E8u, 0x7B3BF4u, 0x7B3BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3BFCu;
label_7b3bfc:
    // 0x7b3bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b3bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3c00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7b3c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3c04: 0xc1ec148  jal         func_7B0520
    ctx->pc = 0x7B3C04u;
    SET_GPR_U32(ctx, 31, 0x7B3C0Cu);
    ctx->pc = 0x7B3C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B3C04u;
    // 0x7b3c08: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0520u, 0x7B3C04u, 0x7B3C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3C0Cu;
label_7b3c0c:
    // 0x7b3c0c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7b3c0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3c10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b3c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3c14: 0xc1ec156  jal         func_7B0558
    ctx->pc = 0x7B3C14u;
    SET_GPR_U32(ctx, 31, 0x7B3C1Cu);
    ctx->pc = 0x7B3C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B3C14u;
    // 0x7b3c18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0558u, 0x7B3C14u, 0x7B3C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3C1Cu;
label_7b3c1c:
    // 0x7b3c1c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x7b3c1cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x7b3c20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7b3c20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3c24: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7b3c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7b3c28: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B3C28u;
    {
        const bool branch_taken_0x7b3c28 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x7B3C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3C28u;
        // 0x7b3c2c: 0x8e660010  lw          $a2, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3c28) {
            ctx->pc = 0x7B3C38u;
            goto label_7b3c38;
        }
    }
    ctx->pc = 0x7B3C30u;
    // 0x7b3c30: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x7B3C30u;
    {
        const bool branch_taken_0x7b3c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B3C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3C30u;
        // 0x7b3c34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3c30) {
            ctx->pc = 0x7B3D20u;
            goto label_7b3d20;
        }
    }
    ctx->pc = 0x7B3C38u;
label_7b3c38:
    // 0x7b3c38: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x7b3c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x7b3c3c: 0x18800038  blez        $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x7B3C3Cu;
    {
        const bool branch_taken_0x7b3c3c = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x7B3C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3C3Cu;
        // 0x7b3c40: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3c3c) {
            ctx->pc = 0x7B3D20u;
            goto label_7b3d20;
        }
    }
    ctx->pc = 0x7B3C44u;
    // 0x7b3c44: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x7b3c44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7b3c48:
    // 0x7b3c48: 0x80c20005  lb          $v0, 0x5($a2)
    ctx->pc = 0x7b3c48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x7b3c4c: 0x54550031  bnel        $v0, $s5, . + 4 + (0x31 << 2)
    ctx->pc = 0x7B3C4Cu;
    {
        const bool branch_taken_0x7b3c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x7b3c4c) {
            ctx->pc = 0x7B3C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3C4Cu;
            // 0x7b3c50: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3D14u;
            goto label_7b3d14;
        }
    }
    ctx->pc = 0x7B3C54u;
    // 0x7b3c54: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x7b3c54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x7b3c58: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x7b3c58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x7b3c5c: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x7B3C5Cu;
    {
        const bool branch_taken_0x7b3c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b3c5c) {
            ctx->pc = 0x7B3C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3C5Cu;
            // 0x7b3c60: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3D14u;
            goto label_7b3d14;
        }
    }
    ctx->pc = 0x7B3C64u;
    // 0x7b3c64: 0x14740012  bne         $v1, $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x7B3C64u;
    {
        const bool branch_taken_0x7b3c64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x7b3c64) {
            ctx->pc = 0x7B3CB0u;
            goto label_7b3cb0;
        }
    }
    ctx->pc = 0x7B3C6Cu;
    // 0x7b3c6c: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x7b3c6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7b3c70: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B3C70u;
    {
        const bool branch_taken_0x7b3c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b3c70) {
            ctx->pc = 0x7B3C88u;
            goto label_7b3c88;
        }
    }
    ctx->pc = 0x7B3C78u;
    // 0x7b3c78: 0x52480026  beql        $s2, $t0, . + 4 + (0x26 << 2)
    ctx->pc = 0x7B3C78u;
    {
        const bool branch_taken_0x7b3c78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 8));
        if (branch_taken_0x7b3c78) {
            ctx->pc = 0x7B3C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3C78u;
            // 0x7b3c7c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3D14u;
            goto label_7b3d14;
        }
    }
    ctx->pc = 0x7B3C80u;
    // 0x7b3c80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B3C80u;
    {
        const bool branch_taken_0x7b3c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B3C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3C80u;
        // 0x7b3c84: 0x84c20006  lh          $v0, 0x6($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3c80) {
            ctx->pc = 0x7B3C94u;
            goto label_7b3c94;
        }
    }
    ctx->pc = 0x7B3C88u;
label_7b3c88:
    // 0x7b3c88: 0x16480009  bne         $s2, $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7B3C88u;
    {
        const bool branch_taken_0x7b3c88 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 8));
        if (branch_taken_0x7b3c88) {
            ctx->pc = 0x7B3CB0u;
            goto label_7b3cb0;
        }
    }
    ctx->pc = 0x7B3C90u;
    // 0x7b3c90: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x7b3c90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_7b3c94:
    // 0x7b3c94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x7b3c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7b3c98: 0x0  nop
    ctx->pc = 0x7b3c98u;
    // NOP
    // 0x7b3c9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7b3c9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7b3ca0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x7b3ca0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7b3ca4: 0x0  nop
    ctx->pc = 0x7b3ca4u;
    // NOP
    // 0x7b3ca8: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
    ctx->pc = 0x7B3CA8u;
    {
        const bool branch_taken_0x7b3ca8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7b3ca8) {
            ctx->pc = 0x7B3CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3CA8u;
            // 0x7b3cac: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3D14u;
            goto label_7b3d14;
        }
    }
    ctx->pc = 0x7B3CB0u;
label_7b3cb0:
    // 0x7b3cb0: 0x50e00017  beql        $a3, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x7B3CB0u;
    {
        const bool branch_taken_0x7b3cb0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b3cb0) {
            ctx->pc = 0x7B3CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3CB0u;
            // 0x7b3cb4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3D10u;
            goto label_7b3d10;
        }
    }
    ctx->pc = 0x7B3CB8u;
    // 0x7b3cb8: 0x90c50003  lbu         $a1, 0x3($a2)
    ctx->pc = 0x7b3cb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x7b3cbc: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x7b3cbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x7b3cc0: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x7b3cc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x7b3cc4: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x7B3CC4u;
    {
        const bool branch_taken_0x7b3cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b3cc4) {
            ctx->pc = 0x7B3CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3CC4u;
            // 0x7b3cc8: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3D14u;
            goto label_7b3d14;
        }
    }
    ctx->pc = 0x7B3CCCu;
    // 0x7b3ccc: 0x54a30010  bnel        $a1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x7B3CCCu;
    {
        const bool branch_taken_0x7b3ccc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x7b3ccc) {
            ctx->pc = 0x7B3CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3CCCu;
            // 0x7b3cd0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3D10u;
            goto label_7b3d10;
        }
    }
    ctx->pc = 0x7B3CD4u;
    // 0x7b3cd4: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x7b3cd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7b3cd8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B3CD8u;
    {
        const bool branch_taken_0x7b3cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B3CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3CD8u;
        // 0x7b3cdc: 0x90e20004  lbu         $v0, 0x4($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3cd8) {
            ctx->pc = 0x7B3CF0u;
            goto label_7b3cf0;
        }
    }
    ctx->pc = 0x7B3CE0u;
    // 0x7b3ce0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x7B3CE0u;
    {
        const bool branch_taken_0x7b3ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b3ce0) {
            ctx->pc = 0x7B3CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3CE0u;
            // 0x7b3ce4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3D10u;
            goto label_7b3d10;
        }
    }
    ctx->pc = 0x7B3CE8u;
    // 0x7b3ce8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B3CE8u;
    {
        const bool branch_taken_0x7b3ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B3CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3CE8u;
        // 0x7b3cec: 0x84c30006  lh          $v1, 0x6($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3ce8) {
            ctx->pc = 0x7B3CFCu;
            goto label_7b3cfc;
        }
    }
    ctx->pc = 0x7B3CF0u;
label_7b3cf0:
    // 0x7b3cf0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x7B3CF0u;
    {
        const bool branch_taken_0x7b3cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b3cf0) {
            ctx->pc = 0x7B3CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3CF0u;
            // 0x7b3cf4: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3D14u;
            goto label_7b3d14;
        }
    }
    ctx->pc = 0x7B3CF8u;
    // 0x7b3cf8: 0x84c30006  lh          $v1, 0x6($a2)
    ctx->pc = 0x7b3cf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_7b3cfc:
    // 0x7b3cfc: 0x84e20006  lh          $v0, 0x6($a3)
    ctx->pc = 0x7b3cfcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x7b3d00: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x7b3d00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7b3d04: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B3D04u;
    {
        const bool branch_taken_0x7b3d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b3d04) {
            ctx->pc = 0x7B3D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3D04u;
            // 0x7b3d08: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3D14u;
            goto label_7b3d14;
        }
    }
    ctx->pc = 0x7B3D0Cu;
    // 0x7b3d0c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x7b3d0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_7b3d10:
    // 0x7b3d10: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x7b3d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_7b3d14:
    // 0x7b3d14: 0x1480ffcc  bnez        $a0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x7B3D14u;
    {
        const bool branch_taken_0x7b3d14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B3D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3D14u;
        // 0x7b3d18: 0x24c6001c  addiu       $a2, $a2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3d14) {
            ctx->pc = 0x7B3C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b3c48;
        }
    }
    ctx->pc = 0x7B3D1Cu;
    // 0x7b3d1c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x7b3d1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_7b3d20:
    // 0x7b3d20: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x7b3d20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7b3d24: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x7b3d24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7b3d28: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x7b3d28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7b3d2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x7b3d2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b3d30: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x7b3d30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b3d34: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x7b3d34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b3d38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b3d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b3d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x7B3D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B3D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3D3Cu;
        // 0x7b3d40: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B3D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B3D44u;
    // 0x7b3d44: 0x0  nop
    ctx->pc = 0x7b3d44u;
    // NOP
    ctx->pc = 0x7b3d48u;
}
} // namespace gh_event
