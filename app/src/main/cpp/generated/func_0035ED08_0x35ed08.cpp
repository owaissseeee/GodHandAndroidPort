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

// Function: func_0035ED08
// Address: 0x35ed08 - 0x35eda8
void func_0035ED08_0x35ed08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035ED08_0x35ed08");
#endif

    switch (ctx->pc) {
        case 0x35ed88u: goto label_35ed88;
        default: break;
    }

    ctx->pc = 0x35ed08u;

    // 0x35ed08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35ed08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35ed0c: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x35ed0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x35ed10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35ed10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35ed14: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x35ed14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ed18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35ed18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35ed1c: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x35ed1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x35ed20: 0x10c3001d  beq         $a2, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x35ED20u;
    {
        const bool branch_taken_0x35ed20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x35ED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ED20u;
        // 0x35ed24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ed20) {
            ctx->pc = 0x35ED98u;
            goto label_35ed98;
        }
    }
    ctx->pc = 0x35ED28u;
    // 0x35ed28: 0x14c5001b  bne         $a2, $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x35ED28u;
    {
        const bool branch_taken_0x35ed28 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x35ED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ED28u;
        // 0x35ed2c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ed28) {
            ctx->pc = 0x35ED98u;
            goto label_35ed98;
        }
    }
    ctx->pc = 0x35ED30u;
    // 0x35ed30: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x35ed30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x35ed34: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x35ED34u;
    {
        const bool branch_taken_0x35ed34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35ED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ED34u;
        // 0x35ed38: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ed34) {
            ctx->pc = 0x35ED70u;
            goto label_35ed70;
        }
    }
    ctx->pc = 0x35ED3Cu;
    // 0x35ed3c: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x35ed3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x35ed40: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x35ED40u;
    {
        const bool branch_taken_0x35ed40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ed40) {
            ctx->pc = 0x35ED44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35ED40u;
            // 0x35ed44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35ED94u;
            goto label_35ed94;
        }
    }
    ctx->pc = 0x35ED48u;
    // 0x35ed48: 0x50b00012  beql        $a1, $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x35ED48u;
    {
        const bool branch_taken_0x35ed48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        if (branch_taken_0x35ed48) {
            ctx->pc = 0x35ED4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35ED48u;
            // 0x35ed4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35ED94u;
            goto label_35ed94;
        }
    }
    ctx->pc = 0x35ED50u;
    // 0x35ed50: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x35ED50u;
    {
        const bool branch_taken_0x35ed50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x35ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ED50u;
        // 0x35ed54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ed50) {
            ctx->pc = 0x35ED98u;
            goto label_35ed98;
        }
    }
    ctx->pc = 0x35ED58u;
    // 0x35ed58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35ed58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35ed5c: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35ED5Cu;
    {
        const bool branch_taken_0x35ed5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x35ED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ED5Cu;
        // 0x35ed60: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ed5c) {
            ctx->pc = 0x35ED80u;
            goto label_35ed80;
        }
    }
    ctx->pc = 0x35ED64u;
    // 0x35ed64: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x35ED64u;
    {
        const bool branch_taken_0x35ed64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35ED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ED64u;
        // 0x35ed68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ed64) {
            ctx->pc = 0x35ED9Cu;
            goto label_35ed9c;
        }
    }
    ctx->pc = 0x35ED6Cu;
    // 0x35ed6c: 0x0  nop
    ctx->pc = 0x35ed6cu;
    // NOP
label_35ed70:
    // 0x35ed70: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35ED70u;
    {
        const bool branch_taken_0x35ed70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x35ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ED70u;
        // 0x35ed74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ed70) {
            ctx->pc = 0x35ED90u;
            goto label_35ed90;
        }
    }
    ctx->pc = 0x35ED78u;
    // 0x35ed78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x35ED78u;
    {
        const bool branch_taken_0x35ed78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ED78u;
        // 0x35ed7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ed78) {
            ctx->pc = 0x35ED9Cu;
            goto label_35ed9c;
        }
    }
    ctx->pc = 0x35ED80u;
label_35ed80:
    // 0x35ed80: 0xc0db31e  jal         func_36CC78
    ctx->pc = 0x35ED80u;
    SET_GPR_U32(ctx, 31, 0x35ED88u);
    ctx->pc = 0x35ED84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ED80u;
    // 0x35ed84: 0x8c840030  lw          $a0, 0x30($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CC78u, 0x35ED80u, 0x35ED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ED88u;
label_35ed88:
    // 0x35ed88: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35ED88u;
    {
        const bool branch_taken_0x35ed88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x35ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ED88u;
        // 0x35ed8c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ed88) {
            ctx->pc = 0x35ED98u;
            goto label_35ed98;
        }
    }
    ctx->pc = 0x35ED90u;
label_35ed90:
    // 0x35ed90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35ed90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35ed94:
    // 0x35ed94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x35ed94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35ed98:
    // 0x35ed98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35ed98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35ed9c:
    // 0x35ed9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35ed9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35eda0: 0x3e00008  jr          $ra
    ctx->pc = 0x35EDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EDA0u;
        // 0x35eda4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EDA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EDA8u;
}
