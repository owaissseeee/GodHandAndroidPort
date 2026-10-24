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

// Function: func_00375840
// Address: 0x375840 - 0x375860
void func_00375840_0x375840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00375840_0x375840");
#endif

    switch (ctx->pc) {
        case 0x375854u: goto label_375854;
        default: break;
    }

    ctx->pc = 0x375840u;

    // 0x375840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x375840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x375844: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x375844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375848: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37584c: 0xc0dd5e8  jal         func_3757A0
    ctx->pc = 0x37584Cu;
    SET_GPR_U32(ctx, 31, 0x375854u);
    ctx->pc = 0x375850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37584Cu;
    // 0x375850: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3757A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3757A0u, 0x37584Cu, 0x375854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375854u;
label_375854:
    // 0x375854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375858: 0x3e00008  jr          $ra
    ctx->pc = 0x375858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375858u;
        // 0x37585c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375860u;
}
