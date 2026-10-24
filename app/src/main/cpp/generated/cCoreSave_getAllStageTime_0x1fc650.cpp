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

// Function: cCoreSave_getAllStageTime
// Address: 0x1fc650 - 0x1fc6c8
void cCoreSave_getAllStageTime_0x1fc650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_getAllStageTime_0x1fc650");
#endif

    ctx->pc = 0x1fc650u;

    // 0x1fc650: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fc650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc654: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1fc654u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc658: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FC658u;
    {
        const bool branch_taken_0x1fc658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC658u;
        // 0x1fc65c: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc658) {
            ctx->pc = 0x1FC6BCu;
            goto label_1fc6bc;
        }
    }
    ctx->pc = 0x1FC660u;
    // 0x1fc660: 0x8c830bbc  lw          $v1, 0xBBC($a0)
    ctx->pc = 0x1fc660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3004)));
    // 0x1fc664: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1fc664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1fc668: 0x3442a5e0  ori         $v0, $v0, 0xA5E0
    ctx->pc = 0x1fc668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42464);
    // 0x1fc66c: 0x24040708  addiu       $a0, $zero, 0x708
    ctx->pc = 0x1fc66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
    // 0x1fc670: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x1fc670u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1fc674: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FC674u;
    {
        const bool branch_taken_0x1fc674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc674) {
            ctx->pc = 0x1FC678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC674u;
            // 0x1fc678: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC67Cu;
            goto label_1fc67c;
        }
    }
    ctx->pc = 0x1FC67Cu;
label_1fc67c:
    // 0x1fc67c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1fc67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1fc680: 0x4012  mflo        $t0
    ctx->pc = 0x1fc680u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x1fc684: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x1fc684u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1fc688: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1fc688u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fc68c: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x1fc68cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1fc690: 0x1012  mflo        $v0
    ctx->pc = 0x1fc690u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1fc694: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x1fc694u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1fc698: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1fc698u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fc69c: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x1fc69cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1fc6a0: 0x1812  mflo        $v1
    ctx->pc = 0x1fc6a0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1fc6a4: 0x55200001  bnel        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FC6A4u;
    {
        const bool branch_taken_0x1fc6a4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc6a4) {
            ctx->pc = 0x1FC6A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC6A4u;
            // 0x1fc6a8: 0xad280000  sw          $t0, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC6ACu;
            goto label_1fc6ac;
        }
    }
    ctx->pc = 0x1FC6ACu;
label_1fc6ac:
    // 0x1fc6ac: 0x55400001  bnel        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FC6ACu;
    {
        const bool branch_taken_0x1fc6ac = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc6ac) {
            ctx->pc = 0x1FC6B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC6ACu;
            // 0x1fc6b0: 0xad420000  sw          $v0, 0x0($t2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC6B4u;
            goto label_1fc6b4;
        }
    }
    ctx->pc = 0x1FC6B4u;
label_1fc6b4:
    // 0x1fc6b4: 0x54e00001  bnel        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FC6B4u;
    {
        const bool branch_taken_0x1fc6b4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc6b4) {
            ctx->pc = 0x1FC6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC6B4u;
            // 0x1fc6b8: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC6BCu;
            goto label_1fc6bc;
        }
    }
    ctx->pc = 0x1FC6BCu;
label_1fc6bc:
    // 0x1fc6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC6C4u;
    // 0x1fc6c4: 0x0  nop
    ctx->pc = 0x1fc6c4u;
    // NOP
    ctx->pc = 0x1fc6c8u;
}
