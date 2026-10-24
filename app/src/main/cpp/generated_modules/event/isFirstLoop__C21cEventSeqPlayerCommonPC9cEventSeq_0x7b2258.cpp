#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: isFirstLoop__C21cEventSeqPlayerCommonPC9cEventSeq
// Address: 0x7b2258 - 0x7b2280
void isFirstLoop__C21cEventSeqPlayerCommonPC9cEventSeq_0x7b2258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isFirstLoop__C21cEventSeqPlayerCommonPC9cEventSeq_0x7b2258");
#endif

    switch (ctx->pc) {
        case 0x7b2270u: goto label_7b2270;
        default: break;
    }

    ctx->pc = 0x7b2258u;

    // 0x7b2258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7b2258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7b225c: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7b225cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7b2260: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b2260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b2264: 0x248458d8  addiu       $a0, $a0, 0x58D8
    ctx->pc = 0x7b2264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22744));
    // 0x7b2268: 0xc1ec164  jal         func_7B0590
    ctx->pc = 0x7B2268u;
    SET_GPR_U32(ctx, 31, 0x7B2270u);
    ctx->pc = 0x7B226Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2268u;
    // 0x7b226c: 0x80a50005  lb          $a1, 0x5($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0590u, 0x7B2268u, 0x7B2270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2270u;
label_7b2270:
    // 0x7b2270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b2270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b2274: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x7b2274u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x7b2278: 0x3e00008  jr          $ra
    ctx->pc = 0x7B2278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2278u;
        // 0x7b227c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B2278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B2280u;
}
} // namespace gh_event
