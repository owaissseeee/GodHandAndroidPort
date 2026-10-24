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

// Function: func_00201228
// Address: 0x201228 - 0x201250
void func_00201228_0x201228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00201228_0x201228");
#endif

    switch (ctx->pc) {
        case 0x201240u: goto label_201240;
        default: break;
    }

    ctx->pc = 0x201228u;

    // 0x201228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20122c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20122cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201230: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201234: 0x24060088  addiu       $a2, $zero, 0x88
    ctx->pc = 0x201234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x201238: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x201238u;
    SET_GPR_U32(ctx, 31, 0x201240u);
    ctx->pc = 0x20123Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201238u;
    // 0x20123c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x201238u, 0x201240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201240u;
label_201240:
    // 0x201240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201244: 0x3e00008  jr          $ra
    ctx->pc = 0x201244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201244u;
        // 0x201248: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20124Cu;
    // 0x20124c: 0x0  nop
    ctx->pc = 0x20124cu;
    // NOP
    ctx->pc = 0x201250u;
}
