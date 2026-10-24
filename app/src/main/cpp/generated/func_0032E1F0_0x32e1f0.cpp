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

// Function: func_0032E1F0
// Address: 0x32e1f0 - 0x32e228
void func_0032E1F0_0x32e1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032E1F0_0x32e1f0");
#endif

    switch (ctx->pc) {
        case 0x32e204u: goto label_32e204;
        case 0x32e20cu: goto label_32e20c;
        case 0x32e214u: goto label_32e214;
        default: break;
    }

    ctx->pc = 0x32e1f0u;

    // 0x32e1f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32e1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32e1f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32e1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32e1f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32e1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32e1fc: 0xc0cff28  jal         func_33FCA0
    ctx->pc = 0x32E1FCu;
    SET_GPR_U32(ctx, 31, 0x32E204u);
    ctx->pc = 0x32E200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E1FCu;
    // 0x32e200: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA0u, 0x32E1FCu, 0x32E204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E204u;
label_32e204:
    // 0x32e204: 0xc0cb88a  jal         func_32E228
    ctx->pc = 0x32E204u;
    SET_GPR_U32(ctx, 31, 0x32E20Cu);
    ctx->pc = 0x32E208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E204u;
    // 0x32e208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E228u, 0x32E204u, 0x32E20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E20Cu;
label_32e20c:
    // 0x32e20c: 0xc0cff2a  jal         func_33FCA8
    ctx->pc = 0x32E20Cu;
    SET_GPR_U32(ctx, 31, 0x32E214u);
    ctx->pc = 0x32E210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E20Cu;
    // 0x32e210: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA8u, 0x32E20Cu, 0x32E214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E214u;
label_32e214:
    // 0x32e214: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32e214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32e218: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32e218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e21c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32e21cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e220: 0x3e00008  jr          $ra
    ctx->pc = 0x32E220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E220u;
        // 0x32e224: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E228u;
}
