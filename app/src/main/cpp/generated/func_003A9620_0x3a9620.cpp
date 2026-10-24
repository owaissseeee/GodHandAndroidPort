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

// Function: func_003A9620
// Address: 0x3a9620 - 0x3a96c0
void func_003A9620_0x3a9620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A9620_0x3a9620");
#endif

    switch (ctx->pc) {
        case 0x3a9658u: goto label_3a9658;
        case 0x3a96b0u: goto label_3a96b0;
        default: break;
    }

    ctx->pc = 0x3a9620u;

    // 0x3a9620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a9620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a9624: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x3a9624u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9628: 0x457c2  srl         $t2, $a0, 31
    ctx->pc = 0x3a9628u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x3a962c: 0x11400004  beqz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A962Cu;
    {
        const bool branch_taken_0x3a962c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A962Cu;
        // 0x3a9630: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a962c) {
            ctx->pc = 0x3A9640u;
            goto label_3a9640;
        }
    }
    ctx->pc = 0x3A9634u;
    // 0x3a9634: 0x41823  negu        $v1, $a0
    ctx->pc = 0x3a9634u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x3a9638: 0x38c2000a  xori        $v0, $a2, 0xA
    ctx->pc = 0x3a9638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)10);
    // 0x3a963c: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x3a963cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_3a9640:
    // 0x3a9640: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3a9640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3a9644: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a9644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9648: 0x244ba998  addiu       $t3, $v0, -0x5668
    ctx->pc = 0x3a9648u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945176));
    // 0x3a964c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a964cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9650: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x3a9650u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x3a9654: 0x0  nop
    ctx->pc = 0x3a9654u;
    // NOP
label_3a9658:
    // 0x3a9658: 0x50c80001  beql        $a2, $t0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3A9658u;
    {
        const bool branch_taken_0x3a9658 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x3a9658) {
            ctx->pc = 0x3A965Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9658u;
            // 0x3a965c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9660u;
            goto label_3a9660;
        }
    }
    ctx->pc = 0x3A9660u;
label_3a9660:
    // 0x3a9660: 0x1272821  addu        $a1, $t1, $a3
    ctx->pc = 0x3a9660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x3a9664: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3a9664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3a9668: 0x1810  mfhi        $v1
    ctx->pc = 0x3a9668u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3a966c: 0x2012  mflo        $a0
    ctx->pc = 0x3a966cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x3a9670: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x3a9670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x3a9674: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3a9674u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a9678: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3a9678u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a967c: 0x50c80001  beql        $a2, $t0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3A967Cu;
    {
        const bool branch_taken_0x3a967c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x3a967c) {
            ctx->pc = 0x3A9680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A967Cu;
            // 0x3a9680: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9684u;
            goto label_3a9684;
        }
    }
    ctx->pc = 0x3A9684u;
label_3a9684:
    // 0x3a9684: 0x5480fff4  bnel        $a0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3A9684u;
    {
        const bool branch_taken_0x3a9684 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a9684) {
            ctx->pc = 0x3A9688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9684u;
            // 0x3a9688: 0x86001b  divu        $zero, $a0, $a2 (Delay Slot)
            { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9658;
        }
    }
    ctx->pc = 0x3A968Cu;
    // 0x3a968c: 0x11400004  beqz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A968Cu;
    {
        const bool branch_taken_0x3a968c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A968Cu;
        // 0x3a9690: 0x1271821  addu        $v1, $t1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a968c) {
            ctx->pc = 0x3A96A0u;
            goto label_3a96a0;
        }
    }
    ctx->pc = 0x3A9694u;
    // 0x3a9694: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x3a9694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x3a9698: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3a9698u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a969c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3a969cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3a96a0:
    // 0x3a96a0: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x3a96a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x3a96a4: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x3a96a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a96a8: 0xc0ea56a  jal         func_3A95A8
    ctx->pc = 0x3A96A8u;
    SET_GPR_U32(ctx, 31, 0x3A96B0u);
    ctx->pc = 0x3A96ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A96A8u;
    // 0x3a96ac: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A95A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A95A8u, 0x3A96A8u, 0x3A96B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A96B0u;
label_3a96b0:
    // 0x3a96b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a96b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a96b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A96B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A96B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A96B4u;
        // 0x3a96b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A96B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A96BCu;
    // 0x3a96bc: 0x0  nop
    ctx->pc = 0x3a96bcu;
    // NOP
    ctx->pc = 0x3a96c0u;
}
