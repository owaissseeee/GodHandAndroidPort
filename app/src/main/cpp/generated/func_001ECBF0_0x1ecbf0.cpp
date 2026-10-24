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

// Function: func_001ECBF0
// Address: 0x1ecbf0 - 0x1ecc48
void func_001ECBF0_0x1ecbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001ECBF0_0x1ecbf0");
#endif

    switch (ctx->pc) {
        case 0x1ecc10u: goto label_1ecc10;
        case 0x1ecc1cu: goto label_1ecc1c;
        case 0x1ecc30u: goto label_1ecc30;
        default: break;
    }

    ctx->pc = 0x1ecbf0u;

    // 0x1ecbf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ecbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ecbf4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1ecbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1ecbf8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ecbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1ecbfc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ecbfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecc00: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ecc00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ecc04: 0x26500060  addiu       $s0, $s2, 0x60
    ctx->pc = 0x1ecc04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x1ecc08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ecc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ecc0c: 0x2411002c  addiu       $s1, $zero, 0x2C
    ctx->pc = 0x1ecc0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1ecc10:
    // 0x1ecc10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ecc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecc14: 0xc0b5778  jal         func_2D5DE0
    ctx->pc = 0x1ECC14u;
    SET_GPR_U32(ctx, 31, 0x1ECC1Cu);
    ctx->pc = 0x1ECC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECC14u;
    // 0x1ecc18: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5DE0u, 0x1ECC14u, 0x1ECC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC1Cu;
label_1ecc1c:
    // 0x1ecc1c: 0x0  nop
    ctx->pc = 0x1ecc1cu;
    // NOP
    // 0x1ecc20: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1ECC20u;
    {
        const bool branch_taken_0x1ecc20 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1ECC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC20u;
        // 0x1ecc24: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecc20) {
            ctx->pc = 0x1ECC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ecc10;
        }
    }
    ctx->pc = 0x1ECC28u;
    // 0x1ecc28: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x1ECC28u;
    SET_GPR_U32(ctx, 31, 0x1ECC30u);
    ctx->pc = 0x1ECC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECC28u;
    // 0x1ecc2c: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x1ECC28u, 0x1ECC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC30u;
label_1ecc30:
    // 0x1ecc30: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ecc30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ecc34: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ecc34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ecc38: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ecc38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ecc3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ecc3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ecc40: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC40u;
        // 0x1ecc44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECC48u;
}
