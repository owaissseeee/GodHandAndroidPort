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

// Function: Forward297B20_298310
// Address: 0x298310 - 0x298338
void Forward297B20_298310_0x298310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward297B20_298310_0x298310");
#endif

    switch (ctx->pc) {
        case 0x29832cu: goto label_29832c;
        default: break;
    }

    ctx->pc = 0x298310u;

    // 0x298310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x298310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x298314: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x298314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x298318: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x298318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x29831c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29831cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x298320: 0x24846af0  addiu       $a0, $a0, 0x6AF0
    ctx->pc = 0x298320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    // 0x298324: 0xc0a5ec8  jal         func_297B20
    ctx->pc = 0x298324u;
    SET_GPR_U32(ctx, 31, 0x29832Cu);
    ctx->pc = 0x298328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298324u;
    // 0x298328: 0x24a58338  addiu       $a1, $a1, -0x7CC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B20u, 0x298324u, 0x29832Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29832Cu;
label_29832c:
    // 0x29832c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29832cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298330: 0x3e00008  jr          $ra
    ctx->pc = 0x298330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298330u;
        // 0x298334: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298338u;
}
