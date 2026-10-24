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

// Function: cIDParam
// Address: 0x308f18 - 0x308f40
void cIDParam_0x308f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDParam_0x308f18");
#endif

    switch (ctx->pc) {
        case 0x308f2cu: goto label_308f2c;
        default: break;
    }

    ctx->pc = 0x308f18u;

    // 0x308f18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x308f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x308f1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x308f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x308f20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x308f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x308f24: 0xc0c23d0  jal         func_308F40
    ctx->pc = 0x308F24u;
    SET_GPR_U32(ctx, 31, 0x308F2Cu);
    ctx->pc = 0x308F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308F24u;
    // 0x308f28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308F40u, 0x308F24u, 0x308F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308F2Cu;
label_308f2c:
    // 0x308f2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x308f2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308f30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x308f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308f34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x308f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308f38: 0x3e00008  jr          $ra
    ctx->pc = 0x308F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F38u;
        // 0x308f3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308F40u;
}
