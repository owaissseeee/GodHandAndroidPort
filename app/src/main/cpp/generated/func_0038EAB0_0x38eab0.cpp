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

// Function: func_0038EAB0
// Address: 0x38eab0 - 0x38eae0
void func_0038EAB0_0x38eab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038EAB0_0x38eab0");
#endif

    switch (ctx->pc) {
        case 0x38ead0u: goto label_38ead0;
        default: break;
    }

    ctx->pc = 0x38eab0u;

    // 0x38eab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38eab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38eab4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x38eab4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38eab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38eab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38eabc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x38eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38eac0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38EAC0u;
    {
        const bool branch_taken_0x38eac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38EAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EAC0u;
        // 0x38eac4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eac0) {
            ctx->pc = 0x38EAD0u;
            goto label_38ead0;
        }
    }
    ctx->pc = 0x38EAC8u;
    // 0x38eac8: 0xc0e3346  jal         func_38CD18
    ctx->pc = 0x38EAC8u;
    SET_GPR_U32(ctx, 31, 0x38EAD0u);
    ctx->pc = 0x38EACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EAC8u;
    // 0x38eacc: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD18u, 0x38EAC8u, 0x38EAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EAD0u;
label_38ead0:
    // 0x38ead0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38ead0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38ead4: 0x3e00008  jr          $ra
    ctx->pc = 0x38EAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EAD4u;
        // 0x38ead8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38EADCu;
    // 0x38eadc: 0x0  nop
    ctx->pc = 0x38eadcu;
    // NOP
    ctx->pc = 0x38eae0u;
}
