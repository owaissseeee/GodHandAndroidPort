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

// Function: func_001E7368
// Address: 0x1e7368 - 0x1e73c0
void func_001E7368_0x1e7368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E7368_0x1e7368");
#endif

    switch (ctx->pc) {
        case 0x1e7380u: goto label_1e7380;
        case 0x1e7388u: goto label_1e7388;
        case 0x1e73b0u: goto label_1e73b0;
        default: break;
    }

    ctx->pc = 0x1e7368u;

    // 0x1e7368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e736c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e736cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e7370: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e7370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7378: 0xc0aa81e  jal         func_2AA078
    ctx->pc = 0x1E7378u;
    SET_GPR_U32(ctx, 31, 0x1E7380u);
    ctx->pc = 0x1E737Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7378u;
    // 0x1e737c: 0x26040530  addiu       $a0, $s0, 0x530 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA078u, 0x1E7378u, 0x1E7380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7380u;
label_1e7380:
    // 0x1e7380: 0xc0aa81e  jal         func_2AA078
    ctx->pc = 0x1E7380u;
    SET_GPR_U32(ctx, 31, 0x1E7388u);
    ctx->pc = 0x1E7384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7380u;
    // 0x1e7384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA078u, 0x1E7380u, 0x1E7388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7388u;
label_1e7388:
    // 0x1e7388: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1e7388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x1e738c: 0x8c622384  lw          $v0, 0x2384($v1)
    ctx->pc = 0x1e738cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2384u));
    // 0x1e7390: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e7390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e7394: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x1e7394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x1e7398: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x1e7398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x1e739c: 0x8e050678  lw          $a1, 0x678($s0)
    ctx->pc = 0x1e739cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
    // 0x1e73a0: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E73A0u;
    {
        const bool branch_taken_0x1e73a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E73A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E73A0u;
        // 0x1e73a4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e73a0) {
            ctx->pc = 0x1E73B4u;
            goto label_1e73b4;
        }
    }
    ctx->pc = 0x1E73A8u;
    // 0x1e73a8: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x1E73A8u;
    SET_GPR_U32(ctx, 31, 0x1E73B0u);
    ctx->pc = 0x1E73ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E73A8u;
    // 0x1e73ac: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x1E73A8u, 0x1E73B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E73B0u;
label_1e73b0:
    // 0x1e73b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e73b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e73b4:
    // 0x1e73b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e73b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e73b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E73B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E73BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E73B8u;
        // 0x1e73bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E73B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E73C0u;
}
