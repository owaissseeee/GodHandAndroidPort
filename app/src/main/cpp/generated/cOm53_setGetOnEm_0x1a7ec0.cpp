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

// Function: cOm53_setGetOnEm
// Address: 0x1a7ec0 - 0x1a7f20
void cOm53_setGetOnEm_0x1a7ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOm53_setGetOnEm_0x1a7ec0");
#endif

    switch (ctx->pc) {
        case 0x1a7ed8u: goto label_1a7ed8;
        default: break;
    }

    ctx->pc = 0x1a7ec0u;

    // 0x1a7ec0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1a7ec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ec4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a7ec4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ec8: 0x24c90600  addiu       $t1, $a2, 0x600
    ctx->pc = 0x1a7ec8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 1536));
    // 0x1a7ecc: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x1a7eccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a7ed0: 0x90c20610  lbu         $v0, 0x610($a2)
    ctx->pc = 0x1a7ed0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1552)));
    // 0x1a7ed4: 0x0  nop
    ctx->pc = 0x1a7ed4u;
    // NOP
label_1a7ed8:
    // 0x1a7ed8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1a7ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1a7edc: 0x2c430010  sltiu       $v1, $v0, 0x10
    ctx->pc = 0x1a7edcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a7ee0: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x1a7ee0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a7ee4: 0x891021  addu        $v0, $a0, $t1
    ctx->pc = 0x1a7ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1a7ee8: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1a7ee8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7eec: 0x14880007  bne         $a0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A7EECu;
    {
        const bool branch_taken_0x1a7eec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        ctx->pc = 0x1A7EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7EECu;
        // 0x1a7ef0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7eec) {
            ctx->pc = 0x1A7F0Cu;
            goto label_1a7f0c;
        }
    }
    ctx->pc = 0x1A7EF4u;
    // 0x1a7ef4: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x1a7ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a7ef8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7efc: 0x90c30612  lbu         $v1, 0x612($a2)
    ctx->pc = 0x1a7efcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1554)));
    // 0x1a7f00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a7f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a7f04: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F04u;
        // 0x1a7f08: 0xa0c30612  sb          $v1, 0x612($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 1554), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7F0Cu;
label_1a7f0c:
    // 0x1a7f0c: 0x2ce20010  sltiu       $v0, $a3, 0x10
    ctx->pc = 0x1a7f0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a7f10: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x1A7F10u;
    {
        const bool branch_taken_0x1a7f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7f10) {
            ctx->pc = 0x1A7F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7F10u;
            // 0x1a7f14: 0x90c20610  lbu         $v0, 0x610($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7ed8;
        }
    }
    ctx->pc = 0x1A7F18u;
    // 0x1a7f18: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F18u;
        // 0x1a7f1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7F20u;
}
