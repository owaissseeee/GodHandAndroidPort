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

// Function: Obj33F8_ResetLock_FB20
// Address: 0x33fb20 - 0x33fb48
void Obj33F8_ResetLock_FB20_0x33fb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj33F8_ResetLock_FB20_0x33fb20");
#endif

    ctx->pc = 0x33fb20u;

    // 0x33fb20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33fb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33fb24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33fb24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fb28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33fb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33fb2c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x33fb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33fb30: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x33fb30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x33fb34: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x33fb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x33fb38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33fb38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33fb3c: 0x80e94bc  j           func_3A52F0
    ctx->pc = 0x33FB3Cu;
    ctx->pc = 0x33FB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FB3Cu;
    // 0x33fb40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33FB3Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33FB44u;
    // 0x33fb44: 0x0  nop
    ctx->pc = 0x33fb44u;
    // NOP
    ctx->pc = 0x33fb48u;
}
