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
// Function: _$_9type_info
// Address: 0x7c9798 - 0x7c97c8
void ps2____9type_info_0x7c9798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____9type_info_0x7c9798");
#endif

    switch (ctx->pc) {
        case 0x7c97bcu: goto label_7c97bc;
        default: break;
    }

    ctx->pc = 0x7c9798u;

    // 0x7c9798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7c9798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7c979c: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c979cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c97a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c97a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c97a4: 0x24420fb8  addiu       $v0, $v0, 0xFB8
    ctx->pc = 0x7c97a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4024));
    // 0x7c97a8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x7c97a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x7c97ac: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C97ACu;
    {
        const bool branch_taken_0x7c97ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C97B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C97ACu;
        // 0x7c97b0: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c97ac) {
            ctx->pc = 0x7C97BCu;
            goto label_7c97bc;
        }
    }
    ctx->pc = 0x7C97B4u;
    // 0x7c97b4: 0xc1f2588  jal         func_7C9620
    ctx->pc = 0x7C97B4u;
    SET_GPR_U32(ctx, 31, 0x7C97BCu);
    ctx->pc = 0x7C9620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9620u, 0x7C97B4u, 0x7C97BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C97BCu;
label_7c97bc:
    // 0x7c97bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c97bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c97c0: 0x3e00008  jr          $ra
    ctx->pc = 0x7C97C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C97C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C97C0u;
        // 0x7c97c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C97C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C97C8u;
}
} // namespace gh_mcport
