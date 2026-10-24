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

// Function: func_00375F68
// Address: 0x375f68 - 0x375fa0
void func_00375F68_0x375f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00375F68_0x375f68");
#endif

    switch (ctx->pc) {
        case 0x375f78u: goto label_375f78;
        case 0x375f80u: goto label_375f80;
        case 0x375f88u: goto label_375f88;
        case 0x375f90u: goto label_375f90;
        default: break;
    }

    ctx->pc = 0x375f68u;

    // 0x375f68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x375f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x375f6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x375f70: 0xc0dd7e8  jal         func_375FA0
    ctx->pc = 0x375F70u;
    SET_GPR_U32(ctx, 31, 0x375F78u);
    ctx->pc = 0x375FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375FA0u, 0x375F70u, 0x375F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375F78u;
label_375f78:
    // 0x375f78: 0xc0dd802  jal         func_376008
    ctx->pc = 0x375F78u;
    SET_GPR_U32(ctx, 31, 0x375F80u);
    ctx->pc = 0x376008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376008u, 0x375F78u, 0x375F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375F80u;
label_375f80:
    // 0x375f80: 0xc0dd8dc  jal         func_376370
    ctx->pc = 0x375F80u;
    SET_GPR_U32(ctx, 31, 0x375F88u);
    ctx->pc = 0x376370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376370u, 0x375F80u, 0x375F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375F88u;
label_375f88:
    // 0x375f88: 0xc0defa6  jal         func_37BE98
    ctx->pc = 0x375F88u;
    SET_GPR_U32(ctx, 31, 0x375F90u);
    ctx->pc = 0x37BE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37BE98u, 0x375F88u, 0x375F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375F90u;
label_375f90:
    // 0x375f90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375f94: 0x3e00008  jr          $ra
    ctx->pc = 0x375F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375F94u;
        // 0x375f98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375F9Cu;
    // 0x375f9c: 0x0  nop
    ctx->pc = 0x375f9cu;
    // NOP
    ctx->pc = 0x375fa0u;
}
