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

// Function: func_0032DCD0
// Address: 0x32dcd0 - 0x32dd18
void func_0032DCD0_0x32dcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032DCD0_0x32dcd0");
#endif

    switch (ctx->pc) {
        case 0x32dcecu: goto label_32dcec;
        case 0x32dcf8u: goto label_32dcf8;
        case 0x32dd00u: goto label_32dd00;
        default: break;
    }

    ctx->pc = 0x32dcd0u;

    // 0x32dcd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32dcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32dcd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32dcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32dcd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32dcd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dcdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32dcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32dce0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32dce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32dce4: 0xc0cff28  jal         func_33FCA0
    ctx->pc = 0x32DCE4u;
    SET_GPR_U32(ctx, 31, 0x32DCECu);
    ctx->pc = 0x32DCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DCE4u;
    // 0x32dce8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA0u, 0x32DCE4u, 0x32DCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DCECu;
label_32dcec:
    // 0x32dcec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32dcecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dcf0: 0xc0cb746  jal         func_32DD18
    ctx->pc = 0x32DCF0u;
    SET_GPR_U32(ctx, 31, 0x32DCF8u);
    ctx->pc = 0x32DCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DCF0u;
    // 0x32dcf4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DD18u, 0x32DCF0u, 0x32DCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DCF8u;
label_32dcf8:
    // 0x32dcf8: 0xc0cff2a  jal         func_33FCA8
    ctx->pc = 0x32DCF8u;
    SET_GPR_U32(ctx, 31, 0x32DD00u);
    ctx->pc = 0x32DCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DCF8u;
    // 0x32dcfc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA8u, 0x32DCF8u, 0x32DD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DD00u;
label_32dd00:
    // 0x32dd00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32dd00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32dd04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32dd04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dd08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32dd08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32dd0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32dd0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32dd10: 0x3e00008  jr          $ra
    ctx->pc = 0x32DD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DD10u;
        // 0x32dd14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DD18u;
}
