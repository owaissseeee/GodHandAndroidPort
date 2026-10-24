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

// Function: func_00328D40
// Address: 0x328d40 - 0x328d78
void func_00328D40_0x328d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00328D40_0x328d40");
#endif

    switch (ctx->pc) {
        case 0x328d54u: goto label_328d54;
        case 0x328d5cu: goto label_328d5c;
        case 0x328d64u: goto label_328d64;
        default: break;
    }

    ctx->pc = 0x328d40u;

    // 0x328d40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x328d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x328d44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x328d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x328d48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x328d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x328d4c: 0xc0ca41c  jal         func_329070
    ctx->pc = 0x328D4Cu;
    SET_GPR_U32(ctx, 31, 0x328D54u);
    ctx->pc = 0x328D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328D4Cu;
    // 0x328d50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329070u, 0x328D4Cu, 0x328D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328D54u;
label_328d54:
    // 0x328d54: 0xc0ca35e  jal         func_328D78
    ctx->pc = 0x328D54u;
    SET_GPR_U32(ctx, 31, 0x328D5Cu);
    ctx->pc = 0x328D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328D54u;
    // 0x328d58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328D78u, 0x328D54u, 0x328D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328D5Cu;
label_328d5c:
    // 0x328d5c: 0xc0ca422  jal         func_329088
    ctx->pc = 0x328D5Cu;
    SET_GPR_U32(ctx, 31, 0x328D64u);
    ctx->pc = 0x328D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328D5Cu;
    // 0x328d60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329088u, 0x328D5Cu, 0x328D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328D64u;
label_328d64:
    // 0x328d64: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x328d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x328d68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x328d68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328d6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x328d6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328d70: 0x3e00008  jr          $ra
    ctx->pc = 0x328D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328D70u;
        // 0x328d74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328D78u;
}
