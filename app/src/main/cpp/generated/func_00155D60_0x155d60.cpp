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

// Function: func_00155D60
// Address: 0x155d60 - 0x155d98
void func_00155D60_0x155d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00155D60_0x155d60");
#endif

    switch (ctx->pc) {
        case 0x155d68u: goto label_155d68;
        default: break;
    }

    ctx->pc = 0x155d60u;

    // 0x155d60: 0x90820385  lbu         $v0, 0x385($a0)
    ctx->pc = 0x155d60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 901)));
    // 0x155d64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x155d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_155d68:
    // 0x155d68: 0x0  nop
    ctx->pc = 0x155d68u;
    // NOP
    // 0x155d6c: 0x0  nop
    ctx->pc = 0x155d6cu;
    // NOP
    // 0x155d70: 0x0  nop
    ctx->pc = 0x155d70u;
    // NOP
    // 0x155d74: 0x0  nop
    ctx->pc = 0x155d74u;
    // NOP
    // 0x155d78: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x155D78u;
    {
        const bool branch_taken_0x155d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D78u;
        // 0x155d7c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155d78) {
            ctx->pc = 0x155D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155d68;
        }
    }
    ctx->pc = 0x155D80u;
    // 0x155d80: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x155d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x155d84: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x155d84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x155d88: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x155d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x155d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x155D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D8Cu;
        // 0x155d90: 0xfc450030  sd          $a1, 0x30($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155D94u;
    // 0x155d94: 0x0  nop
    ctx->pc = 0x155d94u;
    // NOP
    ctx->pc = 0x155d98u;
}
