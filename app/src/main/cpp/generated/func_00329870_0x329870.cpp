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

// Function: func_00329870
// Address: 0x329870 - 0x329898
void func_00329870_0x329870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00329870_0x329870");
#endif

    switch (ctx->pc) {
        case 0x329870u: goto label_329870;
        case 0x329874u: goto label_329874;
        case 0x329878u: goto label_329878;
        case 0x32987cu: goto label_32987c;
        case 0x329880u: goto label_329880;
        case 0x329884u: goto label_329884;
        case 0x329888u: goto label_329888;
        case 0x32988cu: goto label_32988c;
        case 0x329890u: goto label_329890;
        case 0x329894u: goto label_329894;
        default: break;
    }

    ctx->pc = 0x329870u;

label_329870:
    // 0x329870: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x329870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_329874:
    // 0x329874: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x329874u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_329878:
    // 0x329878: 0x8c42141c  lw          $v0, 0x141C($v0)
    ctx->pc = 0x329878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5148)));
label_32987c:
    // 0x32987c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_329880:
    if (ctx->pc == 0x329880u) {
        ctx->pc = 0x329880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32987Cu;
        // 0x329880: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329884u;
        goto label_329884;
    }
    ctx->pc = 0x32987Cu;
    {
        const bool branch_taken_0x32987c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32987Cu;
        // 0x329880: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32987c) {
            ctx->pc = 0x32988Cu;
            goto label_32988c;
        }
    }
    ctx->pc = 0x329884u;
label_329884:
    // 0x329884: 0x40f809  jalr        $v0
label_329888:
    if (ctx->pc == 0x329888u) {
        ctx->pc = 0x32988Cu;
        goto label_32988c;
    }
    ctx->pc = 0x329884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32988Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329884u, 0x32988Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32988Cu;
label_32988c:
    // 0x32988c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32988cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_329890:
    // 0x329890: 0x3e00008  jr          $ra
label_329894:
    if (ctx->pc == 0x329894u) {
        ctx->pc = 0x329894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329890u;
        // 0x329894: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329898u;
        goto label_fallthrough_0x329890;
    }
    ctx->pc = 0x329890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329890u;
        // 0x329894: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x329890:
    ctx->pc = 0x329898u;
}
