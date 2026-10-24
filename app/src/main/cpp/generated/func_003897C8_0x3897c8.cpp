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

// Function: func_003897C8
// Address: 0x3897c8 - 0x3897e8
void func_003897C8_0x3897c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003897C8_0x3897c8");
#endif

    ctx->pc = 0x3897c8u;

    // 0x3897c8: 0xdc830010  ld          $v1, 0x10($a0)
    ctx->pc = 0x3897c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3897cc: 0x2406ff8f  addiu       $a2, $zero, -0x71
    ctx->pc = 0x3897ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967183));
    // 0x3897d0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x3897d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3897d4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3897d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3897d8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x3897d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x3897dc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3897dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3897e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3897E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3897E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3897E0u;
        // 0x3897e4: 0xfc830010  sd          $v1, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3897E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3897E8u;
}
