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

// Function: func_0016C238
// Address: 0x16c238 - 0x16c260
void func_0016C238_0x16c238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0016C238_0x16c238");
#endif

    switch (ctx->pc) {
        case 0x16c24cu: goto label_16c24c;
        default: break;
    }

    ctx->pc = 0x16c238u;

    // 0x16c238: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16c238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16c23c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16c23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16c240: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c244: 0xc058534  jal         func_1614D0
    ctx->pc = 0x16C244u;
    SET_GPR_U32(ctx, 31, 0x16C24Cu);
    ctx->pc = 0x16C248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C244u;
    // 0x16c248: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1614D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1614D0u, 0x16C244u, 0x16C24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C24Cu;
label_16c24c:
    // 0x16c24c: 0xae000264  sw          $zero, 0x264($s0)
    ctx->pc = 0x16c24cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 0));
    // 0x16c250: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16c250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c258: 0x3e00008  jr          $ra
    ctx->pc = 0x16C258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C258u;
        // 0x16c25c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C260u;
}
