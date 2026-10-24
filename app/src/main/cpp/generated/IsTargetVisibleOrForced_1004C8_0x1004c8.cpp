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

// Function: IsTargetVisibleOrForced_1004C8
// Address: 0x1004c8 - 0x100508
void IsTargetVisibleOrForced_1004C8_0x1004c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsTargetVisibleOrForced_1004C8_0x1004c8");
#endif

    switch (ctx->pc) {
        case 0x1004ecu: goto label_1004ec;
        default: break;
    }

    ctx->pc = 0x1004c8u;

    // 0x1004c8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1004c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1004cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1004ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1004d0: 0x8c437a80  lw          $v1, 0x7A80($v0)
    ctx->pc = 0x1004d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A80u));
    // 0x1004d4: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1004d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x1004d8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1004d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1004dc: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1004DCu;
    {
        const bool branch_taken_0x1004dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1004E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1004DCu;
        // 0x1004e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1004dc) {
            ctx->pc = 0x1004F4u;
            goto label_1004f4;
        }
    }
    ctx->pc = 0x1004E4u;
    // 0x1004e4: 0xc052d1c  jal         func_14B470
    ctx->pc = 0x1004E4u;
    SET_GPR_U32(ctx, 31, 0x1004ECu);
    ctx->pc = 0x14B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B470u, 0x1004E4u, 0x1004ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1004ECu;
label_1004ec:
    // 0x1004ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1004ECu;
    {
        const bool branch_taken_0x1004ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1004F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1004ECu;
        // 0x1004f0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1004ec) {
            ctx->pc = 0x1004F8u;
            goto label_1004f8;
        }
    }
    ctx->pc = 0x1004F4u;
label_1004f4:
    // 0x1004f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1004f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1004f8:
    // 0x1004f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1004f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1004fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1004FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1004FCu;
        // 0x100500: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1004FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100504u;
    // 0x100504: 0x0  nop
    ctx->pc = 0x100504u;
    // NOP
    ctx->pc = 0x100508u;
}
