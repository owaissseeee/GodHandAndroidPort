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

// Function: func_00355490
// Address: 0x355490 - 0x3554d8
void func_00355490_0x355490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00355490_0x355490");
#endif

    switch (ctx->pc) {
        case 0x3554a8u: goto label_3554a8;
        default: break;
    }

    ctx->pc = 0x355490u;

    // 0x355490: 0x8c821fc0  lw          $v0, 0x1FC0($a0)
    ctx->pc = 0x355490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8128)));
    // 0x355494: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x355494u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355498: 0x8c460178  lw          $a2, 0x178($v0)
    ctx->pc = 0x355498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x35549c: 0x18c0000b  blez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x35549Cu;
    {
        const bool branch_taken_0x35549c = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x3554A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35549Cu;
        // 0x3554a0: 0x24430180  addiu       $v1, $v0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35549c) {
            ctx->pc = 0x3554CCu;
            goto label_3554cc;
        }
    }
    ctx->pc = 0x3554A4u;
    // 0x3554a4: 0x248416b0  addiu       $a0, $a0, 0x16B0
    ctx->pc = 0x3554a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5808));
label_3554a8:
    // 0x3554a8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3554a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3554ac: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3554ACu;
    {
        const bool branch_taken_0x3554ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x3554B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3554ACu;
        // 0x3554b0: 0x24840088  addiu       $a0, $a0, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3554ac) {
            ctx->pc = 0x3554D0u;
            goto label_3554d0;
        }
    }
    ctx->pc = 0x3554B4u;
    // 0x3554b4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3554b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3554b8: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x3554b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3554bc: 0x0  nop
    ctx->pc = 0x3554bcu;
    // NOP
    // 0x3554c0: 0x0  nop
    ctx->pc = 0x3554c0u;
    // NOP
    // 0x3554c4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3554C4u;
    {
        const bool branch_taken_0x3554c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3554C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3554C4u;
        // 0x3554c8: 0x246300f0  addiu       $v1, $v1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3554c4) {
            ctx->pc = 0x3554A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3554a8;
        }
    }
    ctx->pc = 0x3554CCu;
label_3554cc:
    // 0x3554cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3554ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3554d0:
    // 0x3554d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3554D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3554D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3554D8u;
}
