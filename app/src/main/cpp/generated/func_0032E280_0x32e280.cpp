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

// Function: func_0032E280
// Address: 0x32e280 - 0x32e2b8
void func_0032E280_0x32e280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032E280_0x32e280");
#endif

    switch (ctx->pc) {
        case 0x32e294u: goto label_32e294;
        case 0x32e29cu: goto label_32e29c;
        case 0x32e2a4u: goto label_32e2a4;
        default: break;
    }

    ctx->pc = 0x32e280u;

    // 0x32e280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32e280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32e284: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32e284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32e288: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32e288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32e28c: 0xc0cff28  jal         func_33FCA0
    ctx->pc = 0x32E28Cu;
    SET_GPR_U32(ctx, 31, 0x32E294u);
    ctx->pc = 0x32E290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E28Cu;
    // 0x32e290: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA0u, 0x32E28Cu, 0x32E294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E294u;
label_32e294:
    // 0x32e294: 0xc0cb8ae  jal         func_32E2B8
    ctx->pc = 0x32E294u;
    SET_GPR_U32(ctx, 31, 0x32E29Cu);
    ctx->pc = 0x32E298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E294u;
    // 0x32e298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E2B8u, 0x32E294u, 0x32E29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E29Cu;
label_32e29c:
    // 0x32e29c: 0xc0cff2a  jal         func_33FCA8
    ctx->pc = 0x32E29Cu;
    SET_GPR_U32(ctx, 31, 0x32E2A4u);
    ctx->pc = 0x32E2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E29Cu;
    // 0x32e2a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA8u, 0x32E29Cu, 0x32E2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E2A4u;
label_32e2a4:
    // 0x32e2a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32e2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32e2a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32e2a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e2ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32e2acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x32E2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E2B0u;
        // 0x32e2b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E2B8u;
}
