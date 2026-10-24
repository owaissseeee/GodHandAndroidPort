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

// Function: func_00138C70
// Address: 0x138c70 - 0x138ca8
void func_00138C70_0x138c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00138C70_0x138c70");
#endif

    switch (ctx->pc) {
        case 0x138c8cu: goto label_138c8c;
        default: break;
    }

    ctx->pc = 0x138c70u;

    // 0x138c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x138c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x138c74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x138c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138c78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x138c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x138c7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138c80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x138c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138c84: 0xc04e424  jal         func_139090
    ctx->pc = 0x138C84u;
    SET_GPR_U32(ctx, 31, 0x138C8Cu);
    ctx->pc = 0x138C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138C84u;
    // 0x138c88: 0xae021028  sw          $v0, 0x1028($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4136), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139090u, 0x138C84u, 0x138C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138C8Cu;
label_138c8c:
    // 0x138c8c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x138c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x138c90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138c94: 0xac50aff0  sw          $s0, -0x5010($v0)
    ctx->pc = 0x138c94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x5CAFF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CAFF0u, _value); } while (0);
    // 0x138c98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x138c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x138C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C9Cu;
        // 0x138ca0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138CA4u;
    // 0x138ca4: 0x0  nop
    ctx->pc = 0x138ca4u;
    // NOP
    ctx->pc = 0x138ca8u;
}
