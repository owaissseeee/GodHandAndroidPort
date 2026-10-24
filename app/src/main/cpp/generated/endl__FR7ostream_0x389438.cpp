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

// Function: endl__FR7ostream
// Address: 0x389438 - 0x389470
void endl__FR7ostream_0x389438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("endl__FR7ostream_0x389438");
#endif

    switch (ctx->pc) {
        case 0x389458u: goto label_389458;
        case 0x389460u: goto label_389460;
        default: break;
    }

    ctx->pc = 0x389438u;

    // 0x389438: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x389438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38943c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38943cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x389440: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x389440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x389444: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x389444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389448: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x389448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x38944c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38944cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x389450: 0xc0e3aca  jal         func_38EB28
    ctx->pc = 0x389450u;
    SET_GPR_U32(ctx, 31, 0x389458u);
    ctx->pc = 0x389454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389450u;
    // 0x389454: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EB28u, 0x389450u, 0x389458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389458u;
label_389458:
    // 0x389458: 0xc0e24b0  jal         func_3892C0
    ctx->pc = 0x389458u;
    SET_GPR_U32(ctx, 31, 0x389460u);
    ctx->pc = 0x38945Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389458u;
    // 0x38945c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3892C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3892C0u, 0x389458u, 0x389460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389460u;
label_389460:
    // 0x389460: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x389460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x389464: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x389464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x389468: 0x3e00008  jr          $ra
    ctx->pc = 0x389468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389468u;
        // 0x38946c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389470u;
}
