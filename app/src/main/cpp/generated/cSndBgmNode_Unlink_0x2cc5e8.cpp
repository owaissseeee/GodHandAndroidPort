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

// Function: cSndBgmNode_Unlink
// Address: 0x2cc5e8 - 0x2cc628
void cSndBgmNode_Unlink_0x2cc5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndBgmNode_Unlink_0x2cc5e8");
#endif

    ctx->pc = 0x2cc5e8u;

    // 0x2cc5e8: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x2cc5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x2cc5ec: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CC5ECu;
    {
        const bool branch_taken_0x2cc5ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc5ec) {
            ctx->pc = 0x2CC5F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC5ECu;
            // 0x2cc5f0: 0x8c830088  lw          $v1, 0x88($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC600u;
            goto label_2cc600;
        }
    }
    ctx->pc = 0x2CC5F4u;
    // 0x2cc5f4: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x2cc5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x2cc5f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC5F8u;
    {
        const bool branch_taken_0x2cc5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC5F8u;
        // 0x2cc5fc: 0xac620088  sw          $v0, 0x88($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc5f8) {
            ctx->pc = 0x2CC608u;
            goto label_2cc608;
        }
    }
    ctx->pc = 0x2CC600u;
label_2cc600:
    // 0x2cc600: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2cc600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2cc604: 0xac43ee18  sw          $v1, -0x11E8($v0)
    ctx->pc = 0x2cc604u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5FEE18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FEE18u, _value); } while (0);
label_2cc608:
    // 0x2cc608: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x2cc608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x2cc60c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC60Cu;
    {
        const bool branch_taken_0x2cc60c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc60c) {
            ctx->pc = 0x2CC61Cu;
            goto label_2cc61c;
        }
    }
    ctx->pc = 0x2CC614u;
    // 0x2cc614: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x2cc614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x2cc618: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x2cc618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
label_2cc61c:
    // 0x2cc61c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC61Cu;
        // 0x2cc620: 0xac800094  sw          $zero, 0x94($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC624u;
    // 0x2cc624: 0x0  nop
    ctx->pc = 0x2cc624u;
    // NOP
    ctx->pc = 0x2cc628u;
}
