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

// Function: cCoreSave_setCostumeNo
// Address: 0x1fc0d8 - 0x1fc100
void cCoreSave_setCostumeNo_0x1fc0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_setCostumeNo_0x1fc0d8");
#endif

    ctx->pc = 0x1fc0d8u;

    // 0x1fc0d8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1fc0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc0dc: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC0DCu;
    {
        const bool branch_taken_0x1fc0dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0DCu;
        // 0x1fc0e0: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc0dc) {
            ctx->pc = 0x1FC0F4u;
            goto label_1fc0f4;
        }
    }
    ctx->pc = 0x1FC0E4u;
    // 0x1fc0e4: 0x90c200ae  lbu         $v0, 0xAE($a2)
    ctx->pc = 0x1fc0e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 174)));
    // 0x1fc0e8: 0xa0c200af  sb          $v0, 0xAF($a2)
    ctx->pc = 0x1fc0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 175), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fc0ec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fc0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc0f0: 0xa06500ae  sb          $a1, 0xAE($v1)
    ctx->pc = 0x1fc0f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 174), (uint8_t)GPR_U32(ctx, 5));
label_1fc0f4:
    // 0x1fc0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC0FCu;
    // 0x1fc0fc: 0x0  nop
    ctx->pc = 0x1fc0fcu;
    // NOP
    ctx->pc = 0x1fc100u;
}
