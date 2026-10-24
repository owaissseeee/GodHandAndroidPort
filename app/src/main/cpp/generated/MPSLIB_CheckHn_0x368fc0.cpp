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

// Function: MPSLIB_CheckHn
// Address: 0x368fc0 - 0x368fe8
void MPSLIB_CheckHn_0x368fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MPSLIB_CheckHn_0x368fc0");
#endif

    ctx->pc = 0x368fc0u;

    // 0x368fc0: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x368fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x368fc4: 0xac446cd8  sw          $a0, 0x6CD8($v0)
    ctx->pc = 0x368fc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x766CD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x766CD8u, _value); } while (0);
    // 0x368fc8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x368FC8u;
    {
        const bool branch_taken_0x368fc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x368FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368FC8u;
        // 0x368fcc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368fc8) {
            ctx->pc = 0x368FDCu;
            goto label_368fdc;
        }
    }
    ctx->pc = 0x368FD0u;
    // 0x368fd0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x368fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x368fd4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x368fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x368fd8: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x368fd8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_368fdc:
    // 0x368fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x368FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368FE4u;
    // 0x368fe4: 0x0  nop
    ctx->pc = 0x368fe4u;
    // NOP
    ctx->pc = 0x368fe8u;
}
