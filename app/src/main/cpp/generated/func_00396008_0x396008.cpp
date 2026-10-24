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

// Function: func_00396008
// Address: 0x396008 - 0x396048
void func_00396008_0x396008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00396008_0x396008");
#endif

    switch (ctx->pc) {
        case 0x396020u: goto label_396020;
        case 0x39602cu: goto label_39602c;
        default: break;
    }

    ctx->pc = 0x396008u;

    // 0x396008: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x396008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39600c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39600cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x396010: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x396010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x396014: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x396014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x396018: 0xc0ebff0  jal         func_3AFFC0
    ctx->pc = 0x396018u;
    SET_GPR_U32(ctx, 31, 0x396020u);
    ctx->pc = 0x39601Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396018u;
    // 0x39601c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFFC0u, 0x396018u, 0x396020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396020u;
label_396020:
    // 0x396020: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x396020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396024: 0xc0ebff8  jal         func_3AFFE0
    ctx->pc = 0x396024u;
    SET_GPR_U32(ctx, 31, 0x39602Cu);
    ctx->pc = 0x396028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396024u;
    // 0x396028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFFE0u, 0x396024u, 0x39602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39602Cu;
label_39602c:
    // 0x39602c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x39602cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396030: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x396030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x396034: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x396034u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x396038: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x396038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39603c: 0x3e00008  jr          $ra
    ctx->pc = 0x39603Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39603Cu;
        // 0x396040: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39603Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396044u;
    // 0x396044: 0x0  nop
    ctx->pc = 0x396044u;
    // NOP
    ctx->pc = 0x396048u;
}
