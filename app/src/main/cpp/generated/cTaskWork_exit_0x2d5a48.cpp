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

// Function: cTaskWork_exit
// Address: 0x2d5a48 - 0x2d5aa0
void cTaskWork_exit_0x2d5a48(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cTaskWork_exit_0x2d5a48");
#endif

    if (__builtin_expect(ctx->pc != 0x2d5a48u, 0)) {
        switch (ctx->pc) {
            case 0x2d5a78u: goto label_2d5a78;
            case 0x2d5a84u: goto label_2d5a84;
            case 0x2d5a8cu: goto label_2d5a8c;
            default: break;
        }
    }


    // 0x2d5a48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d5a4c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d5a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d5a50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d5a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d5a54: 0x80802d  daddu       $s0, $a0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5a58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d5a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d5a5c: 0x2411ffff  addiu       $s1, $zero, -0x1
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d5a60: 0xa600000c  sh          $zero, 0xC($s0)
    ctx->pc = 0x2d5a60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d5a64: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2d5a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d5a68: 0x50910009  beql        $a0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D5A68u;
    {
        const bool branch_taken_0x2d5a68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x2d5a68) {
            ctx->pc = 0x2D5A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5A68u;
            // 0x2d5a6c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5A90u;
            goto label_2d5a90;
        }
    }
    // 0x2d5a70: 0xc0ebecc  jal         func_3AFB30
    SET_GPR_U32(ctx, 31, 0x2D5A78u);
    ctx->pc = 0x2D5A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5A70u;
    // 0x2d5a74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &ChangeThreadPriority_0x3afb30, 0x3afb30u, 0x2d5a78u)) {
        return;
    }
label_2d5a78:
    // 0x2d5a78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d5a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d5a7c: 0xc0ebf30  jal         func_3AFCC0
    SET_GPR_U32(ctx, 31, 0x2D5A84u);
    ctx->pc = 0x2D5A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5A7Cu;
    // 0x2d5a80: 0x8c640028  lw          $a0, 0x28($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SignalSema_0x3afcc0, 0x3afcc0u, 0x2d5a84u)) {
        return;
    }
label_2d5a84:
    // 0x2d5a84: 0xc0ebeb8  jal         func_3AFAE0
    SET_GPR_U32(ctx, 31, 0x2D5A8Cu);
    ctx->pc = 0x2D5A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5A84u;
    // 0x2d5a88: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &ExitDeleteThread_0x3afae0, 0x3afae0u, 0x2d5a8cu)) {
        return;
    }
label_2d5a8c:
    // 0x2d5a8c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d5a8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d5a90:
    // 0x2d5a90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d5a90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5a94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d5a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5a98: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5A98u;
        // 0x2d5a9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5AA0u;
}