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

// Function: func_00327D90
// Address: 0x327d90 - 0x327dc0
void func_00327D90_0x327d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00327D90_0x327d90");
#endif

    switch (ctx->pc) {
        case 0x327da4u: goto label_327da4;
        case 0x327dacu: goto label_327dac;
        default: break;
    }

    ctx->pc = 0x327d90u;

    // 0x327d90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x327d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x327d94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x327d98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x327d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x327d9c: 0xc0ca41c  jal         func_329070
    ctx->pc = 0x327D9Cu;
    SET_GPR_U32(ctx, 31, 0x327DA4u);
    ctx->pc = 0x327DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327D9Cu;
    // 0x327da0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329070u, 0x327D9Cu, 0x327DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327DA4u;
label_327da4:
    // 0x327da4: 0xc0c9f70  jal         func_327DC0
    ctx->pc = 0x327DA4u;
    SET_GPR_U32(ctx, 31, 0x327DACu);
    ctx->pc = 0x327DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327DA4u;
    // 0x327da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327DC0u, 0x327DA4u, 0x327DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327DACu;
label_327dac:
    // 0x327dac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x327dacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327db0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x327db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x327db4: 0x80ca422  j           func_329088
    ctx->pc = 0x327DB4u;
    ctx->pc = 0x327DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327DB4u;
    // 0x327db8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329088u, 0x327DB4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x327DBCu;
    // 0x327dbc: 0x0  nop
    ctx->pc = 0x327dbcu;
    // NOP
    ctx->pc = 0x327dc0u;
}
