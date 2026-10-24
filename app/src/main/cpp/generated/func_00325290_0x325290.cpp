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

// Function: func_00325290
// Address: 0x325290 - 0x3252e0
void func_00325290_0x325290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00325290_0x325290");
#endif

    switch (ctx->pc) {
        case 0x3252acu: goto label_3252ac;
        case 0x3252d0u: goto label_3252d0;
        default: break;
    }

    ctx->pc = 0x325290u;

    // 0x325290: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x325290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x325294: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x325294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x325298: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x325298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32529c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x32529Cu;
    {
        const bool branch_taken_0x32529c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3252A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32529Cu;
        // 0x3252a0: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32529c) {
            ctx->pc = 0x3252D0u;
            goto label_3252d0;
        }
    }
    ctx->pc = 0x3252A4u;
    // 0x3252a4: 0xc0ebee8  jal         func_3AFBA0
    ctx->pc = 0x3252A4u;
    SET_GPR_U32(ctx, 31, 0x3252ACu);
    ctx->pc = 0x3252A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3252A4u;
    // 0x3252a8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFBA0u, 0x3252A4u, 0x3252ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3252ACu;
label_3252ac:
    // 0x3252ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3252acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3252b0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3252b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3252b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3252b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3252b8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3252B8u;
    {
        const bool branch_taken_0x3252b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3252BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3252B8u;
        // 0x3252bc: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3252b8) {
            ctx->pc = 0x3252C8u;
            goto label_3252c8;
        }
    }
    ctx->pc = 0x3252C0u;
    // 0x3252c0: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3252C0u;
    {
        const bool branch_taken_0x3252c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3252C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3252C0u;
        // 0x3252c4: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3252c0) {
            ctx->pc = 0x3252D4u;
            goto label_3252d4;
        }
    }
    ctx->pc = 0x3252C8u;
label_3252c8:
    // 0x3252c8: 0xc0ebef4  jal         func_3AFBD0
    ctx->pc = 0x3252C8u;
    SET_GPR_U32(ctx, 31, 0x3252D0u);
    ctx->pc = 0x3AFBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFBD0u, 0x3252C8u, 0x3252D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3252D0u;
label_3252d0:
    // 0x3252d0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3252d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3252d4:
    // 0x3252d4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3252d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3252d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3252D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3252DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3252D8u;
        // 0x3252dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3252D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3252E0u;
}
