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

// Function: BlackJackId_Move
// Address: 0x1d4f78 - 0x1d4fd0
void BlackJackId_Move_0x1d4f78(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlackJackId_Move_0x1d4f78");
#endif

    if (__builtin_expect(ctx->pc != 0x1d4f78u, 0)) {
        switch (ctx->pc) {
            case 0x1d4f98u: goto label_1d4f98;
            case 0x1d4fa4u: goto label_1d4fa4;
            case 0x1d4fb8u: goto label_1d4fb8;
            default: break;
        }
    }


    // 0x1d4f78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d4f7c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d4f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1d4f80: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d4f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d4f84: 0x80902d  daddu       $s2, $a0, $zero
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4f88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d4f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d4f8c: 0x26500060  addiu       $s0, $s2, 0x60
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x1d4f90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d4f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d4f94: 0x2411002c  addiu       $s1, $zero, 0x2C
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1d4f98:
    // 0x1d4f98: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4f9c: 0xc0b5778  jal         func_2D5DE0
    SET_GPR_U32(ctx, 31, 0x1D4FA4u);
    ctx->pc = 0x1D4FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4F9Cu;
    // 0x1d4fa0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &CustomIDWork_Main_0x2d5de0, 0x2d5de0u, 0x1d4fa4u)) {
        return;
    }
label_1d4fa4:
    // 0x1d4fa4: 0x0  nop
    // NOP
    // 0x1d4fa8: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D4FA8u;
    {
        const bool branch_taken_0x1d4fa8 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1D4FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FA8u;
        // 0x1d4fac: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4fa8) {
            ctx->pc = 0x1D4F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4f98;
        }
    }
    // 0x1d4fb0: 0xc0aaa90  jal         func_2AAA40
    SET_GPR_U32(ctx, 31, 0x1D4FB8u);
    ctx->pc = 0x1D4FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4FB0u;
    // 0x1d4fb4: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_move_0x2aaa40, 0x2aaa40u, 0x1d4fb8u)) {
        return;
    }
label_1d4fb8:
    // 0x1d4fb8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d4fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d4fbc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d4fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d4fc0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d4fc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4fc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d4fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FC8u;
        // 0x1d4fcc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4FD0u;
}