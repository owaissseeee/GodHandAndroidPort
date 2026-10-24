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

// Function: func_00344F30
// Address: 0x344f30 - 0x344f68
void func_00344F30_0x344f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00344F30_0x344f30");
#endif

    switch (ctx->pc) {
        case 0x344f40u: goto label_344f40;
        default: break;
    }

    ctx->pc = 0x344f30u;

    // 0x344f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x344f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x344f34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x344f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x344f38: 0xc0d7820  jal         func_35E080
    ctx->pc = 0x344F38u;
    SET_GPR_U32(ctx, 31, 0x344F40u);
    ctx->pc = 0x344F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344F38u;
    // 0x344f3c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E080u, 0x344F38u, 0x344F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344F40u;
label_344f40:
    // 0x344f40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344f44: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x344f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344f48: 0x432026  xor         $a0, $v0, $v1
    ctx->pc = 0x344f48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x344f4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x344f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344f50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x344f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x344f54: 0xa4100a  movz        $v0, $a1, $a0
    ctx->pc = 0x344f54u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x344f58: 0x3e00008  jr          $ra
    ctx->pc = 0x344F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344F58u;
        // 0x344f5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344F60u;
    // 0x344f60: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x344f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x344f64: 0x0  nop
    ctx->pc = 0x344f64u;
    // NOP
    ctx->pc = 0x344f68u;
}
