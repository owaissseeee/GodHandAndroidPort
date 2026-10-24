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

// Function: func_0033B5C8
// Address: 0x33b5c8 - 0x33b658
void func_0033B5C8_0x33b5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033B5C8_0x33b5c8");
#endif

    switch (ctx->pc) {
        case 0x33b5c8u: goto label_33b5c8;
        case 0x33b5ccu: goto label_33b5cc;
        case 0x33b5d0u: goto label_33b5d0;
        case 0x33b5d4u: goto label_33b5d4;
        case 0x33b5d8u: goto label_33b5d8;
        case 0x33b5dcu: goto label_33b5dc;
        case 0x33b5e0u: goto label_33b5e0;
        case 0x33b5e4u: goto label_33b5e4;
        case 0x33b5e8u: goto label_33b5e8;
        case 0x33b5ecu: goto label_33b5ec;
        case 0x33b5f0u: goto label_33b5f0;
        case 0x33b5f4u: goto label_33b5f4;
        case 0x33b5f8u: goto label_33b5f8;
        case 0x33b5fcu: goto label_33b5fc;
        case 0x33b600u: goto label_33b600;
        case 0x33b604u: goto label_33b604;
        case 0x33b608u: goto label_33b608;
        case 0x33b60cu: goto label_33b60c;
        case 0x33b610u: goto label_33b610;
        case 0x33b614u: goto label_33b614;
        case 0x33b618u: goto label_33b618;
        case 0x33b61cu: goto label_33b61c;
        case 0x33b620u: goto label_33b620;
        case 0x33b624u: goto label_33b624;
        case 0x33b628u: goto label_33b628;
        case 0x33b62cu: goto label_33b62c;
        case 0x33b630u: goto label_33b630;
        case 0x33b634u: goto label_33b634;
        case 0x33b638u: goto label_33b638;
        case 0x33b63cu: goto label_33b63c;
        case 0x33b640u: goto label_33b640;
        case 0x33b644u: goto label_33b644;
        case 0x33b648u: goto label_33b648;
        case 0x33b64cu: goto label_33b64c;
        case 0x33b650u: goto label_33b650;
        case 0x33b654u: goto label_33b654;
        default: break;
    }

    ctx->pc = 0x33b5c8u;

label_33b5c8:
    // 0x33b5c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33b5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33b5cc:
    // 0x33b5cc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x33b5ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33b5d0:
    // 0x33b5d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33b5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33b5d4:
    // 0x33b5d4: 0x3c110076  lui         $s1, 0x76
    ctx->pc = 0x33b5d4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)118 << 16));
label_33b5d8:
    // 0x33b5d8: 0x8e2288a8  lw          $v0, -0x7758($s1)
    ctx->pc = 0x33b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936744)));
label_33b5dc:
    // 0x33b5dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33b5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33b5e0:
    // 0x33b5e0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_33b5e4:
    if (ctx->pc == 0x33B5E4u) {
        ctx->pc = 0x33B5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B5E0u;
        // 0x33b5e4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B5E8u;
        goto label_33b5e8;
    }
    ctx->pc = 0x33B5E0u;
    {
        const bool branch_taken_0x33b5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B5E0u;
        // 0x33b5e4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b5e0) {
            ctx->pc = 0x33B640u;
            goto label_33b640;
        }
    }
    ctx->pc = 0x33B5E8u;
label_33b5e8:
    // 0x33b5e8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x33b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_33b5ec:
    // 0x33b5ec: 0x24429948  addiu       $v0, $v0, -0x66B8
    ctx->pc = 0x33b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941000));
label_33b5f0:
    // 0x33b5f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x33b5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33b5f4:
    // 0x33b5f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33b5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_33b5f8:
    // 0x33b5f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x33b5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_33b5fc:
    // 0x33b5fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33b5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33b600:
    // 0x33b600: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
label_33b604:
    if (ctx->pc == 0x33B604u) {
        ctx->pc = 0x33B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B600u;
        // 0x33b604: 0x262388a8  addiu       $v1, $s1, -0x7758 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B608u;
        goto label_33b608;
    }
    ctx->pc = 0x33B600u;
    {
        const bool branch_taken_0x33b600 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B600u;
        // 0x33b604: 0x262388a8  addiu       $v1, $s1, -0x7758 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b600) {
            ctx->pc = 0x33B634u;
            goto label_33b634;
        }
    }
    ctx->pc = 0x33B608u;
label_33b608:
    // 0x33b608: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x33b608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_33b60c:
    // 0x33b60c: 0x2450994c  addiu       $s0, $v0, -0x66B4
    ctx->pc = 0x33b60cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941004));
label_33b610:
    // 0x33b610: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33b610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33b614:
    // 0x33b614: 0x10660005  beq         $v1, $a2, . + 4 + (0x5 << 2)
label_33b618:
    if (ctx->pc == 0x33B618u) {
        ctx->pc = 0x33B61Cu;
        goto label_33b61c;
    }
    ctx->pc = 0x33B614u;
    {
        const bool branch_taken_0x33b614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x33b614) {
            ctx->pc = 0x33B62Cu;
            goto label_33b62c;
        }
    }
    ctx->pc = 0x33B61Cu;
label_33b61c:
    // 0x33b61c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33b61cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_33b620:
    // 0x33b620: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x33b620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33b624:
    // 0x33b624: 0xc0cedba  jal         func_33B6E8
label_33b628:
    if (ctx->pc == 0x33B628u) {
        ctx->pc = 0x33B628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B624u;
        // 0x33b628: 0x24845e78  addiu       $a0, $a0, 0x5E78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B62Cu;
        goto label_33b62c;
    }
    ctx->pc = 0x33B624u;
    SET_GPR_U32(ctx, 31, 0x33B62Cu);
    ctx->pc = 0x33B628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B624u;
    // 0x33b628: 0x24845e78  addiu       $a0, $a0, 0x5E78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B6E8u, 0x33B624u, 0x33B62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B62Cu;
label_33b62c:
    // 0x33b62c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x33b62cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_33b630:
    // 0x33b630: 0x262388a8  addiu       $v1, $s1, -0x7758
    ctx->pc = 0x33b630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936744));
label_33b634:
    // 0x33b634: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33b634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_33b638:
    // 0x33b638: 0x40f809  jalr        $v0
label_33b63c:
    if (ctx->pc == 0x33B63Cu) {
        ctx->pc = 0x33B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B638u;
        // 0x33b63c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B640u;
        goto label_33b640;
    }
    ctx->pc = 0x33B638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33B640u);
        ctx->pc = 0x33B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B638u;
        // 0x33b63c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B638u, 0x33B640u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33B640u;
label_33b640:
    // 0x33b640: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33b640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33b644:
    // 0x33b644: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33b644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33b648:
    // 0x33b648: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33b648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33b64c:
    // 0x33b64c: 0x3e00008  jr          $ra
label_33b650:
    if (ctx->pc == 0x33B650u) {
        ctx->pc = 0x33B650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B64Cu;
        // 0x33b650: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B654u;
        goto label_33b654;
    }
    ctx->pc = 0x33B64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B64Cu;
        // 0x33b650: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B654u;
label_33b654:
    // 0x33b654: 0x0  nop
    ctx->pc = 0x33b654u;
    // NOP
    ctx->pc = 0x33b658u;
}
