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

// Function: SFADXT_Init
// Address: 0x349d38 - 0x349d78
void SFADXT_Init_0x349d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFADXT_Init_0x349d38");
#endif

    switch (ctx->pc) {
        case 0x349d48u: goto label_349d48;
        case 0x349d50u: goto label_349d50;
        case 0x349d64u: goto label_349d64;
        default: break;
    }

    ctx->pc = 0x349d38u;

    // 0x349d38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x349d3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x349d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x349d40: 0xc0c9254  jal         func_324950
    ctx->pc = 0x349D40u;
    SET_GPR_U32(ctx, 31, 0x349D48u);
    ctx->pc = 0x324950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324950u, 0x349D40u, 0x349D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349D48u;
label_349d48:
    // 0x349d48: 0xc0ee75a  jal         func_3B9D68
    ctx->pc = 0x349D48u;
    SET_GPR_U32(ctx, 31, 0x349D50u);
    ctx->pc = 0x3B9D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9D68u, 0x349D48u, 0x349D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349D50u;
label_349d50:
    // 0x349d50: 0x3c040076  lui         $a0, 0x76
    ctx->pc = 0x349d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)118 << 16));
    // 0x349d54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x349d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349d58: 0x24840d90  addiu       $a0, $a0, 0xD90
    ctx->pc = 0x349d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3472));
    // 0x349d5c: 0xc0d9b14  jal         func_366C50
    ctx->pc = 0x349D5Cu;
    SET_GPR_U32(ctx, 31, 0x349D64u);
    ctx->pc = 0x349D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349D5Cu;
    // 0x349d60: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366C50u, 0x349D5Cu, 0x349D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349D64u;
label_349d64:
    // 0x349d64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x349d64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349d68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x349D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349D6Cu;
        // 0x349d70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349D74u;
    // 0x349d74: 0x0  nop
    ctx->pc = 0x349d74u;
    // NOP
    ctx->pc = 0x349d78u;
}
