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

// Function: iAllocTimerCounter
// Address: 0x3b7200 - 0x3b7270
void iAllocTimerCounter_0x3b7200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iAllocTimerCounter_0x3b7200");
#endif

    ctx->pc = 0x3b7200u;

    // 0x3b7200: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3b7200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3b7204: 0x2447be90  addiu       $a3, $v0, -0x4170
    ctx->pc = 0x3b7204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950544));
    // 0x3b7208: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x3b7208u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3FBEA4u));
    // 0x3b720c: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B720Cu;
    {
        const bool branch_taken_0x3b720c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b720c) {
            ctx->pc = 0x3B7220u;
            goto label_3b7220;
        }
    }
    ctx->pc = 0x3B7214u;
    // 0x3b7214: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b7214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3b7218: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7218u;
        // 0x3b721c: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7220u;
label_3b7220:
    // 0x3b7220: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x3b7220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x3b7224: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x3b7224u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3b7228: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x3b7228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3b722c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b722cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b7230: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x3b7230u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x3b7234: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x3b7234u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
    // 0x3b7238: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x3b7238u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x3b723c: 0xace40014  sw          $a0, 0x14($a3)
    ctx->pc = 0x3b723cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
    // 0x3b7240: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x3b7240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x3b7244: 0xfcc00018  sd          $zero, 0x18($a2)
    ctx->pc = 0x3b7244u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 0));
    // 0x3b7248: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b7248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b724c: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x3b724cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x3b7250: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x3b7250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x3b7254: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3b7254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3b7258: 0x304203fe  andi        $v0, $v0, 0x3FE
    ctx->pc = 0x3b7258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1022);
    // 0x3b725c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3b725cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3b7260: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3b7260u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x3b7264: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3b7264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3b7268: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7268u;
        // 0x3b726c: 0xa21025  or          $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7270u;
}
