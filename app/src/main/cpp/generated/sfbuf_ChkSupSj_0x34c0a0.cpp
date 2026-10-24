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

// Function: sfbuf_ChkSupSj
// Address: 0x34c0a0 - 0x34c0e8
void sfbuf_ChkSupSj_0x34c0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfbuf_ChkSupSj_0x34c0a0");
#endif

    ctx->pc = 0x34c0a0u;

    // 0x34c0a0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x34c0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x34c0a4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x34C0A4u;
    {
        const bool branch_taken_0x34c0a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C0A4u;
        // 0x34c0a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c0a4) {
            ctx->pc = 0x34C0DCu;
            goto label_34c0dc;
        }
    }
    ctx->pc = 0x34C0ACu;
    // 0x34c0ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x34c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34c0b0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x34C0B0u;
    {
        const bool branch_taken_0x34c0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34C0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C0B0u;
        // 0x34c0b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c0b0) {
            ctx->pc = 0x34C0DCu;
            goto label_34c0dc;
        }
    }
    ctx->pc = 0x34C0B8u;
    // 0x34c0b8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x34c0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x34c0bc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x34C0BCu;
    {
        const bool branch_taken_0x34c0bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C0BCu;
        // 0x34c0c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c0bc) {
            ctx->pc = 0x34C0DCu;
            goto label_34c0dc;
        }
    }
    ctx->pc = 0x34C0C4u;
    // 0x34c0c4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34c0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34c0c8: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34C0C8u;
    {
        const bool branch_taken_0x34c0c8 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x34c0c8) {
            ctx->pc = 0x34C0DCu;
            goto label_34c0dc;
        }
    }
    ctx->pc = 0x34C0D0u;
    // 0x34c0d0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x34c0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x34c0d4: 0x58600001  blezl       $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x34C0D4u;
    {
        const bool branch_taken_0x34c0d4 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x34c0d4) {
            ctx->pc = 0x34C0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34C0D4u;
            // 0x34c0d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34C0DCu;
            goto label_34c0dc;
        }
    }
    ctx->pc = 0x34C0DCu;
label_34c0dc:
    // 0x34c0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x34C0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34C0E4u;
    // 0x34c0e4: 0x0  nop
    ctx->pc = 0x34c0e4u;
    // NOP
    ctx->pc = 0x34c0e8u;
}
