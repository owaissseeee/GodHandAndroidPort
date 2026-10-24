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

// Function: ResetChannelPairFields_37B5E0
// Address: 0x37b5e0 - 0x37b620
void ResetChannelPairFields_37B5E0_0x37b5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetChannelPairFields_37B5E0_0x37b5e0");
#endif

    switch (ctx->pc) {
        case 0x37b5fcu: goto label_37b5fc;
        case 0x37b608u: goto label_37b608;
        default: break;
    }

    ctx->pc = 0x37b5e0u;

    // 0x37b5e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37b5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37b5e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37b5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37b5e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37b5e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b5ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b5f0: 0x2605016c  addiu       $a1, $s0, 0x16C
    ctx->pc = 0x37b5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 364));
    // 0x37b5f4: 0xc0dd260  jal         func_374980
    ctx->pc = 0x37B5F4u;
    SET_GPR_U32(ctx, 31, 0x37B5FCu);
    ctx->pc = 0x37B5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B5F4u;
    // 0x37b5f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374980u, 0x37B5F4u, 0x37B5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B5FCu;
label_37b5fc:
    // 0x37b5fc: 0x2605018c  addiu       $a1, $s0, 0x18C
    ctx->pc = 0x37b5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 396));
    // 0x37b600: 0xc0dd260  jal         func_374980
    ctx->pc = 0x37B600u;
    SET_GPR_U32(ctx, 31, 0x37B608u);
    ctx->pc = 0x37B604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B600u;
    // 0x37b604: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374980u, 0x37B600u, 0x37B608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B608u;
label_37b608:
    // 0x37b608: 0xa2000029  sb          $zero, 0x29($s0)
    ctx->pc = 0x37b608u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x37b60c: 0xa2000028  sb          $zero, 0x28($s0)
    ctx->pc = 0x37b60cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x37b610: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37b610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b618: 0x3e00008  jr          $ra
    ctx->pc = 0x37B618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B618u;
        // 0x37b61c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B620u;
}
