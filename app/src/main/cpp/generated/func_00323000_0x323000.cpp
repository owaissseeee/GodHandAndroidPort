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

// Function: func_00323000
// Address: 0x323000 - 0x323038
void func_00323000_0x323000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00323000_0x323000");
#endif

    switch (ctx->pc) {
        case 0x323014u: goto label_323014;
        case 0x32301cu: goto label_32301c;
        case 0x323024u: goto label_323024;
        default: break;
    }

    ctx->pc = 0x323000u;

    // 0x323000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x323004: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x323004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x323008: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x323008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32300c: 0xc0c9220  jal         func_324880
    ctx->pc = 0x32300Cu;
    SET_GPR_U32(ctx, 31, 0x323014u);
    ctx->pc = 0x323010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32300Cu;
    // 0x323010: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324880u, 0x32300Cu, 0x323014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323014u;
label_323014:
    // 0x323014: 0xc0c8c0e  jal         func_323038
    ctx->pc = 0x323014u;
    SET_GPR_U32(ctx, 31, 0x32301Cu);
    ctx->pc = 0x323018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323014u;
    // 0x323018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323038u, 0x323014u, 0x32301Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32301Cu;
label_32301c:
    // 0x32301c: 0xc0c9226  jal         func_324898
    ctx->pc = 0x32301Cu;
    SET_GPR_U32(ctx, 31, 0x323024u);
    ctx->pc = 0x323020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32301Cu;
    // 0x323020: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324898u, 0x32301Cu, 0x323024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323024u;
label_323024:
    // 0x323024: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x323024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x323028: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x323028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32302c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32302cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323030: 0x3e00008  jr          $ra
    ctx->pc = 0x323030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323030u;
        // 0x323034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323038u;
}
