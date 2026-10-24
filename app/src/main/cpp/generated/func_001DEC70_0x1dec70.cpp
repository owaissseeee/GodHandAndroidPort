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

// Function: func_001DEC70
// Address: 0x1dec70 - 0x1dece0
void func_001DEC70_0x1dec70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DEC70_0x1dec70");
#endif

    switch (ctx->pc) {
        case 0x1deca4u: goto label_1deca4;
        case 0x1deca8u: goto label_1deca8;
        case 0x1decb4u: goto label_1decb4;
        default: break;
    }

    ctx->pc = 0x1dec70u;

    // 0x1dec70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1dec70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1dec74: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1dec74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1dec78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dec78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dec7c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1dec7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1dec80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dec80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dec84: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1dec84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1dec88: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1dec88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1dec8c: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x1dec8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1dec90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dec90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dec94: 0x26300060  addiu       $s0, $s1, 0x60
    ctx->pc = 0x1dec94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1dec98: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1dec98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1dec9c: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x1DEC9Cu;
    SET_GPR_U32(ctx, 31, 0x1DECA4u);
    ctx->pc = 0x1DECA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEC9Cu;
    // 0x1deca0: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x1DEC9Cu, 0x1DECA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DECA4u;
label_1deca4:
    // 0x1deca4: 0x0  nop
    ctx->pc = 0x1deca4u;
    // NOP
label_1deca8:
    // 0x1deca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1deca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1decac: 0xc0b5758  jal         func_2D5D60
    ctx->pc = 0x1DECACu;
    SET_GPR_U32(ctx, 31, 0x1DECB4u);
    ctx->pc = 0x1DECB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DECACu;
    // 0x1decb0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5D60u, 0x1DECACu, 0x1DECB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DECB4u;
label_1decb4:
    // 0x1decb4: 0x0  nop
    ctx->pc = 0x1decb4u;
    // NOP
    // 0x1decb8: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DECB8u;
    {
        const bool branch_taken_0x1decb8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1DECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DECB8u;
        // 0x1decbc: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1decb8) {
            ctx->pc = 0x1DECA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1deca8;
        }
    }
    ctx->pc = 0x1DECC0u;
    // 0x1decc0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1decc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1decc4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1decc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1decc8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1decc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1deccc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1decccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1decd0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1decd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1decd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1decd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1decd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DECD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DECD8u;
        // 0x1decdc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DECD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DECE0u;
}
