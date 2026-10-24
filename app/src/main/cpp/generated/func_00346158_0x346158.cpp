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

// Function: func_00346158
// Address: 0x346158 - 0x3461b0
void func_00346158_0x346158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00346158_0x346158");
#endif

    switch (ctx->pc) {
        case 0x34617cu: goto label_34617c;
        default: break;
    }

    ctx->pc = 0x346158u;

    // 0x346158: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x346158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34615c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34615cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x346160: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x346160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x346164: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x346164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x346168: 0x8c90003c  lw          $s0, 0x3C($a0)
    ctx->pc = 0x346168u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x34616c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x34616Cu;
    {
        const bool branch_taken_0x34616c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34616Cu;
        // 0x346170: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34616c) {
            ctx->pc = 0x3461A0u;
            goto label_3461a0;
        }
    }
    ctx->pc = 0x346174u;
    // 0x346174: 0xc0d26e2  jal         func_349B88
    ctx->pc = 0x346174u;
    SET_GPR_U32(ctx, 31, 0x34617Cu);
    ctx->pc = 0x349B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349B88u, 0x346174u, 0x34617Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34617Cu;
label_34617c:
    // 0x34617c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34617cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x346180: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x346180u;
    {
        const bool branch_taken_0x346180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x346180) {
            ctx->pc = 0x346184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346180u;
            // 0x346184: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3461A4u;
            goto label_3461a4;
        }
    }
    ctx->pc = 0x346188u;
    // 0x346188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x346188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34618c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34618cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346190: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x346190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x346194: 0x80d63da  j           func_358F68
    ctx->pc = 0x346194u;
    ctx->pc = 0x346198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346194u;
    // 0x346198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358F68u, 0x346194u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34619Cu;
    // 0x34619c: 0x0  nop
    ctx->pc = 0x34619cu;
    // NOP
label_3461a0:
    // 0x3461a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3461a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3461a4:
    // 0x3461a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3461a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3461a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3461A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3461ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3461A8u;
        // 0x3461ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3461A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3461B0u;
}
