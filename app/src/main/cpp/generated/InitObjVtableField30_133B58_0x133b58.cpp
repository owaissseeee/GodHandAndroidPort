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

// Function: InitObjVtableField30_133B58
// Address: 0x133b58 - 0x133b80
void InitObjVtableField30_133B58_0x133b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjVtableField30_133B58_0x133b58");
#endif

    switch (ctx->pc) {
        case 0x133b74u: goto label_133b74;
        default: break;
    }

    ctx->pc = 0x133b58u;

    // 0x133b58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x133b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x133b5c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x133b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x133b60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x133b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x133b64: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x133b64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133b68: 0x2442d7b8  addiu       $v0, $v0, -0x2848
    ctx->pc = 0x133b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956984));
    // 0x133b6c: 0xc04ce70  jal         func_1339C0
    ctx->pc = 0x133B6Cu;
    SET_GPR_U32(ctx, 31, 0x133B74u);
    ctx->pc = 0x133B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133B6Cu;
    // 0x133b70: 0xac620030  sw          $v0, 0x30($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1339C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1339C0u, 0x133B6Cu, 0x133B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133B74u;
label_133b74:
    // 0x133b74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x133b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133b78: 0x3e00008  jr          $ra
    ctx->pc = 0x133B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B78u;
        // 0x133b7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133B80u;
}
