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

// Function: func_002A4950
// Address: 0x2a4950 - 0x2a4970
void func_002A4950_0x2a4950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A4950_0x2a4950");
#endif

    switch (ctx->pc) {
        case 0x2a4964u: goto label_2a4964;
        default: break;
    }

    ctx->pc = 0x2a4950u;

    // 0x2a4950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a4950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a4954: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a4954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4958: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a4958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a495c: 0xc0a922a  jal         func_2A48A8
    ctx->pc = 0x2A495Cu;
    SET_GPR_U32(ctx, 31, 0x2A4964u);
    ctx->pc = 0x2A4960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A495Cu;
    // 0x2a4960: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A48A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A48A8u, 0x2A495Cu, 0x2A4964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4964u;
label_2a4964:
    // 0x2a4964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a4964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a4968: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4968u;
        // 0x2a496c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4970u;
}
