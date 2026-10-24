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

// Function: func_0032E310
// Address: 0x32e310 - 0x32e348
void func_0032E310_0x32e310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032E310_0x32e310");
#endif

    switch (ctx->pc) {
        case 0x32e324u: goto label_32e324;
        case 0x32e32cu: goto label_32e32c;
        case 0x32e334u: goto label_32e334;
        default: break;
    }

    ctx->pc = 0x32e310u;

    // 0x32e310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32e310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32e314: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32e314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32e318: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32e318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32e31c: 0xc0cff28  jal         func_33FCA0
    ctx->pc = 0x32E31Cu;
    SET_GPR_U32(ctx, 31, 0x32E324u);
    ctx->pc = 0x32E320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E31Cu;
    // 0x32e320: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA0u, 0x32E31Cu, 0x32E324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E324u;
label_32e324:
    // 0x32e324: 0xc0cb8d2  jal         func_32E348
    ctx->pc = 0x32E324u;
    SET_GPR_U32(ctx, 31, 0x32E32Cu);
    ctx->pc = 0x32E328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E324u;
    // 0x32e328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E348u, 0x32E324u, 0x32E32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E32Cu;
label_32e32c:
    // 0x32e32c: 0xc0cff2a  jal         func_33FCA8
    ctx->pc = 0x32E32Cu;
    SET_GPR_U32(ctx, 31, 0x32E334u);
    ctx->pc = 0x32E330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E32Cu;
    // 0x32e330: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA8u, 0x32E32Cu, 0x32E334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E334u;
label_32e334:
    // 0x32e334: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32e334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32e338: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32e338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e33c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32e33cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e340: 0x3e00008  jr          $ra
    ctx->pc = 0x32E340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E340u;
        // 0x32e344: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E348u;
}
