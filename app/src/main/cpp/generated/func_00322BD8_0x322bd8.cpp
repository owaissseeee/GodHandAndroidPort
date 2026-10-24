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

// Function: func_00322BD8
// Address: 0x322bd8 - 0x322c18
void func_00322BD8_0x322bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00322BD8_0x322bd8");
#endif

    switch (ctx->pc) {
        case 0x322c08u: goto label_322c08;
        default: break;
    }

    ctx->pc = 0x322bd8u;

    // 0x322bd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x322bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x322bdc: 0x3c0a000f  lui         $t2, 0xF
    ctx->pc = 0x322bdcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15 << 16));
    // 0x322be0: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x322be0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322be4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x322be4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322be8: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x322be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x322bec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x322becu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322bf0: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x322bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x322bf4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x322bf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322bf8: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x322bf8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x322bfc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x322bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x322c00: 0xc0c8b1a  jal         func_322C68
    ctx->pc = 0x322C00u;
    SET_GPR_U32(ctx, 31, 0x322C08u);
    ctx->pc = 0x322C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322C00u;
    // 0x322c04: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322C68u, 0x322C00u, 0x322C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322C08u;
label_322c08:
    // 0x322c08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x322c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x322c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x322C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C0Cu;
        // 0x322c10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322C14u;
    // 0x322c14: 0x0  nop
    ctx->pc = 0x322c14u;
    // NOP
    ctx->pc = 0x322c18u;
}
