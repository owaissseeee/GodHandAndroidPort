#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: cSnd_flushPendingSe
// Address: 0x2ca5d8 - 0x2ca690
void cSnd_flushPendingSe_0x2ca5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_flushPendingSe_0x2ca5d8");
#endif

    switch (ctx->pc) {
        case 0x2ca618u: goto label_2ca618;
        case 0x2ca620u: goto label_2ca620;
        case 0x2ca658u: goto label_2ca658;
        case 0x2ca670u: goto label_2ca670;
        default: break;
    }

    ctx->pc = 0x2ca5d8u;

    // 0x2ca5d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ca5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ca5dc: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x2ca5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x2ca5e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ca5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ca5e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ca5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ca5e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ca5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ca5ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ca5ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca5f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca5f4: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x2ca5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2ca5f8: 0x8e2300ac  lw          $v1, 0xAC($s1)
    ctx->pc = 0x2ca5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x2ca5fc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2ca5fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ca600: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x2ca600u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2ca604: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2ca604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ca608: 0xae2400b0  sw          $a0, 0xB0($s1)
    ctx->pc = 0x2ca608u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 4));
    // 0x2ca60c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CA60Cu;
    {
        const bool branch_taken_0x2ca60c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA60Cu;
        // 0x2ca610: 0xae2300ac  sw          $v1, 0xAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca60c) {
            ctx->pc = 0x2CA630u;
            goto label_2ca630;
        }
    }
    ctx->pc = 0x2CA614u;
    // 0x2ca614: 0x0  nop
    ctx->pc = 0x2ca614u;
    // NOP
label_2ca618:
    // 0x2ca618: 0xc0b36a0  jal         func_2CDA80
    ctx->pc = 0x2CA618u;
    SET_GPR_U32(ctx, 31, 0x2CA620u);
    ctx->pc = 0x2CA61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA618u;
    // 0x2ca61c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDA80u, 0x2CA618u, 0x2CA620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA620u;
label_2ca620:
    // 0x2ca620: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x2ca620u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ca624: 0x0  nop
    ctx->pc = 0x2ca624u;
    // NOP
    // 0x2ca628: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2CA628u;
    {
        const bool branch_taken_0x2ca628 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca628) {
            ctx->pc = 0x2CA618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca618;
        }
    }
    ctx->pc = 0x2CA630u;
label_2ca630:
    // 0x2ca630: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x2ca630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x2ca634: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2ca634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x2ca638: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ca638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ca63c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CA63Cu;
    {
        const bool branch_taken_0x2ca63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA63Cu;
        // 0x2ca640: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca63c) {
            ctx->pc = 0x2CA680u;
            goto label_2ca680;
        }
    }
    ctx->pc = 0x2CA644u;
    // 0x2ca644: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x2ca644u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2ca648: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2CA648u;
    {
        const bool branch_taken_0x2ca648 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca648) {
            ctx->pc = 0x2CA64Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA648u;
            // 0x2ca64c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA680u;
            goto label_2ca680;
        }
    }
    ctx->pc = 0x2CA650u;
    // 0x2ca650: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ca650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ca654: 0x0  nop
    ctx->pc = 0x2ca654u;
    // NOP
label_2ca658:
    // 0x2ca658: 0x210ba  dsrl        $v0, $v0, 2
    ctx->pc = 0x2ca658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 2);
    // 0x2ca65c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ca65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ca660: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA660u;
    {
        const bool branch_taken_0x2ca660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca660) {
            ctx->pc = 0x2CA664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA660u;
            // 0x2ca664: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA674u;
            goto label_2ca674;
        }
    }
    ctx->pc = 0x2CA668u;
    // 0x2ca668: 0xc0b390c  jal         func_2CE430
    ctx->pc = 0x2CA668u;
    SET_GPR_U32(ctx, 31, 0x2CA670u);
    ctx->pc = 0x2CA66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA668u;
    // 0x2ca66c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE430u, 0x2CA668u, 0x2CA670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA670u;
label_2ca670:
    // 0x2ca670: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x2ca670u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ca674:
    // 0x2ca674: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2CA674u;
    {
        const bool branch_taken_0x2ca674 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca674) {
            ctx->pc = 0x2CA678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA674u;
            // 0x2ca678: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca658;
        }
    }
    ctx->pc = 0x2CA67Cu;
    // 0x2ca67c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ca67cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ca680:
    // 0x2ca680: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ca680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca688: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA688u;
        // 0x2ca68c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA690u;
}
