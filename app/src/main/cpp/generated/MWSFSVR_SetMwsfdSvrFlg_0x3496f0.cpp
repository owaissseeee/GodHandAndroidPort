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

// Function: MWSFSVR_SetMwsfdSvrFlg
// Address: 0x3496f0 - 0x349718
void MWSFSVR_SetMwsfdSvrFlg_0x3496f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MWSFSVR_SetMwsfdSvrFlg_0x3496f0");
#endif

    switch (ctx->pc) {
        case 0x349704u: goto label_349704;
        default: break;
    }

    ctx->pc = 0x3496f0u;

    // 0x3496f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3496f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3496f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3496f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3496f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3496f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3496fc: 0xc0d14ac  jal         func_3452B0
    ctx->pc = 0x3496FCu;
    SET_GPR_U32(ctx, 31, 0x349704u);
    ctx->pc = 0x349700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3496FCu;
    // 0x349700: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3452B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3452B0u, 0x3496FCu, 0x349704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349704u;
label_349704:
    // 0x349704: 0xac500058  sw          $s0, 0x58($v0)
    ctx->pc = 0x349704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 16));
    // 0x349708: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x349708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34970c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34970cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349710: 0x3e00008  jr          $ra
    ctx->pc = 0x349710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349710u;
        // 0x349714: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349718u;
}
