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

// Function: func_001EDE38
// Address: 0x1ede38 - 0x1edea8
void func_001EDE38_0x1ede38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001EDE38_0x1ede38");
#endif

    switch (ctx->pc) {
        case 0x1ede6cu: goto label_1ede6c;
        case 0x1ede70u: goto label_1ede70;
        case 0x1ede7cu: goto label_1ede7c;
        default: break;
    }

    ctx->pc = 0x1ede38u;

    // 0x1ede38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ede38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ede3c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ede3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1ede40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ede40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ede44: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ede44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1ede48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ede48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ede4c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1ede4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1ede50: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1ede50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1ede54: 0x2412001c  addiu       $s2, $zero, 0x1C
    ctx->pc = 0x1ede54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1ede58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ede58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ede5c: 0x26300060  addiu       $s0, $s1, 0x60
    ctx->pc = 0x1ede5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1ede60: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1ede60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1ede64: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x1EDE64u;
    SET_GPR_U32(ctx, 31, 0x1EDE6Cu);
    ctx->pc = 0x1EDE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDE64u;
    // 0x1ede68: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x1EDE64u, 0x1EDE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDE6Cu;
label_1ede6c:
    // 0x1ede6c: 0x0  nop
    ctx->pc = 0x1ede6cu;
    // NOP
label_1ede70:
    // 0x1ede70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ede70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ede74: 0xc0b5758  jal         func_2D5D60
    ctx->pc = 0x1EDE74u;
    SET_GPR_U32(ctx, 31, 0x1EDE7Cu);
    ctx->pc = 0x1EDE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDE74u;
    // 0x1ede78: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5D60u, 0x1EDE74u, 0x1EDE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDE7Cu;
label_1ede7c:
    // 0x1ede7c: 0x0  nop
    ctx->pc = 0x1ede7cu;
    // NOP
    // 0x1ede80: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1EDE80u;
    {
        const bool branch_taken_0x1ede80 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1EDE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE80u;
        // 0x1ede84: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ede80) {
            ctx->pc = 0x1EDE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ede70;
        }
    }
    ctx->pc = 0x1EDE88u;
    // 0x1ede88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ede88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ede8c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1ede8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ede90: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ede90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ede94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ede94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ede98: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1ede98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ede9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ede9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1edea0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDEA0u;
        // 0x1edea4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDEA8u;
}
