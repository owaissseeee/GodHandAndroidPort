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

// Function: func_0035DC60
// Address: 0x35dc60 - 0x35dcb0
void func_0035DC60_0x35dc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035DC60_0x35dc60");
#endif

    switch (ctx->pc) {
        case 0x35dc88u: goto label_35dc88;
        default: break;
    }

    ctx->pc = 0x35dc60u;

    // 0x35dc60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35dc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35dc64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35dc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35dc68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35dc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35dc6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35dc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35dc70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35dc70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dc74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35dc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35dc78: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x35dc78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x35dc7c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x35dc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35dc80: 0xc0d75ee  jal         func_35D7B8
    ctx->pc = 0x35DC80u;
    SET_GPR_U32(ctx, 31, 0x35DC88u);
    ctx->pc = 0x35DC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DC80u;
    // 0x35dc84: 0x24700080  addiu       $s0, $v1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D7B8u, 0x35DC80u, 0x35DC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DC88u;
label_35dc88:
    // 0x35dc88: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x35DC88u;
    {
        const bool branch_taken_0x35dc88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dc88) {
            ctx->pc = 0x35DC8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DC88u;
            // 0x35dc8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DCA0u;
            goto label_35dca0;
        }
    }
    ctx->pc = 0x35DC90u;
    // 0x35dc90: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x35dc90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35dc94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35dc98: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x35dc98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x35dc9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35dc9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35dca0:
    // 0x35dca0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35dca0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35dca4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35dca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35dca8: 0x3e00008  jr          $ra
    ctx->pc = 0x35DCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DCA8u;
        // 0x35dcac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DCA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DCB0u;
}
