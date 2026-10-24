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

// Function: func_00322B88
// Address: 0x322b88 - 0x322bd8
void func_00322B88_0x322b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00322B88_0x322b88");
#endif

    switch (ctx->pc) {
        case 0x322bc8u: goto label_322bc8;
        default: break;
    }

    ctx->pc = 0x322b88u;

    // 0x322b88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x322b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x322b8c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x322b8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322b90: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x322b90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322b94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x322b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322b98: 0x3c0a000f  lui         $t2, 0xF
    ctx->pc = 0x322b98u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15 << 16));
    // 0x322b9c: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x322b9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322ba0: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x322ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x322ba4: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x322ba4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322ba8: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x322ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x322bac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x322bacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322bb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x322bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322bb4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x322bb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322bb8: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x322bb8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x322bbc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x322bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x322bc0: 0xc0c8b1a  jal         func_322C68
    ctx->pc = 0x322BC0u;
    SET_GPR_U32(ctx, 31, 0x322BC8u);
    ctx->pc = 0x322BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322BC0u;
    // 0x322bc4: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322C68u, 0x322BC0u, 0x322BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322BC8u;
label_322bc8:
    // 0x322bc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x322bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x322bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x322BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322BCCu;
        // 0x322bd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322BD4u;
    // 0x322bd4: 0x0  nop
    ctx->pc = 0x322bd4u;
    // NOP
    ctx->pc = 0x322bd8u;
}
