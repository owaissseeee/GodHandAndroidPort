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

// Function: Obj1D00_IsSet_Byte_2F4_EqFour_Byte_2F5_1D0B08
// Address: 0x1d0b08 - 0x1d0b30
void Obj1D00_IsSet_Byte_2F4_EqFour_Byte_2F5_1D0B08_0x1d0b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj1D00_IsSet_Byte_2F4_EqFour_Byte_2F5_1D0B08_0x1d0b08");
#endif

    ctx->pc = 0x1d0b08u;

    // 0x1d0b08: 0x908202f4  lbu         $v0, 0x2F4($a0)
    ctx->pc = 0x1d0b08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 756)));
    // 0x1d0b0c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0B0Cu;
    {
        const bool branch_taken_0x1d0b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0b0c) {
            ctx->pc = 0x1D0B24u;
            goto label_1d0b24;
        }
    }
    ctx->pc = 0x1D0B14u;
    // 0x1d0b14: 0x908202f5  lbu         $v0, 0x2F5($a0)
    ctx->pc = 0x1d0b14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x1d0b18: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x1d0b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x1d0b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B1Cu;
        // 0x1d0b20: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0B24u;
label_1d0b24:
    // 0x1d0b24: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B24u;
        // 0x1d0b28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0B2Cu;
    // 0x1d0b2c: 0x0  nop
    ctx->pc = 0x1d0b2cu;
    // NOP
    ctx->pc = 0x1d0b30u;
}
