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

// Function: CreateEventObj
// Address: 0x312a80 - 0x312ab0
void CreateEventObj_0x312a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateEventObj_0x312a80");
#endif

    switch (ctx->pc) {
        case 0x312a94u: goto label_312a94;
        case 0x312aa0u: goto label_312aa0;
        default: break;
    }

    ctx->pc = 0x312a80u;

    // 0x312a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x312a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x312a84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x312a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x312a88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x312a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x312a8c: 0xc0c4aac  jal         func_312AB0
    ctx->pc = 0x312A8Cu;
    SET_GPR_U32(ctx, 31, 0x312A94u);
    ctx->pc = 0x312A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312A8Cu;
    // 0x312a90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312AB0u, 0x312A8Cu, 0x312A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312A94u;
label_312a94:
    // 0x312a94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x312a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312a98: 0xc0c3ec8  jal         func_30FB20
    ctx->pc = 0x312A98u;
    SET_GPR_U32(ctx, 31, 0x312AA0u);
    ctx->pc = 0x312A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312A98u;
    // 0x312a9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FB20u, 0x312A98u, 0x312AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312AA0u;
label_312aa0:
    // 0x312aa0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x312aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312aa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x312aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x312AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312AA8u;
        // 0x312aac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312AB0u;
}
