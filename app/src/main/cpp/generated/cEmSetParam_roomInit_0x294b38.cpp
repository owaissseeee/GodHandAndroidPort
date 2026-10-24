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

// Function: cEmSetParam_roomInit
// Address: 0x294b38 - 0x294b60
void cEmSetParam_roomInit_0x294b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmSetParam_roomInit_0x294b38");
#endif

    switch (ctx->pc) {
        case 0x294b50u: goto label_294b50;
        default: break;
    }

    ctx->pc = 0x294b38u;

    // 0x294b38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x294b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x294b3c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x294b3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294b40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x294b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x294b44: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x294b44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x294b48: 0xc0a5580  jal         func_295600
    ctx->pc = 0x294B48u;
    SET_GPR_U32(ctx, 31, 0x294B50u);
    ctx->pc = 0x294B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294B48u;
    // 0x294b4c: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295600u, 0x294B48u, 0x294B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294B50u;
label_294b50:
    // 0x294b50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x294b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294b54: 0x3e00008  jr          $ra
    ctx->pc = 0x294B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294B54u;
        // 0x294b58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294B5Cu;
    // 0x294b5c: 0x0  nop
    ctx->pc = 0x294b5cu;
    // NOP
    ctx->pc = 0x294b60u;
}
