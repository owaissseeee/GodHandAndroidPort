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

// Function: func_0033CFB8
// Address: 0x33cfb8 - 0x33cff8
void func_0033CFB8_0x33cfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033CFB8_0x33cfb8");
#endif

    switch (ctx->pc) {
        case 0x33cfd8u: goto label_33cfd8;
        default: break;
    }

    ctx->pc = 0x33cfb8u;

    // 0x33cfb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33cfb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33cfbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33cfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33cfc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33cfc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cfc4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33cfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33cfc8: 0x260500ac  addiu       $a1, $s0, 0xAC
    ctx->pc = 0x33cfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
    // 0x33cfcc: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x33cfccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x33cfd0: 0xc0cfe76  jal         func_33F9D8
    ctx->pc = 0x33CFD0u;
    SET_GPR_U32(ctx, 31, 0x33CFD8u);
    ctx->pc = 0x33CFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CFD0u;
    // 0x33cfd4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F9D8u, 0x33CFD0u, 0x33CFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CFD8u;
label_33cfd8:
    // 0x33cfd8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x33cfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x33cfdc: 0x260700aa  addiu       $a3, $s0, 0xAA
    ctx->pc = 0x33cfdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 170));
    // 0x33cfe0: 0x260500a6  addiu       $a1, $s0, 0xA6
    ctx->pc = 0x33cfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 166));
    // 0x33cfe4: 0x260600a8  addiu       $a2, $s0, 0xA8
    ctx->pc = 0x33cfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
    // 0x33cfe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33cfe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33cfec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33cfecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33cff0: 0x80cfe84  j           func_33FA10
    ctx->pc = 0x33CFF0u;
    ctx->pc = 0x33CFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CFF0u;
    // 0x33cff4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FA10u, 0x33CFF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33CFF8u;
}
