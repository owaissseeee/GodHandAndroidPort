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

// Function: cSeData_HeapFree
// Address: 0x2cfe48 - 0x2cfe68
void cSeData_HeapFree_0x2cfe48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSeData_HeapFree_0x2cfe48");
#endif

    switch (ctx->pc) {
        case 0x2cfe58u: goto label_2cfe58;
        default: break;
    }

    ctx->pc = 0x2cfe48u;

    // 0x2cfe48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cfe48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cfe4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cfe4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cfe50: 0xc0b3624  jal         func_2CD890
    ctx->pc = 0x2CFE50u;
    SET_GPR_U32(ctx, 31, 0x2CFE58u);
    ctx->pc = 0x2CFE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFE50u;
    // 0x2cfe54: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD890u, 0x2CFE50u, 0x2CFE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFE58u;
label_2cfe58:
    // 0x2cfe58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cfe58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfe5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE5Cu;
        // 0x2cfe60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFE64u;
    // 0x2cfe64: 0x0  nop
    ctx->pc = 0x2cfe64u;
    // NOP
    ctx->pc = 0x2cfe68u;
}
