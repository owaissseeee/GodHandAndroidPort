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

// Function: cMc_startLoadRunRelease
// Address: 0x2ae740 - 0x2ae788
void cMc_startLoadRunRelease_0x2ae740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMc_startLoadRunRelease_0x2ae740");
#endif

    switch (ctx->pc) {
        case 0x2ae778u: goto label_2ae778;
        default: break;
    }

    ctx->pc = 0x2ae740u;

    // 0x2ae740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ae740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ae744: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2ae744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2ae748: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ae748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ae74c: 0x24637a84  addiu       $v1, $v1, 0x7A84
    ctx->pc = 0x2ae74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31364));
    // 0x2ae750: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2ae750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae754: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x2ae754u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x2ae758: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2ae758u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A88u));
    // 0x2ae75c: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x2ae75cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x2ae760: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x2ae760u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x2ae764: 0x24842c00  addiu       $a0, $a0, 0x2C00
    ctx->pc = 0x2ae764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11264));
    // 0x2ae768: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2ae768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2ae76c: 0x24a5e788  addiu       $a1, $a1, -0x1878
    ctx->pc = 0x2ae76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961032));
    // 0x2ae770: 0xc0b551c  jal         func_2D5470
    ctx->pc = 0x2AE770u;
    SET_GPR_U32(ctx, 31, 0x2AE778u);
    ctx->pc = 0x2AE774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE770u;
    // 0x2ae774: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5470u, 0x2AE770u, 0x2AE778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE778u;
label_2ae778:
    // 0x2ae778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ae778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae77c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE77Cu;
        // 0x2ae780: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE784u;
    // 0x2ae784: 0x0  nop
    ctx->pc = 0x2ae784u;
    // NOP
    ctx->pc = 0x2ae788u;
}
