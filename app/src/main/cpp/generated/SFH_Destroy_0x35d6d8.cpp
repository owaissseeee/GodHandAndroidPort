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

// Function: SFH_Destroy
// Address: 0x35d6d8 - 0x35d708
void SFH_Destroy_0x35d6d8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFH_Destroy_0x35d6d8");
#endif

    if (__builtin_expect(ctx->pc != 0x35d6d8u, 0)) {
        switch (ctx->pc) {
            case 0x35d6e8u: goto label_35d6e8;
            default: break;
        }
    }


    // 0x35d6d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35d6dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35d6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35d6e0: 0xc0d75ca  jal         func_35D728
    ctx->pc = 0x35D6E0u;
    SET_GPR_U32(ctx, 31, 0x35D6E8u);
    if (!runtime->callDirectStatic(rdram, ctx, &Obj35D0_ClearFields_0_4_8_C_D728_0x35d728, 0x35d728u, 0x35d6e8u)) {
        return;
    }
label_35d6e8:
    // 0x35d6e8: 0x3c030076  lui         $v1, 0x76
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)118 << 16));
    // 0x35d6ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35d6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d6f0: 0x24636c90  addiu       $v1, $v1, 0x6C90
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27792));
    // 0x35d6f4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35d6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x766C94u));
    // 0x35d6f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35d6fc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x35d6fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x766C94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x766C94u, _value); } while (0);
    // 0x35d700: 0x3e00008  jr          $ra
    ctx->pc = 0x35D700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D700u;
        // 0x35d704: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D708u;
}