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

// Function: func_0032B6E0
// Address: 0x32b6e0 - 0x32b718
void func_0032B6E0_0x32b6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032B6E0_0x32b6e0");
#endif

    switch (ctx->pc) {
        case 0x32b6f4u: goto label_32b6f4;
        case 0x32b6fcu: goto label_32b6fc;
        case 0x32b704u: goto label_32b704;
        default: break;
    }

    ctx->pc = 0x32b6e0u;

    // 0x32b6e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32b6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32b6e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32b6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32b6e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32b6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32b6ec: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x32B6ECu;
    SET_GPR_U32(ctx, 31, 0x32B6F4u);
    ctx->pc = 0x32B6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B6ECu;
    // 0x32b6f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32B6ECu, 0x32B6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B6F4u;
label_32b6f4:
    // 0x32b6f4: 0xc0cadc6  jal         func_32B718
    ctx->pc = 0x32B6F4u;
    SET_GPR_U32(ctx, 31, 0x32B6FCu);
    ctx->pc = 0x32B6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B6F4u;
    // 0x32b6f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B718u, 0x32B6F4u, 0x32B6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B6FCu;
label_32b6fc:
    // 0x32b6fc: 0xc0cf9ac  jal         func_33E6B0
    ctx->pc = 0x32B6FCu;
    SET_GPR_U32(ctx, 31, 0x32B704u);
    ctx->pc = 0x32B700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B6FCu;
    // 0x32b700: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32B6FCu, 0x32B704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B704u;
label_32b704:
    // 0x32b704: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32b704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32b708: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32b708u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b70c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32b70cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b710: 0x3e00008  jr          $ra
    ctx->pc = 0x32B710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B710u;
        // 0x32b714: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B718u;
}
