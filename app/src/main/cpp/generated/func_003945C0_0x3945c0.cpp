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

// Function: func_003945C0
// Address: 0x3945c0 - 0x394668
void func_003945C0_0x3945c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003945C0_0x3945c0");
#endif

    switch (ctx->pc) {
        case 0x3945f0u: goto label_3945f0;
        case 0x3945f8u: goto label_3945f8;
        case 0x394620u: goto label_394620;
        case 0x39464cu: goto label_39464c;
        default: break;
    }

    ctx->pc = 0x3945c0u;

    // 0x3945c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3945c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3945c4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3945c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3945c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3945c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3945cc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3945ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3945d0: 0x8c52852c  lw          $s2, -0x7AD4($v0)
    ctx->pc = 0x3945d0u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x3F852Cu));
    // 0x3945d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3945d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3945d8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3945d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3945dc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3945dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3945e0: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x3945E0u;
    {
        const bool branch_taken_0x3945e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3945E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3945E0u;
        // 0x3945e4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3945e0) {
            ctx->pc = 0x394644u;
            goto label_394644;
        }
    }
    ctx->pc = 0x3945E8u;
    // 0x3945e8: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x3945e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3945ec: 0x0  nop
    ctx->pc = 0x3945ecu;
    // NOP
label_3945f0:
    // 0x3945f0: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3945F0u;
    {
        const bool branch_taken_0x3945f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3945F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3945F0u;
        // 0x3945f4: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3945f0) {
            ctx->pc = 0x394638u;
            goto label_394638;
        }
    }
    ctx->pc = 0x3945F8u;
label_3945f8:
    // 0x3945f8: 0x9202000b  lbu         $v0, 0xB($s0)
    ctx->pc = 0x3945f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x3945fc: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3945FCu;
    {
        const bool branch_taken_0x3945fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3945fc) {
            ctx->pc = 0x394600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3945FCu;
            // 0x394600: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394630u;
            goto label_394630;
        }
    }
    ctx->pc = 0x394604u;
    // 0x394604: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x394604u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x394608: 0x96620008  lhu         $v0, 0x8($s3)
    ctx->pc = 0x394608u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x39460c: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x39460Cu;
    {
        const bool branch_taken_0x39460c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39460c) {
            ctx->pc = 0x394610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39460Cu;
            // 0x394610: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394630u;
            goto label_394630;
        }
    }
    ctx->pc = 0x394614u;
    // 0x394614: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x394614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x394618: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x394618u;
    SET_GPR_U32(ctx, 31, 0x394620u);
    ctx->pc = 0x39461Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394618u;
    // 0x39461c: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x394618u, 0x394620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394620u;
label_394620:
    // 0x394620: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x394620u;
    {
        const bool branch_taken_0x394620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x394624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394620u;
        // 0x394624: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394620) {
            ctx->pc = 0x394630u;
            goto label_394630;
        }
    }
    ctx->pc = 0x394628u;
    // 0x394628: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x394628u;
    {
        const bool branch_taken_0x394628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394628u;
        // 0x39462c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394628) {
            ctx->pc = 0x39464Cu;
            goto label_39464c;
        }
    }
    ctx->pc = 0x394630u;
label_394630:
    // 0x394630: 0x1620fff1  bnez        $s1, . + 4 + (-0xF << 2)
    ctx->pc = 0x394630u;
    {
        const bool branch_taken_0x394630 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x394634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394630u;
        // 0x394634: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394630) {
            ctx->pc = 0x3945F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3945f8;
        }
    }
    ctx->pc = 0x394638u;
label_394638:
    // 0x394638: 0x8e520030  lw          $s2, 0x30($s2)
    ctx->pc = 0x394638u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x39463c: 0x5640ffec  bnel        $s2, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x39463Cu;
    {
        const bool branch_taken_0x39463c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x39463c) {
            ctx->pc = 0x394640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39463Cu;
            // 0x394640: 0x8e510010  lw          $s1, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3945F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3945f0;
        }
    }
    ctx->pc = 0x394644u;
label_394644:
    // 0x394644: 0xc0e50f4  jal         func_3943D0
    ctx->pc = 0x394644u;
    SET_GPR_U32(ctx, 31, 0x39464Cu);
    ctx->pc = 0x394648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394644u;
    // 0x394648: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3943D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3943D0u, 0x394644u, 0x39464Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39464Cu;
label_39464c:
    // 0x39464c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x39464cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x394650: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x394650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x394654: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x394654u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x394658: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x394658u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39465c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39465cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x394660: 0x3e00008  jr          $ra
    ctx->pc = 0x394660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394660u;
        // 0x394664: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394668u;
}
