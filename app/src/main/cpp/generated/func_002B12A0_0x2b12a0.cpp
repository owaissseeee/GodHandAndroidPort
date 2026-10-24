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

// Function: func_002B12A0
// Address: 0x2b12a0 - 0x2b12d8
void func_002B12A0_0x2b12a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B12A0_0x2b12a0");
#endif

    ctx->pc = 0x2b12a0u;

    // 0x2b12a0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2b12a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b12a4: 0x2c62000e  sltiu       $v0, $v1, 0xE
    ctx->pc = 0x2b12a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x2b12a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B12A8u;
    {
        const bool branch_taken_0x2b12a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B12ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B12A8u;
        // 0x2b12ac: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b12a8) {
            ctx->pc = 0x2B12CCu;
            goto label_2b12cc;
        }
    }
    ctx->pc = 0x2B12B0u;
    // 0x2b12b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b12b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b12b4: 0x2442b110  addiu       $v0, $v0, -0x4EF0
    ctx->pc = 0x2b12b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947088));
    // 0x2b12b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b12b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b12bc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2B12BCu;
    {
        const bool branch_taken_0x2b12bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B12C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B12BCu;
        // 0x2b12c0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b12bc) {
            ctx->pc = 0x2B12C4u;
            goto label_2b12c4;
        }
    }
    ctx->pc = 0x2B12C4u;
label_2b12c4:
    // 0x2b12c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B12C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B12C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B12C4u;
        // 0x2b12c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B12C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B12CCu;
label_2b12cc:
    // 0x2b12cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B12CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B12D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B12CCu;
        // 0x2b12d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B12CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B12D4u;
    // 0x2b12d4: 0x0  nop
    ctx->pc = 0x2b12d4u;
    // NOP
    ctx->pc = 0x2b12d8u;
}
