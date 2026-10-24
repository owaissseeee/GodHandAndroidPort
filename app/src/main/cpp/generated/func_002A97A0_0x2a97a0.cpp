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

// Function: func_002A97A0
// Address: 0x2a97a0 - 0x2a9800
void func_002A97A0_0x2a97a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A97A0_0x2a97a0");
#endif

    ctx->pc = 0x2a97a0u;

    // 0x2a97a0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2a97a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2a97a4: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2a97a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x2a97a8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x2a97a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x2a97ac: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2a97acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2a97b0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A97B0u;
    {
        const bool branch_taken_0x2a97b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a97b0) {
            ctx->pc = 0x2A97C4u;
            goto label_2a97c4;
        }
    }
    ctx->pc = 0x2A97B8u;
    // 0x2a97b8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2a97b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2a97bc: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A97BCu;
    {
        const bool branch_taken_0x2a97bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a97bc) {
            ctx->pc = 0x2A97C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A97BCu;
            // 0x2a97c0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A97CCu;
            goto label_2a97cc;
        }
    }
    ctx->pc = 0x2A97C4u;
label_2a97c4:
    // 0x2a97c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A97C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A97C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A97C4u;
        // 0x2a97c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A97C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A97CCu;
label_2a97cc:
    // 0x2a97cc: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x2a97ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x2a97d0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2a97d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a97d4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A97D4u;
    {
        const bool branch_taken_0x2a97d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a97d4) {
            ctx->pc = 0x2A97D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A97D4u;
            // 0x2a97d8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A97DCu;
            goto label_2a97dc;
        }
    }
    ctx->pc = 0x2A97DCu;
label_2a97dc:
    // 0x2a97dc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2a97dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2a97e0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2a97e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2a97e4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A97E4u;
    {
        const bool branch_taken_0x2a97e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A97E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A97E4u;
        // 0x2a97e8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a97e4) {
            ctx->pc = 0x2A97F0u;
            goto label_2a97f0;
        }
    }
    ctx->pc = 0x2A97ECu;
    // 0x2a97ec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a97ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a97f0:
    // 0x2a97f0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a97f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a97f4: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2a97f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x2a97f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A97F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A97FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A97F8u;
        // 0x2a97fc: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A97F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9800u;
}
