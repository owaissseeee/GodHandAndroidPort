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

// Function: func_0032CFC8
// Address: 0x32cfc8 - 0x32cff8
void func_0032CFC8_0x32cfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032CFC8_0x32cfc8");
#endif

    switch (ctx->pc) {
        case 0x32cfdcu: goto label_32cfdc;
        case 0x32cfe4u: goto label_32cfe4;
        default: break;
    }

    ctx->pc = 0x32cfc8u;

    // 0x32cfc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32cfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32cfcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32cfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32cfd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32cfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32cfd4: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x32CFD4u;
    SET_GPR_U32(ctx, 31, 0x32CFDCu);
    ctx->pc = 0x32CFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CFD4u;
    // 0x32cfd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32CFD4u, 0x32CFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CFDCu;
label_32cfdc:
    // 0x32cfdc: 0xc0cb3fe  jal         func_32CFF8
    ctx->pc = 0x32CFDCu;
    SET_GPR_U32(ctx, 31, 0x32CFE4u);
    ctx->pc = 0x32CFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CFDCu;
    // 0x32cfe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CFF8u, 0x32CFDCu, 0x32CFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CFE4u;
label_32cfe4:
    // 0x32cfe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32cfe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32cfe8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32cfe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32cfec: 0x80cf9ac  j           func_33E6B0
    ctx->pc = 0x32CFECu;
    ctx->pc = 0x32CFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CFECu;
    // 0x32cff0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32CFECu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32CFF4u;
    // 0x32cff4: 0x0  nop
    ctx->pc = 0x32cff4u;
    // NOP
    ctx->pc = 0x32cff8u;
}
