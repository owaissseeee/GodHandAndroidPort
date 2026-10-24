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

// Function: func_00328F70
// Address: 0x328f70 - 0x328fa0
void func_00328F70_0x328f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00328F70_0x328f70");
#endif

    switch (ctx->pc) {
        case 0x328f84u: goto label_328f84;
        case 0x328f8cu: goto label_328f8c;
        default: break;
    }

    ctx->pc = 0x328f70u;

    // 0x328f70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x328f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x328f74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x328f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x328f78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x328f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x328f7c: 0xc0ca41c  jal         func_329070
    ctx->pc = 0x328F7Cu;
    SET_GPR_U32(ctx, 31, 0x328F84u);
    ctx->pc = 0x328F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328F7Cu;
    // 0x328f80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329070u, 0x328F7Cu, 0x328F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328F84u;
label_328f84:
    // 0x328f84: 0xc0ca3e8  jal         func_328FA0
    ctx->pc = 0x328F84u;
    SET_GPR_U32(ctx, 31, 0x328F8Cu);
    ctx->pc = 0x328F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328F84u;
    // 0x328f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328FA0u, 0x328F84u, 0x328F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328F8Cu;
label_328f8c:
    // 0x328f8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x328f8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328f90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x328f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x328f94: 0x80ca422  j           func_329088
    ctx->pc = 0x328F94u;
    ctx->pc = 0x328F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328F94u;
    // 0x328f98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329088u, 0x328F94u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x328F9Cu;
    // 0x328f9c: 0x0  nop
    ctx->pc = 0x328f9cu;
    // NOP
    ctx->pc = 0x328fa0u;
}
