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

// Function: cIDManager_getTexAddr
// Address: 0x2acdc8 - 0x2ace28
void cIDManager_getTexAddr_0x2acdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDManager_getTexAddr_0x2acdc8");
#endif

    switch (ctx->pc) {
        case 0x2acdd4u: goto label_2acdd4;
        default: break;
    }

    ctx->pc = 0x2acdc8u;

    // 0x2acdc8: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x2acdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2acdcc: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ACDCCu;
    {
        const bool branch_taken_0x2acdcc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ACDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACDCCu;
        // 0x2acdd0: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acdcc) {
            ctx->pc = 0x2ACDE4u;
            goto label_2acde4;
        }
    }
    ctx->pc = 0x2ACDD4u;
label_2acdd4:
    // 0x2acdd4: 0x8c4379f4  lw          $v1, 0x79F4($v0)
    ctx->pc = 0x2acdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31220)));
    // 0x2acdd8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2acdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2acddc: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACDDCu;
        // 0x2acde0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACDDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACDE4u;
label_2acde4:
    // 0x2acde4: 0x10c0fffb  beqz        $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2ACDE4u;
    {
        const bool branch_taken_0x2acde4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acde4) {
            ctx->pc = 0x2ACDD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2acdd4;
        }
    }
    ctx->pc = 0x2ACDECu;
    // 0x2acdec: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2acdecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2acdf0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2acdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2acdf4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2acdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2acdf8: 0x1080fff6  beqz        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2ACDF8u;
    {
        const bool branch_taken_0x2acdf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACDF8u;
        // 0x2acdfc: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acdf8) {
            ctx->pc = 0x2ACDD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2acdd4;
        }
    }
    ctx->pc = 0x2ACE00u;
    // 0x2ace00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ace00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ace04: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x2ace04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2ace08: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x2ACE08u;
    {
        const bool branch_taken_0x2ace08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ace08) {
            ctx->pc = 0x2ACE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACE08u;
            // 0x2ace0c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACDD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2acdd4;
        }
    }
    ctx->pc = 0x2ACE10u;
    // 0x2ace10: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2ace10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2ace14: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ace14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ace18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ace18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ace1c: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2ace1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ace20: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE20u;
        // 0x2ace24: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACE28u;
}
