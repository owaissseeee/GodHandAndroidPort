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

// Function: cSndMemHeap_FindFitBlk
// Address: 0x2cd968 - 0x2cd9a0
void cSndMemHeap_FindFitBlk_0x2cd968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndMemHeap_FindFitBlk_0x2cd968");
#endif

    switch (ctx->pc) {
        case 0x2cd978u: goto label_2cd978;
        default: break;
    }

    ctx->pc = 0x2cd968u;

    // 0x2cd968: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x2cd968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x2cd96c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CD96Cu;
    {
        const bool branch_taken_0x2cd96c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd96c) {
            ctx->pc = 0x2CD994u;
            goto label_2cd994;
        }
    }
    ctx->pc = 0x2CD974u;
    // 0x2cd974: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2cd974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2cd978:
    // 0x2cd978: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2cd978u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2cd97c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD97Cu;
    {
        const bool branch_taken_0x2cd97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd97c) {
            ctx->pc = 0x2CD980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD97Cu;
            // 0x2cd980: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD98Cu;
            goto label_2cd98c;
        }
    }
    ctx->pc = 0x2CD984u;
    // 0x2cd984: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD984u;
        // 0x2cd988: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD98Cu;
label_2cd98c:
    // 0x2cd98c: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2CD98Cu;
    {
        const bool branch_taken_0x2cd98c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd98c) {
            ctx->pc = 0x2CD990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD98Cu;
            // 0x2cd990: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd978;
        }
    }
    ctx->pc = 0x2CD994u;
label_2cd994:
    // 0x2cd994: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD994u;
        // 0x2cd998: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD99Cu;
    // 0x2cd99c: 0x0  nop
    ctx->pc = 0x2cd99cu;
    // NOP
    ctx->pc = 0x2cd9a0u;
}
