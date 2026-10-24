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
// Function: _$_13bad_exception
// Address: 0x7ca4a0 - 0x7ca4d0
void ps2____13bad_exception_0x7ca4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____13bad_exception_0x7ca4a0");
#endif

    switch (ctx->pc) {
        case 0x7ca4c4u: goto label_7ca4c4;
        default: break;
    }

    ctx->pc = 0x7ca4a0u;

    // 0x7ca4a0: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7ca4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7ca4a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7ca4a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7ca4a8: 0x24421058  addiu       $v0, $v0, 0x1058
    ctx->pc = 0x7ca4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4184));
    // 0x7ca4ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ca4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ca4b0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x7ca4b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x7ca4b4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CA4B4u;
    {
        const bool branch_taken_0x7ca4b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA4B4u;
        // 0x7ca4b8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca4b4) {
            ctx->pc = 0x7CA4C4u;
            goto label_7ca4c4;
        }
    }
    ctx->pc = 0x7CA4BCu;
    // 0x7ca4bc: 0xc1f2588  jal         func_7C9620
    ctx->pc = 0x7CA4BCu;
    SET_GPR_U32(ctx, 31, 0x7CA4C4u);
    ctx->pc = 0x7C9620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9620u, 0x7CA4BCu, 0x7CA4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA4C4u;
label_7ca4c4:
    // 0x7ca4c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ca4c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ca4c8: 0x3e00008  jr          $ra
    ctx->pc = 0x7CA4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CA4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA4C8u;
        // 0x7ca4cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CA4C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CA4D0u;
}
} // namespace gh_mcport
