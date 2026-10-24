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

// Function: InitVtableField30Alt_133A80
// Address: 0x133a80 - 0x133aa8
void InitVtableField30Alt_133A80_0x133a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitVtableField30Alt_133A80_0x133a80");
#endif

    switch (ctx->pc) {
        case 0x133a9cu: goto label_133a9c;
        default: break;
    }

    ctx->pc = 0x133a80u;

    // 0x133a80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x133a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x133a84: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x133a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x133a88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x133a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x133a8c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x133a8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133a90: 0x2442d7e0  addiu       $v0, $v0, -0x2820
    ctx->pc = 0x133a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957024));
    // 0x133a94: 0xc04ce70  jal         func_1339C0
    ctx->pc = 0x133A94u;
    SET_GPR_U32(ctx, 31, 0x133A9Cu);
    ctx->pc = 0x133A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A94u;
    // 0x133a98: 0xac620030  sw          $v0, 0x30($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1339C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1339C0u, 0x133A94u, 0x133A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A9Cu;
label_133a9c:
    // 0x133a9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x133a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x133AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133AA0u;
        // 0x133aa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133AA8u;
}
