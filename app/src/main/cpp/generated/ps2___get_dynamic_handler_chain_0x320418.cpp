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

// Function: __get_dynamic_handler_chain
// Address: 0x320418 - 0x320440
void ps2___get_dynamic_handler_chain_0x320418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___get_dynamic_handler_chain_0x320418");
#endif

    switch (ctx->pc) {
        case 0x320418u: goto label_320418;
        case 0x32041cu: goto label_32041c;
        case 0x320420u: goto label_320420;
        case 0x320424u: goto label_320424;
        case 0x320428u: goto label_320428;
        case 0x32042cu: goto label_32042c;
        case 0x320430u: goto label_320430;
        case 0x320434u: goto label_320434;
        case 0x320438u: goto label_320438;
        case 0x32043cu: goto label_32043c;
        default: break;
    }

    ctx->pc = 0x320418u;

label_320418:
    // 0x320418: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x320418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_32041c:
    // 0x32041c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32041cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_320420:
    // 0x320420: 0x8c62490c  lw          $v0, 0x490C($v1)
    ctx->pc = 0x320420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18700)));
label_320424:
    // 0x320424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_320428:
    // 0x320428: 0x40f809  jalr        $v0
label_32042c:
    if (ctx->pc == 0x32042Cu) {
        ctx->pc = 0x320430u;
        goto label_320430;
    }
    ctx->pc = 0x320428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320430u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320428u, 0x320430u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320430u;
label_320430:
    // 0x320430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_320434:
    // 0x320434: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x320434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_320438:
    // 0x320438: 0x3e00008  jr          $ra
label_32043c:
    if (ctx->pc == 0x32043Cu) {
        ctx->pc = 0x32043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320438u;
        // 0x32043c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320440u;
        goto label_fallthrough_0x320438;
    }
    ctx->pc = 0x320438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320438u;
        // 0x32043c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x320438:
    ctx->pc = 0x320440u;
}
