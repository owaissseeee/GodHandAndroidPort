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

// Function: cCoreSave_getState154
// Address: 0x1fae60 - 0x1faea0
void cCoreSave_getState154_0x1fae60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_getState154_0x1fae60");
#endif

    ctx->pc = 0x1fae60u;

    // 0x1fae60: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1fae60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fae64: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1fae64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1fae68: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FAE68u;
    {
        const bool branch_taken_0x1fae68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE68u;
        // 0x1fae6c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae68) {
            ctx->pc = 0x1FAE78u;
            goto label_1fae78;
        }
    }
    ctx->pc = 0x1FAE70u;
    // 0x1fae70: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE70u;
        // 0x1fae74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAE78u;
label_1fae78:
    // 0x1fae78: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x1fae78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x1fae7c: 0x8c437a38  lw          $v1, 0x7A38($v0)
    ctx->pc = 0x1fae7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31288)));
    // 0x1fae80: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1fae80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1fae84: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FAE84u;
    {
        const bool branch_taken_0x1fae84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE84u;
        // 0x1fae88: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae84) {
            ctx->pc = 0x1FAE90u;
            goto label_1fae90;
        }
    }
    ctx->pc = 0x1FAE8Cu;
    // 0x1fae8c: 0xa0a20154  sb          $v0, 0x154($a1)
    ctx->pc = 0x1fae8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 340), (uint8_t)GPR_U32(ctx, 2));
label_1fae90:
    // 0x1fae90: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1fae90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1fae94: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE94u;
        // 0x1fae98: 0x90620154  lbu         $v0, 0x154($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 340)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAE9Cu;
    // 0x1fae9c: 0x0  nop
    ctx->pc = 0x1fae9cu;
    // NOP
    ctx->pc = 0x1faea0u;
}
