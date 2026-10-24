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

// Function: func_00309000
// Address: 0x309000 - 0x309028
void func_00309000_0x309000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00309000_0x309000");
#endif

    switch (ctx->pc) {
        case 0x309014u: goto label_309014;
        default: break;
    }

    ctx->pc = 0x309000u;

    // 0x309000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x309000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x309004: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x309004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x309008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x309008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30900c: 0xc0c240a  jal         func_309028
    ctx->pc = 0x30900Cu;
    SET_GPR_U32(ctx, 31, 0x309014u);
    ctx->pc = 0x309010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30900Cu;
    // 0x309010: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309028u, 0x30900Cu, 0x309014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309014u;
label_309014:
    // 0x309014: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x309014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x309018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30901c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30901cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x309020: 0x3e00008  jr          $ra
    ctx->pc = 0x309020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309020u;
        // 0x309024: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309028u;
}
