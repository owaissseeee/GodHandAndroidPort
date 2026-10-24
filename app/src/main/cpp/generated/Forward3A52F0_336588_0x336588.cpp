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

// Function: Forward3A52F0_336588
// Address: 0x336588 - 0x3365a8
void Forward3A52F0_336588_0x336588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward3A52F0_336588_0x336588");
#endif

    ctx->pc = 0x336588u;

    // 0x336588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x336588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33658c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33658cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336590: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x336590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x336594: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x336594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x336598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x336598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33659c: 0x80e94bc  j           func_3A52F0
    ctx->pc = 0x33659Cu;
    ctx->pc = 0x3365A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33659Cu;
    // 0x3365a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33659Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3365A4u;
    // 0x3365a4: 0x0  nop
    ctx->pc = 0x3365a4u;
    // NOP
    ctx->pc = 0x3365a8u;
}
