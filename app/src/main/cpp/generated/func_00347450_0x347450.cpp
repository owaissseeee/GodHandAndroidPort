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

// Function: func_00347450
// Address: 0x347450 - 0x347498
void func_00347450_0x347450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00347450_0x347450");
#endif

    switch (ctx->pc) {
        case 0x347474u: goto label_347474;
        default: break;
    }

    ctx->pc = 0x347450u;

    // 0x347450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x347450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x347454: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x347454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x347458: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x347458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34745c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x34745cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x347460: 0x8e02017c  lw          $v0, 0x17C($s0)
    ctx->pc = 0x347460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x347464: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x347464u;
    {
        const bool branch_taken_0x347464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x347464) {
            ctx->pc = 0x347468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347464u;
            // 0x347468: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347488u;
            goto label_347488;
        }
    }
    ctx->pc = 0x34746Cu;
    // 0x34746c: 0xc0d1d26  jal         func_347498
    ctx->pc = 0x34746Cu;
    SET_GPR_U32(ctx, 31, 0x347474u);
    ctx->pc = 0x347498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347498u, 0x34746Cu, 0x347474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347474u;
label_347474:
    // 0x347474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x347474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347478: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x347478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34747c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34747cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347480: 0x80d1d7c  j           func_3475F0
    ctx->pc = 0x347480u;
    ctx->pc = 0x347484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347480u;
    // 0x347484: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3475F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3475F0u, 0x347480u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x347488u;
label_347488:
    // 0x347488: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x347488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34748c: 0x3e00008  jr          $ra
    ctx->pc = 0x34748Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34748Cu;
        // 0x347490: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34748Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347494u;
    // 0x347494: 0x0  nop
    ctx->pc = 0x347494u;
    // NOP
    ctx->pc = 0x347498u;
}
