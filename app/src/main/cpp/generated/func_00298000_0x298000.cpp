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

// Function: func_00298000
// Address: 0x298000 - 0x298028
void func_00298000_0x298000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00298000_0x298000");
#endif

    ctx->pc = 0x298000u;

    // 0x298000: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x298000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x298004: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x298004u;
    {
        const bool branch_taken_0x298004 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x298004) {
            ctx->pc = 0x29801Cu;
            goto label_29801c;
        }
    }
    ctx->pc = 0x29800Cu;
    // 0x29800c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29800Cu;
    {
        const bool branch_taken_0x29800c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x298010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29800Cu;
        // 0x298010: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29800c) {
            ctx->pc = 0x29801Cu;
            goto label_29801c;
        }
    }
    ctx->pc = 0x298014u;
    // 0x298014: 0x24426af0  addiu       $v0, $v0, 0x6AF0
    ctx->pc = 0x298014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
    // 0x298018: 0xf8400020  sqc2        $vf0, 0x20($v0)
    ctx->pc = 0x298018u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_29801c:
    // 0x29801c: 0x3e00008  jr          $ra
    ctx->pc = 0x29801Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29801Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298024u;
    // 0x298024: 0x0  nop
    ctx->pc = 0x298024u;
    // NOP
    ctx->pc = 0x298028u;
}
