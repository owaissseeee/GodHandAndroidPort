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
// Function: _$_7cMcLoad
// Address: 0x7cf430 - 0x7cf460
void ps2____7cMcLoad_0x7cf430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____7cMcLoad_0x7cf430");
#endif

    switch (ctx->pc) {
        case 0x7cf454u: goto label_7cf454;
        default: break;
    }

    ctx->pc = 0x7cf430u;

    // 0x7cf430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7cf430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7cf434: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cf434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cf438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7cf438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7cf43c: 0x244214b0  addiu       $v0, $v0, 0x14B0
    ctx->pc = 0x7cf43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5296));
    // 0x7cf440: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x7cf440u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x7cf444: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CF444u;
    {
        const bool branch_taken_0x7cf444 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CF448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF444u;
        // 0x7cf448: 0xac8200ec  sw          $v0, 0xEC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cf444) {
            ctx->pc = 0x7CF454u;
            goto label_7cf454;
        }
    }
    ctx->pc = 0x7CF44Cu;
    // 0x7cf44c: 0xc1f2588  jal         func_7C9620
    ctx->pc = 0x7CF44Cu;
    SET_GPR_U32(ctx, 31, 0x7CF454u);
    ctx->pc = 0x7C9620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9620u, 0x7CF44Cu, 0x7CF454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CF454u;
label_7cf454:
    // 0x7cf454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7cf454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cf458: 0x3e00008  jr          $ra
    ctx->pc = 0x7CF458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CF45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF458u;
        // 0x7cf45c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CF458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CF460u;
}
} // namespace gh_mcport
