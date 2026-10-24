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

// Function: func_003553C8
// Address: 0x3553c8 - 0x355408
void func_003553C8_0x3553c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003553C8_0x3553c8");
#endif

    ctx->pc = 0x3553c8u;

    // 0x3553c8: 0x8c8336b0  lw          $v1, 0x36B0($a0)
    ctx->pc = 0x3553c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14000)));
    // 0x3553cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3553ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3553d0: 0x8c841fc0  lw          $a0, 0x1FC0($a0)
    ctx->pc = 0x3553d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8128)));
    // 0x3553d4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3553D4u;
    {
        const bool branch_taken_0x3553d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3553D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3553D4u;
        // 0x3553d8: 0x24650ad0  addiu       $a1, $v1, 0xAD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3553d4) {
            ctx->pc = 0x3553F0u;
            goto label_3553f0;
        }
    }
    ctx->pc = 0x3553DCu;
    // 0x3553dc: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x3553dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x3553e0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3553e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3553e4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3553e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3553e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3553e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3553ec: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x3553ecu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_3553f0:
    // 0x3553f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3553F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3553F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3553F8u;
    // 0x3553f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3553f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3553fc: 0x0  nop
    ctx->pc = 0x3553fcu;
    // NOP
    // 0x355400: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x355400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x355404: 0x0  nop
    ctx->pc = 0x355404u;
    // NOP
    ctx->pc = 0x355408u;
}
