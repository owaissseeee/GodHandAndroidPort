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

// Function: func_002BECB0
// Address: 0x2becb0 - 0x2bed08
void func_002BECB0_0x2becb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BECB0_0x2becb0");
#endif

    switch (ctx->pc) {
        case 0x2becc8u: goto label_2becc8;
        default: break;
    }

    ctx->pc = 0x2becb0u;

    // 0x2becb0: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BECB0u;
    {
        const bool branch_taken_0x2becb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BECB0u;
        // 0x2becb4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2becb0) {
            ctx->pc = 0x2BECFCu;
            goto label_2becfc;
        }
    }
    ctx->pc = 0x2BECB8u;
    // 0x2becb8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2becb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2becbc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2becbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2becc0: 0x24430610  addiu       $v1, $v0, 0x610
    ctx->pc = 0x2becc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1552));
    // 0x2becc4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2becc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2becc8:
    // 0x2becc8: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2becc8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2beccc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BECCCu;
    {
        const bool branch_taken_0x2beccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BECCCu;
        // 0x2becd0: 0x83100  sll         $a2, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beccc) {
            ctx->pc = 0x2BECE8u;
            goto label_2bece8;
        }
    }
    ctx->pc = 0x2BECD4u;
    // 0x2becd4: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x2becd4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
    // 0x2becd8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2becd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2becdc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2becdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2bece0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BECE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BECE0u;
        // 0x2bece4: 0xa0490618  sb          $t1, 0x618($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1560), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BECE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BECE8u;
label_2bece8:
    // 0x2bece8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2bece8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2becec: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x2bececu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2becf0: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x2becf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2becf4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2BECF4u;
    {
        const bool branch_taken_0x2becf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BECF4u;
        // 0x2becf8: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2becf4) {
            ctx->pc = 0x2BECC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2becc8;
        }
    }
    ctx->pc = 0x2BECFCu;
label_2becfc:
    // 0x2becfc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BECFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BECFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BED04u;
    // 0x2bed04: 0x0  nop
    ctx->pc = 0x2bed04u;
    // NOP
    ctx->pc = 0x2bed08u;
}
