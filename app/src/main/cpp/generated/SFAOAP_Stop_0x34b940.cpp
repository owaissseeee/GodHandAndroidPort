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

// Function: SFAOAP_Stop
// Address: 0x34b940 - 0x34b988
void SFAOAP_Stop_0x34b940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFAOAP_Stop_0x34b940");
#endif

    switch (ctx->pc) {
        case 0x34b958u: goto label_34b958;
        case 0x34b978u: goto label_34b978;
        default: break;
    }

    ctx->pc = 0x34b940u;

    // 0x34b940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34b940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34b944: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x34b944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34b948: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34b948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34b94c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x34b94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34b950: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34B950u;
    SET_GPR_U32(ctx, 31, 0x34B958u);
    ctx->pc = 0x34B954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B950u;
    // 0x34b954: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34B950u, 0x34B958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B958u;
label_34b958:
    // 0x34b958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34b958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b95c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x34b95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34b960: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x34b960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34b964: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34b964u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b968: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34B968u;
    {
        const bool branch_taken_0x34b968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B968u;
        // 0x34b96c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b968) {
            ctx->pc = 0x34B978u;
            goto label_34b978;
        }
    }
    ctx->pc = 0x34B970u;
    // 0x34b970: 0xc0d70b4  jal         func_35C2D0
    ctx->pc = 0x34B970u;
    SET_GPR_U32(ctx, 31, 0x34B978u);
    ctx->pc = 0x35C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C2D0u, 0x34B970u, 0x34B978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B978u;
label_34b978:
    // 0x34b978: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34b978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b97c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34b97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34b980: 0x3e00008  jr          $ra
    ctx->pc = 0x34B980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B980u;
        // 0x34b984: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B988u;
}
