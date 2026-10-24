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
// Function: __uncatch_exception
// Address: 0x7ca158 - 0x7ca188
void ps2___uncatch_exception_0x7ca158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___uncatch_exception_0x7ca158");
#endif

    switch (ctx->pc) {
        case 0x7ca168u: goto label_7ca168;
        case 0x7ca17cu: goto label_7ca17c;
        default: break;
    }

    ctx->pc = 0x7ca158u;

    // 0x7ca158: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7ca158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7ca15c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ca15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ca160: 0xc1f2d0c  jal         func_7CB430
    ctx->pc = 0x7CA160u;
    SET_GPR_U32(ctx, 31, 0x7CA168u);
    ctx->pc = 0x7CB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CB430u, 0x7CA160u, 0x7CA168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA168u;
label_7ca168:
    // 0x7ca168: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x7ca168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7ca16c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CA16Cu;
    {
        const bool branch_taken_0x7ca16c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CA170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA16Cu;
        // 0x7ca170: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca16c) {
            ctx->pc = 0x7CA17Cu;
            goto label_7ca17c;
        }
    }
    ctx->pc = 0x7CA174u;
    // 0x7ca174: 0xc1f279a  jal         func_7C9E68
    ctx->pc = 0x7CA174u;
    SET_GPR_U32(ctx, 31, 0x7CA17Cu);
    ctx->pc = 0x7C9E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9E68u, 0x7CA174u, 0x7CA17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA17Cu;
label_7ca17c:
    // 0x7ca17c: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x7ca17cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x7ca180: 0x3e00008  jr          $ra
    ctx->pc = 0x7CA180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CA184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA180u;
        // 0x7ca184: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CA180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CA188u;
}
} // namespace gh_mcport
