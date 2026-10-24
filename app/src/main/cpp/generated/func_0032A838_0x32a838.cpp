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

// Function: func_0032A838
// Address: 0x32a838 - 0x32a880
void func_0032A838_0x32a838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032A838_0x32a838");
#endif

    switch (ctx->pc) {
        case 0x32a854u: goto label_32a854;
        case 0x32a860u: goto label_32a860;
        case 0x32a868u: goto label_32a868;
        default: break;
    }

    ctx->pc = 0x32a838u;

    // 0x32a838: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32a838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32a83c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32a83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32a840: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32a840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a844: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32a844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32a848: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32a848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32a84c: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x32A84Cu;
    SET_GPR_U32(ctx, 31, 0x32A854u);
    ctx->pc = 0x32A850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A84Cu;
    // 0x32a850: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32A84Cu, 0x32A854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A854u;
label_32a854:
    // 0x32a854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32a854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a858: 0xc0caa20  jal         func_32A880
    ctx->pc = 0x32A858u;
    SET_GPR_U32(ctx, 31, 0x32A860u);
    ctx->pc = 0x32A85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A858u;
    // 0x32a85c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A880u, 0x32A858u, 0x32A860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A860u;
label_32a860:
    // 0x32a860: 0xc0cf9ac  jal         func_33E6B0
    ctx->pc = 0x32A860u;
    SET_GPR_U32(ctx, 31, 0x32A868u);
    ctx->pc = 0x32A864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A860u;
    // 0x32a864: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32A860u, 0x32A868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A868u;
label_32a868:
    // 0x32a868: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32a868u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32a86c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32a86cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a870: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32a870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a874: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32a874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a878: 0x3e00008  jr          $ra
    ctx->pc = 0x32A878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A878u;
        // 0x32a87c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A880u;
}
