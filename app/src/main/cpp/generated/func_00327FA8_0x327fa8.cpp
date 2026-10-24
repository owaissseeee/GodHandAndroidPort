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

// Function: func_00327FA8
// Address: 0x327fa8 - 0x327fd8
void func_00327FA8_0x327fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00327FA8_0x327fa8");
#endif

    switch (ctx->pc) {
        case 0x327fbcu: goto label_327fbc;
        case 0x327fc4u: goto label_327fc4;
        default: break;
    }

    ctx->pc = 0x327fa8u;

    // 0x327fa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x327fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x327fac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x327fb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x327fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x327fb4: 0xc0ca41c  jal         func_329070
    ctx->pc = 0x327FB4u;
    SET_GPR_U32(ctx, 31, 0x327FBCu);
    ctx->pc = 0x327FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327FB4u;
    // 0x327fb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329070u, 0x327FB4u, 0x327FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327FBCu;
label_327fbc:
    // 0x327fbc: 0xc0c9ff6  jal         func_327FD8
    ctx->pc = 0x327FBCu;
    SET_GPR_U32(ctx, 31, 0x327FC4u);
    ctx->pc = 0x327FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327FBCu;
    // 0x327fc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327FD8u, 0x327FBCu, 0x327FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327FC4u;
label_327fc4:
    // 0x327fc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x327fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327fc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x327fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x327fcc: 0x80ca422  j           func_329088
    ctx->pc = 0x327FCCu;
    ctx->pc = 0x327FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327FCCu;
    // 0x327fd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329088u, 0x327FCCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x327FD4u;
    // 0x327fd4: 0x0  nop
    ctx->pc = 0x327fd4u;
    // NOP
    ctx->pc = 0x327fd8u;
}
