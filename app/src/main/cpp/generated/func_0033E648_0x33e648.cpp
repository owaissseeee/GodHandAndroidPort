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

// Function: func_0033E648
// Address: 0x33e648 - 0x33e678
void func_0033E648_0x33e648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033E648_0x33e648");
#endif

    ctx->pc = 0x33e648u;

    // 0x33e648: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x33e648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x33e64c: 0x2442adb0  addiu       $v0, $v0, -0x5250
    ctx->pc = 0x33e64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946224));
    // 0x33e650: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x33e650u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EADB0u));
    // 0x33e654: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33e654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33e658: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x33e658u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EADB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EADB0u, _value); } while (0);
    // 0x33e65c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33e65cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EADB0u));
    // 0x33e660: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x33E660u;
    {
        const bool branch_taken_0x33e660 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33E664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E660u;
        // 0x33e664: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e660) {
            ctx->pc = 0x33E66Cu;
            goto label_33e66c;
        }
    }
    ctx->pc = 0x33E668u;
    // 0x33e668: 0xac40ada8  sw          $zero, -0x5258($v0)
    ctx->pc = 0x33e668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294946216), GPR_U32(ctx, 0));
label_33e66c:
    // 0x33e66c: 0x3e00008  jr          $ra
    ctx->pc = 0x33E66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E674u;
    // 0x33e674: 0x0  nop
    ctx->pc = 0x33e674u;
    // NOP
    ctx->pc = 0x33e678u;
}
