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

// Function: func_00372C80
// Address: 0x372c80 - 0x372cb0
void func_00372C80_0x372c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00372C80_0x372c80");
#endif

    switch (ctx->pc) {
        case 0x372ca4u: goto label_372ca4;
        default: break;
    }

    ctx->pc = 0x372c80u;

    // 0x372c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x372c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x372c84: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x372c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x372c88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x372c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x372c8c: 0x2442afe0  addiu       $v0, $v0, -0x5020
    ctx->pc = 0x372c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946784));
    // 0x372c90: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x372c90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x372c94: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x372C94u;
    {
        const bool branch_taken_0x372c94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x372C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372C94u;
        // 0x372c98: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372c94) {
            ctx->pc = 0x372CA4u;
            goto label_372ca4;
        }
    }
    ctx->pc = 0x372C9Cu;
    // 0x372c9c: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x372C9Cu;
    SET_GPR_U32(ctx, 31, 0x372CA4u);
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x372C9Cu, 0x372CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372CA4u;
label_372ca4:
    // 0x372ca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x372ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x372CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372CA8u;
        // 0x372cac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372CB0u;
}
