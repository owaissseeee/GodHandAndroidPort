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
// Function: getNextSeqPtr__Ct15cEventSeqPlayer1Z15cEventSeqFilteri
// Address: 0x7b3fb0 - 0x7b4140
void getNextSeqPtr__Ct15cEventSeqPlayer1Z15cEventSeqFilteri_0x7b3fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getNextSeqPtr__Ct15cEventSeqPlayer1Z15cEventSeqFilteri_0x7b3fb0");
#endif

    switch (ctx->pc) {
        case 0x7b3ff4u: goto label_7b3ff4;
        case 0x7b4004u: goto label_7b4004;
        case 0x7b4014u: goto label_7b4014;
        case 0x7b4040u: goto label_7b4040;
        default: break;
    }

    ctx->pc = 0x7b3fb0u;

    // 0x7b3fb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7b3fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7b3fb4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x7b3fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x7b3fb8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7b3fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7b3fbc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x7b3fbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3fc0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7b3fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7b3fc4: 0x3c10007b  lui         $s0, 0x7B
    ctx->pc = 0x7b3fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)123 << 16));
    // 0x7b3fc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x7b3fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x7b3fcc: 0x158e00  sll         $s1, $s5, 24
    ctx->pc = 0x7b3fccu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 24));
    // 0x7b3fd0: 0x261058d8  addiu       $s0, $s0, 0x58D8
    ctx->pc = 0x7b3fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22744));
    // 0x7b3fd4: 0x118e03  sra         $s1, $s1, 24
    ctx->pc = 0x7b3fd4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 24));
    // 0x7b3fd8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x7b3fd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3fdc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7b3fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7b3fe0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x7b3fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x7b3fe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b3fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3fe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b3fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b3fec: 0xc1ec13a  jal         func_7B04E8
    ctx->pc = 0x7B3FECu;
    SET_GPR_U32(ctx, 31, 0x7B3FF4u);
    ctx->pc = 0x7B3FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B3FECu;
    // 0x7b3ff0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B04E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B04E8u, 0x7B3FECu, 0x7B3FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3FF4u;
label_7b3ff4:
    // 0x7b3ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b3ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3ff8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7b3ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3ffc: 0xc1ec148  jal         func_7B0520
    ctx->pc = 0x7B3FFCu;
    SET_GPR_U32(ctx, 31, 0x7B4004u);
    ctx->pc = 0x7B4000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B3FFCu;
    // 0x7b4000: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0520u, 0x7B3FFCu, 0x7B4004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B4004u;
label_7b4004:
    // 0x7b4004: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7b4004u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b4008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b4008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b400c: 0xc1ec156  jal         func_7B0558
    ctx->pc = 0x7B400Cu;
    SET_GPR_U32(ctx, 31, 0x7B4014u);
    ctx->pc = 0x7B4010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B400Cu;
    // 0x7b4010: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0558u, 0x7B400Cu, 0x7B4014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B4014u;
label_7b4014:
    // 0x7b4014: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x7b4014u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x7b4018: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7b4018u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b401c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7b401cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7b4020: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B4020u;
    {
        const bool branch_taken_0x7b4020 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x7B4024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4020u;
        // 0x7b4024: 0x8e660010  lw          $a2, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b4020) {
            ctx->pc = 0x7B4030u;
            goto label_7b4030;
        }
    }
    ctx->pc = 0x7B4028u;
    // 0x7b4028: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x7B4028u;
    {
        const bool branch_taken_0x7b4028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4028u;
        // 0x7b402c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b4028) {
            ctx->pc = 0x7B4118u;
            goto label_7b4118;
        }
    }
    ctx->pc = 0x7B4030u;
label_7b4030:
    // 0x7b4030: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x7b4030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x7b4034: 0x18800038  blez        $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x7B4034u;
    {
        const bool branch_taken_0x7b4034 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x7B4038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4034u;
        // 0x7b4038: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b4034) {
            ctx->pc = 0x7B4118u;
            goto label_7b4118;
        }
    }
    ctx->pc = 0x7B403Cu;
    // 0x7b403c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x7b403cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7b4040:
    // 0x7b4040: 0x80c20005  lb          $v0, 0x5($a2)
    ctx->pc = 0x7b4040u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x7b4044: 0x54550031  bnel        $v0, $s5, . + 4 + (0x31 << 2)
    ctx->pc = 0x7B4044u;
    {
        const bool branch_taken_0x7b4044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x7b4044) {
            ctx->pc = 0x7B4048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B4044u;
            // 0x7b4048: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B410Cu;
            goto label_7b410c;
        }
    }
    ctx->pc = 0x7B404Cu;
    // 0x7b404c: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x7b404cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x7b4050: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x7b4050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x7b4054: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x7B4054u;
    {
        const bool branch_taken_0x7b4054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b4054) {
            ctx->pc = 0x7B4058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B4054u;
            // 0x7b4058: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B410Cu;
            goto label_7b410c;
        }
    }
    ctx->pc = 0x7B405Cu;
    // 0x7b405c: 0x14740012  bne         $v1, $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x7B405Cu;
    {
        const bool branch_taken_0x7b405c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x7b405c) {
            ctx->pc = 0x7B40A8u;
            goto label_7b40a8;
        }
    }
    ctx->pc = 0x7B4064u;
    // 0x7b4064: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x7b4064u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7b4068: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B4068u;
    {
        const bool branch_taken_0x7b4068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b4068) {
            ctx->pc = 0x7B4080u;
            goto label_7b4080;
        }
    }
    ctx->pc = 0x7B4070u;
    // 0x7b4070: 0x52480026  beql        $s2, $t0, . + 4 + (0x26 << 2)
    ctx->pc = 0x7B4070u;
    {
        const bool branch_taken_0x7b4070 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 8));
        if (branch_taken_0x7b4070) {
            ctx->pc = 0x7B4074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B4070u;
            // 0x7b4074: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B410Cu;
            goto label_7b410c;
        }
    }
    ctx->pc = 0x7B4078u;
    // 0x7b4078: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B4078u;
    {
        const bool branch_taken_0x7b4078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4078u;
        // 0x7b407c: 0x84c20006  lh          $v0, 0x6($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b4078) {
            ctx->pc = 0x7B408Cu;
            goto label_7b408c;
        }
    }
    ctx->pc = 0x7B4080u;
label_7b4080:
    // 0x7b4080: 0x16480009  bne         $s2, $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7B4080u;
    {
        const bool branch_taken_0x7b4080 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 8));
        if (branch_taken_0x7b4080) {
            ctx->pc = 0x7B40A8u;
            goto label_7b40a8;
        }
    }
    ctx->pc = 0x7B4088u;
    // 0x7b4088: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x7b4088u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_7b408c:
    // 0x7b408c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x7b408cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7b4090: 0x0  nop
    ctx->pc = 0x7b4090u;
    // NOP
    // 0x7b4094: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7b4094u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7b4098: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x7b4098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7b409c: 0x0  nop
    ctx->pc = 0x7b409cu;
    // NOP
    // 0x7b40a0: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
    ctx->pc = 0x7B40A0u;
    {
        const bool branch_taken_0x7b40a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7b40a0) {
            ctx->pc = 0x7B40A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B40A0u;
            // 0x7b40a4: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B410Cu;
            goto label_7b410c;
        }
    }
    ctx->pc = 0x7B40A8u;
label_7b40a8:
    // 0x7b40a8: 0x50e00017  beql        $a3, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x7B40A8u;
    {
        const bool branch_taken_0x7b40a8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b40a8) {
            ctx->pc = 0x7B40ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B40A8u;
            // 0x7b40ac: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B4108u;
            goto label_7b4108;
        }
    }
    ctx->pc = 0x7B40B0u;
    // 0x7b40b0: 0x90c50003  lbu         $a1, 0x3($a2)
    ctx->pc = 0x7b40b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x7b40b4: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x7b40b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x7b40b8: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x7b40b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x7b40bc: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x7B40BCu;
    {
        const bool branch_taken_0x7b40bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b40bc) {
            ctx->pc = 0x7B40C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B40BCu;
            // 0x7b40c0: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B410Cu;
            goto label_7b410c;
        }
    }
    ctx->pc = 0x7B40C4u;
    // 0x7b40c4: 0x54a30010  bnel        $a1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x7B40C4u;
    {
        const bool branch_taken_0x7b40c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x7b40c4) {
            ctx->pc = 0x7B40C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B40C4u;
            // 0x7b40c8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B4108u;
            goto label_7b4108;
        }
    }
    ctx->pc = 0x7B40CCu;
    // 0x7b40cc: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x7b40ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7b40d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B40D0u;
    {
        const bool branch_taken_0x7b40d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B40D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B40D0u;
        // 0x7b40d4: 0x90e20004  lbu         $v0, 0x4($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b40d0) {
            ctx->pc = 0x7B40E8u;
            goto label_7b40e8;
        }
    }
    ctx->pc = 0x7B40D8u;
    // 0x7b40d8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x7B40D8u;
    {
        const bool branch_taken_0x7b40d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b40d8) {
            ctx->pc = 0x7B40DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B40D8u;
            // 0x7b40dc: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B4108u;
            goto label_7b4108;
        }
    }
    ctx->pc = 0x7B40E0u;
    // 0x7b40e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B40E0u;
    {
        const bool branch_taken_0x7b40e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B40E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B40E0u;
        // 0x7b40e4: 0x84c30006  lh          $v1, 0x6($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b40e0) {
            ctx->pc = 0x7B40F4u;
            goto label_7b40f4;
        }
    }
    ctx->pc = 0x7B40E8u;
label_7b40e8:
    // 0x7b40e8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x7B40E8u;
    {
        const bool branch_taken_0x7b40e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b40e8) {
            ctx->pc = 0x7B40ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B40E8u;
            // 0x7b40ec: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B410Cu;
            goto label_7b410c;
        }
    }
    ctx->pc = 0x7B40F0u;
    // 0x7b40f0: 0x84c30006  lh          $v1, 0x6($a2)
    ctx->pc = 0x7b40f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_7b40f4:
    // 0x7b40f4: 0x84e20006  lh          $v0, 0x6($a3)
    ctx->pc = 0x7b40f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x7b40f8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x7b40f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7b40fc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B40FCu;
    {
        const bool branch_taken_0x7b40fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b40fc) {
            ctx->pc = 0x7B4100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B40FCu;
            // 0x7b4100: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B410Cu;
            goto label_7b410c;
        }
    }
    ctx->pc = 0x7B4104u;
    // 0x7b4104: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x7b4104u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_7b4108:
    // 0x7b4108: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x7b4108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_7b410c:
    // 0x7b410c: 0x1480ffcc  bnez        $a0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x7B410Cu;
    {
        const bool branch_taken_0x7b410c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B4110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B410Cu;
        // 0x7b4110: 0x24c602e8  addiu       $a2, $a2, 0x2E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b410c) {
            ctx->pc = 0x7B4040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b4040;
        }
    }
    ctx->pc = 0x7B4114u;
    // 0x7b4114: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x7b4114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_7b4118:
    // 0x7b4118: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x7b4118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7b411c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x7b411cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7b4120: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x7b4120u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7b4124: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x7b4124u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b4128: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x7b4128u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b412c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x7b412cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b4130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b4130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b4134: 0x3e00008  jr          $ra
    ctx->pc = 0x7B4134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B4138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4134u;
        // 0x7b4138: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B4134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B413Cu;
    // 0x7b413c: 0x0  nop
    ctx->pc = 0x7b413cu;
    // NOP
    ctx->pc = 0x7b4140u;
}
} // namespace gh_event
