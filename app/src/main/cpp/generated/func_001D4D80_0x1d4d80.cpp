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

// Function: func_001D4D80
// Address: 0x1d4d80 - 0x1d4df0
void func_001D4D80_0x1d4d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D4D80_0x1d4d80");
#endif

    switch (ctx->pc) {
        case 0x1d4db4u: goto label_1d4db4;
        case 0x1d4db8u: goto label_1d4db8;
        case 0x1d4dc4u: goto label_1d4dc4;
        default: break;
    }

    ctx->pc = 0x1d4d80u;

    // 0x1d4d80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d4d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d4d84: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d4d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d4d88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d4d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4d8c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d4d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1d4d90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d4d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d4d94: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1d4d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1d4d98: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1d4d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1d4d9c: 0x2412002c  addiu       $s2, $zero, 0x2C
    ctx->pc = 0x1d4d9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1d4da0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d4da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d4da4: 0x26300060  addiu       $s0, $s1, 0x60
    ctx->pc = 0x1d4da4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1d4da8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1d4da8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1d4dac: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x1D4DACu;
    SET_GPR_U32(ctx, 31, 0x1D4DB4u);
    ctx->pc = 0x1D4DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4DACu;
    // 0x1d4db0: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x1D4DACu, 0x1D4DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4DB4u;
label_1d4db4:
    // 0x1d4db4: 0x0  nop
    ctx->pc = 0x1d4db4u;
    // NOP
label_1d4db8:
    // 0x1d4db8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4dbc: 0xc0b5758  jal         func_2D5D60
    ctx->pc = 0x1D4DBCu;
    SET_GPR_U32(ctx, 31, 0x1D4DC4u);
    ctx->pc = 0x1D4DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4DBCu;
    // 0x1d4dc0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5D60u, 0x1D4DBCu, 0x1D4DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4DC4u;
label_1d4dc4:
    // 0x1d4dc4: 0x0  nop
    ctx->pc = 0x1d4dc4u;
    // NOP
    // 0x1d4dc8: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D4DC8u;
    {
        const bool branch_taken_0x1d4dc8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1D4DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DC8u;
        // 0x1d4dcc: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4dc8) {
            ctx->pc = 0x1D4DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4db8;
        }
    }
    ctx->pc = 0x1D4DD0u;
    // 0x1d4dd0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d4dd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4dd4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d4dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d4dd8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d4dd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d4ddc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d4ddcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d4de0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1d4de0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4de4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d4de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4de8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DE8u;
        // 0x1d4dec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4DF0u;
}
