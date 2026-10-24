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

// Function: func_0032ABB0
// Address: 0x32abb0 - 0x32abe8
void func_0032ABB0_0x32abb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032ABB0_0x32abb0");
#endif

    ctx->pc = 0x32abb0u;

    // 0x32abb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32abb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32abb4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32ABB4u;
    {
        const bool branch_taken_0x32abb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x32ABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ABB4u;
        // 0x32abb8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32abb4) {
            ctx->pc = 0x32ABD0u;
            goto label_32abd0;
        }
    }
    ctx->pc = 0x32ABBCu;
    // 0x32abbc: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32abbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32abc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32abc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32abc4: 0x24842318  addiu       $a0, $a0, 0x2318
    ctx->pc = 0x32abc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8984));
    // 0x32abc8: 0x80cfc4c  j           func_33F130
    ctx->pc = 0x32ABC8u;
    ctx->pc = 0x32ABCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ABC8u;
    // 0x32abcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x32ABC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32ABD0u;
label_32abd0:
    // 0x32abd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32abd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32abd4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x32abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x32abd8: 0xac850038  sw          $a1, 0x38($a0)
    ctx->pc = 0x32abd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
    // 0x32abdc: 0xac451414  sw          $a1, 0x1414($v0)
    ctx->pc = 0x32abdcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3D1414u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3D1414u, _value); } while (0);
    // 0x32abe0: 0x3e00008  jr          $ra
    ctx->pc = 0x32ABE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ABE0u;
        // 0x32abe4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32ABE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32ABE8u;
}
