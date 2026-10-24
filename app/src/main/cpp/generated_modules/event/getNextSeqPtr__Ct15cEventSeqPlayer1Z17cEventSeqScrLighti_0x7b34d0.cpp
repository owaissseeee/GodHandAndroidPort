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
// Function: getNextSeqPtr__Ct15cEventSeqPlayer1Z17cEventSeqScrLighti
// Address: 0x7b34d0 - 0x7b3660
void getNextSeqPtr__Ct15cEventSeqPlayer1Z17cEventSeqScrLighti_0x7b34d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getNextSeqPtr__Ct15cEventSeqPlayer1Z17cEventSeqScrLighti_0x7b34d0");
#endif

    switch (ctx->pc) {
        case 0x7b3514u: goto label_7b3514;
        case 0x7b3524u: goto label_7b3524;
        case 0x7b3534u: goto label_7b3534;
        case 0x7b3560u: goto label_7b3560;
        default: break;
    }

    ctx->pc = 0x7b34d0u;

    // 0x7b34d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7b34d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7b34d4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x7b34d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x7b34d8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7b34d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7b34dc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x7b34dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b34e0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7b34e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7b34e4: 0x3c10007b  lui         $s0, 0x7B
    ctx->pc = 0x7b34e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)123 << 16));
    // 0x7b34e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x7b34e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x7b34ec: 0x158e00  sll         $s1, $s5, 24
    ctx->pc = 0x7b34ecu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 24));
    // 0x7b34f0: 0x261058d8  addiu       $s0, $s0, 0x58D8
    ctx->pc = 0x7b34f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22744));
    // 0x7b34f4: 0x118e03  sra         $s1, $s1, 24
    ctx->pc = 0x7b34f4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 24));
    // 0x7b34f8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x7b34f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b34fc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7b34fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7b3500: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x7b3500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x7b3504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b3504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b3508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b350c: 0xc1ec13a  jal         func_7B04E8
    ctx->pc = 0x7B350Cu;
    SET_GPR_U32(ctx, 31, 0x7B3514u);
    ctx->pc = 0x7B3510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B350Cu;
    // 0x7b3510: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B04E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B04E8u, 0x7B350Cu, 0x7B3514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3514u;
label_7b3514:
    // 0x7b3514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b3514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3518: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7b3518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b351c: 0xc1ec148  jal         func_7B0520
    ctx->pc = 0x7B351Cu;
    SET_GPR_U32(ctx, 31, 0x7B3524u);
    ctx->pc = 0x7B3520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B351Cu;
    // 0x7b3520: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0520u, 0x7B351Cu, 0x7B3524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3524u;
label_7b3524:
    // 0x7b3524: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7b3524u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b3528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b352c: 0xc1ec156  jal         func_7B0558
    ctx->pc = 0x7B352Cu;
    SET_GPR_U32(ctx, 31, 0x7B3534u);
    ctx->pc = 0x7B3530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B352Cu;
    // 0x7b3530: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0558u, 0x7B352Cu, 0x7B3534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3534u;
label_7b3534:
    // 0x7b3534: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x7b3534u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x7b3538: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7b3538u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b353c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7b353cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7b3540: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B3540u;
    {
        const bool branch_taken_0x7b3540 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x7B3544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3540u;
        // 0x7b3544: 0x8e660010  lw          $a2, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3540) {
            ctx->pc = 0x7B3550u;
            goto label_7b3550;
        }
    }
    ctx->pc = 0x7B3548u;
    // 0x7b3548: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x7B3548u;
    {
        const bool branch_taken_0x7b3548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3548u;
        // 0x7b354c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3548) {
            ctx->pc = 0x7B3638u;
            goto label_7b3638;
        }
    }
    ctx->pc = 0x7B3550u;
label_7b3550:
    // 0x7b3550: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x7b3550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x7b3554: 0x18800038  blez        $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x7B3554u;
    {
        const bool branch_taken_0x7b3554 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x7B3558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3554u;
        // 0x7b3558: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3554) {
            ctx->pc = 0x7B3638u;
            goto label_7b3638;
        }
    }
    ctx->pc = 0x7B355Cu;
    // 0x7b355c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x7b355cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7b3560:
    // 0x7b3560: 0x80c20005  lb          $v0, 0x5($a2)
    ctx->pc = 0x7b3560u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x7b3564: 0x54550031  bnel        $v0, $s5, . + 4 + (0x31 << 2)
    ctx->pc = 0x7B3564u;
    {
        const bool branch_taken_0x7b3564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x7b3564) {
            ctx->pc = 0x7B3568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3564u;
            // 0x7b3568: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B362Cu;
            goto label_7b362c;
        }
    }
    ctx->pc = 0x7B356Cu;
    // 0x7b356c: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x7b356cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x7b3570: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x7b3570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x7b3574: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x7B3574u;
    {
        const bool branch_taken_0x7b3574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b3574) {
            ctx->pc = 0x7B3578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3574u;
            // 0x7b3578: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B362Cu;
            goto label_7b362c;
        }
    }
    ctx->pc = 0x7B357Cu;
    // 0x7b357c: 0x14740012  bne         $v1, $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x7B357Cu;
    {
        const bool branch_taken_0x7b357c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x7b357c) {
            ctx->pc = 0x7B35C8u;
            goto label_7b35c8;
        }
    }
    ctx->pc = 0x7B3584u;
    // 0x7b3584: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x7b3584u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7b3588: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B3588u;
    {
        const bool branch_taken_0x7b3588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b3588) {
            ctx->pc = 0x7B35A0u;
            goto label_7b35a0;
        }
    }
    ctx->pc = 0x7B3590u;
    // 0x7b3590: 0x52480026  beql        $s2, $t0, . + 4 + (0x26 << 2)
    ctx->pc = 0x7B3590u;
    {
        const bool branch_taken_0x7b3590 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 8));
        if (branch_taken_0x7b3590) {
            ctx->pc = 0x7B3594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3590u;
            // 0x7b3594: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B362Cu;
            goto label_7b362c;
        }
    }
    ctx->pc = 0x7B3598u;
    // 0x7b3598: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B3598u;
    {
        const bool branch_taken_0x7b3598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3598u;
        // 0x7b359c: 0x84c20006  lh          $v0, 0x6($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3598) {
            ctx->pc = 0x7B35ACu;
            goto label_7b35ac;
        }
    }
    ctx->pc = 0x7B35A0u;
label_7b35a0:
    // 0x7b35a0: 0x16480009  bne         $s2, $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7B35A0u;
    {
        const bool branch_taken_0x7b35a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 8));
        if (branch_taken_0x7b35a0) {
            ctx->pc = 0x7B35C8u;
            goto label_7b35c8;
        }
    }
    ctx->pc = 0x7B35A8u;
    // 0x7b35a8: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x7b35a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_7b35ac:
    // 0x7b35ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x7b35acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7b35b0: 0x0  nop
    ctx->pc = 0x7b35b0u;
    // NOP
    // 0x7b35b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7b35b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7b35b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x7b35b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7b35bc: 0x0  nop
    ctx->pc = 0x7b35bcu;
    // NOP
    // 0x7b35c0: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
    ctx->pc = 0x7B35C0u;
    {
        const bool branch_taken_0x7b35c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7b35c0) {
            ctx->pc = 0x7B35C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B35C0u;
            // 0x7b35c4: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B362Cu;
            goto label_7b362c;
        }
    }
    ctx->pc = 0x7B35C8u;
label_7b35c8:
    // 0x7b35c8: 0x50e00017  beql        $a3, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x7B35C8u;
    {
        const bool branch_taken_0x7b35c8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b35c8) {
            ctx->pc = 0x7B35CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B35C8u;
            // 0x7b35cc: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3628u;
            goto label_7b3628;
        }
    }
    ctx->pc = 0x7B35D0u;
    // 0x7b35d0: 0x90c50003  lbu         $a1, 0x3($a2)
    ctx->pc = 0x7b35d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x7b35d4: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x7b35d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x7b35d8: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x7b35d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x7b35dc: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x7B35DCu;
    {
        const bool branch_taken_0x7b35dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b35dc) {
            ctx->pc = 0x7B35E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B35DCu;
            // 0x7b35e0: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B362Cu;
            goto label_7b362c;
        }
    }
    ctx->pc = 0x7B35E4u;
    // 0x7b35e4: 0x54a30010  bnel        $a1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x7B35E4u;
    {
        const bool branch_taken_0x7b35e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x7b35e4) {
            ctx->pc = 0x7B35E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B35E4u;
            // 0x7b35e8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3628u;
            goto label_7b3628;
        }
    }
    ctx->pc = 0x7B35ECu;
    // 0x7b35ec: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x7b35ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7b35f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B35F0u;
    {
        const bool branch_taken_0x7b35f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B35F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B35F0u;
        // 0x7b35f4: 0x90e20004  lbu         $v0, 0x4($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b35f0) {
            ctx->pc = 0x7B3608u;
            goto label_7b3608;
        }
    }
    ctx->pc = 0x7B35F8u;
    // 0x7b35f8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x7B35F8u;
    {
        const bool branch_taken_0x7b35f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b35f8) {
            ctx->pc = 0x7B35FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B35F8u;
            // 0x7b35fc: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3628u;
            goto label_7b3628;
        }
    }
    ctx->pc = 0x7B3600u;
    // 0x7b3600: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B3600u;
    {
        const bool branch_taken_0x7b3600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B3604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3600u;
        // 0x7b3604: 0x84c30006  lh          $v1, 0x6($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3600) {
            ctx->pc = 0x7B3614u;
            goto label_7b3614;
        }
    }
    ctx->pc = 0x7B3608u;
label_7b3608:
    // 0x7b3608: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x7B3608u;
    {
        const bool branch_taken_0x7b3608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b3608) {
            ctx->pc = 0x7B360Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3608u;
            // 0x7b360c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B362Cu;
            goto label_7b362c;
        }
    }
    ctx->pc = 0x7B3610u;
    // 0x7b3610: 0x84c30006  lh          $v1, 0x6($a2)
    ctx->pc = 0x7b3610u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_7b3614:
    // 0x7b3614: 0x84e20006  lh          $v0, 0x6($a3)
    ctx->pc = 0x7b3614u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x7b3618: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x7b3618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7b361c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B361Cu;
    {
        const bool branch_taken_0x7b361c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b361c) {
            ctx->pc = 0x7B3620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B361Cu;
            // 0x7b3620: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B362Cu;
            goto label_7b362c;
        }
    }
    ctx->pc = 0x7B3624u;
    // 0x7b3624: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x7b3624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_7b3628:
    // 0x7b3628: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x7b3628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_7b362c:
    // 0x7b362c: 0x1480ffcc  bnez        $a0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x7B362Cu;
    {
        const bool branch_taken_0x7b362c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B3630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B362Cu;
        // 0x7b3630: 0x24c60060  addiu       $a2, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b362c) {
            ctx->pc = 0x7B3560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b3560;
        }
    }
    ctx->pc = 0x7B3634u;
    // 0x7b3634: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x7b3634u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_7b3638:
    // 0x7b3638: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x7b3638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7b363c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x7b363cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7b3640: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x7b3640u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7b3644: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x7b3644u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b3648: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x7b3648u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b364c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x7b364cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b3650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b3650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b3654: 0x3e00008  jr          $ra
    ctx->pc = 0x7B3654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B3658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3654u;
        // 0x7b3658: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B3654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B365Cu;
    // 0x7b365c: 0x0  nop
    ctx->pc = 0x7b365cu;
    // NOP
    ctx->pc = 0x7b3660u;
}
} // namespace gh_event
