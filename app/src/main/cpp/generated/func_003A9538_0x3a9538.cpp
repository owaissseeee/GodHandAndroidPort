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

// Function: func_003A9538
// Address: 0x3a9538 - 0x3a95a8
void func_003A9538_0x3a9538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A9538_0x3a9538");
#endif

    switch (ctx->pc) {
        case 0x3a9560u: goto label_3a9560;
        default: break;
    }

    ctx->pc = 0x3a9538u;

    // 0x3a9538: 0x18a00018  blez        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3A9538u;
    {
        const bool branch_taken_0x3a9538 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x3A953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9538u;
        // 0x3a953c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9538) {
            ctx->pc = 0x3A959Cu;
            goto label_3a959c;
        }
    }
    ctx->pc = 0x3A9540u;
    // 0x3a9540: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x3a9540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3a9544: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3a9544u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a9548: 0x28420035  slti        $v0, $v0, 0x35
    ctx->pc = 0x3a9548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)53) ? 1 : 0);
    // 0x3a954c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3A954Cu;
    {
        const bool branch_taken_0x3a954c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A9550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A954Cu;
        // 0x3a9550: 0x24070030  addiu       $a3, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a954c) {
            ctx->pc = 0x3A959Cu;
            goto label_3a959c;
        }
    }
    ctx->pc = 0x3A9554u;
    // 0x3a9554: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x3a9554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x3a9558: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x3a9558u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x3a955c: 0x0  nop
    ctx->pc = 0x3a955cu;
    // NOP
label_3a9560:
    // 0x3a9560: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3a9560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3a9564: 0x18a00004  blez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A9564u;
    {
        const bool branch_taken_0x3a9564 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x3A9568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9564u;
        // 0x3a9568: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9564) {
            ctx->pc = 0x3A9578u;
            goto label_3a9578;
        }
    }
    ctx->pc = 0x3A956Cu;
    // 0x3a956c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3a956cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a9570: 0x5046fffb  beql        $v0, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A9570u;
    {
        const bool branch_taken_0x3a9570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x3a9570) {
            ctx->pc = 0x3A9574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9570u;
            // 0x3a9574: 0xa0670000  sb          $a3, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9560;
        }
    }
    ctx->pc = 0x3A9578u;
label_3a9578:
    // 0x3a9578: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3a9578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3a957c: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x3a957cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x3a9580: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3a9580u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a9584: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A9584u;
    {
        const bool branch_taken_0x3a9584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A9588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9584u;
        // 0x3a9588: 0x90850000  lbu         $a1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9584) {
            ctx->pc = 0x3A9594u;
            goto label_3a9594;
        }
    }
    ctx->pc = 0x3A958Cu;
    // 0x3a958c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A958Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A958Cu;
        // 0x3a9590: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A958Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9594u;
label_3a9594:
    // 0x3a9594: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3a9594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a9598: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3a9598u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_3a959c:
    // 0x3a959c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A959Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A95A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A959Cu;
        // 0x3a95a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A959Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A95A4u;
    // 0x3a95a4: 0x0  nop
    ctx->pc = 0x3a95a4u;
    // NOP
    ctx->pc = 0x3a95a8u;
}
