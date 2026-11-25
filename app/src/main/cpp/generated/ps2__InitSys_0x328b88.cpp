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

// Function: _InitSys
// Address: 0x328b88 - 0x328bb0
void ps2__InitSys_0x328b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InitSys_0x328b88");
#endif

    if (__builtin_expect(ctx->pc != 0x328b88u, 0)) {
        switch (ctx->pc) {
            case 0x328b98u: goto label_328b98;
            case 0x328ba0u: goto label_328ba0;
            default: break;
        }
    }


    // 0x328b88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x328b8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x328b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x328b90: 0xc0ca41c  jal         func_329070
    ctx->pc = 0x328B90u;
    SET_GPR_U32(ctx, 31, 0x328B98u);
    if (!runtime->callDirectStatic(rdram, ctx, &Obj3290_Tramp_0033E6A8_9070_0x329070, 0x329070u, 0x328b98u)) {
        return;
    }
    ctx->pc = 0x328B98u;
label_328b98:
    // 0x328b98: 0xc0ca2ec  jal         func_328BB0
    ctx->pc = 0x328B98u;
    SET_GPR_U32(ctx, 31, 0x328BA0u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_00328BB0_0x328bb0, 0x328bb0u, 0x328ba0u)) {
        return;
    }
    ctx->pc = 0x328BA0u;
label_328ba0:
    // 0x328ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x328ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328ba4: 0x80ca422  j           func_329088
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328BA4u;
    // 0x328ba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329088u, 0x328BA4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    // 0x328bac: 0x0  nop
    // NOP
    ctx->pc = 0x328bb0u;
}