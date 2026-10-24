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

// Function: Forward349988_349960
// Address: 0x349960 - 0x349988
void Forward349988_349960_0x349960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward349988_349960_0x349960");
#endif

    ctx->pc = 0x349960u;

    // 0x349960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x349964: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x349964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x349968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34996c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34996cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349970: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x349970u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349974: 0x8c4a0010  lw          $t2, 0x10($v0)
    ctx->pc = 0x349974u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x349978: 0x8c49000c  lw          $t1, 0xC($v0)
    ctx->pc = 0x349978u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x34997c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34997cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349980: 0x80d2662  j           func_349988
    ctx->pc = 0x349980u;
    ctx->pc = 0x349984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349980u;
    // 0x349984: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349988u, 0x349980u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x349988u;
}
