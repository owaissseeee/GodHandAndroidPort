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
// Function: getPrevSeqPtr__Ct15cEventSeqPlayer1Z17cEventSeqScrLighti
// Address: 0x7b3660 - 0x7b37f0
void getPrevSeqPtr__Ct15cEventSeqPlayer1Z17cEventSeqScrLighti_0x7b3660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getPrevSeqPtr__Ct15cEventSeqPlayer1Z17cEventSeqScrLighti_0x7b3660");
#endif

    switch (ctx->pc) {
        case 0x7b36a4u: goto label_7b36a4;
        case 0x7b36b4u: goto label_7b36b4;
        case 0x7b36c4u: goto label_7b36c4;
        case 0x7b36f0u: goto label_7b36f0;
        default: break;
    }

    ctx->pc = 0x7b3660u;

    // 0x7b3660: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7b3660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7b3664: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x7b3664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x7b3668: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7b3668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7b366c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x7b366cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3670: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7b3670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7b3674: 0x3c10007b  lui         $s0, 0x7B
    ctx->pc = 0x7b3674u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)123 << 16));
    // 0x7b3678: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x7b3678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x7b367c: 0x158e00  sll         $s1, $s5, 24
    ctx->pc = 0x7b367cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 24));
    // 0x7b3680: 0x261058d8  addiu       $s0, $s0, 0x58D8
    ctx->pc = 0x7b3680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22744));
    // 0x7b3684: 0x118e03  sra         $s1, $s1, 24
    ctx->pc = 0x7b3684u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 24));
    // 0x7b3688: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x7b3688u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b368c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7b368cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7b3690: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x7b3690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x7b3694: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b3694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3698: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b3698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b369c: 0xc1ec13a  jal         func_7B04E8
    ctx->pc = 0x7B369Cu;
    SET_GPR_U32(ctx, 31, 0x7B36A4u);
    ctx->pc = 0x7B36A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B369Cu;
    // 0x7b36a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B04E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B04E8u, 0x7B369Cu, 0x7B36A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B36A4u;
label_7b36a4:
    // 0x7b36a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b36a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b36a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7b36a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b36ac: 0xc1ec148  jal         func_7B0520
    ctx->pc = 0x7B36ACu;
    SET_GPR_U32(ctx, 31, 0x7B36B4u);
    ctx->pc = 0x7B36B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B36ACu;
    // 0x7b36b0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0520u, 0x7B36ACu, 0x7B36B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B36B4u;
label_7b36b4:
    // 0x7b36b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7b36b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b36b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b36b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b36bc: 0xc1ec156  jal         func_7B0558
    ctx->pc = 0x7B36BCu;
    SET_GPR_U32(ctx, 31, 0x7B36C4u);
    ctx->pc = 0x7B36C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B36BCu;
    // 0x7b36c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0558u, 0x7B36BCu, 0x7B36C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B36C4u;
label_7b36c4:
    // 0x7b36c4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x7b36c4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x7b36c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7b36c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b36cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7b36ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7b36d0: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B36D0u;
    {
        const bool branch_taken_0x7b36d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x7B36D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B36D0u;
        // 0x7b36d4: 0x8e660010  lw          $a2, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b36d0) {
            ctx->pc = 0x7B36E0u;
            goto label_7b36e0;
        }
    }
    ctx->pc = 0x7B36D8u;
    // 0x7b36d8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x7B36D8u;
    {
        const bool branch_taken_0x7b36d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B36DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B36D8u;
        // 0x7b36dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b36d8) {
            ctx->pc = 0x7B37C8u;
            goto label_7b37c8;
        }
    }
    ctx->pc = 0x7B36E0u;
label_7b36e0:
    // 0x7b36e0: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x7b36e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x7b36e4: 0x18800038  blez        $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x7B36E4u;
    {
        const bool branch_taken_0x7b36e4 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x7B36E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B36E4u;
        // 0x7b36e8: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b36e4) {
            ctx->pc = 0x7B37C8u;
            goto label_7b37c8;
        }
    }
    ctx->pc = 0x7B36ECu;
    // 0x7b36ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x7b36ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7b36f0:
    // 0x7b36f0: 0x80c20005  lb          $v0, 0x5($a2)
    ctx->pc = 0x7b36f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x7b36f4: 0x54550031  bnel        $v0, $s5, . + 4 + (0x31 << 2)
    ctx->pc = 0x7B36F4u;
    {
        const bool branch_taken_0x7b36f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x7b36f4) {
            ctx->pc = 0x7B36F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B36F4u;
            // 0x7b36f8: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B37BCu;
            goto label_7b37bc;
        }
    }
    ctx->pc = 0x7B36FCu;
    // 0x7b36fc: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x7b36fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x7b3700: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x7b3700u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7b3704: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x7B3704u;
    {
        const bool branch_taken_0x7b3704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b3704) {
            ctx->pc = 0x7B3708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3704u;
            // 0x7b3708: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B37BCu;
            goto label_7b37bc;
        }
    }
    ctx->pc = 0x7B370Cu;
    // 0x7b370c: 0x14740012  bne         $v1, $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x7B370Cu;
    {
        const bool branch_taken_0x7b370c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x7b370c) {
            ctx->pc = 0x7B3758u;
            goto label_7b3758;
        }
    }
    ctx->pc = 0x7B3714u;
    // 0x7b3714: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x7b3714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7b3718: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B3718u;
    {
        const bool branch_taken_0x7b3718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b3718) {
            ctx->pc = 0x7B3730u;
            goto label_7b3730;
        }
    }
    ctx->pc = 0x7B3720u;
    // 0x7b3720: 0x1640000d  bnez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x7B3720u;
    {
        const bool branch_taken_0x7b3720 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b3720) {
            ctx->pc = 0x7B3758u;
            goto label_7b3758;
        }
    }
    ctx->pc = 0x7B3728u;
    // 0x7b3728: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B3728u;
    {
        const bool branch_taken_0x7b3728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3728u;
        // 0x7b372c: 0x84c20006  lh          $v0, 0x6($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3728) {
            ctx->pc = 0x7B373Cu;
            goto label_7b373c;
        }
    }
    ctx->pc = 0x7B3730u;
label_7b3730:
    // 0x7b3730: 0x52400022  beql        $s2, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x7B3730u;
    {
        const bool branch_taken_0x7b3730 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b3730) {
            ctx->pc = 0x7B3734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3730u;
            // 0x7b3734: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B37BCu;
            goto label_7b37bc;
        }
    }
    ctx->pc = 0x7B3738u;
    // 0x7b3738: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x7b3738u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_7b373c:
    // 0x7b373c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x7b373cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7b3740: 0x0  nop
    ctx->pc = 0x7b3740u;
    // NOP
    // 0x7b3744: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7b3744u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7b3748: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x7b3748u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7b374c: 0x0  nop
    ctx->pc = 0x7b374cu;
    // NOP
    // 0x7b3750: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
    ctx->pc = 0x7B3750u;
    {
        const bool branch_taken_0x7b3750 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7b3750) {
            ctx->pc = 0x7B3754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3750u;
            // 0x7b3754: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B37BCu;
            goto label_7b37bc;
        }
    }
    ctx->pc = 0x7B3758u;
label_7b3758:
    // 0x7b3758: 0x50e00017  beql        $a3, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x7B3758u;
    {
        const bool branch_taken_0x7b3758 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b3758) {
            ctx->pc = 0x7B375Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3758u;
            // 0x7b375c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B37B8u;
            goto label_7b37b8;
        }
    }
    ctx->pc = 0x7B3760u;
    // 0x7b3760: 0x90c50003  lbu         $a1, 0x3($a2)
    ctx->pc = 0x7b3760u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x7b3764: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x7b3764u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x7b3768: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x7b3768u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x7b376c: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x7B376Cu;
    {
        const bool branch_taken_0x7b376c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b376c) {
            ctx->pc = 0x7B3770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B376Cu;
            // 0x7b3770: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B37BCu;
            goto label_7b37bc;
        }
    }
    ctx->pc = 0x7B3774u;
    // 0x7b3774: 0x54a30010  bnel        $a1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x7B3774u;
    {
        const bool branch_taken_0x7b3774 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x7b3774) {
            ctx->pc = 0x7B3778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3774u;
            // 0x7b3778: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B37B8u;
            goto label_7b37b8;
        }
    }
    ctx->pc = 0x7B377Cu;
    // 0x7b377c: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x7b377cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7b3780: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B3780u;
    {
        const bool branch_taken_0x7b3780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B3784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3780u;
        // 0x7b3784: 0x90e20004  lbu         $v0, 0x4($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3780) {
            ctx->pc = 0x7B3798u;
            goto label_7b3798;
        }
    }
    ctx->pc = 0x7B3788u;
    // 0x7b3788: 0x5048000c  beql        $v0, $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x7B3788u;
    {
        const bool branch_taken_0x7b3788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x7b3788) {
            ctx->pc = 0x7B378Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3788u;
            // 0x7b378c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B37BCu;
            goto label_7b37bc;
        }
    }
    ctx->pc = 0x7B3790u;
    // 0x7b3790: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B3790u;
    {
        const bool branch_taken_0x7b3790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B3794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3790u;
        // 0x7b3794: 0x84c20006  lh          $v0, 0x6($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3790) {
            ctx->pc = 0x7B37A4u;
            goto label_7b37a4;
        }
    }
    ctx->pc = 0x7B3798u;
label_7b3798:
    // 0x7b3798: 0x54480007  bnel        $v0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7B3798u;
    {
        const bool branch_taken_0x7b3798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x7b3798) {
            ctx->pc = 0x7B379Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3798u;
            // 0x7b379c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B37B8u;
            goto label_7b37b8;
        }
    }
    ctx->pc = 0x7B37A0u;
    // 0x7b37a0: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x7b37a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_7b37a4:
    // 0x7b37a4: 0x84e30006  lh          $v1, 0x6($a3)
    ctx->pc = 0x7b37a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x7b37a8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x7b37a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7b37ac: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B37ACu;
    {
        const bool branch_taken_0x7b37ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b37ac) {
            ctx->pc = 0x7B37B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B37ACu;
            // 0x7b37b0: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B37BCu;
            goto label_7b37bc;
        }
    }
    ctx->pc = 0x7B37B4u;
    // 0x7b37b4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x7b37b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_7b37b8:
    // 0x7b37b8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x7b37b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_7b37bc:
    // 0x7b37bc: 0x1480ffcc  bnez        $a0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x7B37BCu;
    {
        const bool branch_taken_0x7b37bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B37C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B37BCu;
        // 0x7b37c0: 0x24c60060  addiu       $a2, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b37bc) {
            ctx->pc = 0x7B36F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b36f0;
        }
    }
    ctx->pc = 0x7B37C4u;
    // 0x7b37c4: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x7b37c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_7b37c8:
    // 0x7b37c8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x7b37c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7b37cc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x7b37ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7b37d0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x7b37d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7b37d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x7b37d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b37d8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x7b37d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b37dc: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x7b37dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b37e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b37e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b37e4: 0x3e00008  jr          $ra
    ctx->pc = 0x7B37E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B37E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B37E4u;
        // 0x7b37e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B37E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B37ECu;
    // 0x7b37ec: 0x0  nop
    ctx->pc = 0x7b37ecu;
    // NOP
    ctx->pc = 0x7b37f0u;
}
} // namespace gh_event
