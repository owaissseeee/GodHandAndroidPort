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

// Function: cOl2b_setInit
// Address: 0x180360 - 0x180388
void cOl2b_setInit_0x180360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOl2b_setInit_0x180360");
#endif

    ctx->pc = 0x180360u;

    // 0x180360: 0x8c820a24  lw          $v0, 0xA24($a0)
    ctx->pc = 0x180360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2596)));
    // 0x180364: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x180364u;
    {
        const bool branch_taken_0x180364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180364u;
        // 0x180368: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180364) {
            ctx->pc = 0x18037Cu;
            goto label_18037c;
        }
    }
    ctx->pc = 0x18036Cu;
    // 0x18036c: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x18036cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x180370: 0xa08202f4  sb          $v0, 0x2F4($a0)
    ctx->pc = 0x180370u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x180374: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x180374u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x180378: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x180378u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
label_18037c:
    // 0x18037c: 0x3e00008  jr          $ra
    ctx->pc = 0x18037Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18037Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180384u;
    // 0x180384: 0x0  nop
    ctx->pc = 0x180384u;
    // NOP
    ctx->pc = 0x180388u;
}
