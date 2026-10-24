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
// Function: setQuitFadeIn__9cEventEnv
// Address: 0x7ae648 - 0x7ae708
void setQuitFadeIn__9cEventEnv_0x7ae648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setQuitFadeIn__9cEventEnv_0x7ae648");
#endif

    switch (ctx->pc) {
        case 0x7ae65cu: goto label_7ae65c;
        case 0x7ae6e8u: goto label_7ae6e8;
        default: break;
    }

    ctx->pc = 0x7ae648u;

    // 0x7ae648: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7ae648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7ae64c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7ae64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7ae650: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ae650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ae654: 0xc1ebb0e  jal         func_7AEC38
    ctx->pc = 0x7AE654u;
    SET_GPR_U32(ctx, 31, 0x7AE65Cu);
    ctx->pc = 0x7AE658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AE654u;
    // 0x7ae658: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AEC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AEC38u, 0x7AE654u, 0x7AE65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE65Cu;
label_7ae65c:
    // 0x7ae65c: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x7AE65Cu;
    {
        const bool branch_taken_0x7ae65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ae65c) {
            ctx->pc = 0x7AE660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AE65Cu;
            // 0x7ae660: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AE6F8u;
            goto label_7ae6f8;
        }
    }
    ctx->pc = 0x7AE664u;
    // 0x7ae664: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x7ae664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x7ae668: 0x210ba  dsrl        $v0, $v0, 2
    ctx->pc = 0x7ae668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 2);
    // 0x7ae66c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7ae66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7ae670: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x7AE670u;
    {
        const bool branch_taken_0x7ae670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AE674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE670u;
        // 0x7ae674: 0x3c030058  lui         $v1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae670) {
            ctx->pc = 0x7AE6F4u;
            goto label_7ae6f4;
        }
    }
    ctx->pc = 0x7AE678u;
    // 0x7ae678: 0x8c636b34  lw          $v1, 0x6B34($v1)
    ctx->pc = 0x7ae678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27444)));
    // 0x7ae67c: 0x311ba  dsrl        $v0, $v1, 6
    ctx->pc = 0x7ae67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 6);
    // 0x7ae680: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7ae680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7ae684: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x7AE684u;
    {
        const bool branch_taken_0x7ae684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AE688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE684u;
        // 0x7ae688: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae684) {
            ctx->pc = 0x7AE6F8u;
            goto label_7ae6f8;
        }
    }
    ctx->pc = 0x7AE68Cu;
    // 0x7ae68c: 0x3117a  dsrl        $v0, $v1, 5
    ctx->pc = 0x7ae68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 5);
    // 0x7ae690: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7ae690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7ae694: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x7AE694u;
    {
        const bool branch_taken_0x7ae694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AE698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE694u;
        // 0x7ae698: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae694) {
            ctx->pc = 0x7AE6FCu;
            goto label_7ae6fc;
        }
    }
    ctx->pc = 0x7AE69Cu;
    // 0x7ae69c: 0x310fa  dsrl        $v0, $v1, 3
    ctx->pc = 0x7ae69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 3);
    // 0x7ae6a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7ae6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7ae6a4: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x7AE6A4u;
    {
        const bool branch_taken_0x7ae6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ae6a4) {
            ctx->pc = 0x7AE6FCu;
            goto label_7ae6fc;
        }
    }
    ctx->pc = 0x7AE6ACu;
    // 0x7ae6ac: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x7ae6acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
    // 0x7ae6b0: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x7ae6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x7ae6b4: 0x8cc37a80  lw          $v1, 0x7A80($a2)
    ctx->pc = 0x7ae6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A80u));
    // 0x7ae6b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x7ae6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x7ae6bc: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x7ae6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x7ae6c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7ae6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae6c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x7ae6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x7ae6c8: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x7ae6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x7ae6cc: 0xacc37a80  sw          $v1, 0x7A80($a2)
    ctx->pc = 0x7ae6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 31360), GPR_U32(ctx, 3));
    // 0x7ae6d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7ae6d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae6d4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x7ae6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x7ae6d8: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x7ae6d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x7ae6dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7ae6dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae6e0: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x7AE6E0u;
    SET_GPR_U32(ctx, 31, 0x7AE6E8u);
    ctx->pc = 0x7AE6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AE6E0u;
    // 0x7ae6e4: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x7AE6E0u, 0x7AE6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE6E8u;
label_7ae6e8:
    // 0x7ae6e8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x7ae6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x7ae6ec: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x7ae6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x7ae6f0: 0xa462ae40  sh          $v0, -0x51C0($v1)
    ctx->pc = 0x7ae6f0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CAE40u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CAE40u, _value); } while (0);
label_7ae6f4:
    // 0x7ae6f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7ae6f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7ae6f8:
    // 0x7ae6f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ae6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7ae6fc:
    // 0x7ae6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x7AE6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AE700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE6FCu;
        // 0x7ae700: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AE6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AE704u;
    // 0x7ae704: 0x0  nop
    ctx->pc = 0x7ae704u;
    // NOP
    ctx->pc = 0x7ae708u;
}
} // namespace gh_event
