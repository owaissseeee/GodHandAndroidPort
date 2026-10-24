#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: _$_9exception
// Address: 0x7ca538 - 0x7ca568
void ps2____9exception_0x7ca538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____9exception_0x7ca538");
#endif

    switch (ctx->pc) {
        case 0x7ca55cu: goto label_7ca55c;
        default: break;
    }

    ctx->pc = 0x7ca538u;

    // 0x7ca538: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7ca538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7ca53c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7ca53cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7ca540: 0x24421058  addiu       $v0, $v0, 0x1058
    ctx->pc = 0x7ca540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4184));
    // 0x7ca544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ca544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ca548: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x7ca548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x7ca54c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CA54Cu;
    {
        const bool branch_taken_0x7ca54c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA54Cu;
        // 0x7ca550: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca54c) {
            ctx->pc = 0x7CA55Cu;
            goto label_7ca55c;
        }
    }
    ctx->pc = 0x7CA554u;
    // 0x7ca554: 0xc1f2588  jal         func_7C9620
    ctx->pc = 0x7CA554u;
    SET_GPR_U32(ctx, 31, 0x7CA55Cu);
    ctx->pc = 0x7C9620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9620u, 0x7CA554u, 0x7CA55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA55Cu;
label_7ca55c:
    // 0x7ca55c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ca55cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ca560: 0x3e00008  jr          $ra
    ctx->pc = 0x7CA560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CA564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA560u;
        // 0x7ca564: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CA560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CA568u;
}
} // namespace gh_mcport
