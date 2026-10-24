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

// Function: func_002A71B0
// Address: 0x2a71b0 - 0x2a71f0
void func_002A71B0_0x2a71b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A71B0_0x2a71b0");
#endif

    switch (ctx->pc) {
        case 0x2a71d8u: goto label_2a71d8;
        default: break;
    }

    ctx->pc = 0x2a71b0u;

    // 0x2a71b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a71b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a71b4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2a71b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2a71b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a71b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a71bc: 0x24a5add8  addiu       $a1, $a1, -0x5228
    ctx->pc = 0x2a71bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946264));
    // 0x2a71c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a71c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a71c4: 0x3c100074  lui         $s0, 0x74
    ctx->pc = 0x2a71c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    // 0x2a71c8: 0x261074a0  addiu       $s0, $s0, 0x74A0
    ctx->pc = 0x2a71c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29856));
    // 0x2a71cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a71ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a71d0: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2A71D0u;
    SET_GPR_U32(ctx, 31, 0x2A71D8u);
    ctx->pc = 0x2A71D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A71D0u;
    // 0x2a71d4: 0x8e0405ac  lw          $a0, 0x5AC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1452)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2A71D0u, 0x2A71D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A71D8u;
label_2a71d8:
    // 0x2a71d8: 0xae020608  sw          $v0, 0x608($s0)
    ctx->pc = 0x2a71d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 2));
    // 0x2a71dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a71dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a71e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a71e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a71e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A71E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A71E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A71E4u;
        // 0x2a71e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A71E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A71ECu;
    // 0x2a71ec: 0x0  nop
    ctx->pc = 0x2a71ecu;
    // NOP
    ctx->pc = 0x2a71f0u;
}
