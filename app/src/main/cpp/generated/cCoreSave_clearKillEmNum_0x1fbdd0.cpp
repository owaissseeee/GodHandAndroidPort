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

// Function: cCoreSave_clearKillEmNum
// Address: 0x1fbdd0 - 0x1fbe08
void cCoreSave_clearKillEmNum_0x1fbdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_clearKillEmNum_0x1fbdd0");
#endif

    switch (ctx->pc) {
        case 0x1fbde0u: goto label_1fbde0;
        default: break;
    }

    ctx->pc = 0x1fbdd0u;

    // 0x1fbdd0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1fbdd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbdd4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1fbdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1fbdd8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FBDD8u;
    {
        const bool branch_taken_0x1fbdd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBDD8u;
        // 0x1fbddc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbdd8) {
            ctx->pc = 0x1FBDFCu;
            goto label_1fbdfc;
        }
    }
    ctx->pc = 0x1FBDE0u;
label_1fbde0:
    // 0x1fbde0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1fbde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1fbde4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1fbde4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1fbde8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fbde8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fbdec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fbdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fbdf0: 0x2ca40005  sltiu       $a0, $a1, 0x5
    ctx->pc = 0x1fbdf0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1fbdf4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FBDF4u;
    {
        const bool branch_taken_0x1fbdf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBDF4u;
        // 0x1fbdf8: 0xa440008c  sh          $zero, 0x8C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 140), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbdf4) {
            ctx->pc = 0x1FBDE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fbde0;
        }
    }
    ctx->pc = 0x1FBDFCu;
label_1fbdfc:
    // 0x1fbdfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBDFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBE04u;
    // 0x1fbe04: 0x0  nop
    ctx->pc = 0x1fbe04u;
    // NOP
    ctx->pc = 0x1fbe08u;
}
