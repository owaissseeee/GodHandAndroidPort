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

// Function: cCoreSave_addStock
// Address: 0x1facf8 - 0x1fad38
void cCoreSave_addStock_0x1facf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_addStock_0x1facf8");
#endif

    ctx->pc = 0x1facf8u;

    // 0x1facf8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1facf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1facfc: 0x24420134  addiu       $v0, $v0, 0x134
    ctx->pc = 0x1facfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
    // 0x1fad00: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x1fad00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fad04: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1fad04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fad08: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1fad08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1fad0c: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x1fad0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1fad10: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FAD10u;
    {
        const bool branch_taken_0x1fad10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fad10) {
            ctx->pc = 0x1FAD14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAD10u;
            // 0x1fad14: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAD28u;
            goto label_1fad28;
        }
    }
    ctx->pc = 0x1FAD18u;
    // 0x1fad18: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1fad18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1fad1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fad1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fad20: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD20u;
        // 0x1fad24: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAD20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAD28u;
label_1fad28:
    // 0x1fad28: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD28u;
        // 0x1fad2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAD30u;
    // 0x1fad30: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1fad30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fad34: 0x0  nop
    ctx->pc = 0x1fad34u;
    // NOP
    ctx->pc = 0x1fad38u;
}
