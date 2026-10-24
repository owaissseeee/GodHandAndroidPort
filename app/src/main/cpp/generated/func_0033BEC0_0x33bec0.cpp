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

// Function: func_0033BEC0
// Address: 0x33bec0 - 0x33bf18
void func_0033BEC0_0x33bec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033BEC0_0x33bec0");
#endif

    switch (ctx->pc) {
        case 0x33bef0u: goto label_33bef0;
        default: break;
    }

    ctx->pc = 0x33bec0u;

    // 0x33bec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33bec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33bec4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x33bec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x33bec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33bec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33becc: 0x24429944  addiu       $v0, $v0, -0x66BC
    ctx->pc = 0x33beccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940996));
    // 0x33bed0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x33bed0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E9944u));
    // 0x33bed4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33bed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33bed8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x33bed8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E9944u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9944u, _value); } while (0);
    // 0x33bedc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33bedcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3E9944u));
    // 0x33bee0: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x33BEE0u;
    {
        const bool branch_taken_0x33bee0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33BEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BEE0u;
        // 0x33bee4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bee0) {
            ctx->pc = 0x33BF10u;
            goto label_33bf10;
        }
    }
    ctx->pc = 0x33BEE8u;
    // 0x33bee8: 0xc0cef76  jal         func_33BDD8
    ctx->pc = 0x33BEE8u;
    SET_GPR_U32(ctx, 31, 0x33BEF0u);
    ctx->pc = 0x33BDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BDD8u, 0x33BEE8u, 0x33BEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BEF0u;
label_33bef0:
    // 0x33bef0: 0x3c040076  lui         $a0, 0x76
    ctx->pc = 0x33bef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)118 << 16));
    // 0x33bef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33bef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33bef8: 0x248488b0  addiu       $a0, $a0, -0x7750
    ctx->pc = 0x33bef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936752));
    // 0x33befc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33befcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bf00: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x33bf00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33bf04: 0x80e94bc  j           func_3A52F0
    ctx->pc = 0x33BF04u;
    ctx->pc = 0x33BF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BF04u;
    // 0x33bf08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33BF04u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33BF0Cu;
    // 0x33bf0c: 0x0  nop
    ctx->pc = 0x33bf0cu;
    // NOP
label_33bf10:
    // 0x33bf10: 0x3e00008  jr          $ra
    ctx->pc = 0x33BF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF10u;
        // 0x33bf14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BF18u;
}
