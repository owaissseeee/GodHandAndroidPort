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

// Function: func_00328098
// Address: 0x328098 - 0x3280d0
void func_00328098_0x328098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00328098_0x328098");
#endif

    switch (ctx->pc) {
        case 0x3280acu: goto label_3280ac;
        case 0x3280b4u: goto label_3280b4;
        case 0x3280bcu: goto label_3280bc;
        default: break;
    }

    ctx->pc = 0x328098u;

    // 0x328098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x328098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32809c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32809cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3280a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3280a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3280a4: 0xc0ca41c  jal         func_329070
    ctx->pc = 0x3280A4u;
    SET_GPR_U32(ctx, 31, 0x3280ACu);
    ctx->pc = 0x3280A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3280A4u;
    // 0x3280a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329070u, 0x3280A4u, 0x3280ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3280ACu;
label_3280ac:
    // 0x3280ac: 0xc0ca034  jal         func_3280D0
    ctx->pc = 0x3280ACu;
    SET_GPR_U32(ctx, 31, 0x3280B4u);
    ctx->pc = 0x3280B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3280ACu;
    // 0x3280b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3280D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3280D0u, 0x3280ACu, 0x3280B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3280B4u;
label_3280b4:
    // 0x3280b4: 0xc0ca422  jal         func_329088
    ctx->pc = 0x3280B4u;
    SET_GPR_U32(ctx, 31, 0x3280BCu);
    ctx->pc = 0x3280B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3280B4u;
    // 0x3280b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329088u, 0x3280B4u, 0x3280BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3280BCu;
label_3280bc:
    // 0x3280bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3280bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3280c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3280c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3280c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3280c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3280c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3280C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3280CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280C8u;
        // 0x3280cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3280C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3280D0u;
}
