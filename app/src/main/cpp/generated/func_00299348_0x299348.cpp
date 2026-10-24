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

// Function: func_00299348
// Address: 0x299348 - 0x299368
void func_00299348_0x299348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00299348_0x299348");
#endif

    ctx->pc = 0x299348u;

    // 0x299348: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x299348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x29934c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x29934cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x299350: 0xac8040a4  sw          $zero, 0x40A4($a0)
    ctx->pc = 0x299350u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16548), GPR_U32(ctx, 0));
    // 0x299354: 0xfc8040c8  sd          $zero, 0x40C8($a0)
    ctx->pc = 0x299354u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16584), GPR_U64(ctx, 0));
    // 0x299358: 0xac8040a8  sw          $zero, 0x40A8($a0)
    ctx->pc = 0x299358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16552), GPR_U32(ctx, 0));
    // 0x29935c: 0xac8040ac  sw          $zero, 0x40AC($a0)
    ctx->pc = 0x29935cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16556), GPR_U32(ctx, 0));
    // 0x299360: 0x3e00008  jr          $ra
    ctx->pc = 0x299360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299360u;
        // 0x299364: 0xac8040b0  sw          $zero, 0x40B0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299368u;
}
