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

// Function: func_0017D460
// Address: 0x17d460 - 0x17d488
void func_0017D460_0x17d460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017D460_0x17d460");
#endif

    switch (ctx->pc) {
        case 0x17d47cu: goto label_17d47c;
        default: break;
    }

    ctx->pc = 0x17d460u;

    // 0x17d460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17d460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d464: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x17d464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x17d468: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17d468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d46c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x17d46cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d470: 0x24421e38  addiu       $v0, $v0, 0x1E38
    ctx->pc = 0x17d470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7736));
    // 0x17d474: 0xc06efc0  jal         func_1BBF00
    ctx->pc = 0x17D474u;
    SET_GPR_U32(ctx, 31, 0x17D47Cu);
    ctx->pc = 0x17D478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D474u;
    // 0x17d478: 0xac620214  sw          $v0, 0x214($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBF00u, 0x17D474u, 0x17D47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D47Cu;
label_17d47c:
    // 0x17d47c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d480: 0x3e00008  jr          $ra
    ctx->pc = 0x17D480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D480u;
        // 0x17d484: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D488u;
}
