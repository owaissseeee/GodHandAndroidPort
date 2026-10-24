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
// Function: getPrevSeqPtr__Ct15cEventSeqPlayer1Z17cEventSeqScrLayeri
// Address: 0x7b38b8 - 0x7b3a48
void getPrevSeqPtr__Ct15cEventSeqPlayer1Z17cEventSeqScrLayeri_0x7b38b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getPrevSeqPtr__Ct15cEventSeqPlayer1Z17cEventSeqScrLayeri_0x7b38b8");
#endif

    switch (ctx->pc) {
        case 0x7b38fcu: goto label_7b38fc;
        case 0x7b390cu: goto label_7b390c;
        case 0x7b391cu: goto label_7b391c;
        case 0x7b3948u: goto label_7b3948;
        default: break;
    }

    ctx->pc = 0x7b38b8u;

    // 0x7b38b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7b38b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7b38bc: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x7b38bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x7b38c0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7b38c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7b38c4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x7b38c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b38c8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7b38c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7b38cc: 0x3c10007b  lui         $s0, 0x7B
    ctx->pc = 0x7b38ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)123 << 16));
    // 0x7b38d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x7b38d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x7b38d4: 0x158e00  sll         $s1, $s5, 24
    ctx->pc = 0x7b38d4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 24));
    // 0x7b38d8: 0x261058d8  addiu       $s0, $s0, 0x58D8
    ctx->pc = 0x7b38d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22744));
    // 0x7b38dc: 0x118e03  sra         $s1, $s1, 24
    ctx->pc = 0x7b38dcu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 24));
    // 0x7b38e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x7b38e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b38e4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7b38e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7b38e8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x7b38e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x7b38ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b38ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b38f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b38f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b38f4: 0xc1ec13a  jal         func_7B04E8
    ctx->pc = 0x7B38F4u;
    SET_GPR_U32(ctx, 31, 0x7B38FCu);
    ctx->pc = 0x7B38F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B38F4u;
    // 0x7b38f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B04E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B04E8u, 0x7B38F4u, 0x7B38FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B38FCu;
label_7b38fc:
    // 0x7b38fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b38fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3900: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7b3900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3904: 0xc1ec148  jal         func_7B0520
    ctx->pc = 0x7B3904u;
    SET_GPR_U32(ctx, 31, 0x7B390Cu);
    ctx->pc = 0x7B3908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B3904u;
    // 0x7b3908: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0520u, 0x7B3904u, 0x7B390Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B390Cu;
label_7b390c:
    // 0x7b390c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7b390cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b3910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3914: 0xc1ec156  jal         func_7B0558
    ctx->pc = 0x7B3914u;
    SET_GPR_U32(ctx, 31, 0x7B391Cu);
    ctx->pc = 0x7B3918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B3914u;
    // 0x7b3918: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0558u, 0x7B3914u, 0x7B391Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B391Cu;
label_7b391c:
    // 0x7b391c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x7b391cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x7b3920: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7b3920u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3924: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7b3924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7b3928: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B3928u;
    {
        const bool branch_taken_0x7b3928 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x7B392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3928u;
        // 0x7b392c: 0x8e660010  lw          $a2, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3928) {
            ctx->pc = 0x7B3938u;
            goto label_7b3938;
        }
    }
    ctx->pc = 0x7B3930u;
    // 0x7b3930: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x7B3930u;
    {
        const bool branch_taken_0x7b3930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B3934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3930u;
        // 0x7b3934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3930) {
            ctx->pc = 0x7B3A20u;
            goto label_7b3a20;
        }
    }
    ctx->pc = 0x7B3938u;
label_7b3938:
    // 0x7b3938: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x7b3938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x7b393c: 0x18800038  blez        $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x7B393Cu;
    {
        const bool branch_taken_0x7b393c = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x7B3940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B393Cu;
        // 0x7b3940: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b393c) {
            ctx->pc = 0x7B3A20u;
            goto label_7b3a20;
        }
    }
    ctx->pc = 0x7B3944u;
    // 0x7b3944: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x7b3944u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7b3948:
    // 0x7b3948: 0x80c20005  lb          $v0, 0x5($a2)
    ctx->pc = 0x7b3948u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x7b394c: 0x54550031  bnel        $v0, $s5, . + 4 + (0x31 << 2)
    ctx->pc = 0x7B394Cu;
    {
        const bool branch_taken_0x7b394c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x7b394c) {
            ctx->pc = 0x7B3950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B394Cu;
            // 0x7b3950: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3A14u;
            goto label_7b3a14;
        }
    }
    ctx->pc = 0x7B3954u;
    // 0x7b3954: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x7b3954u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x7b3958: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x7b3958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7b395c: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x7B395Cu;
    {
        const bool branch_taken_0x7b395c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b395c) {
            ctx->pc = 0x7B3960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B395Cu;
            // 0x7b3960: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3A14u;
            goto label_7b3a14;
        }
    }
    ctx->pc = 0x7B3964u;
    // 0x7b3964: 0x14740012  bne         $v1, $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x7B3964u;
    {
        const bool branch_taken_0x7b3964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x7b3964) {
            ctx->pc = 0x7B39B0u;
            goto label_7b39b0;
        }
    }
    ctx->pc = 0x7B396Cu;
    // 0x7b396c: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x7b396cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7b3970: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B3970u;
    {
        const bool branch_taken_0x7b3970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b3970) {
            ctx->pc = 0x7B3988u;
            goto label_7b3988;
        }
    }
    ctx->pc = 0x7B3978u;
    // 0x7b3978: 0x1640000d  bnez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x7B3978u;
    {
        const bool branch_taken_0x7b3978 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b3978) {
            ctx->pc = 0x7B39B0u;
            goto label_7b39b0;
        }
    }
    ctx->pc = 0x7B3980u;
    // 0x7b3980: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B3980u;
    {
        const bool branch_taken_0x7b3980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B3984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3980u;
        // 0x7b3984: 0x84c20006  lh          $v0, 0x6($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3980) {
            ctx->pc = 0x7B3994u;
            goto label_7b3994;
        }
    }
    ctx->pc = 0x7B3988u;
label_7b3988:
    // 0x7b3988: 0x52400022  beql        $s2, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x7B3988u;
    {
        const bool branch_taken_0x7b3988 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b3988) {
            ctx->pc = 0x7B398Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3988u;
            // 0x7b398c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3A14u;
            goto label_7b3a14;
        }
    }
    ctx->pc = 0x7B3990u;
    // 0x7b3990: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x7b3990u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_7b3994:
    // 0x7b3994: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x7b3994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7b3998: 0x0  nop
    ctx->pc = 0x7b3998u;
    // NOP
    // 0x7b399c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7b399cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7b39a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x7b39a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7b39a4: 0x0  nop
    ctx->pc = 0x7b39a4u;
    // NOP
    // 0x7b39a8: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
    ctx->pc = 0x7B39A8u;
    {
        const bool branch_taken_0x7b39a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7b39a8) {
            ctx->pc = 0x7B39ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B39A8u;
            // 0x7b39ac: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3A14u;
            goto label_7b3a14;
        }
    }
    ctx->pc = 0x7B39B0u;
label_7b39b0:
    // 0x7b39b0: 0x50e00017  beql        $a3, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x7B39B0u;
    {
        const bool branch_taken_0x7b39b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b39b0) {
            ctx->pc = 0x7B39B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B39B0u;
            // 0x7b39b4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3A10u;
            goto label_7b3a10;
        }
    }
    ctx->pc = 0x7B39B8u;
    // 0x7b39b8: 0x90c50003  lbu         $a1, 0x3($a2)
    ctx->pc = 0x7b39b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x7b39bc: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x7b39bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x7b39c0: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x7b39c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x7b39c4: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x7B39C4u;
    {
        const bool branch_taken_0x7b39c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b39c4) {
            ctx->pc = 0x7B39C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B39C4u;
            // 0x7b39c8: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3A14u;
            goto label_7b3a14;
        }
    }
    ctx->pc = 0x7B39CCu;
    // 0x7b39cc: 0x54a30010  bnel        $a1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x7B39CCu;
    {
        const bool branch_taken_0x7b39cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x7b39cc) {
            ctx->pc = 0x7B39D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B39CCu;
            // 0x7b39d0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3A10u;
            goto label_7b3a10;
        }
    }
    ctx->pc = 0x7B39D4u;
    // 0x7b39d4: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x7b39d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7b39d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B39D8u;
    {
        const bool branch_taken_0x7b39d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B39DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B39D8u;
        // 0x7b39dc: 0x90e20004  lbu         $v0, 0x4($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b39d8) {
            ctx->pc = 0x7B39F0u;
            goto label_7b39f0;
        }
    }
    ctx->pc = 0x7B39E0u;
    // 0x7b39e0: 0x5048000c  beql        $v0, $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x7B39E0u;
    {
        const bool branch_taken_0x7b39e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x7b39e0) {
            ctx->pc = 0x7B39E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B39E0u;
            // 0x7b39e4: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3A14u;
            goto label_7b3a14;
        }
    }
    ctx->pc = 0x7B39E8u;
    // 0x7b39e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B39E8u;
    {
        const bool branch_taken_0x7b39e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B39ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B39E8u;
        // 0x7b39ec: 0x84c20006  lh          $v0, 0x6($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b39e8) {
            ctx->pc = 0x7B39FCu;
            goto label_7b39fc;
        }
    }
    ctx->pc = 0x7B39F0u;
label_7b39f0:
    // 0x7b39f0: 0x54480007  bnel        $v0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7B39F0u;
    {
        const bool branch_taken_0x7b39f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x7b39f0) {
            ctx->pc = 0x7B39F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B39F0u;
            // 0x7b39f4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3A10u;
            goto label_7b3a10;
        }
    }
    ctx->pc = 0x7B39F8u;
    // 0x7b39f8: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x7b39f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_7b39fc:
    // 0x7b39fc: 0x84e30006  lh          $v1, 0x6($a3)
    ctx->pc = 0x7b39fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x7b3a00: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x7b3a00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7b3a04: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B3A04u;
    {
        const bool branch_taken_0x7b3a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b3a04) {
            ctx->pc = 0x7B3A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3A04u;
            // 0x7b3a08: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3A14u;
            goto label_7b3a14;
        }
    }
    ctx->pc = 0x7B3A0Cu;
    // 0x7b3a0c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x7b3a0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_7b3a10:
    // 0x7b3a10: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x7b3a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_7b3a14:
    // 0x7b3a14: 0x1480ffcc  bnez        $a0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x7B3A14u;
    {
        const bool branch_taken_0x7b3a14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B3A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3A14u;
        // 0x7b3a18: 0x24c60028  addiu       $a2, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3a14) {
            ctx->pc = 0x7B3948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b3948;
        }
    }
    ctx->pc = 0x7B3A1Cu;
    // 0x7b3a1c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x7b3a1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_7b3a20:
    // 0x7b3a20: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x7b3a20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7b3a24: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x7b3a24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7b3a28: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x7b3a28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7b3a2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x7b3a2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b3a30: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x7b3a30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b3a34: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x7b3a34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b3a38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b3a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b3a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x7B3A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B3A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3A3Cu;
        // 0x7b3a40: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B3A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B3A44u;
    // 0x7b3a44: 0x0  nop
    ctx->pc = 0x7b3a44u;
    // NOP
    ctx->pc = 0x7b3a48u;
}
} // namespace gh_event
