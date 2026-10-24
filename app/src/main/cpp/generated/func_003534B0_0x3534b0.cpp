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

// Function: func_003534B0
// Address: 0x3534b0 - 0x353500
void func_003534B0_0x3534b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003534B0_0x3534b0");
#endif

    switch (ctx->pc) {
        case 0x3534f0u: goto label_3534f0;
        default: break;
    }

    ctx->pc = 0x3534b0u;

    // 0x3534b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3534b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3534b4: 0x248536b4  addiu       $a1, $a0, 0x36B4
    ctx->pc = 0x3534b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 14004));
    // 0x3534b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3534b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3534bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3534bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3534c0: 0x24830e48  addiu       $v1, $a0, 0xE48
    ctx->pc = 0x3534c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3656));
    // 0x3534c4: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x3534c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3534c8: 0x4c0000a  bltz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x3534C8u;
    {
        const bool branch_taken_0x3534c8 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x3534CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3534C8u;
        // 0x3534cc: 0x24880df0  addiu       $t0, $a0, 0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 3568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3534c8) {
            ctx->pc = 0x3534F4u;
            goto label_3534f4;
        }
    }
    ctx->pc = 0x3534D0u;
    // 0x3534d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3534d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3534d4: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3534D4u;
    {
        const bool branch_taken_0x3534d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3534d4) {
            ctx->pc = 0x3534D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3534D4u;
            // 0x3534d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3534F8u;
            goto label_3534f8;
        }
    }
    ctx->pc = 0x3534DCu;
    // 0x3534dc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3534dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3534e0: 0x8d060024  lw          $a2, 0x24($t0)
    ctx->pc = 0x3534e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x3534e4: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x3534e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3534e8: 0xc0d9a46  jal         func_366918
    ctx->pc = 0x3534E8u;
    SET_GPR_U32(ctx, 31, 0x3534F0u);
    ctx->pc = 0x3534ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3534E8u;
    // 0x3534ec: 0x8d070028  lw          $a3, 0x28($t0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366918u, 0x3534E8u, 0x3534F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3534F0u;
label_3534f0:
    // 0x3534f0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3534f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3534f4:
    // 0x3534f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3534f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3534f8:
    // 0x3534f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3534F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3534FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3534F8u;
        // 0x3534fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3534F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353500u;
}
