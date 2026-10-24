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

// Function: cCoreSave_subGold
// Address: 0x1fa870 - 0x1fa8e0
void cCoreSave_subGold_0x1fa870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_subGold_0x1fa870");
#endif

    ctx->pc = 0x1fa870u;

    // 0x1fa870: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1fa870u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa874: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1fa874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1fa878: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1FA878u;
    {
        const bool branch_taken_0x1fa878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA878u;
        // 0x1fa87c: 0x3c06000f  lui         $a2, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa878) {
            ctx->pc = 0x1FA8D4u;
            goto label_1fa8d4;
        }
    }
    ctx->pc = 0x1FA880u;
    // 0x1fa880: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fa880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fa884: 0x34c6423f  ori         $a2, $a2, 0x423F
    ctx->pc = 0x1fa884u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16959);
    // 0x1fa888: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1fa888u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fa88c: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x1fa88cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x1fa890: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1fa890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1fa894: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fa894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fa898: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1fa898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fa89c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FA89Cu;
    {
        const bool branch_taken_0x1fa89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa89c) {
            ctx->pc = 0x1FA8A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA89Cu;
            // 0x1fa8a0: 0xac660020  sw          $a2, 0x20($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA8A4u;
            goto label_1fa8a4;
        }
    }
    ctx->pc = 0x1FA8A4u;
label_1fa8a4:
    // 0x1fa8a4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1fa8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1fa8a8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fa8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fa8ac: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FA8ACu;
    {
        const bool branch_taken_0x1fa8ac = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1fa8ac) {
            ctx->pc = 0x1FA8B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA8ACu;
            // 0x1fa8b0: 0xac600020  sw          $zero, 0x20($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA8B4u;
            goto label_1fa8b4;
        }
    }
    ctx->pc = 0x1FA8B4u;
label_1fa8b4:
    // 0x1fa8b4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1fa8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1fa8b8: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x1fa8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
    // 0x1fa8bc: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x1fa8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x1fa8c0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1fa8c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1fa8c4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA8C4u;
    {
        const bool branch_taken_0x1fa8c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa8c4) {
            ctx->pc = 0x1FA8D4u;
            goto label_1fa8d4;
        }
    }
    ctx->pc = 0x1FA8CCu;
    // 0x1fa8cc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1fa8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1fa8d0: 0xac460020  sw          $a2, 0x20($v0)
    ctx->pc = 0x1fa8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 6));
label_1fa8d4:
    // 0x1fa8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA8D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA8DCu;
    // 0x1fa8dc: 0x0  nop
    ctx->pc = 0x1fa8dcu;
    // NOP
    ctx->pc = 0x1fa8e0u;
}
