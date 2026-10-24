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

// Function: func_0032AB28
// Address: 0x32ab28 - 0x32ab58
void func_0032AB28_0x32ab28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032AB28_0x32ab28");
#endif

    switch (ctx->pc) {
        case 0x32ab3cu: goto label_32ab3c;
        case 0x32ab44u: goto label_32ab44;
        default: break;
    }

    ctx->pc = 0x32ab28u;

    // 0x32ab28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32ab28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32ab2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32ab2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32ab30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32ab30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32ab34: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x32AB34u;
    SET_GPR_U32(ctx, 31, 0x32AB3Cu);
    ctx->pc = 0x32AB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AB34u;
    // 0x32ab38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32AB34u, 0x32AB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AB3Cu;
label_32ab3c:
    // 0x32ab3c: 0xc0caad6  jal         func_32AB58
    ctx->pc = 0x32AB3Cu;
    SET_GPR_U32(ctx, 31, 0x32AB44u);
    ctx->pc = 0x32AB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AB3Cu;
    // 0x32ab40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32AB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32AB58u, 0x32AB3Cu, 0x32AB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AB44u;
label_32ab44:
    // 0x32ab44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32ab44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ab48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32ab48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32ab4c: 0x80cf9ac  j           func_33E6B0
    ctx->pc = 0x32AB4Cu;
    ctx->pc = 0x32AB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AB4Cu;
    // 0x32ab50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32AB4Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32AB54u;
    // 0x32ab54: 0x0  nop
    ctx->pc = 0x32ab54u;
    // NOP
    ctx->pc = 0x32ab58u;
}
