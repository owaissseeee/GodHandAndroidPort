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

// Function: func_0032D0C0
// Address: 0x32d0c0 - 0x32d0f8
void func_0032D0C0_0x32d0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032D0C0_0x32d0c0");
#endif

    switch (ctx->pc) {
        case 0x32d0d4u: goto label_32d0d4;
        case 0x32d0dcu: goto label_32d0dc;
        case 0x32d0e4u: goto label_32d0e4;
        default: break;
    }

    ctx->pc = 0x32d0c0u;

    // 0x32d0c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32d0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32d0c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32d0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32d0c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32d0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32d0cc: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x32D0CCu;
    SET_GPR_U32(ctx, 31, 0x32D0D4u);
    ctx->pc = 0x32D0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D0CCu;
    // 0x32d0d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32D0CCu, 0x32D0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D0D4u;
label_32d0d4:
    // 0x32d0d4: 0xc0cb43e  jal         func_32D0F8
    ctx->pc = 0x32D0D4u;
    SET_GPR_U32(ctx, 31, 0x32D0DCu);
    ctx->pc = 0x32D0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D0D4u;
    // 0x32d0d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D0F8u, 0x32D0D4u, 0x32D0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D0DCu;
label_32d0dc:
    // 0x32d0dc: 0xc0cf9ac  jal         func_33E6B0
    ctx->pc = 0x32D0DCu;
    SET_GPR_U32(ctx, 31, 0x32D0E4u);
    ctx->pc = 0x32D0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D0DCu;
    // 0x32d0e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32D0DCu, 0x32D0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D0E4u;
label_32d0e4:
    // 0x32d0e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32d0e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32d0e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32d0e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d0ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32d0ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d0f0: 0x3e00008  jr          $ra
    ctx->pc = 0x32D0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D0F0u;
        // 0x32d0f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D0F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D0F8u;
}
