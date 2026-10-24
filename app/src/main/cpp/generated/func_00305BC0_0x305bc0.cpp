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

// Function: func_00305BC0
// Address: 0x305bc0 - 0x305be0
void func_00305BC0_0x305bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00305BC0_0x305bc0");
#endif

    ctx->pc = 0x305bc0u;

    // 0x305bc0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x305bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x305bc4: 0xac800414  sw          $zero, 0x414($a0)
    ctx->pc = 0x305bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1044), GPR_U32(ctx, 0));
    // 0x305bc8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x305bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x305bcc: 0xac800400  sw          $zero, 0x400($a0)
    ctx->pc = 0x305bccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1024), GPR_U32(ctx, 0));
    // 0x305bd0: 0xac82040c  sw          $v0, 0x40C($a0)
    ctx->pc = 0x305bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1036), GPR_U32(ctx, 2));
    // 0x305bd4: 0xac800404  sw          $zero, 0x404($a0)
    ctx->pc = 0x305bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1028), GPR_U32(ctx, 0));
    // 0x305bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x305BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305BD8u;
        // 0x305bdc: 0xac820408  sw          $v0, 0x408($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1032), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305BE0u;
}
