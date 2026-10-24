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

// Function: func_002D5CA8
// Address: 0x2d5ca8 - 0x2d5cd8
void func_002D5CA8_0x2d5ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D5CA8_0x2d5ca8");
#endif

    switch (ctx->pc) {
        case 0x2d5cccu: goto label_2d5ccc;
        default: break;
    }

    ctx->pc = 0x2d5ca8u;

    // 0x2d5ca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d5ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d5cac: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2d5cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2d5cb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d5cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d5cb4: 0x2442d1c8  addiu       $v0, $v0, -0x2E38
    ctx->pc = 0x2d5cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955464));
    // 0x2d5cb8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2d5cb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2d5cbc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5CBCu;
    {
        const bool branch_taken_0x2d5cbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5CBCu;
        // 0x2d5cc0: 0xac820030  sw          $v0, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5cbc) {
            ctx->pc = 0x2D5CCCu;
            goto label_2d5ccc;
        }
    }
    ctx->pc = 0x2D5CC4u;
    // 0x2d5cc4: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x2D5CC4u;
    SET_GPR_U32(ctx, 31, 0x2D5CCCu);
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x2D5CC4u, 0x2D5CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5CCCu;
label_2d5ccc:
    // 0x2d5ccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d5cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5CD0u;
        // 0x2d5cd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5CD8u;
}
