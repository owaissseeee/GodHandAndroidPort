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

// Function: cCoreSave_initItem
// Address: 0x1fafa8 - 0x1faff0
void cCoreSave_initItem_0x1fafa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_initItem_0x1fafa8");
#endif

    switch (ctx->pc) {
        case 0x1fafc0u: goto label_1fafc0;
        default: break;
    }

    ctx->pc = 0x1fafa8u;

    // 0x1fafa8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1fafa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fafac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1fafacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1fafb0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FAFB0u;
    {
        const bool branch_taken_0x1fafb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAFB0u;
        // 0x1fafb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fafb0) {
            ctx->pc = 0x1FAFE8u;
            goto label_1fafe8;
        }
    }
    ctx->pc = 0x1FAFB8u;
    // 0x1fafb8: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x1fafb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1fafbc: 0x0  nop
    ctx->pc = 0x1fafbcu;
    // NOP
label_1fafc0:
    // 0x1fafc0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1fafc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1fafc4: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1fafc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1fafc8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fafc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fafcc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fafccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fafd0: 0x2ca40080  sltiu       $a0, $a1, 0x80
    ctx->pc = 0x1fafd0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x1fafd4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FAFD4u;
    {
        const bool branch_taken_0x1fafd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAFD4u;
        // 0x1fafd8: 0xa467028a  sh          $a3, 0x28A($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 650), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fafd4) {
            ctx->pc = 0x1FAFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fafc0;
        }
    }
    ctx->pc = 0x1FAFDCu;
    // 0x1fafdc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1fafdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1fafe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fafe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fafe4: 0xa4620288  sh          $v0, 0x288($v1)
    ctx->pc = 0x1fafe4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 648), (uint16_t)GPR_U32(ctx, 2));
label_1fafe8:
    // 0x1fafe8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAFE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAFF0u;
}
