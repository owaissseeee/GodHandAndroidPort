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

// Function: RegisterScrollLayerHooks
// Address: 0x2987b0 - 0x2987f8
void RegisterScrollLayerHooks_0x2987b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RegisterScrollLayerHooks_0x2987b0");
#endif

    switch (ctx->pc) {
        case 0x2987d4u: goto label_2987d4;
        case 0x2987e4u: goto label_2987e4;
        default: break;
    }

    ctx->pc = 0x2987b0u;

    // 0x2987b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2987b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2987b4: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2987b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x2987b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2987b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2987bc: 0x24a587f8  addiu       $a1, $a1, -0x7808
    ctx->pc = 0x2987bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936568));
    // 0x2987c0: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x2987c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x2987c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2987c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2987c8: 0x26106af0  addiu       $s0, $s0, 0x6AF0
    ctx->pc = 0x2987c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27376));
    // 0x2987cc: 0xc0a5ec8  jal         func_297B20
    ctx->pc = 0x2987CCu;
    SET_GPR_U32(ctx, 31, 0x2987D4u);
    ctx->pc = 0x2987D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2987CCu;
    // 0x2987d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B20u, 0x2987CCu, 0x2987D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2987D4u;
label_2987d4:
    // 0x2987d4: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2987d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x2987d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2987d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2987dc: 0xc0a5ed0  jal         func_297B40
    ctx->pc = 0x2987DCu;
    SET_GPR_U32(ctx, 31, 0x2987E4u);
    ctx->pc = 0x2987E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2987DCu;
    // 0x2987e0: 0x24a588a8  addiu       $a1, $a1, -0x7758 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B40u, 0x2987DCu, 0x2987E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2987E4u;
label_2987e4:
    // 0x2987e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2987e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2987e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2987e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2987ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2987ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2987F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2987ECu;
        // 0x2987f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2987ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2987F4u;
    // 0x2987f4: 0x0  nop
    ctx->pc = 0x2987f4u;
    // NOP
    ctx->pc = 0x2987f8u;
}
