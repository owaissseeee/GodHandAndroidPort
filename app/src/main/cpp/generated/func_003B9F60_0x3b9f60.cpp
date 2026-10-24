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

// Function: func_003B9F60
// Address: 0x3b9f60 - 0x3b9fb8
void func_003B9F60_0x3b9f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B9F60_0x3b9f60");
#endif

    switch (ctx->pc) {
        case 0x3b9f80u: goto label_3b9f80;
        default: break;
    }

    ctx->pc = 0x3b9f60u;

    // 0x3b9f60: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3b9f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3b9f64: 0x2466c7b8  addiu       $a2, $v1, -0x3848
    ctx->pc = 0x3b9f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952888));
    // 0x3b9f68: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3b9f68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FC7B8u));
    // 0x3b9f6c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3B9F6Cu;
    {
        const bool branch_taken_0x3b9f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9F6Cu;
        // 0x3b9f70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9f6c) {
            ctx->pc = 0x3B9FA4u;
            goto label_3b9fa4;
        }
    }
    ctx->pc = 0x3B9F74u;
    // 0x3b9f74: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3b9f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9f78: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x3b9f78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9f7c: 0x0  nop
    ctx->pc = 0x3b9f7cu;
    // NOP
label_3b9f80:
    // 0x3b9f80: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3b9f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3b9f84: 0x24a5003c  addiu       $a1, $a1, 0x3C
    ctx->pc = 0x3b9f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x3b9f88: 0x1c800006  bgtz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B9F88u;
    {
        const bool branch_taken_0x3b9f88 = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x3B9F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9F88u;
        // 0x3b9f8c: 0x2463003c  addiu       $v1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9f88) {
            ctx->pc = 0x3B9FA4u;
            goto label_3b9fa4;
        }
    }
    ctx->pc = 0x3B9F90u;
    // 0x3b9f90: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3b9f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b9f94: 0x0  nop
    ctx->pc = 0x3b9f94u;
    // NOP
    // 0x3b9f98: 0x0  nop
    ctx->pc = 0x3b9f98u;
    // NOP
    // 0x3b9f9c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3B9F9Cu;
    {
        const bool branch_taken_0x3b9f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9F9Cu;
        // 0x3b9fa0: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9f9c) {
            ctx->pc = 0x3B9F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b9f80;
        }
    }
    ctx->pc = 0x3B9FA4u;
label_3b9fa4:
    // 0x3b9fa4: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x3b9fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x3b9fa8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b9fa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9fac: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9FACu;
        // 0x3b9fb0: 0xc3100b  movn        $v0, $a2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B9FB4u;
    // 0x3b9fb4: 0x0  nop
    ctx->pc = 0x3b9fb4u;
    // NOP
    ctx->pc = 0x3b9fb8u;
}
