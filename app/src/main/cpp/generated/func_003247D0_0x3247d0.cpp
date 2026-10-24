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

// Function: func_003247D0
// Address: 0x3247d0 - 0x324808
void func_003247D0_0x3247d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003247D0_0x3247d0");
#endif

    switch (ctx->pc) {
        case 0x3247e4u: goto label_3247e4;
        case 0x3247ecu: goto label_3247ec;
        case 0x3247f4u: goto label_3247f4;
        default: break;
    }

    ctx->pc = 0x3247d0u;

    // 0x3247d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3247d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3247d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3247d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3247d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3247d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3247dc: 0xc0c9220  jal         func_324880
    ctx->pc = 0x3247DCu;
    SET_GPR_U32(ctx, 31, 0x3247E4u);
    ctx->pc = 0x3247E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3247DCu;
    // 0x3247e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324880u, 0x3247DCu, 0x3247E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3247E4u;
label_3247e4:
    // 0x3247e4: 0xc0c9202  jal         func_324808
    ctx->pc = 0x3247E4u;
    SET_GPR_U32(ctx, 31, 0x3247ECu);
    ctx->pc = 0x3247E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3247E4u;
    // 0x3247e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324808u, 0x3247E4u, 0x3247ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3247ECu;
label_3247ec:
    // 0x3247ec: 0xc0c9226  jal         func_324898
    ctx->pc = 0x3247ECu;
    SET_GPR_U32(ctx, 31, 0x3247F4u);
    ctx->pc = 0x3247F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3247ECu;
    // 0x3247f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324898u, 0x3247ECu, 0x3247F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3247F4u;
label_3247f4:
    // 0x3247f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3247f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3247f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3247f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3247fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3247fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324800: 0x3e00008  jr          $ra
    ctx->pc = 0x324800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324800u;
        // 0x324804: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324808u;
}
