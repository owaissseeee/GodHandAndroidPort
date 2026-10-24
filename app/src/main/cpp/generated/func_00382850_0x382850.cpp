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

// Function: func_00382850
// Address: 0x382850 - 0x382898
void func_00382850_0x382850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00382850_0x382850");
#endif

    switch (ctx->pc) {
        case 0x382868u: goto label_382868;
        default: break;
    }

    ctx->pc = 0x382850u;

    // 0x382850: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x382850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x382854: 0x1880000d  blez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x382854u;
    {
        const bool branch_taken_0x382854 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x382858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382854u;
        // 0x382858: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382854) {
            ctx->pc = 0x38288Cu;
            goto label_38288c;
        }
    }
    ctx->pc = 0x38285Cu;
    // 0x38285c: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x38285cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x382860: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x382860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382864: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x382864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_382868:
    // 0x382868: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x382868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x38286c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x38286cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x382870: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x382870u;
    {
        const bool branch_taken_0x382870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x382874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382870u;
        // 0x382874: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382870) {
            ctx->pc = 0x382880u;
            goto label_382880;
        }
    }
    ctx->pc = 0x382878u;
    // 0x382878: 0x3e00008  jr          $ra
    ctx->pc = 0x382878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382878u;
        // 0x38287c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382880u;
label_382880:
    // 0x382880: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x382880u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x382884: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x382884u;
    {
        const bool branch_taken_0x382884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x382888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382884u;
        // 0x382888: 0x24640001  addiu       $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382884) {
            ctx->pc = 0x382868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382868;
        }
    }
    ctx->pc = 0x38288Cu;
label_38288c:
    // 0x38288c: 0x3e00008  jr          $ra
    ctx->pc = 0x38288Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38288Cu;
        // 0x382890: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38288Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382894u;
    // 0x382894: 0x0  nop
    ctx->pc = 0x382894u;
    // NOP
    ctx->pc = 0x382898u;
}
