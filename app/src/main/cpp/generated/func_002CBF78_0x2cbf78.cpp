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

// Function: func_002CBF78
// Address: 0x2cbf78 - 0x2cc050
void func_002CBF78_0x2cbf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002CBF78_0x2cbf78");
#endif

    switch (ctx->pc) {
        case 0x2cbfa0u: goto label_2cbfa0;
        default: break;
    }

    ctx->pc = 0x2cbf78u;

    // 0x2cbf78: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2cbf78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2cbf7c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x2cbf7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x2cbf80: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2cbf80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2cbf84: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x2cbf84u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2cbf88: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x2cbf88u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x2cbf8c: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2CBF8Cu;
    {
        const bool branch_taken_0x2cbf8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF8Cu;
        // 0x2cbf90: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbf8c) {
            ctx->pc = 0x2CC048u;
            goto label_2cc048;
        }
    }
    ctx->pc = 0x2CBF94u;
    // 0x2cbf94: 0x290b0002  slti        $t3, $t0, 0x2
    ctx->pc = 0x2cbf94u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2cbf98: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x2cbf98u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cbf9c: 0x84620008  lh          $v0, 0x8($v1)
    ctx->pc = 0x2cbf9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2cbfa0:
    // 0x2cbfa0: 0x54460027  bnel        $v0, $a2, . + 4 + (0x27 << 2)
    ctx->pc = 0x2CBFA0u;
    {
        const bool branch_taken_0x2cbfa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x2cbfa0) {
            ctx->pc = 0x2CBFA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBFA0u;
            // 0x2cbfa4: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC040u;
            goto label_2cc040;
        }
    }
    ctx->pc = 0x2CBFA8u;
    // 0x2cbfa8: 0x8462000a  lh          $v0, 0xA($v1)
    ctx->pc = 0x2cbfa8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x2cbfac: 0x54470024  bnel        $v0, $a3, . + 4 + (0x24 << 2)
    ctx->pc = 0x2CBFACu;
    {
        const bool branch_taken_0x2cbfac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x2cbfac) {
            ctx->pc = 0x2CBFB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBFACu;
            // 0x2cbfb0: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC040u;
            goto label_2cc040;
        }
    }
    ctx->pc = 0x2CBFB4u;
    // 0x2cbfb4: 0x10650021  beq         $v1, $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2CBFB4u;
    {
        const bool branch_taken_0x2cbfb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2CBFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBFB4u;
        // 0x2cbfb8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbfb4) {
            ctx->pc = 0x2CC03Cu;
            goto label_2cc03c;
        }
    }
    ctx->pc = 0x2CBFBCu;
    // 0x2cbfbc: 0x51040010  beql        $t0, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CBFBCu;
    {
        const bool branch_taken_0x2cbfbc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        if (branch_taken_0x2cbfbc) {
            ctx->pc = 0x2CBFC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBFBCu;
            // 0x2cbfc0: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC000u;
            goto label_2cc000;
        }
    }
    ctx->pc = 0x2CBFC4u;
    // 0x2cbfc4: 0x11600005  beqz        $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CBFC4u;
    {
        const bool branch_taken_0x2cbfc4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbfc4) {
            ctx->pc = 0x2CBFDCu;
            goto label_2cbfdc;
        }
    }
    ctx->pc = 0x2CBFCCu;
    // 0x2cbfcc: 0x51000007  beql        $t0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CBFCCu;
    {
        const bool branch_taken_0x2cbfcc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbfcc) {
            ctx->pc = 0x2CBFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBFCCu;
            // 0x2cbfd0: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBFECu;
            goto label_2cbfec;
        }
    }
    ctx->pc = 0x2CBFD4u;
    // 0x2cbfd4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2CBFD4u;
    {
        const bool branch_taken_0x2cbfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBFD4u;
        // 0x2cbfd8: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbfd4) {
            ctx->pc = 0x2CC040u;
            goto label_2cc040;
        }
    }
    ctx->pc = 0x2CBFDCu;
label_2cbfdc:
    // 0x2cbfdc: 0x510c000d  beql        $t0, $t4, . + 4 + (0xD << 2)
    ctx->pc = 0x2CBFDCu;
    {
        const bool branch_taken_0x2cbfdc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 12));
        if (branch_taken_0x2cbfdc) {
            ctx->pc = 0x2CBFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBFDCu;
            // 0x2cbfe0: 0x8c640024  lw          $a0, 0x24($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC014u;
            goto label_2cc014;
        }
    }
    ctx->pc = 0x2CBFE4u;
    // 0x2cbfe4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2CBFE4u;
    {
        const bool branch_taken_0x2cbfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBFE4u;
        // 0x2cbfe8: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbfe4) {
            ctx->pc = 0x2CC040u;
            goto label_2cc040;
        }
    }
    ctx->pc = 0x2CBFECu;
label_2cbfec:
    // 0x2cbfec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cbfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cbff0: 0x50440013  beql        $v0, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CBFF0u;
    {
        const bool branch_taken_0x2cbff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2cbff0) {
            ctx->pc = 0x2CBFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBFF0u;
            // 0x2cbff4: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC040u;
            goto label_2cc040;
        }
    }
    ctx->pc = 0x2CBFF8u;
    // 0x2cbff8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBFF8u;
        // 0x2cbffc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC000u;
label_2cc000:
    // 0x2cc000: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cc000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cc004: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2CC004u;
    {
        const bool branch_taken_0x2cc004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc004) {
            ctx->pc = 0x2CC008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC004u;
            // 0x2cc008: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC040u;
            goto label_2cc040;
        }
    }
    ctx->pc = 0x2CC00Cu;
    // 0x2cc00c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC00Cu;
        // 0x2cc010: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC014u;
label_2cc014:
    // 0x2cc014: 0x124102a  slt         $v0, $t1, $a0
    ctx->pc = 0x2cc014u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2cc018: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CC018u;
    {
        const bool branch_taken_0x2cc018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cc018) {
            ctx->pc = 0x2CC01Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC018u;
            // 0x2cc01c: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC040u;
            goto label_2cc040;
        }
    }
    ctx->pc = 0x2CC020u;
    // 0x2cc020: 0x51400006  beql        $t2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CC020u;
    {
        const bool branch_taken_0x2cc020 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc020) {
            ctx->pc = 0x2CC024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC020u;
            // 0x2cc024: 0x60502d  daddu       $t2, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC03Cu;
            goto label_2cc03c;
        }
    }
    ctx->pc = 0x2CC028u;
    // 0x2cc028: 0x8d420024  lw          $v0, 0x24($t2)
    ctx->pc = 0x2cc028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 36)));
    // 0x2cc02c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2cc02cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cc030: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC030u;
    {
        const bool branch_taken_0x2cc030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc030) {
            ctx->pc = 0x2CC034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC030u;
            // 0x2cc034: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC040u;
            goto label_2cc040;
        }
    }
    ctx->pc = 0x2CC038u;
    // 0x2cc038: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x2cc038u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2cc03c:
    // 0x2cc03c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2cc03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2cc040:
    // 0x2cc040: 0x5460ffd7  bnel        $v1, $zero, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2CC040u;
    {
        const bool branch_taken_0x2cc040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cc040) {
            ctx->pc = 0x2CC044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC040u;
            // 0x2cc044: 0x84620008  lh          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cbfa0;
        }
    }
    ctx->pc = 0x2CC048u;
label_2cc048:
    // 0x2cc048: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC048u;
        // 0x2cc04c: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC050u;
}
