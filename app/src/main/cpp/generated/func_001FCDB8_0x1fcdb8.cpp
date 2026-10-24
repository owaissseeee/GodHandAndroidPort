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

// Function: func_001FCDB8
// Address: 0x1fcdb8 - 0x1fcde8
void func_001FCDB8_0x1fcdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FCDB8_0x1fcdb8");
#endif

    switch (ctx->pc) {
        case 0x1fcdccu: goto label_1fcdcc;
        default: break;
    }

    ctx->pc = 0x1fcdb8u;

    // 0x1fcdb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fcdb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fcdbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fcdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fcdc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fcdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fcdc4: 0xc07f340  jal         func_1FCD00
    ctx->pc = 0x1FCDC4u;
    SET_GPR_U32(ctx, 31, 0x1FCDCCu);
    ctx->pc = 0x1FCDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCDC4u;
    // 0x1fcdc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCD00u, 0x1FCDC4u, 0x1FCDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCDCCu;
label_1fcdcc:
    // 0x1fcdcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fcdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fcdd0: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1fcdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1fcdd4: 0xa2020049  sb          $v0, 0x49($s0)
    ctx->pc = 0x1fcdd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fcdd8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fcdd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fcddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fcddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fcde0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDE0u;
        // 0x1fcde4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCDE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCDE8u;
}
