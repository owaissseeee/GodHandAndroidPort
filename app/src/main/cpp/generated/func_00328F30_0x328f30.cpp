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

// Function: func_00328F30
// Address: 0x328f30 - 0x328f68
void func_00328F30_0x328f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00328F30_0x328f30");
#endif

    switch (ctx->pc) {
        case 0x328f44u: goto label_328f44;
        case 0x328f4cu: goto label_328f4c;
        case 0x328f54u: goto label_328f54;
        default: break;
    }

    ctx->pc = 0x328f30u;

    // 0x328f30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x328f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x328f34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x328f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x328f38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x328f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x328f3c: 0xc0ca41c  jal         func_329070
    ctx->pc = 0x328F3Cu;
    SET_GPR_U32(ctx, 31, 0x328F44u);
    ctx->pc = 0x328F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328F3Cu;
    // 0x328f40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329070u, 0x328F3Cu, 0x328F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328F44u;
label_328f44:
    // 0x328f44: 0xc0ca3da  jal         func_328F68
    ctx->pc = 0x328F44u;
    SET_GPR_U32(ctx, 31, 0x328F4Cu);
    ctx->pc = 0x328F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328F44u;
    // 0x328f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328F68u, 0x328F44u, 0x328F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328F4Cu;
label_328f4c:
    // 0x328f4c: 0xc0ca422  jal         func_329088
    ctx->pc = 0x328F4Cu;
    SET_GPR_U32(ctx, 31, 0x328F54u);
    ctx->pc = 0x328F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328F4Cu;
    // 0x328f50: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329088u, 0x328F4Cu, 0x328F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328F54u;
label_328f54:
    // 0x328f54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x328f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x328f58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x328f58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328f5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x328f5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328f60: 0x3e00008  jr          $ra
    ctx->pc = 0x328F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F60u;
        // 0x328f64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328F68u;
}
