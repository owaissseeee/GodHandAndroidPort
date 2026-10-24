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

// Function: SFTIM_IsStagnant
// Address: 0x35a8a8 - 0x35a8e8
void SFTIM_IsStagnant_0x35a8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFTIM_IsStagnant_0x35a8a8");
#endif

    switch (ctx->pc) {
        case 0x35a8bcu: goto label_35a8bc;
        case 0x35a8d0u: goto label_35a8d0;
        default: break;
    }

    ctx->pc = 0x35a8a8u;

    // 0x35a8a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35a8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35a8ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a8b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35a8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35a8b4: 0xc0d6a3a  jal         func_35A8E8
    ctx->pc = 0x35A8B4u;
    SET_GPR_U32(ctx, 31, 0x35A8BCu);
    ctx->pc = 0x35A8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A8B4u;
    // 0x35a8b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A8E8u, 0x35A8B4u, 0x35A8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A8BCu;
label_35a8bc:
    // 0x35a8bc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x35a8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x35a8c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35A8C0u;
    {
        const bool branch_taken_0x35a8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A8C0u;
        // 0x35a8c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a8c0) {
            ctx->pc = 0x35A8D4u;
            goto label_35a8d4;
        }
    }
    ctx->pc = 0x35A8C8u;
    // 0x35a8c8: 0xc0d375c  jal         func_34DD70
    ctx->pc = 0x35A8C8u;
    SET_GPR_U32(ctx, 31, 0x35A8D0u);
    ctx->pc = 0x35A8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A8C8u;
    // 0x35a8cc: 0x34a50222  ori         $a1, $a1, 0x222 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)546);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x35A8C8u, 0x35A8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A8D0u;
label_35a8d0:
    // 0x35a8d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35a8d4:
    // 0x35a8d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a8d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a8d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35a8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x35A8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A8DCu;
        // 0x35a8e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A8E4u;
    // 0x35a8e4: 0x0  nop
    ctx->pc = 0x35a8e4u;
    // NOP
    ctx->pc = 0x35a8e8u;
}
