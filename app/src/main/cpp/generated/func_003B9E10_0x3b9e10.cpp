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

// Function: func_003B9E10
// Address: 0x3b9e10 - 0x3b9e60
void func_003B9E10_0x3b9e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B9E10_0x3b9e10");
#endif

    switch (ctx->pc) {
        case 0x3b9e40u: goto label_3b9e40;
        default: break;
    }

    ctx->pc = 0x3b9e10u;

    // 0x3b9e10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b9e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b9e14: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3b9e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3b9e18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b9e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b9e1c: 0x2470c7a8  addiu       $s0, $v1, -0x3858
    ctx->pc = 0x3b9e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952872));
    // 0x3b9e20: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3b9e20u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FC7A8u));
    // 0x3b9e24: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B9E24u;
    {
        const bool branch_taken_0x3b9e24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9E24u;
        // 0x3b9e28: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9e24) {
            ctx->pc = 0x3B9E44u;
            goto label_3b9e44;
        }
    }
    ctx->pc = 0x3B9E2Cu;
    // 0x3b9e2c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3b9e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3b9e30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b9e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9e34: 0x2484c7b8  addiu       $a0, $a0, -0x3848
    ctx->pc = 0x3b9e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952888));
    // 0x3b9e38: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3B9E38u;
    SET_GPR_U32(ctx, 31, 0x3B9E40u);
    ctx->pc = 0x3B9E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9E38u;
    // 0x3b9e3c: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3B9E38u, 0x3B9E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9E40u;
label_3b9e40:
    // 0x3b9e40: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3b9e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b9e44:
    // 0x3b9e44: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3b9e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3b9e48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3b9e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b9e4c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3b9e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3b9e50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b9e50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b9e54: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9E54u;
        // 0x3b9e58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B9E5Cu;
    // 0x3b9e5c: 0x0  nop
    ctx->pc = 0x3b9e5cu;
    // NOP
    ctx->pc = 0x3b9e60u;
}
