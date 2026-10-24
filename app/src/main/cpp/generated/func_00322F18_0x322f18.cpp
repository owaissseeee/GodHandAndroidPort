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

// Function: func_00322F18
// Address: 0x322f18 - 0x322f58
void func_00322F18_0x322f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00322F18_0x322f18");
#endif

    switch (ctx->pc) {
        case 0x322f34u: goto label_322f34;
        default: break;
    }

    ctx->pc = 0x322f18u;

    // 0x322f18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x322f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x322f1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x322f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x322f20: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x322f20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    // 0x322f24: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x322f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x322f28: 0x2610b838  addiu       $s0, $s0, -0x47C8
    ctx->pc = 0x322f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948920));
    // 0x322f2c: 0xc0c8ea8  jal         func_323AA0
    ctx->pc = 0x322F2Cu;
    SET_GPR_U32(ctx, 31, 0x322F34u);
    ctx->pc = 0x322F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322F2Cu;
    // 0x322f30: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323AA0u, 0x322F2Cu, 0x322F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322F34u;
label_322f34:
    // 0x322f34: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x322f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x322f38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x322f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x322f3c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x322f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x322f40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x322f40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322f44: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x322f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x322f48: 0xac40b834  sw          $zero, -0x47CC($v0)
    ctx->pc = 0x322f48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EB834u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EB834u, _value); } while (0);
    // 0x322f4c: 0xac60529c  sw          $zero, 0x529C($v1)
    ctx->pc = 0x322f4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3C529Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C529Cu, _value); } while (0);
    // 0x322f50: 0x3e00008  jr          $ra
    ctx->pc = 0x322F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F50u;
        // 0x322f54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322F58u;
}
