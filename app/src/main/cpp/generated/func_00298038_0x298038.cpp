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

// Function: func_00298038
// Address: 0x298038 - 0x298060
void func_00298038_0x298038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00298038_0x298038");
#endif

    switch (ctx->pc) {
        case 0x29804cu: goto label_29804c;
        default: break;
    }

    ctx->pc = 0x298038u;

    // 0x298038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x298038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29803c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29803cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298040: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x298040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x298044: 0xc0a6000  jal         func_298000
    ctx->pc = 0x298044u;
    SET_GPR_U32(ctx, 31, 0x29804Cu);
    ctx->pc = 0x298048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298044u;
    // 0x298048: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x298000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298000u, 0x298044u, 0x29804Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29804Cu;
label_29804c:
    // 0x29804c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29804cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298050: 0x3e00008  jr          $ra
    ctx->pc = 0x298050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298050u;
        // 0x298054: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298058u;
    // 0x298058: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x298058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29805c: 0x0  nop
    ctx->pc = 0x29805cu;
    // NOP
    ctx->pc = 0x298060u;
}
