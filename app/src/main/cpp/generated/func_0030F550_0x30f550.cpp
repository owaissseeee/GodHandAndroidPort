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

// Function: func_0030F550
// Address: 0x30f550 - 0x30f578
void func_0030F550_0x30f550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030F550_0x30f550");
#endif

    switch (ctx->pc) {
        case 0x30f568u: goto label_30f568;
        default: break;
    }

    ctx->pc = 0x30f550u;

    // 0x30f550: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x30f550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x30f554: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30f554u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30f558: 0x8c463cf0  lw          $a2, 0x3CF0($v0)
    ctx->pc = 0x30f558u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C3CF0u));
    // 0x30f55c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30f55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30f560: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x30F560u;
    SET_GPR_U32(ctx, 31, 0x30F568u);
    ctx->pc = 0x30F564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F560u;
    // 0x30f564: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x30F560u, 0x30F568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F568u;
label_30f568:
    // 0x30f568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30f568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30f56c: 0x3e00008  jr          $ra
    ctx->pc = 0x30F56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F56Cu;
        // 0x30f570: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F574u;
    // 0x30f574: 0x0  nop
    ctx->pc = 0x30f574u;
    // NOP
    ctx->pc = 0x30f578u;
}
