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

// Function: SetField_ACD0_1FE348
// Address: 0x1fe348 - 0x1fe358
void SetField_ACD0_1FE348_0x1fe348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetField_ACD0_1FE348_0x1fe348");
#endif

    ctx->pc = 0x1fe348u;

    // 0x1fe348: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1fe348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fe34c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1fe34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fe350: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE350u;
        // 0x1fe354: 0xac852cd0  sw          $a1, 0x2CD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 11472), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE358u;
}
