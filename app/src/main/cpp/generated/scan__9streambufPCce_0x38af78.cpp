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

// Function: scan__9streambufPCce
// Address: 0x38af78 - 0x38afb0
void scan__9streambufPCce_0x38af78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scan__9streambufPCce_0x38af78");
#endif

    switch (ctx->pc) {
        case 0x38afa4u: goto label_38afa4;
        default: break;
    }

    ctx->pc = 0x38af78u;

    // 0x38af78: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x38af78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x38af7c: 0xffa60050  sd          $a2, 0x50($sp)
    ctx->pc = 0x38af7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 6));
    // 0x38af80: 0xffa70058  sd          $a3, 0x58($sp)
    ctx->pc = 0x38af80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 7));
    // 0x38af84: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x38af84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x38af88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38af88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38af8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38af8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38af90: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x38af90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
    // 0x38af94: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x38af94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
    // 0x38af98: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x38af98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x38af9c: 0xc0e34ae  jal         func_38D2B8
    ctx->pc = 0x38AF9Cu;
    SET_GPR_U32(ctx, 31, 0x38AFA4u);
    ctx->pc = 0x38AFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AF9Cu;
    // 0x38afa0: 0xffab0078  sd          $t3, 0x78($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D2B8u, 0x38AF9Cu, 0x38AFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AFA4u;
label_38afa4:
    // 0x38afa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38afa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38afa8: 0x3e00008  jr          $ra
    ctx->pc = 0x38AFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AFA8u;
        // 0x38afac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38AFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38AFB0u;
}
