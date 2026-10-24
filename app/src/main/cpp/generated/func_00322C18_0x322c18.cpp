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

// Function: func_00322C18
// Address: 0x322c18 - 0x322c68
void func_00322C18_0x322c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00322C18_0x322c18");
#endif

    switch (ctx->pc) {
        case 0x322c5cu: goto label_322c5c;
        default: break;
    }

    ctx->pc = 0x322c18u;

    // 0x322c18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x322c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x322c1c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x322c1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322c20: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x322c20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322c24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x322c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322c28: 0x3c0a000f  lui         $t2, 0xF
    ctx->pc = 0x322c28u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15 << 16));
    // 0x322c2c: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x322c2cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322c30: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x322c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x322c34: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x322c34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322c38: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x322c38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322c3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x322c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x322c40: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x322c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x322c44: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x322c44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322c48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x322c48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322c4c: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x322c4cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x322c50: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x322c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x322c54: 0xc0c8b1a  jal         func_322C68
    ctx->pc = 0x322C54u;
    SET_GPR_U32(ctx, 31, 0x322C5Cu);
    ctx->pc = 0x322C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322C54u;
    // 0x322c58: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322C68u, 0x322C54u, 0x322C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322C5Cu;
label_322c5c:
    // 0x322c5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x322c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x322c60: 0x3e00008  jr          $ra
    ctx->pc = 0x322C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C60u;
        // 0x322c64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322C68u;
}
