#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: sceMcFlush
// Address: 0x7ce618 - 0x7ce6d8
void sceMcFlush_0x7ce618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMcFlush_0x7ce618");
#endif

    switch (ctx->pc) {
        case 0x7ce654u: goto label_7ce654;
        case 0x7ce698u: goto label_7ce698;
        case 0x7ce6a8u: goto label_7ce6a8;
        default: break;
    }

    ctx->pc = 0x7ce618u;

    // 0x7ce618: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7ce618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7ce61c: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7ce61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7ce620: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x7ce620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x7ce624: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x7ce624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x7ce628: 0x24711980  addiu       $s1, $v1, 0x1980
    ctx->pc = 0x7ce628u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 6528));
    // 0x7ce62c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x7ce62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x7ce630: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x7ce630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x7ce634: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x7ce634u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D19A4u));
    // 0x7ce638: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CE638u;
    {
        const bool branch_taken_0x7ce638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CE63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE638u;
        // 0x7ce63c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce638) {
            ctx->pc = 0x7CE648u;
            goto label_7ce648;
        }
    }
    ctx->pc = 0x7CE640u;
    // 0x7ce640: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x7CE640u;
    {
        const bool branch_taken_0x7ce640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE640u;
        // 0x7ce644: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce640) {
            ctx->pc = 0x7CE6BCu;
            goto label_7ce6bc;
        }
    }
    ctx->pc = 0x7CE648u;
label_7ce648:
    // 0x7ce648: 0x3c12007d  lui         $s2, 0x7D
    ctx->pc = 0x7ce648u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)125 << 16));
    // 0x7ce64c: 0xc0ebf3c  jal         func_3AFCF0
    ctx->pc = 0x7CE64Cu;
    SET_GPR_U32(ctx, 31, 0x7CE654u);
    ctx->pc = 0x7CE650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE64Cu;
    // 0x7ce650: 0x8e4407b4  lw          $a0, 0x7B4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCF0u, 0x7CE64Cu, 0x7CE654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE654u;
label_7ce654:
    // 0x7ce654: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CE654u;
    {
        const bool branch_taken_0x7ce654 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x7CE658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE654u;
        // 0x7ce658: 0x3c07007d  lui         $a3, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce654) {
            ctx->pc = 0x7CE664u;
            goto label_7ce664;
        }
    }
    ctx->pc = 0x7CE65Cu;
    // 0x7ce65c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x7CE65Cu;
    {
        const bool branch_taken_0x7ce65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE65Cu;
        // 0x7ce660: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce65c) {
            ctx->pc = 0x7CE6BCu;
            goto label_7ce6bc;
        }
    }
    ctx->pc = 0x7CE664u;
label_7ce664:
    // 0x7ce664: 0x3c09007d  lui         $t1, 0x7D
    ctx->pc = 0x7ce664u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)125 << 16));
    // 0x7ce668: 0x3c0b007d  lui         $t3, 0x7D
    ctx->pc = 0x7ce668u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)125 << 16));
    // 0x7ce66c: 0xacf01a00  sw          $s0, 0x1A00($a3)
    ctx->pc = 0x7ce66cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6656), GPR_U32(ctx, 16));
    // 0x7ce670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7ce670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce674: 0x24e71a00  addiu       $a3, $a3, 0x1A00
    ctx->pc = 0x7ce674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6656));
    // 0x7ce678: 0x25292f40  addiu       $t1, $t1, 0x2F40
    ctx->pc = 0x7ce678u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12096));
    // 0x7ce67c: 0x256bd628  addiu       $t3, $t3, -0x29D8
    ctx->pc = 0x7ce67cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956584));
    // 0x7ce680: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x7ce680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x7ce684: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x7ce684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7ce688: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7ce688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7ce68c: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x7ce68cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x7ce690: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x7CE690u;
    SET_GPR_U32(ctx, 31, 0x7CE698u);
    ctx->pc = 0x7CE694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE690u;
    // 0x7ce694: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x7CE690u, 0x7CE698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE698u;
label_7ce698:
    // 0x7ce698: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CE698u;
    {
        const bool branch_taken_0x7ce698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE698u;
        // 0x7ce69c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce698) {
            ctx->pc = 0x7CE6B0u;
            goto label_7ce6b0;
        }
    }
    ctx->pc = 0x7CE6A0u;
    // 0x7ce6a0: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x7CE6A0u;
    SET_GPR_U32(ctx, 31, 0x7CE6A8u);
    ctx->pc = 0x7CE6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE6A0u;
    // 0x7ce6a4: 0x8e4407b4  lw          $a0, 0x7B4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x7CE6A0u, 0x7CE6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE6A8u;
label_7ce6a8:
    // 0x7ce6a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7CE6A8u;
    {
        const bool branch_taken_0x7ce6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE6A8u;
        // 0x7ce6ac: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce6a8) {
            ctx->pc = 0x7CE6BCu;
            goto label_7ce6bc;
        }
    }
    ctx->pc = 0x7CE6B0u;
label_7ce6b0:
    // 0x7ce6b0: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7ce6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7ce6b4: 0xac6207b0  sw          $v0, 0x7B0($v1)
    ctx->pc = 0x7ce6b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7D07B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7D07B0u, _value); } while (0);
    // 0x7ce6b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7ce6b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7ce6bc:
    // 0x7ce6bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x7ce6bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7ce6c0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x7ce6c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7ce6c4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x7ce6c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7ce6c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x7ce6c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ce6cc: 0x3e00008  jr          $ra
    ctx->pc = 0x7CE6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CE6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE6CCu;
        // 0x7ce6d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CE6CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CE6D4u;
    // 0x7ce6d4: 0x0  nop
    ctx->pc = 0x7ce6d4u;
    // NOP
    ctx->pc = 0x7ce6d8u;
}
} // namespace gh_mcport
