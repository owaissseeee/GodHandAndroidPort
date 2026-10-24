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

// Function: func_00178870
// Address: 0x178870 - 0x1788a0
void func_00178870_0x178870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00178870_0x178870");
#endif

    switch (ctx->pc) {
        case 0x178884u: goto label_178884;
        default: break;
    }

    ctx->pc = 0x178870u;

    // 0x178870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178874: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x178874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x178878: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17887c: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x17887Cu;
    SET_GPR_U32(ctx, 31, 0x178884u);
    ctx->pc = 0x178880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17887Cu;
    // 0x178880: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x17887Cu, 0x178884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178884u;
label_178884:
    // 0x178884: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x178884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
    // 0x178888: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x178888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17888c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17888cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178894: 0x3e00008  jr          $ra
    ctx->pc = 0x178894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178894u;
        // 0x178898: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17889Cu;
    // 0x17889c: 0x0  nop
    ctx->pc = 0x17889cu;
    // NOP
    ctx->pc = 0x1788a0u;
}
