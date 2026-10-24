#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: initPlay__12cEventEffect
// Address: 0x7ad080 - 0x7ad0d0
void initPlay__12cEventEffect_0x7ad080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("initPlay__12cEventEffect_0x7ad080");
#endif

    switch (ctx->pc) {
        case 0x7ad094u: goto label_7ad094;
        default: break;
    }

    ctx->pc = 0x7ad080u;

    // 0x7ad080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7ad080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7ad084: 0x3c05007b  lui         $a1, 0x7B
    ctx->pc = 0x7ad084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
    // 0x7ad088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ad088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ad08c: 0xc1ed1ea  jal         func_7B47A8
    ctx->pc = 0x7AD08Cu;
    SET_GPR_U32(ctx, 31, 0x7AD094u);
    ctx->pc = 0x7AD090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AD08Cu;
    // 0x7ad090: 0x24a54e68  addiu       $a1, $a1, 0x4E68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B47A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B47A8u, 0x7AD08Cu, 0x7AD094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AD094u;
label_7ad094:
    // 0x7ad094: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x7ad094u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
    // 0x7ad098: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x7ad098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x7ad09c: 0x8cc57a84  lw          $a1, 0x7A84($a2)
    ctx->pc = 0x7ad09cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x747A84u));
    // 0x7ad0a0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x7ad0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x7ad0a4: 0x8c826b34  lw          $v0, 0x6B34($a0)
    ctx->pc = 0x7ad0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x586B34u));
    // 0x7ad0a8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x7ad0a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x7ad0ac: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x7ad0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x7ad0b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7AD0B0u;
    {
        const bool branch_taken_0x7ad0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AD0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD0B0u;
        // 0x7ad0b4: 0xacc57a84  sw          $a1, 0x7A84($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 31364), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad0b0) {
            ctx->pc = 0x7AD0C4u;
            goto label_7ad0c4;
        }
    }
    ctx->pc = 0x7AD0B8u;
    // 0x7ad0b8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x7ad0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x7ad0bc: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x7ad0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x7ad0c0: 0xacc27a84  sw          $v0, 0x7A84($a2)
    ctx->pc = 0x7ad0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 31364), GPR_U32(ctx, 2));
label_7ad0c4:
    // 0x7ad0c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ad0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ad0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x7AD0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AD0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD0C8u;
        // 0x7ad0cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AD0C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AD0D0u;
}
} // namespace gh_event
