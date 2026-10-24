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
// Function: getPrevSeqPtr__Ct15cEventSeqPlayer1Z15cEventSeqVertexi
// Address: 0x7b31b0 - 0x7b3340
void getPrevSeqPtr__Ct15cEventSeqPlayer1Z15cEventSeqVertexi_0x7b31b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getPrevSeqPtr__Ct15cEventSeqPlayer1Z15cEventSeqVertexi_0x7b31b0");
#endif

    switch (ctx->pc) {
        case 0x7b31f4u: goto label_7b31f4;
        case 0x7b3204u: goto label_7b3204;
        case 0x7b3214u: goto label_7b3214;
        case 0x7b3240u: goto label_7b3240;
        default: break;
    }

    ctx->pc = 0x7b31b0u;

    // 0x7b31b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7b31b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7b31b4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x7b31b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x7b31b8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7b31b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7b31bc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x7b31bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b31c0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7b31c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7b31c4: 0x3c10007b  lui         $s0, 0x7B
    ctx->pc = 0x7b31c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)123 << 16));
    // 0x7b31c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x7b31c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x7b31cc: 0x158e00  sll         $s1, $s5, 24
    ctx->pc = 0x7b31ccu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 24));
    // 0x7b31d0: 0x261058d8  addiu       $s0, $s0, 0x58D8
    ctx->pc = 0x7b31d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22744));
    // 0x7b31d4: 0x118e03  sra         $s1, $s1, 24
    ctx->pc = 0x7b31d4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 24));
    // 0x7b31d8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x7b31d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b31dc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7b31dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7b31e0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x7b31e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x7b31e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b31e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b31e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b31e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b31ec: 0xc1ec13a  jal         func_7B04E8
    ctx->pc = 0x7B31ECu;
    SET_GPR_U32(ctx, 31, 0x7B31F4u);
    ctx->pc = 0x7B31F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B31ECu;
    // 0x7b31f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B04E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B04E8u, 0x7B31ECu, 0x7B31F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B31F4u;
label_7b31f4:
    // 0x7b31f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b31f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b31f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7b31f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b31fc: 0xc1ec148  jal         func_7B0520
    ctx->pc = 0x7B31FCu;
    SET_GPR_U32(ctx, 31, 0x7B3204u);
    ctx->pc = 0x7B3200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B31FCu;
    // 0x7b3200: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0520u, 0x7B31FCu, 0x7B3204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3204u;
label_7b3204:
    // 0x7b3204: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7b3204u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b3208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b320c: 0xc1ec156  jal         func_7B0558
    ctx->pc = 0x7B320Cu;
    SET_GPR_U32(ctx, 31, 0x7B3214u);
    ctx->pc = 0x7B3210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B320Cu;
    // 0x7b3210: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0558u, 0x7B320Cu, 0x7B3214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3214u;
label_7b3214:
    // 0x7b3214: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x7b3214u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x7b3218: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7b3218u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b321c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7b321cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7b3220: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B3220u;
    {
        const bool branch_taken_0x7b3220 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x7B3224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3220u;
        // 0x7b3224: 0x8e660010  lw          $a2, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3220) {
            ctx->pc = 0x7B3230u;
            goto label_7b3230;
        }
    }
    ctx->pc = 0x7B3228u;
    // 0x7b3228: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x7B3228u;
    {
        const bool branch_taken_0x7b3228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3228u;
        // 0x7b322c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3228) {
            ctx->pc = 0x7B3318u;
            goto label_7b3318;
        }
    }
    ctx->pc = 0x7B3230u;
label_7b3230:
    // 0x7b3230: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x7b3230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x7b3234: 0x18800038  blez        $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x7B3234u;
    {
        const bool branch_taken_0x7b3234 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x7B3238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3234u;
        // 0x7b3238: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3234) {
            ctx->pc = 0x7B3318u;
            goto label_7b3318;
        }
    }
    ctx->pc = 0x7B323Cu;
    // 0x7b323c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x7b323cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7b3240:
    // 0x7b3240: 0x80c20005  lb          $v0, 0x5($a2)
    ctx->pc = 0x7b3240u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x7b3244: 0x54550031  bnel        $v0, $s5, . + 4 + (0x31 << 2)
    ctx->pc = 0x7B3244u;
    {
        const bool branch_taken_0x7b3244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x7b3244) {
            ctx->pc = 0x7B3248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3244u;
            // 0x7b3248: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B330Cu;
            goto label_7b330c;
        }
    }
    ctx->pc = 0x7B324Cu;
    // 0x7b324c: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x7b324cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x7b3250: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x7b3250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7b3254: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x7B3254u;
    {
        const bool branch_taken_0x7b3254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b3254) {
            ctx->pc = 0x7B3258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3254u;
            // 0x7b3258: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B330Cu;
            goto label_7b330c;
        }
    }
    ctx->pc = 0x7B325Cu;
    // 0x7b325c: 0x14740012  bne         $v1, $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x7B325Cu;
    {
        const bool branch_taken_0x7b325c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x7b325c) {
            ctx->pc = 0x7B32A8u;
            goto label_7b32a8;
        }
    }
    ctx->pc = 0x7B3264u;
    // 0x7b3264: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x7b3264u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7b3268: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B3268u;
    {
        const bool branch_taken_0x7b3268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b3268) {
            ctx->pc = 0x7B3280u;
            goto label_7b3280;
        }
    }
    ctx->pc = 0x7B3270u;
    // 0x7b3270: 0x1640000d  bnez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x7B3270u;
    {
        const bool branch_taken_0x7b3270 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b3270) {
            ctx->pc = 0x7B32A8u;
            goto label_7b32a8;
        }
    }
    ctx->pc = 0x7B3278u;
    // 0x7b3278: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B3278u;
    {
        const bool branch_taken_0x7b3278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3278u;
        // 0x7b327c: 0x84c20006  lh          $v0, 0x6($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3278) {
            ctx->pc = 0x7B328Cu;
            goto label_7b328c;
        }
    }
    ctx->pc = 0x7B3280u;
label_7b3280:
    // 0x7b3280: 0x52400022  beql        $s2, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x7B3280u;
    {
        const bool branch_taken_0x7b3280 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b3280) {
            ctx->pc = 0x7B3284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B3280u;
            // 0x7b3284: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B330Cu;
            goto label_7b330c;
        }
    }
    ctx->pc = 0x7B3288u;
    // 0x7b3288: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x7b3288u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_7b328c:
    // 0x7b328c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x7b328cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7b3290: 0x0  nop
    ctx->pc = 0x7b3290u;
    // NOP
    // 0x7b3294: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7b3294u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7b3298: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x7b3298u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7b329c: 0x0  nop
    ctx->pc = 0x7b329cu;
    // NOP
    // 0x7b32a0: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
    ctx->pc = 0x7B32A0u;
    {
        const bool branch_taken_0x7b32a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7b32a0) {
            ctx->pc = 0x7B32A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B32A0u;
            // 0x7b32a4: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B330Cu;
            goto label_7b330c;
        }
    }
    ctx->pc = 0x7B32A8u;
label_7b32a8:
    // 0x7b32a8: 0x50e00017  beql        $a3, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x7B32A8u;
    {
        const bool branch_taken_0x7b32a8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b32a8) {
            ctx->pc = 0x7B32ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B32A8u;
            // 0x7b32ac: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3308u;
            goto label_7b3308;
        }
    }
    ctx->pc = 0x7B32B0u;
    // 0x7b32b0: 0x90c50003  lbu         $a1, 0x3($a2)
    ctx->pc = 0x7b32b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x7b32b4: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x7b32b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x7b32b8: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x7b32b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x7b32bc: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x7B32BCu;
    {
        const bool branch_taken_0x7b32bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b32bc) {
            ctx->pc = 0x7B32C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B32BCu;
            // 0x7b32c0: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B330Cu;
            goto label_7b330c;
        }
    }
    ctx->pc = 0x7B32C4u;
    // 0x7b32c4: 0x54a30010  bnel        $a1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x7B32C4u;
    {
        const bool branch_taken_0x7b32c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x7b32c4) {
            ctx->pc = 0x7B32C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B32C4u;
            // 0x7b32c8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3308u;
            goto label_7b3308;
        }
    }
    ctx->pc = 0x7B32CCu;
    // 0x7b32cc: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x7b32ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7b32d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B32D0u;
    {
        const bool branch_taken_0x7b32d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B32D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B32D0u;
        // 0x7b32d4: 0x90e20004  lbu         $v0, 0x4($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b32d0) {
            ctx->pc = 0x7B32E8u;
            goto label_7b32e8;
        }
    }
    ctx->pc = 0x7B32D8u;
    // 0x7b32d8: 0x5048000c  beql        $v0, $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x7B32D8u;
    {
        const bool branch_taken_0x7b32d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x7b32d8) {
            ctx->pc = 0x7B32DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B32D8u;
            // 0x7b32dc: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B330Cu;
            goto label_7b330c;
        }
    }
    ctx->pc = 0x7B32E0u;
    // 0x7b32e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B32E0u;
    {
        const bool branch_taken_0x7b32e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B32E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B32E0u;
        // 0x7b32e4: 0x84c20006  lh          $v0, 0x6($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b32e0) {
            ctx->pc = 0x7B32F4u;
            goto label_7b32f4;
        }
    }
    ctx->pc = 0x7B32E8u;
label_7b32e8:
    // 0x7b32e8: 0x54480007  bnel        $v0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7B32E8u;
    {
        const bool branch_taken_0x7b32e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x7b32e8) {
            ctx->pc = 0x7B32ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B32E8u;
            // 0x7b32ec: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B3308u;
            goto label_7b3308;
        }
    }
    ctx->pc = 0x7B32F0u;
    // 0x7b32f0: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x7b32f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_7b32f4:
    // 0x7b32f4: 0x84e30006  lh          $v1, 0x6($a3)
    ctx->pc = 0x7b32f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x7b32f8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x7b32f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7b32fc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B32FCu;
    {
        const bool branch_taken_0x7b32fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b32fc) {
            ctx->pc = 0x7B3300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B32FCu;
            // 0x7b3300: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B330Cu;
            goto label_7b330c;
        }
    }
    ctx->pc = 0x7B3304u;
    // 0x7b3304: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x7b3304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_7b3308:
    // 0x7b3308: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x7b3308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_7b330c:
    // 0x7b330c: 0x1480ffcc  bnez        $a0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x7B330Cu;
    {
        const bool branch_taken_0x7b330c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B3310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B330Cu;
        // 0x7b3310: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b330c) {
            ctx->pc = 0x7B3240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b3240;
        }
    }
    ctx->pc = 0x7B3314u;
    // 0x7b3314: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x7b3314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_7b3318:
    // 0x7b3318: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x7b3318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7b331c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x7b331cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7b3320: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x7b3320u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7b3324: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x7b3324u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b3328: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x7b3328u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b332c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x7b332cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b3330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b3330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b3334: 0x3e00008  jr          $ra
    ctx->pc = 0x7B3334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B3338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3334u;
        // 0x7b3338: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B3334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B333Cu;
    // 0x7b333c: 0x0  nop
    ctx->pc = 0x7b333cu;
    // NOP
    ctx->pc = 0x7b3340u;
}
} // namespace gh_event
