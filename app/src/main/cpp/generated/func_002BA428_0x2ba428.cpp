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

// Function: func_002BA428
// Address: 0x2ba428 - 0x2ba458
void func_002BA428_0x2ba428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BA428_0x2ba428");
#endif

    switch (ctx->pc) {
        case 0x2ba44cu: goto label_2ba44c;
        default: break;
    }

    ctx->pc = 0x2ba428u;

    // 0x2ba428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ba428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ba42c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ba42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ba430: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BA430u;
    {
        const bool branch_taken_0x2ba430 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BA434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA430u;
        // 0x2ba434: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba430) {
            ctx->pc = 0x2BA44Cu;
            goto label_2ba44c;
        }
    }
    ctx->pc = 0x2BA438u;
    // 0x2ba438: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BA438u;
    {
        const bool branch_taken_0x2ba438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA438u;
        // 0x2ba43c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba438) {
            ctx->pc = 0x2BA450u;
            goto label_2ba450;
        }
    }
    ctx->pc = 0x2BA440u;
    // 0x2ba440: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x2ba440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x2ba444: 0xc0ae2b8  jal         func_2B8AE0
    ctx->pc = 0x2BA444u;
    SET_GPR_U32(ctx, 31, 0x2BA44Cu);
    ctx->pc = 0x2BA448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA444u;
    // 0x2ba448: 0x24848040  addiu       $a0, $a0, -0x7FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8AE0u, 0x2BA444u, 0x2BA44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA44Cu;
label_2ba44c:
    // 0x2ba44c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ba44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ba450:
    // 0x2ba450: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA450u;
        // 0x2ba454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA458u;
}
