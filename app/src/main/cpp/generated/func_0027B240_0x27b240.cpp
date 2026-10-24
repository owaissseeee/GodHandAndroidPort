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

// Function: func_0027B240
// Address: 0x27b240 - 0x27b260
void func_0027B240_0x27b240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027B240_0x27b240");
#endif

    switch (ctx->pc) {
        case 0x27b254u: goto label_27b254;
        default: break;
    }

    ctx->pc = 0x27b240u;

    // 0x27b240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27b240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27b244: 0x24852130  addiu       $a1, $a0, 0x2130
    ctx->pc = 0x27b244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8496));
    // 0x27b248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27b248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27b24c: 0xc041004  jal         func_104010
    ctx->pc = 0x27B24Cu;
    SET_GPR_U32(ctx, 31, 0x27B254u);
    ctx->pc = 0x27B250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B24Cu;
    // 0x27b250: 0x248605b0  addiu       $a2, $a0, 0x5B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104010u, 0x27B24Cu, 0x27B254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B254u;
label_27b254:
    // 0x27b254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27b254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b258: 0x3e00008  jr          $ra
    ctx->pc = 0x27B258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B258u;
        // 0x27b25c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B260u;
}
