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
// Function: getNextSeqPtr__Ct15cEventSeqPlayer1Z15cEventSeqVertexi
// Address: 0x7b3020 - 0x7b31b0
void getNextSeqPtr__Ct15cEventSeqPlayer1Z15cEventSeqVertexi_0x7b3020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getNextSeqPtr__Ct15cEventSeqPlayer1Z15cEventSeqVertexi_0x7b3020");
#endif

    switch (ctx->pc) {
        case 0x7b3064u: goto label_7b3064;
        case 0x7b3074u: goto label_7b3074;
        case 0x7b3084u: goto label_7b3084;
        case 0x7b30b0u: goto label_7b30b0;
        default: break;
    }

    ctx->pc = 0x7b3020u;

    // 0x7b3020: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7b3020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7b3024: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x7b3024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x7b3028: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7b3028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7b302c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x7b302cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3030: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7b3030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7b3034: 0x3c10007b  lui         $s0, 0x7B
    ctx->pc = 0x7b3034u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)123 << 16));
    // 0x7b3038: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x7b3038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x7b303c: 0x158e00  sll         $s1, $s5, 24
    ctx->pc = 0x7b303cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 24));
    // 0x7b3040: 0x261058d8  addiu       $s0, $s0, 0x58D8
    ctx->pc = 0x7b3040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22744));
    // 0x7b3044: 0x118e03  sra         $s1, $s1, 24
    ctx->pc = 0x7b3044u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 24));
    // 0x7b3048: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x7b3048u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b304c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7b304cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7b3050: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x7b3050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x7b3054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b3054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b3058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b305c: 0xc1ec13a  jal         func_7B04E8
    ctx->pc = 0x7B305Cu;
    SET_GPR_U32(ctx, 31, 0x7B3064u);
    ctx->pc = 0x7B3060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B305Cu;
    // 0x7b3060: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B04E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B04E8u, 0x7B305Cu, 0x7B3064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3064u;
label_7b3064:
    // 0x7b3064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b3064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3068: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7b3068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b306c: 0xc1ec148  jal         func_7B0520
    ctx->pc = 0x7B306Cu;
    SET_GPR_U32(ctx, 31, 0x7B3074u);
    ctx->pc = 0x7B3070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B306Cu;
    // 0x7b3070: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0520u, 0x7B306Cu, 0x7B3074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3074u;
label_7b3074:
    // 0x7b3074: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7b3074u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b3078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b307c: 0xc1ec156  jal         func_7B0558
    ctx->pc = 0x7B307Cu;
    SET_GPR_U32(ctx, 31, 0x7B3084u);
    ctx->pc = 0x7B3080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B307Cu;
    // 0x7b3080: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0558u, 0x7B307Cu, 0x7B3084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3084u;
label_7b3084:
    // 0x7b3084: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x7b3084u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x7b3088: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7b3088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b308c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7b308cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7b3090: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B3090u;
    {
        const bool branch_taken_0x7b3090 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x7B3094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3090u;
        // 0x7b3094: 0x8e660010  lw          $a2, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3090) {
            ctx->pc = 0x7B30A0u;
            goto label_7b30a0;
        }
    }
    ctx->pc = 0x7B3098u;
    // 0x7b3098: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x7B3098u;
    {
        const bool branch_taken_0x7b3098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3098u;
        // 0x7b309c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3098) {
            ctx->pc = 0x7B3188u;
            goto label_7b3188;
        }
    }
    ctx->pc = 0x7B30A0u;
label_7b30a0:
    // 0x7b30a0: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x7b30a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x7b30a4: 0x18800038  blez        $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x7B30A4u;
    {
        const bool branch_taken_0x7b30a4 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x7B30A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B30A4u;
        // 0x7b30a8: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b30a4) {
            ctx->pc = 0x7B3188u;
            goto label_7b3188;
        }
    }
    ctx->pc = 0x7B30ACu;
    // 0x7b30ac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x7b30acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7b30b0:
    // 0x7b30b0: 0x80c20005  lb          $v0, 0x5($a2)
    ctx->pc = 0x7b30b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x7b30b4: 0x54550031  bnel        $v0, $s5, . + 4 + (0x31 << 2)
    ctx->pc = 0x7B30B4u;
    {
        const bool branch_taken_0x7b30b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x7b30b4) {
            ctx->pc = 0x7B30B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B30B4u;
            // 0x7b30b8: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B317Cu;
            goto label_7b317c;
        }
    }
    ctx->pc = 0x7B30BCu;
    // 0x7b30bc: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x7b30bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x7b30c0: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x7b30c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x7b30c4: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x7B30C4u;
    {
        const bool branch_taken_0x7b30c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b30c4) {
            ctx->pc = 0x7B30C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B30C4u;
            // 0x7b30c8: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B317Cu;
            goto label_7b317c;
        }
    }
    ctx->pc = 0x7B30CCu;
    // 0x7b30cc: 0x14740012  bne         $v1, $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x7B30CCu;
    {
        const bool branch_taken_0x7b30cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x7b30cc) {
            ctx->pc = 0x7B3118u;
            goto label_7b3118;
        }
    }
    ctx->pc = 0x7B30D4u;
    // 0x7b30d4: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x7b30d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7b30d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B30D8u;
    {
        const bool branch_taken_0x7b30d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b30d8) {
            ctx->pc = 0x7B30F0u;
            goto label_7b30f0;
        }
    }
    ctx->pc = 0x7B30E0u;
    // 0x7b30e0: 0x52480026  beql        $s2, $t0, . + 4 + (0x26 << 2)
    ctx->pc = 0x7B30E0u;
    {
        const bool branch_taken_0x7b30e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 8));
        if (branch_taken_0x7b30e0) {
            ctx->pc = 0x7B30E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B30E0u;
            // 0x7b30e4: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B317Cu;
            goto label_7b317c;
        }
    }
    ctx->pc = 0x7B30E8u;
    // 0x7b30e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B30E8u;
    {
        const bool branch_taken_0x7b30e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B30ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B30E8u;
        // 0x7b30ec: 0x84c20006  lh          $v0, 0x6($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b30e8) {
            ctx->pc = 0x7B30FCu;
            goto label_7b30fc;
        }
    }
    ctx->pc = 0x7B30F0u;
label_7b30f0:
    // 0x7b30f0: 0x16480009  bne         $s2, $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7B30F0u;
    {
        const bool branch_taken_0x7b30f0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 8));
        if (branch_taken_0x7b30f0) {
            ctx->pc = 0x7B3118u;
            goto label_7b3118;
        }
    }
    ctx->pc = 0x7B30F8u;
    // 0x7b30f8: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x7b30f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_7b30fc:
    // 0x7b30fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x7b30fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7b3100: 0x0  nop
    ctx->pc = 0x7b3100u;
    // NOP
    // 0x7b3104: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7b3104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7b3108: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x7b3108u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7b310c: 0x0  nop
    ctx->pc = 0x7b310cu;
    // NOP
    // 0x7b3110: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
    ctx->pc = 0x7B3110u;
    {
        const bool branch_taken_0x7b3110 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7b3110) {
            ctx->pc = 0x7B3114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3110u;
            // 0x7b3114: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B317Cu;
            goto label_7b317c;
        }
    }
    ctx->pc = 0x7B3118u;
label_7b3118:
    // 0x7b3118: 0x50e00017  beql        $a3, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x7B3118u;
    {
        const bool branch_taken_0x7b3118 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b3118) {
            ctx->pc = 0x7B311Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3118u;
            // 0x7b311c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3178u;
            goto label_7b3178;
        }
    }
    ctx->pc = 0x7B3120u;
    // 0x7b3120: 0x90c50003  lbu         $a1, 0x3($a2)
    ctx->pc = 0x7b3120u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x7b3124: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x7b3124u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x7b3128: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x7b3128u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x7b312c: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x7B312Cu;
    {
        const bool branch_taken_0x7b312c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b312c) {
            ctx->pc = 0x7B3130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B312Cu;
            // 0x7b3130: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B317Cu;
            goto label_7b317c;
        }
    }
    ctx->pc = 0x7B3134u;
    // 0x7b3134: 0x54a30010  bnel        $a1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x7B3134u;
    {
        const bool branch_taken_0x7b3134 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x7b3134) {
            ctx->pc = 0x7B3138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3134u;
            // 0x7b3138: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3178u;
            goto label_7b3178;
        }
    }
    ctx->pc = 0x7B313Cu;
    // 0x7b313c: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x7b313cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7b3140: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B3140u;
    {
        const bool branch_taken_0x7b3140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B3144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3140u;
        // 0x7b3144: 0x90e20004  lbu         $v0, 0x4($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3140) {
            ctx->pc = 0x7B3158u;
            goto label_7b3158;
        }
    }
    ctx->pc = 0x7B3148u;
    // 0x7b3148: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x7B3148u;
    {
        const bool branch_taken_0x7b3148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b3148) {
            ctx->pc = 0x7B314Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3148u;
            // 0x7b314c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3178u;
            goto label_7b3178;
        }
    }
    ctx->pc = 0x7B3150u;
    // 0x7b3150: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B3150u;
    {
        const bool branch_taken_0x7b3150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B3154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3150u;
        // 0x7b3154: 0x84c30006  lh          $v1, 0x6($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3150) {
            ctx->pc = 0x7B3164u;
            goto label_7b3164;
        }
    }
    ctx->pc = 0x7B3158u;
label_7b3158:
    // 0x7b3158: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x7B3158u;
    {
        const bool branch_taken_0x7b3158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b3158) {
            ctx->pc = 0x7B315Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3158u;
            // 0x7b315c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B317Cu;
            goto label_7b317c;
        }
    }
    ctx->pc = 0x7B3160u;
    // 0x7b3160: 0x84c30006  lh          $v1, 0x6($a2)
    ctx->pc = 0x7b3160u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_7b3164:
    // 0x7b3164: 0x84e20006  lh          $v0, 0x6($a3)
    ctx->pc = 0x7b3164u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x7b3168: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x7b3168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7b316c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B316Cu;
    {
        const bool branch_taken_0x7b316c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b316c) {
            ctx->pc = 0x7B3170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B316Cu;
            // 0x7b3170: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B317Cu;
            goto label_7b317c;
        }
    }
    ctx->pc = 0x7B3174u;
    // 0x7b3174: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x7b3174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_7b3178:
    // 0x7b3178: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x7b3178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_7b317c:
    // 0x7b317c: 0x1480ffcc  bnez        $a0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x7B317Cu;
    {
        const bool branch_taken_0x7b317c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B3180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B317Cu;
        // 0x7b3180: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b317c) {
            ctx->pc = 0x7B30B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b30b0;
        }
    }
    ctx->pc = 0x7B3184u;
    // 0x7b3184: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x7b3184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_7b3188:
    // 0x7b3188: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x7b3188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7b318c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x7b318cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7b3190: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x7b3190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7b3194: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x7b3194u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b3198: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x7b3198u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b319c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x7b319cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b31a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b31a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b31a4: 0x3e00008  jr          $ra
    ctx->pc = 0x7B31A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B31A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B31A4u;
        // 0x7b31a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B31A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B31ACu;
    // 0x7b31ac: 0x0  nop
    ctx->pc = 0x7b31acu;
    // NOP
    ctx->pc = 0x7b31b0u;
}
} // namespace gh_event
