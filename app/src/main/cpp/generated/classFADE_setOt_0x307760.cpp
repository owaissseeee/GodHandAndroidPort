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

// Function: classFADE_setOt
// Address: 0x307760 - 0x3077b0
void classFADE_setOt_0x307760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("classFADE_setOt_0x307760");
#endif

    ctx->pc = 0x307760u;

    // 0x307760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x307760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x307764: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x307764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x307768: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x307768u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30776c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x30776cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307770: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x307770u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
    // 0x307774: 0xafc60004  sw          $a2, 0x4($fp)
    ctx->pc = 0x307774u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 6));
    // 0x307778: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x307778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x30777c: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x30777cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x307780: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x307780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x307784: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x307784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x307788: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307788u;
    {
        const bool branch_taken_0x307788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307788) {
            ctx->pc = 0x307798u;
            goto label_307798;
        }
    }
    ctx->pc = 0x307790u;
    // 0x307790: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x307790u;
    {
        const bool branch_taken_0x307790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307790) {
            ctx->pc = 0x307798u;
            goto label_307798;
        }
    }
    ctx->pc = 0x307798u;
label_307798:
    // 0x307798: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x307798u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30779c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x30779cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3077a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3077a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3077a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3077A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3077A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3077ACu;
    // 0x3077ac: 0x0  nop
    ctx->pc = 0x3077acu;
    // NOP
    ctx->pc = 0x3077b0u;
}
