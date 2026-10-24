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

// Function: cSaveManager_stageClear
// Address: 0x2bf8c8 - 0x2bf8f8
void cSaveManager_stageClear_0x2bf8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSaveManager_stageClear_0x2bf8c8");
#endif

    switch (ctx->pc) {
        case 0x2bf8dcu: goto label_2bf8dc;
        case 0x2bf8e8u: goto label_2bf8e8;
        default: break;
    }

    ctx->pc = 0x2bf8c8u;

    // 0x2bf8c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bf8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bf8cc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2bf8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2bf8d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bf8d4: 0xc07e6c4  jal         func_1F9B10
    ctx->pc = 0x2BF8D4u;
    SET_GPR_U32(ctx, 31, 0x2BF8DCu);
    ctx->pc = 0x2BF8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF8D4u;
    // 0x2bf8d8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9B10u, 0x2BF8D4u, 0x2BF8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF8DCu;
label_2bf8dc:
    // 0x2bf8dc: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x2bf8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x2bf8e0: 0xc0afae0  jal         func_2BEB80
    ctx->pc = 0x2BF8E0u;
    SET_GPR_U32(ctx, 31, 0x2BF8E8u);
    ctx->pc = 0x2BF8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF8E0u;
    // 0x2bf8e4: 0x24848658  addiu       $a0, $a0, -0x79A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEB80u, 0x2BF8E0u, 0x2BF8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF8E8u;
label_2bf8e8:
    // 0x2bf8e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8ECu;
        // 0x2bf8f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF8F4u;
    // 0x2bf8f4: 0x0  nop
    ctx->pc = 0x2bf8f4u;
    // NOP
    ctx->pc = 0x2bf8f8u;
}
