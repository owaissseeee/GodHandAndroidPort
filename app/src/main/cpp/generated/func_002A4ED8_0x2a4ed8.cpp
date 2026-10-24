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

// Function: func_002A4ED8
// Address: 0x2a4ed8 - 0x2a4f30
void func_002A4ED8_0x2a4ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A4ED8_0x2a4ed8");
#endif

    ctx->pc = 0x2a4ed8u;

    // 0x2a4ed8: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x2a4ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
    // 0x2a4edc: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x2a4edcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x2a4ee0: 0x24c674a0  addiu       $a2, $a2, 0x74A0
    ctx->pc = 0x2a4ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29856));
    // 0x2a4ee4: 0x34e75000  ori         $a3, $a3, 0x5000
    ctx->pc = 0x2a4ee4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)20480);
    // 0x2a4ee8: 0x8cc30210  lw          $v1, 0x210($a2)
    ctx->pc = 0x2a4ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7476B0u));
    // 0x2a4eec: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x2a4eecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x2a4ef0: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x2a4ef0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x2a4ef4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2a4ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2a4ef8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2a4ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2a4efc: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x2a4efcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a4f00: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x2a4f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x2a4f04: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2a4f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a4f08: 0xaca32054  sw          $v1, 0x2054($a1)
    ctx->pc = 0x2a4f08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8276), GPR_U32(ctx, 3));
    // 0x2a4f0c: 0x8cc20210  lw          $v0, 0x210($a2)
    ctx->pc = 0x2a4f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 528)));
    // 0x2a4f10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a4f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a4f14: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x2a4f14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a4f18: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2a4f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2a4f1c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2a4f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a4f20: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2a4f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2a4f24: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4F24u;
        // 0x2a4f28: 0xaca42058  sw          $a0, 0x2058($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8280), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4F2Cu;
    // 0x2a4f2c: 0x0  nop
    ctx->pc = 0x2a4f2cu;
    // NOP
    ctx->pc = 0x2a4f30u;
}
