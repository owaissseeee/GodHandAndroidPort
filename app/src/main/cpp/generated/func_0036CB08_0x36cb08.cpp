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

// Function: func_0036CB08
// Address: 0x36cb08 - 0x36cb58
void func_0036CB08_0x36cb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036CB08_0x36cb08");
#endif

    switch (ctx->pc) {
        case 0x36cb28u: goto label_36cb28;
        default: break;
    }

    ctx->pc = 0x36cb08u;

    // 0x36cb08: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x36cb0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36cb0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cb10: 0x24421ec8  addiu       $v0, $v0, 0x1EC8
    ctx->pc = 0x36cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7880));
    // 0x36cb14: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x36cb14u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3F1ECCu));
    // 0x36cb18: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x36CB18u;
    {
        const bool branch_taken_0x36cb18 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x36CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CB18u;
        // 0x36cb1c: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cb18) {
            ctx->pc = 0x36CB4Cu;
            goto label_36cb4c;
        }
    }
    ctx->pc = 0x36CB20u;
    // 0x36cb20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x36cb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cb24: 0x0  nop
    ctx->pc = 0x36cb24u;
    // NOP
label_36cb28:
    // 0x36cb28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x36cb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36cb2c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x36cb2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cb30: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x36CB30u;
    {
        const bool branch_taken_0x36cb30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CB30u;
        // 0x36cb34: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cb30) {
            ctx->pc = 0x36CB50u;
            goto label_36cb50;
        }
    }
    ctx->pc = 0x36CB38u;
    // 0x36cb38: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36cb38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x36cb3c: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x36cb3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x36cb40: 0x0  nop
    ctx->pc = 0x36cb40u;
    // NOP
    // 0x36cb44: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x36CB44u;
    {
        const bool branch_taken_0x36cb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36cb44) {
            ctx->pc = 0x36CB28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36cb28;
        }
    }
    ctx->pc = 0x36CB4Cu;
label_36cb4c:
    // 0x36cb4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36cb4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36cb50:
    // 0x36cb50: 0x3e00008  jr          $ra
    ctx->pc = 0x36CB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CB58u;
}
