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
// Function: SearchDir__7cMcPortPCcb
// Address: 0x7c3568 - 0x7c35a8
void SearchDir__7cMcPortPCcb_0x7c3568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchDir__7cMcPortPCcb_0x7c3568");
#endif

    switch (ctx->pc) {
        case 0x7c359cu: goto label_7c359c;
        default: break;
    }

    ctx->pc = 0x7c3568u;

    // 0x7c3568: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7c3568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7c356c: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C356Cu;
    {
        const bool branch_taken_0x7c356c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C3570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C356Cu;
        // 0x7c3570: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c356c) {
            ctx->pc = 0x7C3588u;
            goto label_7c3588;
        }
    }
    ctx->pc = 0x7C3574u;
    // 0x7c3574: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x7c3574u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3578: 0x24850014  addiu       $a1, $a0, 0x14
    ctx->pc = 0x7c3578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x7c357c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7c357cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c3580: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7C3580u;
    {
        const bool branch_taken_0x7c3580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3580u;
        // 0x7c3584: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3580) {
            ctx->pc = 0x7C3594u;
            goto label_7c3594;
        }
    }
    ctx->pc = 0x7C3588u;
label_7c3588:
    // 0x7c3588: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x7c3588u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c358c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7c358cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3590: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7c3590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7c3594:
    // 0x7c3594: 0xc1f0d28  jal         func_7C34A0
    ctx->pc = 0x7C3594u;
    SET_GPR_U32(ctx, 31, 0x7C359Cu);
    ctx->pc = 0x7C34A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C34A0u, 0x7C3594u, 0x7C359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C359Cu;
label_7c359c:
    // 0x7c359c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c359cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c35a0: 0x3e00008  jr          $ra
    ctx->pc = 0x7C35A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C35A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C35A0u;
        // 0x7c35a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C35A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C35A8u;
}
} // namespace gh_mcport
