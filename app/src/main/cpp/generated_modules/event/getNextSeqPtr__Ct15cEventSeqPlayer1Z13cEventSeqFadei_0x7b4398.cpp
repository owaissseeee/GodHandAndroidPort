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
// Function: getNextSeqPtr__Ct15cEventSeqPlayer1Z13cEventSeqFadei
// Address: 0x7b4398 - 0x7b4528
void getNextSeqPtr__Ct15cEventSeqPlayer1Z13cEventSeqFadei_0x7b4398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getNextSeqPtr__Ct15cEventSeqPlayer1Z13cEventSeqFadei_0x7b4398");
#endif

    switch (ctx->pc) {
        case 0x7b43dcu: goto label_7b43dc;
        case 0x7b43ecu: goto label_7b43ec;
        case 0x7b43fcu: goto label_7b43fc;
        case 0x7b4428u: goto label_7b4428;
        default: break;
    }

    ctx->pc = 0x7b4398u;

    // 0x7b4398: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7b4398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7b439c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x7b439cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x7b43a0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7b43a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7b43a4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x7b43a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b43a8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7b43a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7b43ac: 0x3c10007b  lui         $s0, 0x7B
    ctx->pc = 0x7b43acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)123 << 16));
    // 0x7b43b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x7b43b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x7b43b4: 0x158e00  sll         $s1, $s5, 24
    ctx->pc = 0x7b43b4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 24));
    // 0x7b43b8: 0x261058d8  addiu       $s0, $s0, 0x58D8
    ctx->pc = 0x7b43b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22744));
    // 0x7b43bc: 0x118e03  sra         $s1, $s1, 24
    ctx->pc = 0x7b43bcu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 24));
    // 0x7b43c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x7b43c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b43c4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7b43c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7b43c8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x7b43c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x7b43cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b43ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b43d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b43d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b43d4: 0xc1ec13a  jal         func_7B04E8
    ctx->pc = 0x7B43D4u;
    SET_GPR_U32(ctx, 31, 0x7B43DCu);
    ctx->pc = 0x7B43D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B43D4u;
    // 0x7b43d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B04E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B04E8u, 0x7B43D4u, 0x7B43DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B43DCu;
label_7b43dc:
    // 0x7b43dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b43dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b43e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7b43e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b43e4: 0xc1ec148  jal         func_7B0520
    ctx->pc = 0x7B43E4u;
    SET_GPR_U32(ctx, 31, 0x7B43ECu);
    ctx->pc = 0x7B43E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B43E4u;
    // 0x7b43e8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0520u, 0x7B43E4u, 0x7B43ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B43ECu;
label_7b43ec:
    // 0x7b43ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7b43ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b43f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b43f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b43f4: 0xc1ec156  jal         func_7B0558
    ctx->pc = 0x7B43F4u;
    SET_GPR_U32(ctx, 31, 0x7B43FCu);
    ctx->pc = 0x7B43F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B43F4u;
    // 0x7b43f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0558u, 0x7B43F4u, 0x7B43FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B43FCu;
label_7b43fc:
    // 0x7b43fc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x7b43fcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x7b4400: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7b4400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b4404: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7b4404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7b4408: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B4408u;
    {
        const bool branch_taken_0x7b4408 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x7B440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4408u;
        // 0x7b440c: 0x8e660010  lw          $a2, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b4408) {
            ctx->pc = 0x7B4418u;
            goto label_7b4418;
        }
    }
    ctx->pc = 0x7B4410u;
    // 0x7b4410: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x7B4410u;
    {
        const bool branch_taken_0x7b4410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B4414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4410u;
        // 0x7b4414: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b4410) {
            ctx->pc = 0x7B4500u;
            goto label_7b4500;
        }
    }
    ctx->pc = 0x7B4418u;
label_7b4418:
    // 0x7b4418: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x7b4418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x7b441c: 0x18800038  blez        $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x7B441Cu;
    {
        const bool branch_taken_0x7b441c = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x7B4420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B441Cu;
        // 0x7b4420: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b441c) {
            ctx->pc = 0x7B4500u;
            goto label_7b4500;
        }
    }
    ctx->pc = 0x7B4424u;
    // 0x7b4424: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x7b4424u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7b4428:
    // 0x7b4428: 0x80c20005  lb          $v0, 0x5($a2)
    ctx->pc = 0x7b4428u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x7b442c: 0x54550031  bnel        $v0, $s5, . + 4 + (0x31 << 2)
    ctx->pc = 0x7B442Cu;
    {
        const bool branch_taken_0x7b442c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x7b442c) {
            ctx->pc = 0x7B4430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B442Cu;
            // 0x7b4430: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B44F4u;
            goto label_7b44f4;
        }
    }
    ctx->pc = 0x7B4434u;
    // 0x7b4434: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x7b4434u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x7b4438: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x7b4438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x7b443c: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x7B443Cu;
    {
        const bool branch_taken_0x7b443c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b443c) {
            ctx->pc = 0x7B4440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B443Cu;
            // 0x7b4440: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B44F4u;
            goto label_7b44f4;
        }
    }
    ctx->pc = 0x7B4444u;
    // 0x7b4444: 0x14740012  bne         $v1, $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x7B4444u;
    {
        const bool branch_taken_0x7b4444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x7b4444) {
            ctx->pc = 0x7B4490u;
            goto label_7b4490;
        }
    }
    ctx->pc = 0x7B444Cu;
    // 0x7b444c: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x7b444cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7b4450: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B4450u;
    {
        const bool branch_taken_0x7b4450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b4450) {
            ctx->pc = 0x7B4468u;
            goto label_7b4468;
        }
    }
    ctx->pc = 0x7B4458u;
    // 0x7b4458: 0x52480026  beql        $s2, $t0, . + 4 + (0x26 << 2)
    ctx->pc = 0x7B4458u;
    {
        const bool branch_taken_0x7b4458 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 8));
        if (branch_taken_0x7b4458) {
            ctx->pc = 0x7B445Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B4458u;
            // 0x7b445c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B44F4u;
            goto label_7b44f4;
        }
    }
    ctx->pc = 0x7B4460u;
    // 0x7b4460: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B4460u;
    {
        const bool branch_taken_0x7b4460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B4464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4460u;
        // 0x7b4464: 0x84c20006  lh          $v0, 0x6($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b4460) {
            ctx->pc = 0x7B4474u;
            goto label_7b4474;
        }
    }
    ctx->pc = 0x7B4468u;
label_7b4468:
    // 0x7b4468: 0x16480009  bne         $s2, $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7B4468u;
    {
        const bool branch_taken_0x7b4468 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 8));
        if (branch_taken_0x7b4468) {
            ctx->pc = 0x7B4490u;
            goto label_7b4490;
        }
    }
    ctx->pc = 0x7B4470u;
    // 0x7b4470: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x7b4470u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_7b4474:
    // 0x7b4474: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x7b4474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7b4478: 0x0  nop
    ctx->pc = 0x7b4478u;
    // NOP
    // 0x7b447c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7b447cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7b4480: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x7b4480u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7b4484: 0x0  nop
    ctx->pc = 0x7b4484u;
    // NOP
    // 0x7b4488: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
    ctx->pc = 0x7B4488u;
    {
        const bool branch_taken_0x7b4488 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7b4488) {
            ctx->pc = 0x7B448Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B4488u;
            // 0x7b448c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B44F4u;
            goto label_7b44f4;
        }
    }
    ctx->pc = 0x7B4490u;
label_7b4490:
    // 0x7b4490: 0x50e00017  beql        $a3, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x7B4490u;
    {
        const bool branch_taken_0x7b4490 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b4490) {
            ctx->pc = 0x7B4494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B4490u;
            // 0x7b4494: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B44F0u;
            goto label_7b44f0;
        }
    }
    ctx->pc = 0x7B4498u;
    // 0x7b4498: 0x90c50003  lbu         $a1, 0x3($a2)
    ctx->pc = 0x7b4498u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x7b449c: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x7b449cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x7b44a0: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x7b44a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x7b44a4: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x7B44A4u;
    {
        const bool branch_taken_0x7b44a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b44a4) {
            ctx->pc = 0x7B44A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B44A4u;
            // 0x7b44a8: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B44F4u;
            goto label_7b44f4;
        }
    }
    ctx->pc = 0x7B44ACu;
    // 0x7b44ac: 0x54a30010  bnel        $a1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x7B44ACu;
    {
        const bool branch_taken_0x7b44ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x7b44ac) {
            ctx->pc = 0x7B44B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B44ACu;
            // 0x7b44b0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B44F0u;
            goto label_7b44f0;
        }
    }
    ctx->pc = 0x7B44B4u;
    // 0x7b44b4: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x7b44b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7b44b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B44B8u;
    {
        const bool branch_taken_0x7b44b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B44BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B44B8u;
        // 0x7b44bc: 0x90e20004  lbu         $v0, 0x4($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b44b8) {
            ctx->pc = 0x7B44D0u;
            goto label_7b44d0;
        }
    }
    ctx->pc = 0x7B44C0u;
    // 0x7b44c0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x7B44C0u;
    {
        const bool branch_taken_0x7b44c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b44c0) {
            ctx->pc = 0x7B44C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B44C0u;
            // 0x7b44c4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B44F0u;
            goto label_7b44f0;
        }
    }
    ctx->pc = 0x7B44C8u;
    // 0x7b44c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B44C8u;
    {
        const bool branch_taken_0x7b44c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B44CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B44C8u;
        // 0x7b44cc: 0x84c30006  lh          $v1, 0x6($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b44c8) {
            ctx->pc = 0x7B44DCu;
            goto label_7b44dc;
        }
    }
    ctx->pc = 0x7B44D0u;
label_7b44d0:
    // 0x7b44d0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x7B44D0u;
    {
        const bool branch_taken_0x7b44d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b44d0) {
            ctx->pc = 0x7B44D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B44D0u;
            // 0x7b44d4: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B44F4u;
            goto label_7b44f4;
        }
    }
    ctx->pc = 0x7B44D8u;
    // 0x7b44d8: 0x84c30006  lh          $v1, 0x6($a2)
    ctx->pc = 0x7b44d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_7b44dc:
    // 0x7b44dc: 0x84e20006  lh          $v0, 0x6($a3)
    ctx->pc = 0x7b44dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x7b44e0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x7b44e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7b44e4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B44E4u;
    {
        const bool branch_taken_0x7b44e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b44e4) {
            ctx->pc = 0x7B44E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B44E4u;
            // 0x7b44e8: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B44F4u;
            goto label_7b44f4;
        }
    }
    ctx->pc = 0x7B44ECu;
    // 0x7b44ec: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x7b44ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_7b44f0:
    // 0x7b44f0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x7b44f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_7b44f4:
    // 0x7b44f4: 0x1480ffcc  bnez        $a0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x7B44F4u;
    {
        const bool branch_taken_0x7b44f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B44F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B44F4u;
        // 0x7b44f8: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b44f4) {
            ctx->pc = 0x7B4428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b4428;
        }
    }
    ctx->pc = 0x7B44FCu;
    // 0x7b44fc: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x7b44fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_7b4500:
    // 0x7b4500: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x7b4500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7b4504: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x7b4504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7b4508: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x7b4508u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7b450c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x7b450cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b4510: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x7b4510u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b4514: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x7b4514u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b4518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b4518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b451c: 0x3e00008  jr          $ra
    ctx->pc = 0x7B451Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B4520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B451Cu;
        // 0x7b4520: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B451Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B4524u;
    // 0x7b4524: 0x0  nop
    ctx->pc = 0x7b4524u;
    // NOP
    ctx->pc = 0x7b4528u;
}
} // namespace gh_event
