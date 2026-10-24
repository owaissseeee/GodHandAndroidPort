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

// Function: func_003465B8
// Address: 0x3465b8 - 0x3465e8
void func_003465B8_0x3465b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003465B8_0x3465b8");
#endif

    switch (ctx->pc) {
        case 0x3465d8u: goto label_3465d8;
        default: break;
    }

    ctx->pc = 0x3465b8u;

    // 0x3465b8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3465b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3465bc: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x3465bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x3465c0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3465c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3465c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3465c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3465c8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3465c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3465cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3465ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3465d0: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3465D0u;
    SET_GPR_U32(ctx, 31, 0x3465D8u);
    ctx->pc = 0x3465D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3465D0u;
    // 0x3465d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3465D0u, 0x3465D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3465D8u;
label_3465d8:
    // 0x3465d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3465d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3465dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3465dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3465e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3465E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3465E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3465E0u;
        // 0x3465e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3465E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3465E8u;
}
