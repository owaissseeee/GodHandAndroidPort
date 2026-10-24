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

// Function: func_002D3220
// Address: 0x2d3220 - 0x2d3240
void func_002D3220_0x2d3220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D3220_0x2d3220");
#endif

    switch (ctx->pc) {
        case 0x2d3234u: goto label_2d3234;
        default: break;
    }

    ctx->pc = 0x2d3220u;

    // 0x2d3220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d3220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d3224: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d3224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3228: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d3228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d322c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2D322Cu;
    SET_GPR_U32(ctx, 31, 0x2D3234u);
    ctx->pc = 0x2D3230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D322Cu;
    // 0x2d3230: 0x240600c0  addiu       $a2, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2D322Cu, 0x2D3234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3234u;
label_2d3234:
    // 0x2d3234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d3234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3238: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3238u;
        // 0x2d323c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3240u;
}
