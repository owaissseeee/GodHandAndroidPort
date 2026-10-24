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

// Function: func_00345750
// Address: 0x345750 - 0x345780
void func_00345750_0x345750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00345750_0x345750");
#endif

    switch (ctx->pc) {
        case 0x345764u: goto label_345764;
        default: break;
    }

    ctx->pc = 0x345750u;

    // 0x345750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x345750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x345754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x345754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x345758: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x345758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34575c: 0xc0d14ac  jal         func_3452B0
    ctx->pc = 0x34575Cu;
    SET_GPR_U32(ctx, 31, 0x345764u);
    ctx->pc = 0x345760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34575Cu;
    // 0x345760: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3452B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3452B0u, 0x34575Cu, 0x345764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345764u;
label_345764:
    // 0x345764: 0xac500068  sw          $s0, 0x68($v0)
    ctx->pc = 0x345764u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 16));
    // 0x345768: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x345768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34576c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34576cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x345770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x345770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345774: 0x3e00008  jr          $ra
    ctx->pc = 0x345774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345774u;
        // 0x345778: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34577Cu;
    // 0x34577c: 0x0  nop
    ctx->pc = 0x34577cu;
    // NOP
    ctx->pc = 0x345780u;
}
