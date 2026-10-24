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

// Function: func_002B45F8
// Address: 0x2b45f8 - 0x2b4690
void func_002B45F8_0x2b45f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B45F8_0x2b45f8");
#endif

    switch (ctx->pc) {
        case 0x2b4620u: goto label_2b4620;
        case 0x2b4654u: goto label_2b4654;
        case 0x2b4664u: goto label_2b4664;
        default: break;
    }

    ctx->pc = 0x2b45f8u;

    // 0x2b45f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b45f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b45fc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b45fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2b4600: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b4600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b4604: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b4604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4608: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2b4608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2b460c: 0x30d1ffff  andi        $s1, $a2, 0xFFFF
    ctx->pc = 0x2b460cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2b4610: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b4614: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2B4614u;
    {
        const bool branch_taken_0x2b4614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4614u;
        // 0x2b4618: 0x34128000  ori         $s2, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4614) {
            ctx->pc = 0x2B465Cu;
            goto label_2b465c;
        }
    }
    ctx->pc = 0x2B461Cu;
    // 0x2b461c: 0x0  nop
    ctx->pc = 0x2b461cu;
    // NOP
label_2b4620:
    // 0x2b4620: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x2b4620u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b4624: 0x313c2  srl         $v0, $v1, 15
    ctx->pc = 0x2b4624u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 15));
    // 0x2b4628: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B4628u;
    {
        const bool branch_taken_0x2b4628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4628u;
        // 0x2b462c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4628) {
            ctx->pc = 0x2B464Cu;
            goto label_2b464c;
        }
    }
    ctx->pc = 0x2B4630u;
    // 0x2b4630: 0x3062ff00  andi        $v0, $v1, 0xFF00
    ctx->pc = 0x2b4630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b4634: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B4634u;
    {
        const bool branch_taken_0x2b4634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2b4634) {
            ctx->pc = 0x2B4644u;
            goto label_2b4644;
        }
    }
    ctx->pc = 0x2B463Cu;
    // 0x2b463c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2B463Cu;
    {
        const bool branch_taken_0x2b463c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B463Cu;
        // 0x2b4640: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b463c) {
            ctx->pc = 0x2B466Cu;
            goto label_2b466c;
        }
    }
    ctx->pc = 0x2B4644u;
label_2b4644:
    // 0x2b4644: 0x10520009  beq         $v0, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B4644u;
    {
        const bool branch_taken_0x2b4644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2B4648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4644u;
        // 0x2b4648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4644) {
            ctx->pc = 0x2B466Cu;
            goto label_2b466c;
        }
    }
    ctx->pc = 0x2B464Cu;
label_2b464c:
    // 0x2b464c: 0xc0abc7e  jal         func_2AF1F8
    ctx->pc = 0x2B464Cu;
    SET_GPR_U32(ctx, 31, 0x2B4654u);
    ctx->pc = 0x2AF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF1F8u, 0x2B464Cu, 0x2B4654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4654u;
label_2b4654:
    // 0x2b4654: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2b4654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2b4658: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2b4658u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2b465c:
    // 0x2b465c: 0xc0abc86  jal         func_2AF218
    ctx->pc = 0x2B465Cu;
    SET_GPR_U32(ctx, 31, 0x2B4664u);
    ctx->pc = 0x2B4660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B465Cu;
    // 0x2b4660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF218u, 0x2B465Cu, 0x2B4664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4664u;
label_2b4664:
    // 0x2b4664: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2B4664u;
    {
        const bool branch_taken_0x2b4664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4664u;
        // 0x2b4668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4664) {
            ctx->pc = 0x2B4620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4620;
        }
    }
    ctx->pc = 0x2B466Cu;
label_2b466c:
    // 0x2b466c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b466cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b4670: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b4670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4674: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2b4674u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b467c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B467Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B467Cu;
        // 0x2b4680: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B467Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4684u;
    // 0x2b4684: 0x0  nop
    ctx->pc = 0x2b4684u;
    // NOP
    // 0x2b4688: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2b4688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b468c: 0x0  nop
    ctx->pc = 0x2b468cu;
    // NOP
    ctx->pc = 0x2b4690u;
}
