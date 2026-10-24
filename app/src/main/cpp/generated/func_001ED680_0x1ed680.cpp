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

// Function: func_001ED680
// Address: 0x1ed680 - 0x1ed6e0
void func_001ED680_0x1ed680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001ED680_0x1ed680");
#endif

    switch (ctx->pc) {
        case 0x1ed6a4u: goto label_1ed6a4;
        case 0x1ed6a8u: goto label_1ed6a8;
        case 0x1ed6b4u: goto label_1ed6b4;
        case 0x1ed6c8u: goto label_1ed6c8;
        default: break;
    }

    ctx->pc = 0x1ed680u;

    // 0x1ed680: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ed680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ed684: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1ed684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1ed688: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ed688u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed68c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ed68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1ed690: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ed690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ed694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ed698: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x1ed698u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ed69c: 0xc07b612  jal         func_1ED848
    ctx->pc = 0x1ED69Cu;
    SET_GPR_U32(ctx, 31, 0x1ED6A4u);
    ctx->pc = 0x1ED6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED69Cu;
    // 0x1ed6a0: 0x26500060  addiu       $s0, $s2, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED848u, 0x1ED69Cu, 0x1ED6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED6A4u;
label_1ed6a4:
    // 0x1ed6a4: 0x0  nop
    ctx->pc = 0x1ed6a4u;
    // NOP
label_1ed6a8:
    // 0x1ed6a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ed6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed6ac: 0xc0b5778  jal         func_2D5DE0
    ctx->pc = 0x1ED6ACu;
    SET_GPR_U32(ctx, 31, 0x1ED6B4u);
    ctx->pc = 0x1ED6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED6ACu;
    // 0x1ed6b0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5DE0u, 0x1ED6ACu, 0x1ED6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED6B4u;
label_1ed6b4:
    // 0x1ed6b4: 0x0  nop
    ctx->pc = 0x1ed6b4u;
    // NOP
    // 0x1ed6b8: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1ED6B8u;
    {
        const bool branch_taken_0x1ed6b8 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1ED6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED6B8u;
        // 0x1ed6bc: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed6b8) {
            ctx->pc = 0x1ED6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed6a8;
        }
    }
    ctx->pc = 0x1ED6C0u;
    // 0x1ed6c0: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x1ED6C0u;
    SET_GPR_U32(ctx, 31, 0x1ED6C8u);
    ctx->pc = 0x1ED6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED6C0u;
    // 0x1ed6c4: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x1ED6C0u, 0x1ED6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED6C8u;
label_1ed6c8:
    // 0x1ed6c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ed6c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ed6cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ed6ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed6d0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ed6d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed6d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED6D8u;
        // 0x1ed6dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED6E0u;
}
