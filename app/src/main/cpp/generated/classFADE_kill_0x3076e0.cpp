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

// Function: classFADE_kill
// Address: 0x3076e0 - 0x307718
void classFADE_kill_0x3076e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("classFADE_kill_0x3076e0");
#endif

    ctx->pc = 0x3076e0u;

    // 0x3076e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3076e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3076e4: 0x7fbe0000  sq          $fp, 0x0($sp)
    ctx->pc = 0x3076e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 30));
    // 0x3076e8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3076e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3076ec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3076ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3076f0: 0xa040001c  sb          $zero, 0x1C($v0)
    ctx->pc = 0x3076f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x3076f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3076F4u;
    {
        const bool branch_taken_0x3076f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3076f4) {
            ctx->pc = 0x307704u;
            goto label_307704;
        }
    }
    ctx->pc = 0x3076FCu;
    // 0x3076fc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x3076FCu;
    {
        const bool branch_taken_0x3076fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3076fc) {
            ctx->pc = 0x307704u;
            goto label_307704;
        }
    }
    ctx->pc = 0x307704u;
label_307704:
    // 0x307704: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x307704u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307708: 0x7bbe0000  lq          $fp, 0x0($sp)
    ctx->pc = 0x307708u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30770c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x30770cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x307710: 0x3e00008  jr          $ra
    ctx->pc = 0x307710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307718u;
}
