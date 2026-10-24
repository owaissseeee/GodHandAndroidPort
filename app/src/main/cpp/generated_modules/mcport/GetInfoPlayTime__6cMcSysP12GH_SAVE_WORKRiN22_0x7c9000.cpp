#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: GetInfoPlayTime__6cMcSysP12GH_SAVE_WORKRiN22
// Address: 0x7c9000 - 0x7c9070
void GetInfoPlayTime__6cMcSysP12GH_SAVE_WORKRiN22_0x7c9000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetInfoPlayTime__6cMcSysP12GH_SAVE_WORKRiN22_0x7c9000");
#endif

    ctx->pc = 0x7c9000u;

    // 0x7c9000: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x7c9000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x7c9004: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x7c9004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x7c9008: 0x24030e10  addiu       $v1, $zero, 0xE10
    ctx->pc = 0x7c9008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    // 0x7c900c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7C900Cu;
    {
        const bool branch_taken_0x7c900c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c900c) {
            ctx->pc = 0x7C9010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C900Cu;
            // 0x7c9010: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C9014u;
            goto label_7c9014;
        }
    }
    ctx->pc = 0x7C9014u;
label_7c9014:
    // 0x7c9014: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x7c9014u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x7c9018: 0x2012  mflo        $a0
    ctx->pc = 0x7c9018u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x7c901c: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x7c901cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x7c9020: 0x1812  mflo        $v1
    ctx->pc = 0x7c9020u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x7c9024: 0x28620064  slti        $v0, $v1, 0x64
    ctx->pc = 0x7c9024u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x7c9028: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C9028u;
    {
        const bool branch_taken_0x7c9028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9028u;
        // 0x7c902c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9028) {
            ctx->pc = 0x7C9038u;
            goto label_7c9038;
        }
    }
    ctx->pc = 0x7C9030u;
    // 0x7c9030: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x7c9030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x7c9034: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x7c9034u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_7c9038:
    // 0x7c9038: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x7c9038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x7c903c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x7c903cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x7c9040: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x7c9040u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x7c9044: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7C9044u;
    {
        const bool branch_taken_0x7c9044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c9044) {
            ctx->pc = 0x7C9048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C9044u;
            // 0x7c9048: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C904Cu;
            goto label_7c904c;
        }
    }
    ctx->pc = 0x7C904Cu;
label_7c904c:
    // 0x7c904c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x7c904cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x7c9050: 0x2810  mfhi        $a1
    ctx->pc = 0x7c9050u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x7c9054: 0x3012  mflo        $a2
    ctx->pc = 0x7c9054u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x7c9058: 0xc2001b  divu        $zero, $a2, $v0
    ctx->pc = 0x7c9058u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x7c905c: 0x1810  mfhi        $v1
    ctx->pc = 0x7c905cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x7c9060: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x7c9060u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x7c9064: 0x3e00008  jr          $ra
    ctx->pc = 0x7C9064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C9068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9064u;
        // 0x7c9068: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C906Cu;
    // 0x7c906c: 0x0  nop
    ctx->pc = 0x7c906cu;
    // NOP
    ctx->pc = 0x7c9070u;
}
} // namespace gh_mcport
