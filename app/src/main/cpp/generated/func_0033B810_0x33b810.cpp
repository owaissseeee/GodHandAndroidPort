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

// Function: func_0033B810
// Address: 0x33b810 - 0x33b878
void func_0033B810_0x33b810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033B810_0x33b810");
#endif

    switch (ctx->pc) {
        case 0x33b83cu: goto label_33b83c;
        case 0x33b850u: goto label_33b850;
        case 0x33b858u: goto label_33b858;
        default: break;
    }

    ctx->pc = 0x33b810u;

    // 0x33b810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33b810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33b814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33b814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33b818: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33b818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b81c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33b81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33b820: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33b820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b824: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33b824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33b828: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x33b828u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b82c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33b82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x33b830: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33b830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33b834: 0xc0ced96  jal         func_33B658
    ctx->pc = 0x33B834u;
    SET_GPR_U32(ctx, 31, 0x33B83Cu);
    ctx->pc = 0x33B838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B834u;
    // 0x33b838: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B658u, 0x33B834u, 0x33B83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B83Cu;
label_33b83c:
    // 0x33b83c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33b83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b840: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33b840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b844: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33b844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b848: 0xc0cee1e  jal         func_33B878
    ctx->pc = 0x33B848u;
    SET_GPR_U32(ctx, 31, 0x33B850u);
    ctx->pc = 0x33B84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B848u;
    // 0x33b84c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B878u, 0x33B848u, 0x33B850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B850u;
label_33b850:
    // 0x33b850: 0xc0ced9c  jal         func_33B670
    ctx->pc = 0x33B850u;
    SET_GPR_U32(ctx, 31, 0x33B858u);
    ctx->pc = 0x33B854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B850u;
    // 0x33b854: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B670u, 0x33B850u, 0x33B858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B858u;
label_33b858:
    // 0x33b858: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33b858u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33b85c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33b85cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b860: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33b860u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33b864: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33b864u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b868: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33b868u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33b86c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33b86cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33b870: 0x3e00008  jr          $ra
    ctx->pc = 0x33B870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B870u;
        // 0x33b874: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B878u;
}
