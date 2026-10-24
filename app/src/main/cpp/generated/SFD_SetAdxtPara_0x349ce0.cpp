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

// Function: SFD_SetAdxtPara
// Address: 0x349ce0 - 0x349d38
void SFD_SetAdxtPara_0x349ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFD_SetAdxtPara_0x349ce0");
#endif

    ctx->pc = 0x349ce0u;

    // 0x349ce0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x349ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x349ce4: 0x3c050076  lui         $a1, 0x76
    ctx->pc = 0x349ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)118 << 16));
    // 0x349ce8: 0x24a50d90  addiu       $a1, $a1, 0xD90
    ctx->pc = 0x349ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3472));
    // 0x349cec: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x349cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x349cf0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x349cf0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x760D90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x760D90u, _value); } while (0);
    // 0x349cf4: 0x2406ffe0  addiu       $a2, $zero, -0x20
    ctx->pc = 0x349cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x349cf8: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x349cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x349cfc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x349cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x349d00: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x349d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x349d04: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x349d04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x349d08: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x349d08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x349d0c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x349d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x349d10: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x349d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x349d14: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x349d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x349d18: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x349d18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x349d1c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x349d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x349d20: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x349d20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
    // 0x349d24: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x349d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x349d28: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x349d28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x349d2c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x349d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x349d30: 0x3e00008  jr          $ra
    ctx->pc = 0x349D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349D30u;
        // 0x349d34: 0xaca20014  sw          $v0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349D38u;
}
