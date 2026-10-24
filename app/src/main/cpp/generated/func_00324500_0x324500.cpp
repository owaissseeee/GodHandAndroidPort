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

// Function: func_00324500
// Address: 0x324500 - 0x324530
void func_00324500_0x324500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00324500_0x324500");
#endif

    switch (ctx->pc) {
        case 0x324518u: goto label_324518;
        default: break;
    }

    ctx->pc = 0x324500u;

    // 0x324500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x324500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x324504: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x324504u;
    {
        const bool branch_taken_0x324504 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x324508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324504u;
        // 0x324508: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324504) {
            ctx->pc = 0x324520u;
            goto label_324520;
        }
    }
    ctx->pc = 0x32450Cu;
    // 0x32450c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32450cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x324510: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x324510u;
    SET_GPR_U32(ctx, 31, 0x324518u);
    ctx->pc = 0x324514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324510u;
    // 0x324514: 0x248419f0  addiu       $a0, $a0, 0x19F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x324510u, 0x324518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324518u;
label_324518:
    // 0x324518: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x324518u;
    {
        const bool branch_taken_0x324518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324518u;
        // 0x32451c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324518) {
            ctx->pc = 0x324524u;
            goto label_324524;
        }
    }
    ctx->pc = 0x324520u;
label_324520:
    // 0x324520: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x324520u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_324524:
    // 0x324524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x324524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324528: 0x3e00008  jr          $ra
    ctx->pc = 0x324528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324528u;
        // 0x32452c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324530u;
}
