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

// Function: cOl22_setOpen
// Address: 0x17e678 - 0x17e6a0
void cOl22_setOpen_0x17e678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOl22_setOpen_0x17e678");
#endif

    ctx->pc = 0x17e678u;

    // 0x17e678: 0x90820601  lbu         $v0, 0x601($a0)
    ctx->pc = 0x17e678u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1537)));
    // 0x17e67c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17E67Cu;
    {
        const bool branch_taken_0x17e67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E67Cu;
        // 0x17e680: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e67c) {
            ctx->pc = 0x17E698u;
            goto label_17e698;
        }
    }
    ctx->pc = 0x17E684u;
    // 0x17e684: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x17e684u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e688: 0xa08202f4  sb          $v0, 0x2F4($a0)
    ctx->pc = 0x17e688u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x17e68c: 0xa0820600  sb          $v0, 0x600($a0)
    ctx->pc = 0x17e68cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1536), (uint8_t)GPR_U32(ctx, 2));
    // 0x17e690: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x17e690u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e694: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x17e694u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
label_17e698:
    // 0x17e698: 0x3e00008  jr          $ra
    ctx->pc = 0x17E698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E6A0u;
}
