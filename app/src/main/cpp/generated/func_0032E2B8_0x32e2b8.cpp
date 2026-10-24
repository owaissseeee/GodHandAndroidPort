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

// Function: func_0032E2B8
// Address: 0x32e2b8 - 0x32e310
void func_0032E2B8_0x32e2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032E2B8_0x32e2b8");
#endif

    switch (ctx->pc) {
        case 0x32e2d0u: goto label_32e2d0;
        default: break;
    }

    ctx->pc = 0x32e2b8u;

    // 0x32e2b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32e2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32e2bc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32E2BCu;
    {
        const bool branch_taken_0x32e2bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x32E2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E2BCu;
        // 0x32e2c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e2bc) {
            ctx->pc = 0x32E2D8u;
            goto label_32e2d8;
        }
    }
    ctx->pc = 0x32E2C4u;
    // 0x32e2c4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32e2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32e2c8: 0xc0cff2c  jal         func_33FCB0
    ctx->pc = 0x32E2C8u;
    SET_GPR_U32(ctx, 31, 0x32E2D0u);
    ctx->pc = 0x32E2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E2C8u;
    // 0x32e2cc: 0x24842de8  addiu       $a0, $a0, 0x2DE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCB0u, 0x32E2C8u, 0x32E2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E2D0u;
label_32e2d0:
    // 0x32e2d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x32E2D0u;
    {
        const bool branch_taken_0x32e2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E2D0u;
        // 0x32e2d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e2d0) {
            ctx->pc = 0x32E300u;
            goto label_32e300;
        }
    }
    ctx->pc = 0x32E2D8u;
label_32e2d8:
    // 0x32e2d8: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x32e2d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x32e2dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32e2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32e2e0: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x32e2e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x32e2e4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x32E2E4u;
    {
        const bool branch_taken_0x32e2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e2e4) {
            ctx->pc = 0x32E2E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32E2E4u;
            // 0x32e2e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32E300u;
            goto label_32e300;
        }
    }
    ctx->pc = 0x32E2ECu;
    // 0x32e2ec: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x32e2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32e2f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32e2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e2f4: 0x80cbd3c  j           func_32F4F0
    ctx->pc = 0x32E2F4u;
    ctx->pc = 0x32E2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E2F4u;
    // 0x32e2f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F4F0u, 0x32E2F4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32E2FCu;
    // 0x32e2fc: 0x0  nop
    ctx->pc = 0x32e2fcu;
    // NOP
label_32e300:
    // 0x32e300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32e300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e304: 0x3e00008  jr          $ra
    ctx->pc = 0x32E304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E304u;
        // 0x32e308: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E30Cu;
    // 0x32e30c: 0x0  nop
    ctx->pc = 0x32e30cu;
    // NOP
    ctx->pc = 0x32e310u;
}
