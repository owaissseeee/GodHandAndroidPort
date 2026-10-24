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

// Function: func_00383280
// Address: 0x383280 - 0x3832c8
void func_00383280_0x383280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00383280_0x383280");
#endif

    switch (ctx->pc) {
        case 0x383298u: goto label_383298;
        default: break;
    }

    ctx->pc = 0x383280u;

    // 0x383280: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x383280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x383284: 0x1880000d  blez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x383284u;
    {
        const bool branch_taken_0x383284 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x383288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383284u;
        // 0x383288: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383284) {
            ctx->pc = 0x3832BCu;
            goto label_3832bc;
        }
    }
    ctx->pc = 0x38328Cu;
    // 0x38328c: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x38328cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x383290: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x383290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383294: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x383294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_383298:
    // 0x383298: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x383298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x38329c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x38329cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3832a0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3832A0u;
    {
        const bool branch_taken_0x3832a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3832A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3832A0u;
        // 0x3832a4: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3832a0) {
            ctx->pc = 0x3832B0u;
            goto label_3832b0;
        }
    }
    ctx->pc = 0x3832A8u;
    // 0x3832a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3832A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3832ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3832A8u;
        // 0x3832ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3832A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3832B0u;
label_3832b0:
    // 0x3832b0: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x3832b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3832b4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3832B4u;
    {
        const bool branch_taken_0x3832b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3832B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3832B4u;
        // 0x3832b8: 0x24640001  addiu       $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3832b4) {
            ctx->pc = 0x383298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383298;
        }
    }
    ctx->pc = 0x3832BCu;
label_3832bc:
    // 0x3832bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3832BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3832C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3832BCu;
        // 0x3832c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3832BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3832C4u;
    // 0x3832c4: 0x0  nop
    ctx->pc = 0x3832c4u;
    // NOP
    ctx->pc = 0x3832c8u;
}
