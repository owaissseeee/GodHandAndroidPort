#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: func_0079AFD8
// Address: 0x79afd8 - 0x79b028
void func_0079AFD8_0x79afd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079AFD8_0x79afd8");
#endif

    switch (ctx->pc) {
        case 0x79b000u: goto label_79b000;
        default: break;
    }

    ctx->pc = 0x79afd8u;

    // 0x79afd8: 0x3c050075  lui         $a1, 0x75
    ctx->pc = 0x79afd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)117 << 16));
    // 0x79afdc: 0x8ca24c30  lw          $v0, 0x4C30($a1)
    ctx->pc = 0x79afdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x754C30u));
    // 0x79afe0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x79afe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x79afe4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x79afe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x79afe8: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x79AFE8u;
    {
        const bool branch_taken_0x79afe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x79AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFE8u;
        // 0x79afec: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79afe8) {
            ctx->pc = 0x79B020u;
            goto label_79b020;
        }
    }
    ctx->pc = 0x79AFF0u;
    // 0x79aff0: 0x24060416  addiu       $a2, $zero, 0x416
    ctx->pc = 0x79aff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1046));
    // 0x79aff4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79aff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79aff8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x79aff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79affc: 0x0  nop
    ctx->pc = 0x79affcu;
    // NOP
label_79b000:
    // 0x79b000: 0x946202fe  lhu         $v0, 0x2FE($v1)
    ctx->pc = 0x79b000u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
    // 0x79b004: 0x50460001  beql        $v0, $a2, . + 4 + (0x1 << 2)
    ctx->pc = 0x79B004u;
    {
        const bool branch_taken_0x79b004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x79b004) {
            ctx->pc = 0x79B008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B004u;
            // 0x79b008: 0xa06502f4  sb          $a1, 0x2F4($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 756), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B00Cu;
            goto label_79b00c;
        }
    }
    ctx->pc = 0x79B00Cu;
label_79b00c:
    // 0x79b00c: 0x8ce34c30  lw          $v1, 0x4C30($a3)
    ctx->pc = 0x79b00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 19504)));
    // 0x79b010: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x79b010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x79b014: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x79b014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x79b018: 0x5482fff9  bnel        $a0, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79B018u;
    {
        const bool branch_taken_0x79b018 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x79b018) {
            ctx->pc = 0x79B01Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B018u;
            // 0x79b01c: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b000;
        }
    }
    ctx->pc = 0x79B020u;
label_79b020:
    // 0x79b020: 0x3e00008  jr          $ra
    ctx->pc = 0x79B020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B028u;
}
} // namespace gh_r301
