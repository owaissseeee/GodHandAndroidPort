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

// Function: func_00348550
// Address: 0x348550 - 0x3485b0
void func_00348550_0x348550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00348550_0x348550");
#endif

    switch (ctx->pc) {
        case 0x348550u: goto label_348550;
        case 0x348554u: goto label_348554;
        case 0x348558u: goto label_348558;
        case 0x34855cu: goto label_34855c;
        case 0x348560u: goto label_348560;
        case 0x348564u: goto label_348564;
        case 0x348568u: goto label_348568;
        case 0x34856cu: goto label_34856c;
        case 0x348570u: goto label_348570;
        case 0x348574u: goto label_348574;
        case 0x348578u: goto label_348578;
        case 0x34857cu: goto label_34857c;
        case 0x348580u: goto label_348580;
        case 0x348584u: goto label_348584;
        case 0x348588u: goto label_348588;
        case 0x34858cu: goto label_34858c;
        case 0x348590u: goto label_348590;
        case 0x348594u: goto label_348594;
        case 0x348598u: goto label_348598;
        case 0x34859cu: goto label_34859c;
        case 0x3485a0u: goto label_3485a0;
        case 0x3485a4u: goto label_3485a4;
        case 0x3485a8u: goto label_3485a8;
        case 0x3485acu: goto label_3485ac;
        default: break;
    }

    ctx->pc = 0x348550u;

label_348550:
    // 0x348550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x348550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_348554:
    // 0x348554: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x348554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_348558:
    // 0x348558: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x348558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34855c:
    // 0x34855c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34855cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_348560:
    // 0x348560: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x348560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_348564:
    // 0x348564: 0xc0d225a  jal         func_348968
label_348568:
    if (ctx->pc == 0x348568u) {
        ctx->pc = 0x348568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348564u;
        // 0x348568: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34856Cu;
        goto label_34856c;
    }
    ctx->pc = 0x348564u;
    SET_GPR_U32(ctx, 31, 0x34856Cu);
    ctx->pc = 0x348568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348564u;
    // 0x348568: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348968u, 0x348564u, 0x34856Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34856Cu;
label_34856c:
    // 0x34856c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34856cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_348570:
    // 0x348570: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
label_348574:
    if (ctx->pc == 0x348574u) {
        ctx->pc = 0x348574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348570u;
        // 0x348574: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348578u;
        goto label_348578;
    }
    ctx->pc = 0x348570u;
    {
        const bool branch_taken_0x348570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x348570) {
            ctx->pc = 0x348574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348570u;
            // 0x348574: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34859Cu;
            goto label_34859c;
        }
    }
    ctx->pc = 0x348578u;
label_348578:
    // 0x348578: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x348578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_34857c:
    // 0x34857c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_348580:
    if (ctx->pc == 0x348580u) {
        ctx->pc = 0x348580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34857Cu;
        // 0x348580: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348584u;
        goto label_348584;
    }
    ctx->pc = 0x34857Cu;
    {
        const bool branch_taken_0x34857c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34857Cu;
        // 0x348580: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34857c) {
            ctx->pc = 0x348598u;
            goto label_348598;
        }
    }
    ctx->pc = 0x348584u;
label_348584:
    // 0x348584: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x348584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_348588:
    // 0x348588: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_34858c:
    if (ctx->pc == 0x34858Cu) {
        ctx->pc = 0x34858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348588u;
        // 0x34858c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348590u;
        goto label_348590;
    }
    ctx->pc = 0x348588u;
    {
        const bool branch_taken_0x348588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x348588) {
            ctx->pc = 0x34858Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348588u;
            // 0x34858c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34859Cu;
            goto label_34859c;
        }
    }
    ctx->pc = 0x348590u;
label_348590:
    // 0x348590: 0x40f809  jalr        $v0
label_348594:
    if (ctx->pc == 0x348594u) {
        ctx->pc = 0x348594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348590u;
        // 0x348594: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348598u;
        goto label_348598;
    }
    ctx->pc = 0x348590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x348598u);
        ctx->pc = 0x348594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348590u;
        // 0x348594: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348590u, 0x348598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x348598u;
label_348598:
    // 0x348598: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x348598u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34859c:
    // 0x34859c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34859cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3485a0:
    // 0x3485a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3485a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3485a4:
    // 0x3485a4: 0x3e00008  jr          $ra
label_3485a8:
    if (ctx->pc == 0x3485A8u) {
        ctx->pc = 0x3485A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485A4u;
        // 0x3485a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3485ACu;
        goto label_3485ac;
    }
    ctx->pc = 0x3485A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3485A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485A4u;
        // 0x3485a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3485A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3485ACu;
label_3485ac:
    // 0x3485ac: 0x0  nop
    ctx->pc = 0x3485acu;
    // NOP
    ctx->pc = 0x3485b0u;
}
