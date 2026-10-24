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

// Function: func_002D05D8
// Address: 0x2d05d8 - 0x2d0630
void func_002D05D8_0x2d05d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D05D8_0x2d05d8");
#endif

    ctx->pc = 0x2d05d8u;

    // 0x2d05d8: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x2d05d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2d05dc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D05DCu;
    {
        const bool branch_taken_0x2d05dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d05dc) {
            ctx->pc = 0x2D05E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D05DCu;
            // 0x2d05e0: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D05ECu;
            goto label_2d05ec;
        }
    }
    ctx->pc = 0x2D05E4u;
    // 0x2d05e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D05E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D05E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D05E4u;
        // 0x2d05e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D05E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D05ECu;
label_2d05ec:
    // 0x2d05ec: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2d05ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2d05f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d05f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d05f4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2d05f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2d05f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D05F8u;
    {
        const bool branch_taken_0x2d05f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D05FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D05F8u;
        // 0x2d05fc: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d05f8) {
            ctx->pc = 0x2D061Cu;
            goto label_2d061c;
        }
    }
    ctx->pc = 0x2D0600u;
    // 0x2d0600: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2d0600u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2d0604: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d0604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d0608: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x2d0608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2d060c: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x2d060cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d0610: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2d0610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d0614: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0614u;
        // 0x2d0618: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D061Cu;
label_2d061c:
    // 0x2d061c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D061Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D061Cu;
        // 0x2d0620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D061Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0624u;
    // 0x2d0624: 0x0  nop
    ctx->pc = 0x2d0624u;
    // NOP
    // 0x2d0628: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d0628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d062c: 0x0  nop
    ctx->pc = 0x2d062cu;
    // NOP
    ctx->pc = 0x2d0630u;
}
