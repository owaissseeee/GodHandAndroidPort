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

// Function: cSndMemHeap_OpenMain
// Address: 0x2cd638 - 0x2cd668
void cSndMemHeap_OpenMain_0x2cd638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndMemHeap_OpenMain_0x2cd638");
#endif

    switch (ctx->pc) {
        case 0x2cd658u: goto label_2cd658;
        default: break;
    }

    ctx->pc = 0x2cd638u;

    // 0x2cd638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cd638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cd63c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2cd63cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2cd640: 0x3c06000f  lui         $a2, 0xF
    ctx->pc = 0x2cd640u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15 << 16));
    // 0x2cd644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cd644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cd648: 0x24842f80  addiu       $a0, $a0, 0x2F80
    ctx->pc = 0x2cd648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12160));
    // 0x2cd64c: 0x24055080  addiu       $a1, $zero, 0x5080
    ctx->pc = 0x2cd64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    // 0x2cd650: 0xc0b359a  jal         func_2CD668
    ctx->pc = 0x2CD650u;
    SET_GPR_U32(ctx, 31, 0x2CD658u);
    ctx->pc = 0x2CD654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD650u;
    // 0x2cd654: 0x34c6af80  ori         $a2, $a2, 0xAF80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)44928);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD668u, 0x2CD650u, 0x2CD658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD658u;
label_2cd658:
    // 0x2cd658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cd658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd65c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD65Cu;
        // 0x2cd660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD664u;
    // 0x2cd664: 0x0  nop
    ctx->pc = 0x2cd664u;
    // NOP
    ctx->pc = 0x2cd668u;
}
