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

// Function: func_00297B40
// Address: 0x297b40 - 0x297b60
void func_00297B40_0x297b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00297B40_0x297b40");
#endif

    switch (ctx->pc) {
        case 0x297b54u: goto label_297b54;
        default: break;
    }

    ctx->pc = 0x297b40u;

    // 0x297b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x297b44: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x297b44u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x297B44u) & 0xFFFFu)) << 16));
    // 0x297b48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x297b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x297b4c: 0xc000000  jal         func_000000
    ctx->pc = 0x297B4Cu;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x297B4Cu) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x297B54u);
        ctx->pc = 0x297B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297B4Cu;
        // 0x297b50: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x297B50u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297B4Cu, 0x297B54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x297B54u;
label_297b54:
    // 0x297b54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297b58: 0x3e00008  jr          $ra
    ctx->pc = 0x297B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297B58u;
        // 0x297b5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297B60u;
}
