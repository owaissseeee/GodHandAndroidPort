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

// Function: func_0032A648
// Address: 0x32a648 - 0x32a680
void func_0032A648_0x32a648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032A648_0x32a648");
#endif

    switch (ctx->pc) {
        case 0x32a65cu: goto label_32a65c;
        case 0x32a664u: goto label_32a664;
        case 0x32a66cu: goto label_32a66c;
        default: break;
    }

    ctx->pc = 0x32a648u;

    // 0x32a648: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32a648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32a64c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32a64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32a650: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32a650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32a654: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x32A654u;
    SET_GPR_U32(ctx, 31, 0x32A65Cu);
    ctx->pc = 0x32A658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A654u;
    // 0x32a658: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32A654u, 0x32A65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A65Cu;
label_32a65c:
    // 0x32a65c: 0xc0ca9a0  jal         func_32A680
    ctx->pc = 0x32A65Cu;
    SET_GPR_U32(ctx, 31, 0x32A664u);
    ctx->pc = 0x32A660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A65Cu;
    // 0x32a660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A680u, 0x32A65Cu, 0x32A664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A664u;
label_32a664:
    // 0x32a664: 0xc0cf9ac  jal         func_33E6B0
    ctx->pc = 0x32A664u;
    SET_GPR_U32(ctx, 31, 0x32A66Cu);
    ctx->pc = 0x32A668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A664u;
    // 0x32a668: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32A664u, 0x32A66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A66Cu;
label_32a66c:
    // 0x32a66c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32a66cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32a670: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32a670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a674: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32a674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a678: 0x3e00008  jr          $ra
    ctx->pc = 0x32A678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A678u;
        // 0x32a67c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A680u;
}
