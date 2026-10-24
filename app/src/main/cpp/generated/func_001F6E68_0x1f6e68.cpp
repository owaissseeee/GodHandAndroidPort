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

// Function: func_001F6E68
// Address: 0x1f6e68 - 0x1f6e98
void func_001F6E68_0x1f6e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F6E68_0x1f6e68");
#endif

    switch (ctx->pc) {
        case 0x1f6e80u: goto label_1f6e80;
        default: break;
    }

    ctx->pc = 0x1f6e68u;

    // 0x1f6e68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f6e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f6e6c: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x1f6e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x1f6e70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f6e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f6e74: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f6e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f6e78: 0xc0ed088  jal         func_3B4220
    ctx->pc = 0x1F6E78u;
    SET_GPR_U32(ctx, 31, 0x1F6E80u);
    ctx->pc = 0x1F6E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6E78u;
    // 0x1f6e7c: 0x2484c0e0  addiu       $a0, $a0, -0x3F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4220u, 0x1F6E78u, 0x1F6E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6E80u;
label_1f6e80:
    // 0x1f6e80: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x1f6e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x1f6e84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6e88: 0xac628280  sw          $v0, -0x7D80($v1)
    ctx->pc = 0x1f6e88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x568280u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568280u, _value); } while (0);
    // 0x1f6e8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f6e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6e90: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E90u;
        // 0x1f6e94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6E98u;
}
