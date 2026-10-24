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

// Function: func_003281C8
// Address: 0x3281c8 - 0x328200
void func_003281C8_0x3281c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003281C8_0x3281c8");
#endif

    switch (ctx->pc) {
        case 0x3281dcu: goto label_3281dc;
        case 0x3281e4u: goto label_3281e4;
        case 0x3281ecu: goto label_3281ec;
        default: break;
    }

    ctx->pc = 0x3281c8u;

    // 0x3281c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3281c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3281cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3281ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3281d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3281d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3281d4: 0xc0ca41c  jal         func_329070
    ctx->pc = 0x3281D4u;
    SET_GPR_U32(ctx, 31, 0x3281DCu);
    ctx->pc = 0x3281D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3281D4u;
    // 0x3281d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329070u, 0x3281D4u, 0x3281DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3281DCu;
label_3281dc:
    // 0x3281dc: 0xc0ca080  jal         func_328200
    ctx->pc = 0x3281DCu;
    SET_GPR_U32(ctx, 31, 0x3281E4u);
    ctx->pc = 0x3281E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3281DCu;
    // 0x3281e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328200u, 0x3281DCu, 0x3281E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3281E4u;
label_3281e4:
    // 0x3281e4: 0xc0ca422  jal         func_329088
    ctx->pc = 0x3281E4u;
    SET_GPR_U32(ctx, 31, 0x3281ECu);
    ctx->pc = 0x3281E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3281E4u;
    // 0x3281e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329088u, 0x3281E4u, 0x3281ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3281ECu;
label_3281ec:
    // 0x3281ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3281ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3281f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3281f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3281f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3281f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3281f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3281F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3281FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281F8u;
        // 0x3281fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3281F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328200u;
}
