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

// Function: func_002714E8
// Address: 0x2714e8 - 0x271518
void func_002714E8_0x2714e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002714E8_0x2714e8");
#endif

    switch (ctx->pc) {
        case 0x271508u: goto label_271508;
        default: break;
    }

    ctx->pc = 0x2714e8u;

    // 0x2714e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2714e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2714ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2714ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2714f0: 0x8c861860  lw          $a2, 0x1860($a0)
    ctx->pc = 0x2714f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6240)));
    // 0x2714f4: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2714F4u;
    {
        const bool branch_taken_0x2714f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2714F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2714F4u;
        // 0x2714f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2714f4) {
            ctx->pc = 0x271508u;
            goto label_271508;
        }
    }
    ctx->pc = 0x2714FCu;
    // 0x2714fc: 0x8c840564  lw          $a0, 0x564($a0)
    ctx->pc = 0x2714fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1380)));
    // 0x271500: 0xc0b7e18  jal         func_2DF860
    ctx->pc = 0x271500u;
    SET_GPR_U32(ctx, 31, 0x271508u);
    ctx->pc = 0x271504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271500u;
    // 0x271504: 0x24a717e0  addiu       $a3, $a1, 0x17E0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 6112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF860u, 0x271500u, 0x271508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271508u;
label_271508:
    // 0x271508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x271508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27150c: 0x3e00008  jr          $ra
    ctx->pc = 0x27150Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27150Cu;
        // 0x271510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27150Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271514u;
    // 0x271514: 0x0  nop
    ctx->pc = 0x271514u;
    // NOP
    ctx->pc = 0x271518u;
}
