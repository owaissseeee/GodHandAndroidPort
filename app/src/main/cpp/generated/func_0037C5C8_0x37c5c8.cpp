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

// Function: func_0037C5C8
// Address: 0x37c5c8 - 0x37c5f8
void func_0037C5C8_0x37c5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037C5C8_0x37c5c8");
#endif

    ctx->pc = 0x37c5c8u;

    // 0x37c5c8: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x37c5c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x37c5cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37c5d0: 0x54c20004  bnel        $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37C5D0u;
    {
        const bool branch_taken_0x37c5d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x37c5d0) {
            ctx->pc = 0x37C5D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37C5D0u;
            // 0x37c5d4: 0x94a20030  lhu         $v0, 0x30($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37C5E4u;
            goto label_37c5e4;
        }
    }
    ctx->pc = 0x37C5D8u;
    // 0x37c5d8: 0x94a20032  lhu         $v0, 0x32($a1)
    ctx->pc = 0x37c5d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 50)));
    // 0x37c5dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x37C5DCu;
    {
        const bool branch_taken_0x37c5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C5DCu;
        // 0x37c5e0: 0xa482003a  sh          $v0, 0x3A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 58), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c5dc) {
            ctx->pc = 0x37C5E8u;
            goto label_37c5e8;
        }
    }
    ctx->pc = 0x37C5E4u;
label_37c5e4:
    // 0x37c5e4: 0xa4820038  sh          $v0, 0x38($a0)
    ctx->pc = 0x37c5e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 56), (uint16_t)GPR_U32(ctx, 2));
label_37c5e8:
    // 0x37c5e8: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x37c5e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x37c5ec: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x37c5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x37c5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x37C5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C5F0u;
        // 0x37c5f4: 0xa4820006  sh          $v0, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C5F8u;
}
