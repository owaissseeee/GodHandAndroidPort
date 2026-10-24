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

// Function: IsSpecialAnim_1C24A0
// Address: 0x1c24a0 - 0x1c24e8
void IsSpecialAnim_1C24A0_0x1c24a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsSpecialAnim_1C24A0_0x1c24a0");
#endif

    ctx->pc = 0x1c24a0u;

    // 0x1c24a0: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x1c24a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x1c24a4: 0x240203d9  addiu       $v0, $zero, 0x3D9
    ctx->pc = 0x1c24a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 985));
    // 0x1c24a8: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C24A8u;
    {
        const bool branch_taken_0x1c24a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C24ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24A8u;
        // 0x1c24ac: 0x286203da  slti        $v0, $v1, 0x3DA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)986) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c24a8) {
            ctx->pc = 0x1C24D4u;
            goto label_1c24d4;
        }
    }
    ctx->pc = 0x1C24B0u;
    // 0x1c24b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C24B0u;
    {
        const bool branch_taken_0x1c24b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C24B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24B0u;
        // 0x1c24b4: 0x240203bc  addiu       $v0, $zero, 0x3BC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 956));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c24b0) {
            ctx->pc = 0x1C24C8u;
            goto label_1c24c8;
        }
    }
    ctx->pc = 0x1C24B8u;
    // 0x1c24b8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C24B8u;
    {
        const bool branch_taken_0x1c24b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C24BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24B8u;
        // 0x1c24bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c24b8) {
            ctx->pc = 0x1C24D4u;
            goto label_1c24d4;
        }
    }
    ctx->pc = 0x1C24C0u;
    // 0x1c24c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C24C0u;
    {
        const bool branch_taken_0x1c24c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c24c0) {
            ctx->pc = 0x1C24DCu;
            goto label_1c24dc;
        }
    }
    ctx->pc = 0x1C24C8u;
label_1c24c8:
    // 0x1c24c8: 0x240203e3  addiu       $v0, $zero, 0x3E3
    ctx->pc = 0x1c24c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 995));
    // 0x1c24cc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C24CCu;
    {
        const bool branch_taken_0x1c24cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C24D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24CCu;
        // 0x1c24d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c24cc) {
            ctx->pc = 0x1C24DCu;
            goto label_1c24dc;
        }
    }
    ctx->pc = 0x1C24D4u;
label_1c24d4:
    // 0x1c24d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C24D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C24D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24D4u;
        // 0x1c24d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C24D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C24DCu;
label_1c24dc:
    // 0x1c24dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C24DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C24DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C24E4u;
    // 0x1c24e4: 0x0  nop
    ctx->pc = 0x1c24e4u;
    // NOP
    ctx->pc = 0x1c24e8u;
}
