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
// Function: getPrevSeqPtr__Ct15cEventSeqPlayer1Z13cEventSeqWaiti
// Address: 0x7b29e0 - 0x7b2b70
void getPrevSeqPtr__Ct15cEventSeqPlayer1Z13cEventSeqWaiti_0x7b29e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getPrevSeqPtr__Ct15cEventSeqPlayer1Z13cEventSeqWaiti_0x7b29e0");
#endif

    switch (ctx->pc) {
        case 0x7b2a24u: goto label_7b2a24;
        case 0x7b2a34u: goto label_7b2a34;
        case 0x7b2a44u: goto label_7b2a44;
        case 0x7b2a70u: goto label_7b2a70;
        default: break;
    }

    ctx->pc = 0x7b29e0u;

    // 0x7b29e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7b29e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7b29e4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x7b29e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x7b29e8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7b29e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7b29ec: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x7b29ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b29f0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7b29f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7b29f4: 0x3c10007b  lui         $s0, 0x7B
    ctx->pc = 0x7b29f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)123 << 16));
    // 0x7b29f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x7b29f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x7b29fc: 0x158e00  sll         $s1, $s5, 24
    ctx->pc = 0x7b29fcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 24));
    // 0x7b2a00: 0x261058d8  addiu       $s0, $s0, 0x58D8
    ctx->pc = 0x7b2a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22744));
    // 0x7b2a04: 0x118e03  sra         $s1, $s1, 24
    ctx->pc = 0x7b2a04u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 24));
    // 0x7b2a08: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x7b2a08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2a0c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7b2a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7b2a10: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x7b2a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x7b2a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b2a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2a18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b2a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b2a1c: 0xc1ec13a  jal         func_7B04E8
    ctx->pc = 0x7B2A1Cu;
    SET_GPR_U32(ctx, 31, 0x7B2A24u);
    ctx->pc = 0x7B2A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2A1Cu;
    // 0x7b2a20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B04E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B04E8u, 0x7B2A1Cu, 0x7B2A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2A24u;
label_7b2a24:
    // 0x7b2a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b2a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2a28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7b2a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2a2c: 0xc1ec148  jal         func_7B0520
    ctx->pc = 0x7B2A2Cu;
    SET_GPR_U32(ctx, 31, 0x7B2A34u);
    ctx->pc = 0x7B2A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2A2Cu;
    // 0x7b2a30: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0520u, 0x7B2A2Cu, 0x7B2A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2A34u;
label_7b2a34:
    // 0x7b2a34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7b2a34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b2a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2a3c: 0xc1ec156  jal         func_7B0558
    ctx->pc = 0x7B2A3Cu;
    SET_GPR_U32(ctx, 31, 0x7B2A44u);
    ctx->pc = 0x7B2A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2A3Cu;
    // 0x7b2a40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0558u, 0x7B2A3Cu, 0x7B2A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2A44u;
label_7b2a44:
    // 0x7b2a44: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x7b2a44u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x7b2a48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7b2a48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2a4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7b2a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7b2a50: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B2A50u;
    {
        const bool branch_taken_0x7b2a50 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x7B2A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2A50u;
        // 0x7b2a54: 0x8e660010  lw          $a2, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2a50) {
            ctx->pc = 0x7B2A60u;
            goto label_7b2a60;
        }
    }
    ctx->pc = 0x7B2A58u;
    // 0x7b2a58: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x7B2A58u;
    {
        const bool branch_taken_0x7b2a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B2A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2A58u;
        // 0x7b2a5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2a58) {
            ctx->pc = 0x7B2B48u;
            goto label_7b2b48;
        }
    }
    ctx->pc = 0x7B2A60u;
label_7b2a60:
    // 0x7b2a60: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x7b2a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x7b2a64: 0x18800038  blez        $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x7B2A64u;
    {
        const bool branch_taken_0x7b2a64 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x7B2A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2A64u;
        // 0x7b2a68: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2a64) {
            ctx->pc = 0x7B2B48u;
            goto label_7b2b48;
        }
    }
    ctx->pc = 0x7B2A6Cu;
    // 0x7b2a6c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x7b2a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7b2a70:
    // 0x7b2a70: 0x80c20005  lb          $v0, 0x5($a2)
    ctx->pc = 0x7b2a70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x7b2a74: 0x54550031  bnel        $v0, $s5, . + 4 + (0x31 << 2)
    ctx->pc = 0x7B2A74u;
    {
        const bool branch_taken_0x7b2a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x7b2a74) {
            ctx->pc = 0x7B2A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2A74u;
            // 0x7b2a78: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2B3Cu;
            goto label_7b2b3c;
        }
    }
    ctx->pc = 0x7B2A7Cu;
    // 0x7b2a7c: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x7b2a7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x7b2a80: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x7b2a80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7b2a84: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x7B2A84u;
    {
        const bool branch_taken_0x7b2a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b2a84) {
            ctx->pc = 0x7B2A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2A84u;
            // 0x7b2a88: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2B3Cu;
            goto label_7b2b3c;
        }
    }
    ctx->pc = 0x7B2A8Cu;
    // 0x7b2a8c: 0x14740012  bne         $v1, $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x7B2A8Cu;
    {
        const bool branch_taken_0x7b2a8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x7b2a8c) {
            ctx->pc = 0x7B2AD8u;
            goto label_7b2ad8;
        }
    }
    ctx->pc = 0x7B2A94u;
    // 0x7b2a94: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x7b2a94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7b2a98: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B2A98u;
    {
        const bool branch_taken_0x7b2a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b2a98) {
            ctx->pc = 0x7B2AB0u;
            goto label_7b2ab0;
        }
    }
    ctx->pc = 0x7B2AA0u;
    // 0x7b2aa0: 0x1640000d  bnez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x7B2AA0u;
    {
        const bool branch_taken_0x7b2aa0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b2aa0) {
            ctx->pc = 0x7B2AD8u;
            goto label_7b2ad8;
        }
    }
    ctx->pc = 0x7B2AA8u;
    // 0x7b2aa8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B2AA8u;
    {
        const bool branch_taken_0x7b2aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B2AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2AA8u;
        // 0x7b2aac: 0x84c20006  lh          $v0, 0x6($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2aa8) {
            ctx->pc = 0x7B2ABCu;
            goto label_7b2abc;
        }
    }
    ctx->pc = 0x7B2AB0u;
label_7b2ab0:
    // 0x7b2ab0: 0x52400022  beql        $s2, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x7B2AB0u;
    {
        const bool branch_taken_0x7b2ab0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b2ab0) {
            ctx->pc = 0x7B2AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2AB0u;
            // 0x7b2ab4: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2B3Cu;
            goto label_7b2b3c;
        }
    }
    ctx->pc = 0x7B2AB8u;
    // 0x7b2ab8: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x7b2ab8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_7b2abc:
    // 0x7b2abc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x7b2abcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7b2ac0: 0x0  nop
    ctx->pc = 0x7b2ac0u;
    // NOP
    // 0x7b2ac4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7b2ac4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7b2ac8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x7b2ac8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7b2acc: 0x0  nop
    ctx->pc = 0x7b2accu;
    // NOP
    // 0x7b2ad0: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
    ctx->pc = 0x7B2AD0u;
    {
        const bool branch_taken_0x7b2ad0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7b2ad0) {
            ctx->pc = 0x7B2AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2AD0u;
            // 0x7b2ad4: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2B3Cu;
            goto label_7b2b3c;
        }
    }
    ctx->pc = 0x7B2AD8u;
label_7b2ad8:
    // 0x7b2ad8: 0x50e00017  beql        $a3, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x7B2AD8u;
    {
        const bool branch_taken_0x7b2ad8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b2ad8) {
            ctx->pc = 0x7B2ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2AD8u;
            // 0x7b2adc: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2B38u;
            goto label_7b2b38;
        }
    }
    ctx->pc = 0x7B2AE0u;
    // 0x7b2ae0: 0x90c50003  lbu         $a1, 0x3($a2)
    ctx->pc = 0x7b2ae0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x7b2ae4: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x7b2ae4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x7b2ae8: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x7b2ae8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x7b2aec: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x7B2AECu;
    {
        const bool branch_taken_0x7b2aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b2aec) {
            ctx->pc = 0x7B2AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2AECu;
            // 0x7b2af0: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2B3Cu;
            goto label_7b2b3c;
        }
    }
    ctx->pc = 0x7B2AF4u;
    // 0x7b2af4: 0x54a30010  bnel        $a1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x7B2AF4u;
    {
        const bool branch_taken_0x7b2af4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x7b2af4) {
            ctx->pc = 0x7B2AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2AF4u;
            // 0x7b2af8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2B38u;
            goto label_7b2b38;
        }
    }
    ctx->pc = 0x7B2AFCu;
    // 0x7b2afc: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x7b2afcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7b2b00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B2B00u;
    {
        const bool branch_taken_0x7b2b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B2B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2B00u;
        // 0x7b2b04: 0x90e20004  lbu         $v0, 0x4($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2b00) {
            ctx->pc = 0x7B2B18u;
            goto label_7b2b18;
        }
    }
    ctx->pc = 0x7B2B08u;
    // 0x7b2b08: 0x5048000c  beql        $v0, $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x7B2B08u;
    {
        const bool branch_taken_0x7b2b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x7b2b08) {
            ctx->pc = 0x7B2B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2B08u;
            // 0x7b2b0c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2B3Cu;
            goto label_7b2b3c;
        }
    }
    ctx->pc = 0x7B2B10u;
    // 0x7b2b10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B2B10u;
    {
        const bool branch_taken_0x7b2b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B2B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2B10u;
        // 0x7b2b14: 0x84c20006  lh          $v0, 0x6($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2b10) {
            ctx->pc = 0x7B2B24u;
            goto label_7b2b24;
        }
    }
    ctx->pc = 0x7B2B18u;
label_7b2b18:
    // 0x7b2b18: 0x54480007  bnel        $v0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7B2B18u;
    {
        const bool branch_taken_0x7b2b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x7b2b18) {
            ctx->pc = 0x7B2B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2B18u;
            // 0x7b2b1c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2B38u;
            goto label_7b2b38;
        }
    }
    ctx->pc = 0x7B2B20u;
    // 0x7b2b20: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x7b2b20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_7b2b24:
    // 0x7b2b24: 0x84e30006  lh          $v1, 0x6($a3)
    ctx->pc = 0x7b2b24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x7b2b28: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x7b2b28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7b2b2c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B2B2Cu;
    {
        const bool branch_taken_0x7b2b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b2b2c) {
            ctx->pc = 0x7B2B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2B2Cu;
            // 0x7b2b30: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2B3Cu;
            goto label_7b2b3c;
        }
    }
    ctx->pc = 0x7B2B34u;
    // 0x7b2b34: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x7b2b34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_7b2b38:
    // 0x7b2b38: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x7b2b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_7b2b3c:
    // 0x7b2b3c: 0x1480ffcc  bnez        $a0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x7B2B3Cu;
    {
        const bool branch_taken_0x7b2b3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B2B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2B3Cu;
        // 0x7b2b40: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2b3c) {
            ctx->pc = 0x7B2A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b2a70;
        }
    }
    ctx->pc = 0x7B2B44u;
    // 0x7b2b44: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x7b2b44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_7b2b48:
    // 0x7b2b48: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x7b2b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7b2b4c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x7b2b4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7b2b50: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x7b2b50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7b2b54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x7b2b54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b2b58: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x7b2b58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b2b5c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x7b2b5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b2b60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b2b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b2b64: 0x3e00008  jr          $ra
    ctx->pc = 0x7B2B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B2B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2B64u;
        // 0x7b2b68: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B2B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B2B6Cu;
    // 0x7b2b6c: 0x0  nop
    ctx->pc = 0x7b2b6cu;
    // NOP
    ctx->pc = 0x7b2b70u;
}
} // namespace gh_event
