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

// Function: AddToActiveList_138F40
// Address: 0x138f40 - 0x138f88
void AddToActiveList_138F40_0x138f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddToActiveList_138F40_0x138f40");
#endif

    ctx->pc = 0x138f40u;

    // 0x138f40: 0x8c861028  lw          $a2, 0x1028($a0)
    ctx->pc = 0x138f40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4136)));
    // 0x138f44: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x138f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x138f48: 0x10c2000d  beq         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x138F48u;
    {
        const bool branch_taken_0x138f48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x138F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F48u;
        // 0x138f4c: 0x3c05005d  lui         $a1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138f48) {
            ctx->pc = 0x138F80u;
            goto label_138f80;
        }
    }
    ctx->pc = 0x138F50u;
    // 0x138f50: 0x8c830ff0  lw          $v1, 0xFF0($a0)
    ctx->pc = 0x138f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4080)));
    // 0x138f54: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x138F54u;
    {
        const bool branch_taken_0x138f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x138F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F54u;
        // 0x138f58: 0x8ca7aff0  lw          $a3, -0x5010($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294946800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138f54) {
            ctx->pc = 0x138F6Cu;
            goto label_138f6c;
        }
    }
    ctx->pc = 0x138F5Cu;
    // 0x138f5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x138f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138f60: 0xac821028  sw          $v0, 0x1028($a0)
    ctx->pc = 0x138f60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4136), GPR_U32(ctx, 2));
    // 0x138f64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x138F64u;
    {
        const bool branch_taken_0x138f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F64u;
        // 0x138f68: 0xaca4aff0  sw          $a0, -0x5010($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294946800), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138f64) {
            ctx->pc = 0x138F78u;
            goto label_138f78;
        }
    }
    ctx->pc = 0x138F6Cu;
label_138f6c:
    // 0x138f6c: 0x8c82102c  lw          $v0, 0x102C($a0)
    ctx->pc = 0x138f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4140)));
    // 0x138f70: 0xac821028  sw          $v0, 0x1028($a0)
    ctx->pc = 0x138f70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4136), GPR_U32(ctx, 2));
    // 0x138f74: 0xaca3aff0  sw          $v1, -0x5010($a1)
    ctx->pc = 0x138f74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294946800), GPR_U32(ctx, 3));
label_138f78:
    // 0x138f78: 0xac870ff0  sw          $a3, 0xFF0($a0)
    ctx->pc = 0x138f78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4080), GPR_U32(ctx, 7));
    // 0x138f7c: 0xac86102c  sw          $a2, 0x102C($a0)
    ctx->pc = 0x138f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4140), GPR_U32(ctx, 6));
label_138f80:
    // 0x138f80: 0x3e00008  jr          $ra
    ctx->pc = 0x138F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138F88u;
}
