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

// Function: func_001627A0
// Address: 0x1627a0 - 0x1627d8
void func_001627A0_0x1627a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001627A0_0x1627a0");
#endif

    switch (ctx->pc) {
        case 0x1627b4u: goto label_1627b4;
        default: break;
    }

    ctx->pc = 0x1627a0u;

    // 0x1627a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1627a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1627a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1627a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1627a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1627a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1627ac: 0xc058534  jal         func_1614D0
    ctx->pc = 0x1627ACu;
    SET_GPR_U32(ctx, 31, 0x1627B4u);
    ctx->pc = 0x1627B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1627ACu;
    // 0x1627b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1614D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1614D0u, 0x1627ACu, 0x1627B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1627B4u;
label_1627b4:
    // 0x1627b4: 0xa200005d  sb          $zero, 0x5D($s0)
    ctx->pc = 0x1627b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 0));
    // 0x1627b8: 0xa200005a  sb          $zero, 0x5A($s0)
    ctx->pc = 0x1627b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x1627bc: 0xa200005b  sb          $zero, 0x5B($s0)
    ctx->pc = 0x1627bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x1627c0: 0xa200005c  sb          $zero, 0x5C($s0)
    ctx->pc = 0x1627c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x1627c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1627c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1627c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1627c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1627cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1627CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1627D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1627CCu;
        // 0x1627d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1627CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1627D4u;
    // 0x1627d4: 0x0  nop
    ctx->pc = 0x1627d4u;
    // NOP
    ctx->pc = 0x1627d8u;
}
