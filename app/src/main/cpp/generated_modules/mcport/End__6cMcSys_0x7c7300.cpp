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
// Function: End__6cMcSys
// Address: 0x7c7300 - 0x7c7348
void End__6cMcSys_0x7c7300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("End__6cMcSys_0x7c7300");
#endif

    switch (ctx->pc) {
        case 0x7c7328u: goto label_7c7328;
        default: break;
    }

    ctx->pc = 0x7c7300u;

    // 0x7c7300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7c7300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7c7304: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x7c7304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x7c7308: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c7308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c730c: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x7c730cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x7c7310: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c7310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c7314: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x7C7314u;
    {
        const bool branch_taken_0x7c7314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7314u;
        // 0x7c7318: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7314) {
            ctx->pc = 0x7C7320u;
            goto label_7c7320;
        }
    }
    ctx->pc = 0x7C731Cu;
    // 0x7c731c: 0xac4074b0  sw          $zero, 0x74B0($v0)
    ctx->pc = 0x7c731cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29872), GPR_U32(ctx, 0));
label_7c7320:
    // 0x7c7320: 0xc1f211a  jal         func_7C8468
    ctx->pc = 0x7C7320u;
    SET_GPR_U32(ctx, 31, 0x7C7328u);
    ctx->pc = 0x7C8468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8468u, 0x7C7320u, 0x7C7328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7328u;
label_7c7328:
    // 0x7c7328: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x7c7328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x7c732c: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x7c732cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x7c7330: 0x8c827a24  lw          $v0, 0x7A24($a0)
    ctx->pc = 0x7c7330u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x7c7334: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c7334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c7338: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c7338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c733c: 0xac827a24  sw          $v0, 0x7A24($a0)
    ctx->pc = 0x7c733cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 31268), GPR_U32(ctx, 2));
    // 0x7c7340: 0x3e00008  jr          $ra
    ctx->pc = 0x7C7340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C7344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7340u;
        // 0x7c7344: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C7340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C7348u;
}
} // namespace gh_mcport
