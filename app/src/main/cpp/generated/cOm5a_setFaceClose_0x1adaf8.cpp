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

// Function: cOm5a_setFaceClose
// Address: 0x1adaf8 - 0x1adb30
void cOm5a_setFaceClose_0x1adaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOm5a_setFaceClose_0x1adaf8");
#endif

    switch (ctx->pc) {
        case 0x1adb20u: goto label_1adb20;
        default: break;
    }

    ctx->pc = 0x1adaf8u;

    // 0x1adaf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1adaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1adafc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1adafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1adb00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1adb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1adb04: 0xac820608  sw          $v0, 0x608($a0)
    ctx->pc = 0x1adb04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1544), GPR_U32(ctx, 2));
    // 0x1adb08: 0x8c830624  lw          $v1, 0x624($a0)
    ctx->pc = 0x1adb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1572)));
    // 0x1adb0c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ADB0Cu;
    {
        const bool branch_taken_0x1adb0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADB0Cu;
        // 0x1adb10: 0xac800604  sw          $zero, 0x604($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1540), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adb0c) {
            ctx->pc = 0x1ADB20u;
            goto label_1adb20;
        }
    }
    ctx->pc = 0x1ADB14u;
    // 0x1adb14: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1adb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb18: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1ADB18u;
    SET_GPR_U32(ctx, 31, 0x1ADB20u);
    ctx->pc = 0x1ADB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADB18u;
    // 0x1adb1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1ADB18u, 0x1ADB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADB20u;
label_1adb20:
    // 0x1adb20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1adb20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adb24: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADB24u;
        // 0x1adb28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADB2Cu;
    // 0x1adb2c: 0x0  nop
    ctx->pc = 0x1adb2cu;
    // NOP
    ctx->pc = 0x1adb30u;
}
