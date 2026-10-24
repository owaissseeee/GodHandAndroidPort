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

// Function: InitVtableAndForwardSetup_100508
// Address: 0x100508 - 0x100530
void InitVtableAndForwardSetup_100508_0x100508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitVtableAndForwardSetup_100508_0x100508");
#endif

    switch (ctx->pc) {
        case 0x100524u: goto label_100524;
        default: break;
    }

    ctx->pc = 0x100508u;

    // 0x100508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10050c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x10050cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x100510: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100514: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x100514u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100518: 0x2442b6a0  addiu       $v0, $v0, -0x4960
    ctx->pc = 0x100518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948512));
    // 0x10051c: 0xc053a8a  jal         func_14EA28
    ctx->pc = 0x10051Cu;
    SET_GPR_U32(ctx, 31, 0x100524u);
    ctx->pc = 0x100520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10051Cu;
    // 0x100520: 0xac620214  sw          $v0, 0x214($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EA28u, 0x10051Cu, 0x100524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100524u;
label_100524:
    // 0x100524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100528: 0x3e00008  jr          $ra
    ctx->pc = 0x100528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100528u;
        // 0x10052c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100530u;
}
