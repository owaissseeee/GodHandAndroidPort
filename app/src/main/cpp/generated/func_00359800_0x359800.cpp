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

// Function: func_00359800
// Address: 0x359800 - 0x359848
void func_00359800_0x359800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00359800_0x359800");
#endif

    switch (ctx->pc) {
        case 0x359824u: goto label_359824;
        default: break;
    }

    ctx->pc = 0x359800u;

    // 0x359800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359804: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x359804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x359808: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x359808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35980c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35980cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x359810: 0x8e0236b0  lw          $v0, 0x36B0($s0)
    ctx->pc = 0x359810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14000)));
    // 0x359814: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x359814u;
    {
        const bool branch_taken_0x359814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x359814) {
            ctx->pc = 0x359818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359814u;
            // 0x359818: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359838u;
            goto label_359838;
        }
    }
    ctx->pc = 0x35981Cu;
    // 0x35981c: 0xc0d6612  jal         func_359848
    ctx->pc = 0x35981Cu;
    SET_GPR_U32(ctx, 31, 0x359824u);
    ctx->pc = 0x359848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359848u, 0x35981Cu, 0x359824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359824u;
label_359824:
    // 0x359824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x359824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359828: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x359828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35982c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35982cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359830: 0x80d672e  j           func_359CB8
    ctx->pc = 0x359830u;
    ctx->pc = 0x359834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359830u;
    // 0x359834: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359CB8u, 0x359830u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x359838u;
label_359838:
    // 0x359838: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x359838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35983c: 0x3e00008  jr          $ra
    ctx->pc = 0x35983Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35983Cu;
        // 0x359840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35983Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359844u;
    // 0x359844: 0x0  nop
    ctx->pc = 0x359844u;
    // NOP
    ctx->pc = 0x359848u;
}
