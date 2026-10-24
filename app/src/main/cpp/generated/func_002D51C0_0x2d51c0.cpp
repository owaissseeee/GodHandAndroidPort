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

// Function: func_002D51C0
// Address: 0x2d51c0 - 0x2d51f0
void func_002D51C0_0x2d51c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D51C0_0x2d51c0");
#endif

    switch (ctx->pc) {
        case 0x2d51e0u: goto label_2d51e0;
        default: break;
    }

    ctx->pc = 0x2d51c0u;

    // 0x2d51c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d51c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d51c4: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x2d51c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2d51c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d51c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d51cc: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x2d51ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d51d0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2d51d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d51d4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2d51d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d51d8: 0xc0b55e2  jal         func_2D5788
    ctx->pc = 0x2D51D8u;
    SET_GPR_U32(ctx, 31, 0x2D51E0u);
    ctx->pc = 0x2D51DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D51D8u;
    // 0x2d51dc: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5788u, 0x2D51D8u, 0x2D51E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D51E0u;
label_2d51e0:
    // 0x2d51e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d51e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d51e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D51E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D51E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D51E4u;
        // 0x2d51e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D51E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D51ECu;
    // 0x2d51ec: 0x0  nop
    ctx->pc = 0x2d51ecu;
    // NOP
    ctx->pc = 0x2d51f0u;
}
