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

// Function: cEventConfig_setEventNo
// Address: 0x299320 - 0x299348
void cEventConfig_setEventNo_0x299320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEventConfig_setEventNo_0x299320");
#endif

    ctx->pc = 0x299320u;

    // 0x299320: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x299320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x299324: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x299324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x299328: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x299328u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x29932c: 0x24420550  addiu       $v0, $v0, 0x550
    ctx->pc = 0x29932cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x299330: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x299330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x299334: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x299334u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x299338: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x299338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x29933c: 0x3e00008  jr          $ra
    ctx->pc = 0x29933Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29933Cu;
        // 0x299340: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29933Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299344u;
    // 0x299344: 0x0  nop
    ctx->pc = 0x299344u;
    // NOP
    ctx->pc = 0x299348u;
}
