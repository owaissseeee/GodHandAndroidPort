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

// Function: func_00359730
// Address: 0x359730 - 0x359758
void func_00359730_0x359730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00359730_0x359730");
#endif

    ctx->pc = 0x359730u;

    // 0x359730: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x359730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x359734: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x359734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x359738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x359738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35973c: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x35973cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x359740: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x359740u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x359744: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x359744u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x359748: 0x3e00008  jr          $ra
    ctx->pc = 0x359748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359748u;
        // 0x35974c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359750u;
    // 0x359750: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x359750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x359754: 0x0  nop
    ctx->pc = 0x359754u;
    // NOP
    ctx->pc = 0x359758u;
}
