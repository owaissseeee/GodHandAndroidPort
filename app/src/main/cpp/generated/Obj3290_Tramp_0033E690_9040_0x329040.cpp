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

// Function: Obj3290_Tramp_0033E690_9040
// Address: 0x329040 - 0x329058
void Obj3290_Tramp_0033E690_9040_0x329040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj3290_Tramp_0033E690_9040_0x329040");
#endif

    ctx->pc = 0x329040u;

    // 0x329040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x329040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x329044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x329044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x329048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32904c: 0x80cf9a4  j           func_33E690
    ctx->pc = 0x32904Cu;
    ctx->pc = 0x329050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32904Cu;
    // 0x329050: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E690u, 0x32904Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x329054u;
    // 0x329054: 0x0  nop
    ctx->pc = 0x329054u;
    // NOP
    ctx->pc = 0x329058u;
}
