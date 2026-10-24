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
// Function: getPrevSeqPtr__Ct15cEventSeqPlayer1Z13cEventSeqFadei
// Address: 0x7b4528 - 0x7b46b8
void getPrevSeqPtr__Ct15cEventSeqPlayer1Z13cEventSeqFadei_0x7b4528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getPrevSeqPtr__Ct15cEventSeqPlayer1Z13cEventSeqFadei_0x7b4528");
#endif

    switch (ctx->pc) {
        case 0x7b456cu: goto label_7b456c;
        case 0x7b457cu: goto label_7b457c;
        case 0x7b458cu: goto label_7b458c;
        case 0x7b45b8u: goto label_7b45b8;
        default: break;
    }

    ctx->pc = 0x7b4528u;

    // 0x7b4528: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7b4528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7b452c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x7b452cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x7b4530: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7b4530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7b4534: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x7b4534u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b4538: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7b4538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7b453c: 0x3c10007b  lui         $s0, 0x7B
    ctx->pc = 0x7b453cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)123 << 16));
    // 0x7b4540: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x7b4540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x7b4544: 0x158e00  sll         $s1, $s5, 24
    ctx->pc = 0x7b4544u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 24));
    // 0x7b4548: 0x261058d8  addiu       $s0, $s0, 0x58D8
    ctx->pc = 0x7b4548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22744));
    // 0x7b454c: 0x118e03  sra         $s1, $s1, 24
    ctx->pc = 0x7b454cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 24));
    // 0x7b4550: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x7b4550u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b4554: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7b4554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7b4558: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x7b4558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x7b455c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b455cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b4560: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b4560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b4564: 0xc1ec13a  jal         func_7B04E8
    ctx->pc = 0x7B4564u;
    SET_GPR_U32(ctx, 31, 0x7B456Cu);
    ctx->pc = 0x7B4568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B4564u;
    // 0x7b4568: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B04E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B04E8u, 0x7B4564u, 0x7B456Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B456Cu;
label_7b456c:
    // 0x7b456c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b456cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b4570: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7b4570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b4574: 0xc1ec148  jal         func_7B0520
    ctx->pc = 0x7B4574u;
    SET_GPR_U32(ctx, 31, 0x7B457Cu);
    ctx->pc = 0x7B4578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B4574u;
    // 0x7b4578: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0520u, 0x7B4574u, 0x7B457Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B457Cu;
label_7b457c:
    // 0x7b457c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7b457cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b4580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b4580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b4584: 0xc1ec156  jal         func_7B0558
    ctx->pc = 0x7B4584u;
    SET_GPR_U32(ctx, 31, 0x7B458Cu);
    ctx->pc = 0x7B4588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B4584u;
    // 0x7b4588: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0558u, 0x7B4584u, 0x7B458Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B458Cu;
label_7b458c:
    // 0x7b458c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x7b458cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x7b4590: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7b4590u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b4594: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7b4594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7b4598: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B4598u;
    {
        const bool branch_taken_0x7b4598 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x7B459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4598u;
        // 0x7b459c: 0x8e660010  lw          $a2, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b4598) {
            ctx->pc = 0x7B45A8u;
            goto label_7b45a8;
        }
    }
    ctx->pc = 0x7B45A0u;
    // 0x7b45a0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x7B45A0u;
    {
        const bool branch_taken_0x7b45a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B45A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B45A0u;
        // 0x7b45a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b45a0) {
            ctx->pc = 0x7B4690u;
            goto label_7b4690;
        }
    }
    ctx->pc = 0x7B45A8u;
label_7b45a8:
    // 0x7b45a8: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x7b45a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x7b45ac: 0x18800038  blez        $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x7B45ACu;
    {
        const bool branch_taken_0x7b45ac = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x7B45B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B45ACu;
        // 0x7b45b0: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b45ac) {
            ctx->pc = 0x7B4690u;
            goto label_7b4690;
        }
    }
    ctx->pc = 0x7B45B4u;
    // 0x7b45b4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x7b45b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7b45b8:
    // 0x7b45b8: 0x80c20005  lb          $v0, 0x5($a2)
    ctx->pc = 0x7b45b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x7b45bc: 0x54550031  bnel        $v0, $s5, . + 4 + (0x31 << 2)
    ctx->pc = 0x7B45BCu;
    {
        const bool branch_taken_0x7b45bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x7b45bc) {
            ctx->pc = 0x7B45C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B45BCu;
            // 0x7b45c0: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B4684u;
            goto label_7b4684;
        }
    }
    ctx->pc = 0x7B45C4u;
    // 0x7b45c4: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x7b45c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x7b45c8: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x7b45c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7b45cc: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x7B45CCu;
    {
        const bool branch_taken_0x7b45cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b45cc) {
            ctx->pc = 0x7B45D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B45CCu;
            // 0x7b45d0: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B4684u;
            goto label_7b4684;
        }
    }
    ctx->pc = 0x7B45D4u;
    // 0x7b45d4: 0x14740012  bne         $v1, $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x7B45D4u;
    {
        const bool branch_taken_0x7b45d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x7b45d4) {
            ctx->pc = 0x7B4620u;
            goto label_7b4620;
        }
    }
    ctx->pc = 0x7B45DCu;
    // 0x7b45dc: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x7b45dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7b45e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B45E0u;
    {
        const bool branch_taken_0x7b45e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b45e0) {
            ctx->pc = 0x7B45F8u;
            goto label_7b45f8;
        }
    }
    ctx->pc = 0x7B45E8u;
    // 0x7b45e8: 0x1640000d  bnez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x7B45E8u;
    {
        const bool branch_taken_0x7b45e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b45e8) {
            ctx->pc = 0x7B4620u;
            goto label_7b4620;
        }
    }
    ctx->pc = 0x7B45F0u;
    // 0x7b45f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B45F0u;
    {
        const bool branch_taken_0x7b45f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B45F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B45F0u;
        // 0x7b45f4: 0x84c20006  lh          $v0, 0x6($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b45f0) {
            ctx->pc = 0x7B4604u;
            goto label_7b4604;
        }
    }
    ctx->pc = 0x7B45F8u;
label_7b45f8:
    // 0x7b45f8: 0x52400022  beql        $s2, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x7B45F8u;
    {
        const bool branch_taken_0x7b45f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b45f8) {
            ctx->pc = 0x7B45FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B45F8u;
            // 0x7b45fc: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B4684u;
            goto label_7b4684;
        }
    }
    ctx->pc = 0x7B4600u;
    // 0x7b4600: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x7b4600u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_7b4604:
    // 0x7b4604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x7b4604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7b4608: 0x0  nop
    ctx->pc = 0x7b4608u;
    // NOP
    // 0x7b460c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7b460cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7b4610: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x7b4610u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7b4614: 0x0  nop
    ctx->pc = 0x7b4614u;
    // NOP
    // 0x7b4618: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
    ctx->pc = 0x7B4618u;
    {
        const bool branch_taken_0x7b4618 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7b4618) {
            ctx->pc = 0x7B461Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B4618u;
            // 0x7b461c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B4684u;
            goto label_7b4684;
        }
    }
    ctx->pc = 0x7B4620u;
label_7b4620:
    // 0x7b4620: 0x50e00017  beql        $a3, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x7B4620u;
    {
        const bool branch_taken_0x7b4620 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b4620) {
            ctx->pc = 0x7B4624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B4620u;
            // 0x7b4624: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B4680u;
            goto label_7b4680;
        }
    }
    ctx->pc = 0x7B4628u;
    // 0x7b4628: 0x90c50003  lbu         $a1, 0x3($a2)
    ctx->pc = 0x7b4628u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x7b462c: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x7b462cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x7b4630: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x7b4630u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x7b4634: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x7B4634u;
    {
        const bool branch_taken_0x7b4634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b4634) {
            ctx->pc = 0x7B4638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B4634u;
            // 0x7b4638: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B4684u;
            goto label_7b4684;
        }
    }
    ctx->pc = 0x7B463Cu;
    // 0x7b463c: 0x54a30010  bnel        $a1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x7B463Cu;
    {
        const bool branch_taken_0x7b463c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x7b463c) {
            ctx->pc = 0x7B4640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B463Cu;
            // 0x7b4640: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B4680u;
            goto label_7b4680;
        }
    }
    ctx->pc = 0x7B4644u;
    // 0x7b4644: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x7b4644u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7b4648: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B4648u;
    {
        const bool branch_taken_0x7b4648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4648u;
        // 0x7b464c: 0x90e20004  lbu         $v0, 0x4($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b4648) {
            ctx->pc = 0x7B4660u;
            goto label_7b4660;
        }
    }
    ctx->pc = 0x7B4650u;
    // 0x7b4650: 0x5048000c  beql        $v0, $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x7B4650u;
    {
        const bool branch_taken_0x7b4650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x7b4650) {
            ctx->pc = 0x7B4654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B4650u;
            // 0x7b4654: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B4684u;
            goto label_7b4684;
        }
    }
    ctx->pc = 0x7B4658u;
    // 0x7b4658: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B4658u;
    {
        const bool branch_taken_0x7b4658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4658u;
        // 0x7b465c: 0x84c20006  lh          $v0, 0x6($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b4658) {
            ctx->pc = 0x7B466Cu;
            goto label_7b466c;
        }
    }
    ctx->pc = 0x7B4660u;
label_7b4660:
    // 0x7b4660: 0x54480007  bnel        $v0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7B4660u;
    {
        const bool branch_taken_0x7b4660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x7b4660) {
            ctx->pc = 0x7B4664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B4660u;
            // 0x7b4664: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B4680u;
            goto label_7b4680;
        }
    }
    ctx->pc = 0x7B4668u;
    // 0x7b4668: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x7b4668u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_7b466c:
    // 0x7b466c: 0x84e30006  lh          $v1, 0x6($a3)
    ctx->pc = 0x7b466cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x7b4670: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x7b4670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7b4674: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B4674u;
    {
        const bool branch_taken_0x7b4674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b4674) {
            ctx->pc = 0x7B4678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B4674u;
            // 0x7b4678: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B4684u;
            goto label_7b4684;
        }
    }
    ctx->pc = 0x7B467Cu;
    // 0x7b467c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x7b467cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_7b4680:
    // 0x7b4680: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x7b4680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_7b4684:
    // 0x7b4684: 0x1480ffcc  bnez        $a0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x7B4684u;
    {
        const bool branch_taken_0x7b4684 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4684u;
        // 0x7b4688: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b4684) {
            ctx->pc = 0x7B45B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b45b8;
        }
    }
    ctx->pc = 0x7B468Cu;
    // 0x7b468c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x7b468cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_7b4690:
    // 0x7b4690: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x7b4690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7b4694: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x7b4694u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7b4698: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x7b4698u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7b469c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x7b469cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b46a0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x7b46a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b46a4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x7b46a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b46a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b46a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b46ac: 0x3e00008  jr          $ra
    ctx->pc = 0x7B46ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B46B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B46ACu;
        // 0x7b46b0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B46ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B46B4u;
    // 0x7b46b4: 0x0  nop
    ctx->pc = 0x7b46b4u;
    // NOP
    ctx->pc = 0x7b46b8u;
}
} // namespace gh_event
