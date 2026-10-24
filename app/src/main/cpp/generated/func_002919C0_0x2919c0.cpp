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

// Function: func_002919C0
// Address: 0x2919c0 - 0x2919f8
void func_002919C0_0x2919c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002919C0_0x2919c0");
#endif

    switch (ctx->pc) {
        case 0x2919d0u: goto label_2919d0;
        default: break;
    }

    ctx->pc = 0x2919c0u;

    // 0x2919c0: 0x8c840500  lw          $a0, 0x500($a0)
    ctx->pc = 0x2919c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1280)));
    // 0x2919c4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2919C4u;
    {
        const bool branch_taken_0x2919c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2919C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2919C4u;
        // 0x2919c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2919c4) {
            ctx->pc = 0x2919F0u;
            goto label_2919f0;
        }
    }
    ctx->pc = 0x2919CCu;
    // 0x2919cc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2919ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2919d0:
    // 0x2919d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2919D0u;
    {
        const bool branch_taken_0x2919d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2919D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2919D0u;
        // 0x2919d4: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2919d0) {
            ctx->pc = 0x2919E4u;
            goto label_2919e4;
        }
    }
    ctx->pc = 0x2919D8u;
    // 0x2919d8: 0x8c420564  lw          $v0, 0x564($v0)
    ctx->pc = 0x2919d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1380)));
    // 0x2919dc: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x2919dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x2919e0: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2919e0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_2919e4:
    // 0x2919e4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2919e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2919e8: 0x5480fff9  bnel        $a0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2919E8u;
    {
        const bool branch_taken_0x2919e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2919e8) {
            ctx->pc = 0x2919ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2919E8u;
            // 0x2919ec: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2919D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2919d0;
        }
    }
    ctx->pc = 0x2919F0u;
label_2919f0:
    // 0x2919f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2919F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2919F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2919F0u;
        // 0x2919f4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2919F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2919F8u;
}
