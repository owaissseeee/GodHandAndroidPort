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

// Function: func_0038B578
// Address: 0x38b578 - 0x38b5a0
void func_0038B578_0x38b578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038B578_0x38b578");
#endif

    switch (ctx->pc) {
        case 0x38b58cu: goto label_38b58c;
        default: break;
    }

    ctx->pc = 0x38b578u;

    // 0x38b578: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38b578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38b57c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38b57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38b580: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38b580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38b584: 0xc0e33f0  jal         func_38CFC0
    ctx->pc = 0x38B584u;
    SET_GPR_U32(ctx, 31, 0x38B58Cu);
    ctx->pc = 0x38B588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B584u;
    // 0x38b588: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CFC0u, 0x38B584u, 0x38B58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B58Cu;
label_38b58c:
    // 0x38b58c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38b58cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b590: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38b590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38b594: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38b594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b598: 0x3e00008  jr          $ra
    ctx->pc = 0x38B598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B598u;
        // 0x38b59c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B5A0u;
}
