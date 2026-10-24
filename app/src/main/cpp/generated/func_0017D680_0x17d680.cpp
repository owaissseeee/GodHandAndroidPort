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

// Function: func_0017D680
// Address: 0x17d680 - 0x17d6b0
void func_0017D680_0x17d680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017D680_0x17d680");
#endif

    switch (ctx->pc) {
        case 0x17d694u: goto label_17d694;
        case 0x17d69cu: goto label_17d69c;
        default: break;
    }

    ctx->pc = 0x17d680u;

    // 0x17d680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17d680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17d684: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17d684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17d688: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17d688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d68c: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x17D68Cu;
    SET_GPR_U32(ctx, 31, 0x17D694u);
    ctx->pc = 0x17D690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D68Cu;
    // 0x17d690: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x17D68Cu, 0x17D694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D694u;
label_17d694:
    // 0x17d694: 0xc05f72e  jal         func_17DCB8
    ctx->pc = 0x17D694u;
    SET_GPR_U32(ctx, 31, 0x17D69Cu);
    ctx->pc = 0x17D698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D694u;
    // 0x17d698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DCB8u, 0x17D694u, 0x17D69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D69Cu;
label_17d69c:
    // 0x17d69c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17d69cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d6a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d6a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x17D6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D6A8u;
        // 0x17d6ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D6B0u;
}
