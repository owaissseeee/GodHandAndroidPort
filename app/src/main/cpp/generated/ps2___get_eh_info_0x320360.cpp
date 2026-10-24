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

// Function: __get_eh_info
// Address: 0x320360 - 0x320388
void ps2___get_eh_info_0x320360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___get_eh_info_0x320360");
#endif

    switch (ctx->pc) {
        case 0x320360u: goto label_320360;
        case 0x320364u: goto label_320364;
        case 0x320368u: goto label_320368;
        case 0x32036cu: goto label_32036c;
        case 0x320370u: goto label_320370;
        case 0x320374u: goto label_320374;
        case 0x320378u: goto label_320378;
        case 0x32037cu: goto label_32037c;
        case 0x320380u: goto label_320380;
        case 0x320384u: goto label_320384;
        default: break;
    }

    ctx->pc = 0x320360u;

label_320360:
    // 0x320360: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x320360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_320364:
    // 0x320364: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320364u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_320368:
    // 0x320368: 0x8c62490c  lw          $v0, 0x490C($v1)
    ctx->pc = 0x320368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18700)));
label_32036c:
    // 0x32036c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32036cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_320370:
    // 0x320370: 0x40f809  jalr        $v0
label_320374:
    if (ctx->pc == 0x320374u) {
        ctx->pc = 0x320378u;
        goto label_320378;
    }
    ctx->pc = 0x320370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320378u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320370u, 0x320378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320378u;
label_320378:
    // 0x320378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32037c:
    // 0x32037c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x32037cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_320380:
    // 0x320380: 0x3e00008  jr          $ra
label_320384:
    if (ctx->pc == 0x320384u) {
        ctx->pc = 0x320384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320380u;
        // 0x320384: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320388u;
        goto label_fallthrough_0x320380;
    }
    ctx->pc = 0x320380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320380u;
        // 0x320384: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x320380:
    ctx->pc = 0x320388u;
}
