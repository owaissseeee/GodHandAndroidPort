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

// Function: SFAOAP_ExecServer
// Address: 0x34b738 - 0x34b778
void SFAOAP_ExecServer_0x34b738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFAOAP_ExecServer_0x34b738");
#endif

    switch (ctx->pc) {
        case 0x34b750u: goto label_34b750;
        default: break;
    }

    ctx->pc = 0x34b738u;

    // 0x34b738: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34b738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34b73c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x34b73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34b740: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34b740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34b744: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x34b744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34b748: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34B748u;
    SET_GPR_U32(ctx, 31, 0x34B750u);
    ctx->pc = 0x34B74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B748u;
    // 0x34b74c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34B748u, 0x34B750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B750u;
label_34b750:
    // 0x34b750: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34B750u;
    {
        const bool branch_taken_0x34b750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B750u;
        // 0x34b754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b750) {
            ctx->pc = 0x34B768u;
            goto label_34b768;
        }
    }
    ctx->pc = 0x34B758u;
    // 0x34b758: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34b758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b75c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34b75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34b760: 0x80d2dde  j           func_34B778
    ctx->pc = 0x34B760u;
    ctx->pc = 0x34B764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B760u;
    // 0x34b764: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B778u, 0x34B760u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34B768u;
label_34b768:
    // 0x34b768: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34b768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b76c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34b76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34b770: 0x3e00008  jr          $ra
    ctx->pc = 0x34B770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B770u;
        // 0x34b774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B778u;
}
