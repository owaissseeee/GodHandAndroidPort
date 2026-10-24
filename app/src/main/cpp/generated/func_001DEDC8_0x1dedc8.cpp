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

// Function: func_001DEDC8
// Address: 0x1dedc8 - 0x1dee20
void func_001DEDC8_0x1dedc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DEDC8_0x1dedc8");
#endif

    switch (ctx->pc) {
        case 0x1dede8u: goto label_1dede8;
        case 0x1dedf4u: goto label_1dedf4;
        case 0x1dee08u: goto label_1dee08;
        default: break;
    }

    ctx->pc = 0x1dedc8u;

    // 0x1dedc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dedc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dedcc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1dedccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1dedd0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1dedd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1dedd4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1dedd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dedd8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dedd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1deddc: 0x26500060  addiu       $s0, $s2, 0x60
    ctx->pc = 0x1deddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x1dede0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dede0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dede4: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x1dede4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1dede8:
    // 0x1dede8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dede8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dedec: 0xc0b5778  jal         func_2D5DE0
    ctx->pc = 0x1DEDECu;
    SET_GPR_U32(ctx, 31, 0x1DEDF4u);
    ctx->pc = 0x1DEDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEDECu;
    // 0x1dedf0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5DE0u, 0x1DEDECu, 0x1DEDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEDF4u;
label_1dedf4:
    // 0x1dedf4: 0x0  nop
    ctx->pc = 0x1dedf4u;
    // NOP
    // 0x1dedf8: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DEDF8u;
    {
        const bool branch_taken_0x1dedf8 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1DEDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEDF8u;
        // 0x1dedfc: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dedf8) {
            ctx->pc = 0x1DEDE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dede8;
        }
    }
    ctx->pc = 0x1DEE00u;
    // 0x1dee00: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x1DEE00u;
    SET_GPR_U32(ctx, 31, 0x1DEE08u);
    ctx->pc = 0x1DEE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEE00u;
    // 0x1dee04: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x1DEE00u, 0x1DEE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEE08u;
label_1dee08:
    // 0x1dee08: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1dee08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dee0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1dee0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dee10: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1dee10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dee14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dee14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dee18: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE18u;
        // 0x1dee1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEE20u;
}
