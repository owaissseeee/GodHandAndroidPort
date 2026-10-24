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

// Function: func_001ED548
// Address: 0x1ed548 - 0x1ed5b8
void func_001ED548_0x1ed548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001ED548_0x1ed548");
#endif

    switch (ctx->pc) {
        case 0x1ed57cu: goto label_1ed57c;
        case 0x1ed580u: goto label_1ed580;
        case 0x1ed58cu: goto label_1ed58c;
        default: break;
    }

    ctx->pc = 0x1ed548u;

    // 0x1ed548: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ed548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ed54c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ed54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1ed550: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ed550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed554: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ed554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1ed558: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ed558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ed55c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1ed55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1ed560: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1ed560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1ed564: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x1ed564u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ed568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ed56c: 0x26300060  addiu       $s0, $s1, 0x60
    ctx->pc = 0x1ed56cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1ed570: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1ed570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1ed574: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x1ED574u;
    SET_GPR_U32(ctx, 31, 0x1ED57Cu);
    ctx->pc = 0x1ED578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED574u;
    // 0x1ed578: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x1ED574u, 0x1ED57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED57Cu;
label_1ed57c:
    // 0x1ed57c: 0x0  nop
    ctx->pc = 0x1ed57cu;
    // NOP
label_1ed580:
    // 0x1ed580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ed580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed584: 0xc0b5758  jal         func_2D5D60
    ctx->pc = 0x1ED584u;
    SET_GPR_U32(ctx, 31, 0x1ED58Cu);
    ctx->pc = 0x1ED588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED584u;
    // 0x1ed588: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5D60u, 0x1ED584u, 0x1ED58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED58Cu;
label_1ed58c:
    // 0x1ed58c: 0x0  nop
    ctx->pc = 0x1ed58cu;
    // NOP
    // 0x1ed590: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1ED590u;
    {
        const bool branch_taken_0x1ed590 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1ED594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED590u;
        // 0x1ed594: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed590) {
            ctx->pc = 0x1ED580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed580;
        }
    }
    ctx->pc = 0x1ED598u;
    // 0x1ed598: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ed598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed59c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1ed59cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ed5a0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ed5a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ed5a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ed5a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed5a8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1ed5a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed5ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED5B0u;
        // 0x1ed5b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED5B8u;
}
