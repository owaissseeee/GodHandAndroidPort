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
// Function: ClockTimeCheck__6cMcSys
// Address: 0x7c8f10 - 0x7c8f48
void ClockTimeCheck__6cMcSys_0x7c8f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClockTimeCheck__6cMcSys_0x7c8f10");
#endif

    switch (ctx->pc) {
        case 0x7c8f20u: goto label_7c8f20;
        default: break;
    }

    ctx->pc = 0x7c8f10u;

    // 0x7c8f10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7c8f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7c8f14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c8f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c8f18: 0xc1f2340  jal         func_7C8D00
    ctx->pc = 0x7C8F18u;
    SET_GPR_U32(ctx, 31, 0x7C8F20u);
    ctx->pc = 0x7C8D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8D00u, 0x7C8F18u, 0x7C8F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8F20u;
label_7c8f20:
    // 0x7c8f20: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x7c8f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x7c8f24: 0x24420013  addiu       $v0, $v0, 0x13
    ctx->pc = 0x7c8f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19));
    // 0x7c8f28: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x7c8f28u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x7c8f2c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7C8F2Cu;
    {
        const bool branch_taken_0x7c8f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c8f2c) {
            ctx->pc = 0x7C8F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C8F2Cu;
            // 0x7c8f30: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C8F34u;
            goto label_7c8f34;
        }
    }
    ctx->pc = 0x7C8F34u;
label_7c8f34:
    // 0x7c8f34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c8f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c8f38: 0x1010  mfhi        $v0
    ctx->pc = 0x7c8f38u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x7c8f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x7C8F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C8F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8F3Cu;
        // 0x7c8f40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C8F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C8F44u;
    // 0x7c8f44: 0x0  nop
    ctx->pc = 0x7c8f44u;
    // NOP
    ctx->pc = 0x7c8f48u;
}
} // namespace gh_mcport
