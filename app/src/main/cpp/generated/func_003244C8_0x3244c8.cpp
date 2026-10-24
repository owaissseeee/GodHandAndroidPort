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

// Function: func_003244C8
// Address: 0x3244c8 - 0x324500
void func_003244C8_0x3244c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003244C8_0x3244c8");
#endif

    switch (ctx->pc) {
        case 0x3244dcu: goto label_3244dc;
        case 0x3244e4u: goto label_3244e4;
        case 0x3244ecu: goto label_3244ec;
        default: break;
    }

    ctx->pc = 0x3244c8u;

    // 0x3244c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3244c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3244cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3244ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3244d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3244d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3244d4: 0xc0c9220  jal         func_324880
    ctx->pc = 0x3244D4u;
    SET_GPR_U32(ctx, 31, 0x3244DCu);
    ctx->pc = 0x3244D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3244D4u;
    // 0x3244d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324880u, 0x3244D4u, 0x3244DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3244DCu;
label_3244dc:
    // 0x3244dc: 0xc0c9140  jal         func_324500
    ctx->pc = 0x3244DCu;
    SET_GPR_U32(ctx, 31, 0x3244E4u);
    ctx->pc = 0x3244E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3244DCu;
    // 0x3244e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324500u, 0x3244DCu, 0x3244E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3244E4u;
label_3244e4:
    // 0x3244e4: 0xc0c9226  jal         func_324898
    ctx->pc = 0x3244E4u;
    SET_GPR_U32(ctx, 31, 0x3244ECu);
    ctx->pc = 0x3244E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3244E4u;
    // 0x3244e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324898u, 0x3244E4u, 0x3244ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3244ECu;
label_3244ec:
    // 0x3244ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3244ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3244f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3244f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3244f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3244f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3244f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3244F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3244FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3244F8u;
        // 0x3244fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3244F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324500u;
}
