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

// Function: sputc__9streambufi
// Address: 0x38ba10 - 0x38ba38
void sputc__9streambufi_0x38ba10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sputc__9streambufi_0x38ba10");
#endif

    switch (ctx->pc) {
        case 0x38ba28u: goto label_38ba28;
        default: break;
    }

    ctx->pc = 0x38ba10u;

    // 0x38ba10: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x38ba10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ba14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38ba14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38ba18: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x38ba18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ba1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38ba1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38ba20: 0xc0e3aca  jal         func_38EB28
    ctx->pc = 0x38BA20u;
    SET_GPR_U32(ctx, 31, 0x38BA28u);
    ctx->pc = 0x38BA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BA20u;
    // 0x38ba24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EB28u, 0x38BA20u, 0x38BA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BA28u;
label_38ba28:
    // 0x38ba28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38ba28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38ba2c: 0x3e00008  jr          $ra
    ctx->pc = 0x38BA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BA2Cu;
        // 0x38ba30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BA2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BA34u;
    // 0x38ba34: 0x0  nop
    ctx->pc = 0x38ba34u;
    // NOP
    ctx->pc = 0x38ba38u;
}
