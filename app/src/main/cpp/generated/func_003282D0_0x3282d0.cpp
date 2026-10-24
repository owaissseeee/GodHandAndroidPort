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

// Function: func_003282D0
// Address: 0x3282d0 - 0x328300
void func_003282D0_0x3282d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003282D0_0x3282d0");
#endif

    switch (ctx->pc) {
        case 0x3282e4u: goto label_3282e4;
        case 0x3282ecu: goto label_3282ec;
        default: break;
    }

    ctx->pc = 0x3282d0u;

    // 0x3282d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3282d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3282d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3282d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3282d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3282d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3282dc: 0xc0ca41c  jal         func_329070
    ctx->pc = 0x3282DCu;
    SET_GPR_U32(ctx, 31, 0x3282E4u);
    ctx->pc = 0x3282E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3282DCu;
    // 0x3282e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329070u, 0x3282DCu, 0x3282E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3282E4u;
label_3282e4:
    // 0x3282e4: 0xc0ca0c0  jal         func_328300
    ctx->pc = 0x3282E4u;
    SET_GPR_U32(ctx, 31, 0x3282ECu);
    ctx->pc = 0x3282E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3282E4u;
    // 0x3282e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328300u, 0x3282E4u, 0x3282ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3282ECu;
label_3282ec:
    // 0x3282ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3282ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3282f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3282f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3282f4: 0x80ca422  j           func_329088
    ctx->pc = 0x3282F4u;
    ctx->pc = 0x3282F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3282F4u;
    // 0x3282f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329088u, 0x3282F4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3282FCu;
    // 0x3282fc: 0x0  nop
    ctx->pc = 0x3282fcu;
    // NOP
    ctx->pc = 0x328300u;
}
