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

// Function: func_002D2DC8
// Address: 0x2d2dc8 - 0x2d2e38
void func_002D2DC8_0x2d2dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D2DC8_0x2d2dc8");
#endif

    switch (ctx->pc) {
        case 0x2d2df8u: goto label_2d2df8;
        case 0x2d2e04u: goto label_2d2e04;
        default: break;
    }

    ctx->pc = 0x2d2dc8u;

    // 0x2d2dc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d2dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d2dcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d2dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d2dd0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2d2dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2d2dd4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d2dd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2dd8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d2dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2d2ddc: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x2d2ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2d2de0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2d2de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2d2de4: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x2d2de4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d2de8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d2de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d2dec: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2d2decu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d2df0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2d2df0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2d2df4: 0x0  nop
    ctx->pc = 0x2d2df4u;
    // NOP
label_2d2df8:
    // 0x2d2df8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2dfc: 0xc0b4c80  jal         func_2D3200
    ctx->pc = 0x2D2DFCu;
    SET_GPR_U32(ctx, 31, 0x2D2E04u);
    ctx->pc = 0x2D2E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2DFCu;
    // 0x2d2e00: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3200u, 0x2D2DFCu, 0x2D2E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2E04u;
label_2d2e04:
    // 0x2d2e04: 0x0  nop
    ctx->pc = 0x2d2e04u;
    // NOP
    // 0x2d2e08: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D2E08u;
    {
        const bool branch_taken_0x2d2e08 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x2D2E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2E08u;
        // 0x2d2e0c: 0x261000c0  addiu       $s0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2e08) {
            ctx->pc = 0x2D2DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2df8;
        }
    }
    ctx->pc = 0x2D2E10u;
    // 0x2d2e10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d2e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2e14: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2d2e14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e18: 0xae430c40  sw          $v1, 0xC40($s2)
    ctx->pc = 0x2d2e18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3136), GPR_U32(ctx, 3));
    // 0x2d2e1c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2d2e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d2e20: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d2e20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2e24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d2e24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2e28: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2d2e28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2e2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d2e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2e30: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2E30u;
        // 0x2d2e34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2E38u;
}
