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

// Function: func_001EDF80
// Address: 0x1edf80 - 0x1edfd8
void func_001EDF80_0x1edf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001EDF80_0x1edf80");
#endif

    switch (ctx->pc) {
        case 0x1edfa0u: goto label_1edfa0;
        case 0x1edfacu: goto label_1edfac;
        case 0x1edfc0u: goto label_1edfc0;
        default: break;
    }

    ctx->pc = 0x1edf80u;

    // 0x1edf80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1edf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1edf84: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1edf84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1edf88: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1edf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1edf8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1edf8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edf90: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1edf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1edf94: 0x26500060  addiu       $s0, $s2, 0x60
    ctx->pc = 0x1edf94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x1edf98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1edf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1edf9c: 0x2411001c  addiu       $s1, $zero, 0x1C
    ctx->pc = 0x1edf9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1edfa0:
    // 0x1edfa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1edfa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edfa4: 0xc0b5778  jal         func_2D5DE0
    ctx->pc = 0x1EDFA4u;
    SET_GPR_U32(ctx, 31, 0x1EDFACu);
    ctx->pc = 0x1EDFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDFA4u;
    // 0x1edfa8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5DE0u, 0x1EDFA4u, 0x1EDFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDFACu;
label_1edfac:
    // 0x1edfac: 0x0  nop
    ctx->pc = 0x1edfacu;
    // NOP
    // 0x1edfb0: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1EDFB0u;
    {
        const bool branch_taken_0x1edfb0 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1EDFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDFB0u;
        // 0x1edfb4: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edfb0) {
            ctx->pc = 0x1EDFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1edfa0;
        }
    }
    ctx->pc = 0x1EDFB8u;
    // 0x1edfb8: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x1EDFB8u;
    SET_GPR_U32(ctx, 31, 0x1EDFC0u);
    ctx->pc = 0x1EDFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDFB8u;
    // 0x1edfbc: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x1EDFB8u, 0x1EDFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDFC0u;
label_1edfc0:
    // 0x1edfc0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1edfc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1edfc4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1edfc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1edfc8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1edfc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1edfcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1edfccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1edfd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDFD0u;
        // 0x1edfd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDFD8u;
}
