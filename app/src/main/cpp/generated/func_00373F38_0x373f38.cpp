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

// Function: func_00373F38
// Address: 0x373f38 - 0x373f78
void func_00373F38_0x373f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00373F38_0x373f38");
#endif

    switch (ctx->pc) {
        case 0x373f50u: goto label_373f50;
        case 0x373f5cu: goto label_373f5c;
        default: break;
    }

    ctx->pc = 0x373f38u;

    // 0x373f38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x373f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x373f3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x373f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x373f40: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x373f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x373f44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373f48: 0xc0dcf64  jal         func_373D90
    ctx->pc = 0x373F48u;
    SET_GPR_U32(ctx, 31, 0x373F50u);
    ctx->pc = 0x373F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373F48u;
    // 0x373f4c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373D90u, 0x373F48u, 0x373F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373F50u;
label_373f50:
    // 0x373f50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x373f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373f54: 0xc0dcff2  jal         func_373FC8
    ctx->pc = 0x373F54u;
    SET_GPR_U32(ctx, 31, 0x373F5Cu);
    ctx->pc = 0x373F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373F54u;
    // 0x373f58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373FC8u, 0x373F54u, 0x373F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373F5Cu;
label_373f5c:
    // 0x373f5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x373f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373f60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x373f60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373f64: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x373f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x373f68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x373F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373F6Cu;
        // 0x373f70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373F74u;
    // 0x373f74: 0x0  nop
    ctx->pc = 0x373f74u;
    // NOP
    ctx->pc = 0x373f78u;
}
