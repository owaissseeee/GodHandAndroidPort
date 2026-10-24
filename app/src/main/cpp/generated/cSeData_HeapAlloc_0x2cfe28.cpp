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

// Function: cSeData_HeapAlloc
// Address: 0x2cfe28 - 0x2cfe48
void cSeData_HeapAlloc_0x2cfe28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSeData_HeapAlloc_0x2cfe28");
#endif

    switch (ctx->pc) {
        case 0x2cfe38u: goto label_2cfe38;
        default: break;
    }

    ctx->pc = 0x2cfe28u;

    // 0x2cfe28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cfe28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cfe2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cfe2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cfe30: 0xc0b35f2  jal         func_2CD7C8
    ctx->pc = 0x2CFE30u;
    SET_GPR_U32(ctx, 31, 0x2CFE38u);
    ctx->pc = 0x2CFE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFE30u;
    // 0x2cfe34: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD7C8u, 0x2CFE30u, 0x2CFE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFE38u;
label_2cfe38:
    // 0x2cfe38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cfe38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfe3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE3Cu;
        // 0x2cfe40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFE3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFE44u;
    // 0x2cfe44: 0x0  nop
    ctx->pc = 0x2cfe44u;
    // NOP
    ctx->pc = 0x2cfe48u;
}
