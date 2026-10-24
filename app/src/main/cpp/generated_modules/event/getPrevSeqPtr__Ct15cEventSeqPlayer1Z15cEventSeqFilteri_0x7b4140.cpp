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
// Function: getPrevSeqPtr__Ct15cEventSeqPlayer1Z15cEventSeqFilteri
// Address: 0x7b4140 - 0x7b42d0
void getPrevSeqPtr__Ct15cEventSeqPlayer1Z15cEventSeqFilteri_0x7b4140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getPrevSeqPtr__Ct15cEventSeqPlayer1Z15cEventSeqFilteri_0x7b4140");
#endif

    switch (ctx->pc) {
        case 0x7b4184u: goto label_7b4184;
        case 0x7b4194u: goto label_7b4194;
        case 0x7b41a4u: goto label_7b41a4;
        case 0x7b41d0u: goto label_7b41d0;
        default: break;
    }

    ctx->pc = 0x7b4140u;

    // 0x7b4140: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7b4140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7b4144: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x7b4144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x7b4148: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7b4148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7b414c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x7b414cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b4150: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7b4150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7b4154: 0x3c10007b  lui         $s0, 0x7B
    ctx->pc = 0x7b4154u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)123 << 16));
    // 0x7b4158: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x7b4158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x7b415c: 0x158e00  sll         $s1, $s5, 24
    ctx->pc = 0x7b415cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 24));
    // 0x7b4160: 0x261058d8  addiu       $s0, $s0, 0x58D8
    ctx->pc = 0x7b4160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22744));
    // 0x7b4164: 0x118e03  sra         $s1, $s1, 24
    ctx->pc = 0x7b4164u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 24));
    // 0x7b4168: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x7b4168u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b416c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7b416cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7b4170: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x7b4170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x7b4174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b4174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b4178: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b4178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b417c: 0xc1ec13a  jal         func_7B04E8
    ctx->pc = 0x7B417Cu;
    SET_GPR_U32(ctx, 31, 0x7B4184u);
    ctx->pc = 0x7B4180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B417Cu;
    // 0x7b4180: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B04E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B04E8u, 0x7B417Cu, 0x7B4184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B4184u;
label_7b4184:
    // 0x7b4184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b4184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b4188: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7b4188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b418c: 0xc1ec148  jal         func_7B0520
    ctx->pc = 0x7B418Cu;
    SET_GPR_U32(ctx, 31, 0x7B4194u);
    ctx->pc = 0x7B4190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B418Cu;
    // 0x7b4190: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0520u, 0x7B418Cu, 0x7B4194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B4194u;
label_7b4194:
    // 0x7b4194: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7b4194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b4198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b4198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b419c: 0xc1ec156  jal         func_7B0558
    ctx->pc = 0x7B419Cu;
    SET_GPR_U32(ctx, 31, 0x7B41A4u);
    ctx->pc = 0x7B41A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B419Cu;
    // 0x7b41a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0558u, 0x7B419Cu, 0x7B41A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B41A4u;
label_7b41a4:
    // 0x7b41a4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x7b41a4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x7b41a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7b41a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b41ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7b41acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7b41b0: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B41B0u;
    {
        const bool branch_taken_0x7b41b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x7B41B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B41B0u;
        // 0x7b41b4: 0x8e660010  lw          $a2, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b41b0) {
            ctx->pc = 0x7B41C0u;
            goto label_7b41c0;
        }
    }
    ctx->pc = 0x7B41B8u;
    // 0x7b41b8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x7B41B8u;
    {
        const bool branch_taken_0x7b41b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B41BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B41B8u;
        // 0x7b41bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b41b8) {
            ctx->pc = 0x7B42A8u;
            goto label_7b42a8;
        }
    }
    ctx->pc = 0x7B41C0u;
label_7b41c0:
    // 0x7b41c0: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x7b41c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x7b41c4: 0x18800038  blez        $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x7B41C4u;
    {
        const bool branch_taken_0x7b41c4 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x7B41C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B41C4u;
        // 0x7b41c8: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b41c4) {
            ctx->pc = 0x7B42A8u;
            goto label_7b42a8;
        }
    }
    ctx->pc = 0x7B41CCu;
    // 0x7b41cc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x7b41ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7b41d0:
    // 0x7b41d0: 0x80c20005  lb          $v0, 0x5($a2)
    ctx->pc = 0x7b41d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x7b41d4: 0x54550031  bnel        $v0, $s5, . + 4 + (0x31 << 2)
    ctx->pc = 0x7B41D4u;
    {
        const bool branch_taken_0x7b41d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x7b41d4) {
            ctx->pc = 0x7B41D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B41D4u;
            // 0x7b41d8: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B429Cu;
            goto label_7b429c;
        }
    }
    ctx->pc = 0x7B41DCu;
    // 0x7b41dc: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x7b41dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x7b41e0: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x7b41e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7b41e4: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x7B41E4u;
    {
        const bool branch_taken_0x7b41e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b41e4) {
            ctx->pc = 0x7B41E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B41E4u;
            // 0x7b41e8: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B429Cu;
            goto label_7b429c;
        }
    }
    ctx->pc = 0x7B41ECu;
    // 0x7b41ec: 0x14740012  bne         $v1, $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x7B41ECu;
    {
        const bool branch_taken_0x7b41ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x7b41ec) {
            ctx->pc = 0x7B4238u;
            goto label_7b4238;
        }
    }
    ctx->pc = 0x7B41F4u;
    // 0x7b41f4: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x7b41f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7b41f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B41F8u;
    {
        const bool branch_taken_0x7b41f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b41f8) {
            ctx->pc = 0x7B4210u;
            goto label_7b4210;
        }
    }
    ctx->pc = 0x7B4200u;
    // 0x7b4200: 0x1640000d  bnez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x7B4200u;
    {
        const bool branch_taken_0x7b4200 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b4200) {
            ctx->pc = 0x7B4238u;
            goto label_7b4238;
        }
    }
    ctx->pc = 0x7B4208u;
    // 0x7b4208: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B4208u;
    {
        const bool branch_taken_0x7b4208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4208u;
        // 0x7b420c: 0x84c20006  lh          $v0, 0x6($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b4208) {
            ctx->pc = 0x7B421Cu;
            goto label_7b421c;
        }
    }
    ctx->pc = 0x7B4210u;
label_7b4210:
    // 0x7b4210: 0x52400022  beql        $s2, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x7B4210u;
    {
        const bool branch_taken_0x7b4210 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b4210) {
            ctx->pc = 0x7B4214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B4210u;
            // 0x7b4214: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B429Cu;
            goto label_7b429c;
        }
    }
    ctx->pc = 0x7B4218u;
    // 0x7b4218: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x7b4218u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_7b421c:
    // 0x7b421c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x7b421cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7b4220: 0x0  nop
    ctx->pc = 0x7b4220u;
    // NOP
    // 0x7b4224: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7b4224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7b4228: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x7b4228u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7b422c: 0x0  nop
    ctx->pc = 0x7b422cu;
    // NOP
    // 0x7b4230: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
    ctx->pc = 0x7B4230u;
    {
        const bool branch_taken_0x7b4230 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7b4230) {
            ctx->pc = 0x7B4234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B4230u;
            // 0x7b4234: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B429Cu;
            goto label_7b429c;
        }
    }
    ctx->pc = 0x7B4238u;
label_7b4238:
    // 0x7b4238: 0x50e00017  beql        $a3, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x7B4238u;
    {
        const bool branch_taken_0x7b4238 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b4238) {
            ctx->pc = 0x7B423Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B4238u;
            // 0x7b423c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B4298u;
            goto label_7b4298;
        }
    }
    ctx->pc = 0x7B4240u;
    // 0x7b4240: 0x90c50003  lbu         $a1, 0x3($a2)
    ctx->pc = 0x7b4240u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x7b4244: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x7b4244u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x7b4248: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x7b4248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x7b424c: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x7B424Cu;
    {
        const bool branch_taken_0x7b424c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b424c) {
            ctx->pc = 0x7B4250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B424Cu;
            // 0x7b4250: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B429Cu;
            goto label_7b429c;
        }
    }
    ctx->pc = 0x7B4254u;
    // 0x7b4254: 0x54a30010  bnel        $a1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x7B4254u;
    {
        const bool branch_taken_0x7b4254 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x7b4254) {
            ctx->pc = 0x7B4258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B4254u;
            // 0x7b4258: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B4298u;
            goto label_7b4298;
        }
    }
    ctx->pc = 0x7B425Cu;
    // 0x7b425c: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x7b425cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7b4260: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B4260u;
    {
        const bool branch_taken_0x7b4260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B4264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4260u;
        // 0x7b4264: 0x90e20004  lbu         $v0, 0x4($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b4260) {
            ctx->pc = 0x7B4278u;
            goto label_7b4278;
        }
    }
    ctx->pc = 0x7B4268u;
    // 0x7b4268: 0x5048000c  beql        $v0, $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x7B4268u;
    {
        const bool branch_taken_0x7b4268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x7b4268) {
            ctx->pc = 0x7B426Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B4268u;
            // 0x7b426c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B429Cu;
            goto label_7b429c;
        }
    }
    ctx->pc = 0x7B4270u;
    // 0x7b4270: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B4270u;
    {
        const bool branch_taken_0x7b4270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B4274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4270u;
        // 0x7b4274: 0x84c20006  lh          $v0, 0x6($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b4270) {
            ctx->pc = 0x7B4284u;
            goto label_7b4284;
        }
    }
    ctx->pc = 0x7B4278u;
label_7b4278:
    // 0x7b4278: 0x54480007  bnel        $v0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7B4278u;
    {
        const bool branch_taken_0x7b4278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x7b4278) {
            ctx->pc = 0x7B427Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B4278u;
            // 0x7b427c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B4298u;
            goto label_7b4298;
        }
    }
    ctx->pc = 0x7B4280u;
    // 0x7b4280: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x7b4280u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_7b4284:
    // 0x7b4284: 0x84e30006  lh          $v1, 0x6($a3)
    ctx->pc = 0x7b4284u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x7b4288: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x7b4288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7b428c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B428Cu;
    {
        const bool branch_taken_0x7b428c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b428c) {
            ctx->pc = 0x7B4290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B428Cu;
            // 0x7b4290: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B429Cu;
            goto label_7b429c;
        }
    }
    ctx->pc = 0x7B4294u;
    // 0x7b4294: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x7b4294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_7b4298:
    // 0x7b4298: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x7b4298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_7b429c:
    // 0x7b429c: 0x1480ffcc  bnez        $a0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x7B429Cu;
    {
        const bool branch_taken_0x7b429c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B42A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B429Cu;
        // 0x7b42a0: 0x24c602e8  addiu       $a2, $a2, 0x2E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b429c) {
            ctx->pc = 0x7B41D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b41d0;
        }
    }
    ctx->pc = 0x7B42A4u;
    // 0x7b42a4: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x7b42a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_7b42a8:
    // 0x7b42a8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x7b42a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7b42ac: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x7b42acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7b42b0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x7b42b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7b42b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x7b42b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b42b8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x7b42b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b42bc: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x7b42bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b42c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b42c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b42c4: 0x3e00008  jr          $ra
    ctx->pc = 0x7B42C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B42C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B42C4u;
        // 0x7b42c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B42C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B42CCu;
    // 0x7b42cc: 0x0  nop
    ctx->pc = 0x7b42ccu;
    // NOP
    ctx->pc = 0x7b42d0u;
}
} // namespace gh_event
