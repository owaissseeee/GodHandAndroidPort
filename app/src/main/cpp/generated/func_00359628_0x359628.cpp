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

// Function: func_00359628
// Address: 0x359628 - 0x3596f0
void func_00359628_0x359628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00359628_0x359628");
#endif

    switch (ctx->pc) {
        case 0x359658u: goto label_359658;
        case 0x35968cu: goto label_35968c;
        default: break;
    }

    ctx->pc = 0x359628u;

    // 0x359628: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x359628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x35962c: 0xc76021  addu        $t4, $a2, $a3
    ctx->pc = 0x35962cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x359630: 0x8c8b0004  lw          $t3, 0x4($a0)
    ctx->pc = 0x359630u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x359634: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x359634u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359638: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x359638u;
    {
        const bool branch_taken_0x359638 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x35963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359638u;
        // 0x35963c: 0x8c890010  lw          $t1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359638) {
            ctx->pc = 0x3596E8u;
            goto label_3596e8;
        }
    }
    ctx->pc = 0x359640u;
    // 0x359640: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x359640u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x359644: 0xa6302b  sltu        $a2, $a1, $a2
    ctx->pc = 0x359644u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x359648: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x359648u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35964c: 0xac682b  sltu        $t5, $a1, $t4
    ctx->pc = 0x35964cu;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x359650: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x359650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x359654: 0x0  nop
    ctx->pc = 0x359654u;
    // NOP
label_359658:
    // 0x359658: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x359658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x35965c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x35965cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x359660: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x359660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x359664: 0xa3402b  sltu        $t0, $a1, $v1
    ctx->pc = 0x359664u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x359668: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x359668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35966c: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x35966cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x359670: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x359670u;
    {
        const bool branch_taken_0x359670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x359674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359670u;
        // 0x359674: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359670) {
            ctx->pc = 0x359698u;
            goto label_359698;
        }
    }
    ctx->pc = 0x359678u;
    // 0x359678: 0x15000012  bnez        $t0, . + 4 + (0x12 << 2)
    ctx->pc = 0x359678u;
    {
        const bool branch_taken_0x359678 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x35967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359678u;
        // 0x35967c: 0x25220001  addiu       $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359678) {
            ctx->pc = 0x3596C4u;
            goto label_3596c4;
        }
    }
    ctx->pc = 0x359680u;
    // 0x359680: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x359680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x359684: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x359684u;
    {
        const bool branch_taken_0x359684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x359684) {
            ctx->pc = 0x359688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359684u;
            // 0x359688: 0x25220001  addiu       $v0, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3596C4u;
            goto label_3596c4;
        }
    }
    ctx->pc = 0x35968Cu;
label_35968c:
    // 0x35968c: 0x3e00008  jr          $ra
    ctx->pc = 0x35968Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35968Cu;
        // 0x359690: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35968Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359694u;
    // 0x359694: 0x0  nop
    ctx->pc = 0x359694u;
    // NOP
label_359698:
    // 0x359698: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x359698u;
    {
        const bool branch_taken_0x359698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x359698) {
            ctx->pc = 0x3596A8u;
            goto label_3596a8;
        }
    }
    ctx->pc = 0x3596A0u;
    // 0x3596a0: 0x15a0fffa  bnez        $t5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3596A0u;
    {
        const bool branch_taken_0x3596a0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x3596a0) {
            ctx->pc = 0x35968Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35968c;
        }
    }
    ctx->pc = 0x3596A8u;
label_3596a8:
    // 0x3596a8: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x3596A8u;
    {
        const bool branch_taken_0x3596a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3596ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3596A8u;
        // 0x3596ac: 0x25220001  addiu       $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3596a8) {
            ctx->pc = 0x3596C4u;
            goto label_3596c4;
        }
    }
    ctx->pc = 0x3596B0u;
    // 0x3596b0: 0x871023  subu        $v0, $a0, $a3
    ctx->pc = 0x3596b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x3596b4: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x3596b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3596b8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3596B8u;
    {
        const bool branch_taken_0x3596b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3596b8) {
            ctx->pc = 0x35968Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35968c;
        }
    }
    ctx->pc = 0x3596C0u;
    // 0x3596c0: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x3596c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_3596c4:
    // 0x3596c4: 0x4b182a  slt         $v1, $v0, $t3
    ctx->pc = 0x3596c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x3596c8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3596C8u;
    {
        const bool branch_taken_0x3596c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3596CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3596C8u;
        // 0x3596cc: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3596c8) {
            ctx->pc = 0x3596D8u;
            goto label_3596d8;
        }
    }
    ctx->pc = 0x3596D0u;
    // 0x3596d0: 0x12b1023  subu        $v0, $t1, $t3
    ctx->pc = 0x3596d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x3596d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3596d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3596d8:
    // 0x3596d8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3596d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3596dc: 0x14e102a  slt         $v0, $t2, $t6
    ctx->pc = 0x3596dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x3596e0: 0x5440ffdd  bnel        $v0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x3596E0u;
    {
        const bool branch_taken_0x3596e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3596e0) {
            ctx->pc = 0x3596E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3596E0u;
            // 0x3596e4: 0x91100  sll         $v0, $t1, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359658;
        }
    }
    ctx->pc = 0x3596E8u;
label_3596e8:
    // 0x3596e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3596E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3596ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3596E8u;
        // 0x3596ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3596E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3596F0u;
}
