#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: func_007AC708
// Address: 0x7ac708 - 0x7ac738
void func_007AC708_0x7ac708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007AC708_0x7ac708");
#endif

    ctx->pc = 0x7ac708u;

    // 0x7ac708: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x7ac708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x7ac70c: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7AC70Cu;
    {
        const bool branch_taken_0x7ac70c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x7ac70c) {
            ctx->pc = 0x7AC72Cu;
            goto label_7ac72c;
        }
    }
    ctx->pc = 0x7AC714u;
    // 0x7ac714: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7AC714u;
    {
        const bool branch_taken_0x7ac714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC714u;
        // 0x7ac718: 0x3c02007b  lui         $v0, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac714) {
            ctx->pc = 0x7AC72Cu;
            goto label_7ac72c;
        }
    }
    ctx->pc = 0x7AC71Cu;
    // 0x7ac71c: 0x24424fa0  addiu       $v0, $v0, 0x4FA0
    ctx->pc = 0x7ac71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20384));
    // 0x7ac720: 0xf8400010  sqc2        $vf0, 0x10($v0)
    ctx->pc = 0x7ac720u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7ac724: 0xf8400020  sqc2        $vf0, 0x20($v0)
    ctx->pc = 0x7ac724u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7ac728: 0xf8400030  sqc2        $vf0, 0x30($v0)
    ctx->pc = 0x7ac728u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_7ac72c:
    // 0x7ac72c: 0x3e00008  jr          $ra
    ctx->pc = 0x7AC72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AC72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AC734u;
    // 0x7ac734: 0x0  nop
    ctx->pc = 0x7ac734u;
    // NOP
    ctx->pc = 0x7ac738u;
}
} // namespace gh_event
