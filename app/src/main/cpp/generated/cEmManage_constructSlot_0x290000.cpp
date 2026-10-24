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

// Function: cEmManage_constructSlot
// Address: 0x290000 - 0x290028
void cEmManage_constructSlot_0x290000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_constructSlot_0x290000");
#endif

    ctx->pc = 0x290000u;

    // 0x290000: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x290000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x290004: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x290004u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x290008: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x290008u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x29000c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x29000cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290010: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x290010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x290014: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x290014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x290018: 0x3e00008  jr          $ra
    ctx->pc = 0x290018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290018u;
        // 0x29001c: 0xa0800010  sb          $zero, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290020u;
    // 0x290020: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x290020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x290024: 0x0  nop
    ctx->pc = 0x290024u;
    // NOP
    ctx->pc = 0x290028u;
}
