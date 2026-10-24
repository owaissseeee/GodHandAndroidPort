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

// Function: func_001F17D0
// Address: 0x1f17d0 - 0x1f1810
void func_001F17D0_0x1f17d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F17D0_0x1f17d0");
#endif

    switch (ctx->pc) {
        case 0x1f17f4u: goto label_1f17f4;
        default: break;
    }

    ctx->pc = 0x1f17d0u;

    // 0x1f17d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f17d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f17d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f17d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f17d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f17d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f17dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f17dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f17e0: 0x8e020b94  lw          $v0, 0xB94($s0)
    ctx->pc = 0x1f17e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f17e4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F17E4u;
    {
        const bool branch_taken_0x1f17e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f17e4) {
            ctx->pc = 0x1F17E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F17E4u;
            // 0x1f17e8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1804u;
            goto label_1f1804;
        }
    }
    ctx->pc = 0x1F17ECu;
    // 0x1f17ec: 0xc07be5e  jal         func_1EF978
    ctx->pc = 0x1F17ECu;
    SET_GPR_U32(ctx, 31, 0x1F17F4u);
    ctx->pc = 0x1EF978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF978u, 0x1F17ECu, 0x1F17F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F17F4u;
label_1f17f4:
    // 0x1f17f4: 0x8e020b94  lw          $v0, 0xB94($s0)
    ctx->pc = 0x1f17f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f17f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f17f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f17fc: 0xae020b94  sw          $v0, 0xB94($s0)
    ctx->pc = 0x1f17fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2964), GPR_U32(ctx, 2));
    // 0x1f1800: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f1800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f1804:
    // 0x1f1804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f1804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f1808: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1808u;
        // 0x1f180c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1810u;
}
