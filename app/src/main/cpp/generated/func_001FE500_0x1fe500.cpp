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

// Function: func_001FE500
// Address: 0x1fe500 - 0x1fe530
void func_001FE500_0x1fe500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FE500_0x1fe500");
#endif

    switch (ctx->pc) {
        case 0x1fe524u: goto label_1fe524;
        default: break;
    }

    ctx->pc = 0x1fe500u;

    // 0x1fe500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fe500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fe504: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1fe504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1fe508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe50c: 0x2442c4d8  addiu       $v0, $v0, -0x3B28
    ctx->pc = 0x1fe50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952152));
    // 0x1fe510: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1fe510u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1fe514: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE514u;
    {
        const bool branch_taken_0x1fe514 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE514u;
        // 0x1fe518: 0xac820050  sw          $v0, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe514) {
            ctx->pc = 0x1FE524u;
            goto label_1fe524;
        }
    }
    ctx->pc = 0x1FE51Cu;
    // 0x1fe51c: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x1FE51Cu;
    SET_GPR_U32(ctx, 31, 0x1FE524u);
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x1FE51Cu, 0x1FE524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE524u;
label_1fe524:
    // 0x1fe524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe528: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE528u;
        // 0x1fe52c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE530u;
}
