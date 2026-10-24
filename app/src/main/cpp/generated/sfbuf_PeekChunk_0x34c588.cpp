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

// Function: sfbuf_PeekChunk
// Address: 0x34c588 - 0x34c680
void sfbuf_PeekChunk_0x34c588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfbuf_PeekChunk_0x34c588");
#endif

    switch (ctx->pc) {
        case 0x34c588u: goto label_34c588;
        case 0x34c58cu: goto label_34c58c;
        case 0x34c590u: goto label_34c590;
        case 0x34c594u: goto label_34c594;
        case 0x34c598u: goto label_34c598;
        case 0x34c59cu: goto label_34c59c;
        case 0x34c5a0u: goto label_34c5a0;
        case 0x34c5a4u: goto label_34c5a4;
        case 0x34c5a8u: goto label_34c5a8;
        case 0x34c5acu: goto label_34c5ac;
        case 0x34c5b0u: goto label_34c5b0;
        case 0x34c5b4u: goto label_34c5b4;
        case 0x34c5b8u: goto label_34c5b8;
        case 0x34c5bcu: goto label_34c5bc;
        case 0x34c5c0u: goto label_34c5c0;
        case 0x34c5c4u: goto label_34c5c4;
        case 0x34c5c8u: goto label_34c5c8;
        case 0x34c5ccu: goto label_34c5cc;
        case 0x34c5d0u: goto label_34c5d0;
        case 0x34c5d4u: goto label_34c5d4;
        case 0x34c5d8u: goto label_34c5d8;
        case 0x34c5dcu: goto label_34c5dc;
        case 0x34c5e0u: goto label_34c5e0;
        case 0x34c5e4u: goto label_34c5e4;
        case 0x34c5e8u: goto label_34c5e8;
        case 0x34c5ecu: goto label_34c5ec;
        case 0x34c5f0u: goto label_34c5f0;
        case 0x34c5f4u: goto label_34c5f4;
        case 0x34c5f8u: goto label_34c5f8;
        case 0x34c5fcu: goto label_34c5fc;
        case 0x34c600u: goto label_34c600;
        case 0x34c604u: goto label_34c604;
        case 0x34c608u: goto label_34c608;
        case 0x34c60cu: goto label_34c60c;
        case 0x34c610u: goto label_34c610;
        case 0x34c614u: goto label_34c614;
        case 0x34c618u: goto label_34c618;
        case 0x34c61cu: goto label_34c61c;
        case 0x34c620u: goto label_34c620;
        case 0x34c624u: goto label_34c624;
        case 0x34c628u: goto label_34c628;
        case 0x34c62cu: goto label_34c62c;
        case 0x34c630u: goto label_34c630;
        case 0x34c634u: goto label_34c634;
        case 0x34c638u: goto label_34c638;
        case 0x34c63cu: goto label_34c63c;
        case 0x34c640u: goto label_34c640;
        case 0x34c644u: goto label_34c644;
        case 0x34c648u: goto label_34c648;
        case 0x34c64cu: goto label_34c64c;
        case 0x34c650u: goto label_34c650;
        case 0x34c654u: goto label_34c654;
        case 0x34c658u: goto label_34c658;
        case 0x34c65cu: goto label_34c65c;
        case 0x34c660u: goto label_34c660;
        case 0x34c664u: goto label_34c664;
        case 0x34c668u: goto label_34c668;
        case 0x34c66cu: goto label_34c66c;
        case 0x34c670u: goto label_34c670;
        case 0x34c674u: goto label_34c674;
        case 0x34c678u: goto label_34c678;
        case 0x34c67cu: goto label_34c67c;
        default: break;
    }

    ctx->pc = 0x34c588u;

label_34c588:
    // 0x34c588: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34c588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_34c58c:
    // 0x34c58c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34c58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_34c590:
    // 0x34c590: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34c590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34c594:
    // 0x34c594: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34c594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_34c598:
    // 0x34c598: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x34c598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_34c59c:
    // 0x34c59c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34c59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_34c5a0:
    // 0x34c5a0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x34c5a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34c5a4:
    // 0x34c5a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x34c5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_34c5a8:
    // 0x34c5a8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x34c5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_34c5ac:
    // 0x34c5ac: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x34c5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_34c5b0:
    // 0x34c5b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34c5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34c5b4:
    // 0x34c5b4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x34c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_34c5b8:
    // 0x34c5b8: 0x40f809  jalr        $v0
label_34c5bc:
    if (ctx->pc == 0x34C5BCu) {
        ctx->pc = 0x34C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C5B8u;
        // 0x34c5bc: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34C5C0u;
        goto label_34c5c0;
    }
    ctx->pc = 0x34C5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34C5C0u);
        ctx->pc = 0x34C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C5B8u;
        // 0x34c5bc: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C5B8u, 0x34C5C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34C5C0u;
label_34c5c0:
    // 0x34c5c0: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x34c5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_34c5c4:
    // 0x34c5c4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x34c5c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34c5c8:
    // 0x34c5c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x34c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34c5cc:
    // 0x34c5cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34c5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34c5d0:
    // 0x34c5d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x34c5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_34c5d4:
    // 0x34c5d4: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x34c5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_34c5d8:
    // 0x34c5d8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x34c5d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_34c5dc:
    // 0x34c5dc: 0x60f809  jalr        $v1
label_34c5e0:
    if (ctx->pc == 0x34C5E0u) {
        ctx->pc = 0x34C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C5DCu;
        // 0x34c5e0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34C5E4u;
        goto label_34c5e4;
    }
    ctx->pc = 0x34C5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x34C5E4u);
        ctx->pc = 0x34C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C5DCu;
        // 0x34c5e0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C5DCu, 0x34C5E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34C5E4u;
label_34c5e4:
    // 0x34c5e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34c5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34c5e8:
    // 0x34c5e8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x34c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_34c5ec:
    // 0x34c5ec: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x34c5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_34c5f0:
    // 0x34c5f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x34c5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_34c5f4:
    // 0x34c5f4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x34c5f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_34c5f8:
    // 0x34c5f8: 0x54102a  slt         $v0, $v0, $s4
    ctx->pc = 0x34c5f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_34c5fc:
    // 0x34c5fc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_34c600:
    if (ctx->pc == 0x34C600u) {
        ctx->pc = 0x34C600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C5FCu;
        // 0x34c600: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34C604u;
        goto label_34c604;
    }
    ctx->pc = 0x34C5FCu;
    {
        const bool branch_taken_0x34c5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C5FCu;
        // 0x34c600: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c5fc) {
            ctx->pc = 0x34C638u;
            goto label_34c638;
        }
    }
    ctx->pc = 0x34C604u;
label_34c604:
    // 0x34c604: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x34c604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34c608:
    // 0x34c608: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x34c608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_34c60c:
    // 0x34c60c: 0x60f809  jalr        $v1
label_34c610:
    if (ctx->pc == 0x34C610u) {
        ctx->pc = 0x34C614u;
        goto label_34c614;
    }
    ctx->pc = 0x34C60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x34C614u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C60Cu, 0x34C614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34C614u;
label_34c614:
    // 0x34c614: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x34c614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34c618:
    // 0x34c618: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x34c618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34c61c:
    // 0x34c61c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34c61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34c620:
    // 0x34c620: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x34c620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_34c624:
    // 0x34c624: 0x40f809  jalr        $v0
label_34c628:
    if (ctx->pc == 0x34C628u) {
        ctx->pc = 0x34C628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C624u;
        // 0x34c628: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34C62Cu;
        goto label_34c62c;
    }
    ctx->pc = 0x34C624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34C62Cu);
        ctx->pc = 0x34C628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C624u;
        // 0x34c628: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C624u, 0x34C62Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34C62Cu;
label_34c62c:
    // 0x34c62c: 0x10000005  b           . + 4 + (0x5 << 2)
label_34c630:
    if (ctx->pc == 0x34C630u) {
        ctx->pc = 0x34C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C62Cu;
        // 0x34c630: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34C634u;
        goto label_34c634;
    }
    ctx->pc = 0x34C62Cu;
    {
        const bool branch_taken_0x34c62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C62Cu;
        // 0x34c630: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c62c) {
            ctx->pc = 0x34C644u;
            goto label_34c644;
        }
    }
    ctx->pc = 0x34C634u;
label_34c634:
    // 0x34c634: 0x0  nop
    ctx->pc = 0x34c634u;
    // NOP
label_34c638:
    // 0x34c638: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x34c638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_34c63c:
    // 0x34c63c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x34c63cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_34c640:
    // 0x34c640: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34c640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34c644:
    // 0x34c644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34c644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34c648:
    // 0x34c648: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x34c648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_34c64c:
    // 0x34c64c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x34c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_34c650:
    // 0x34c650: 0x40f809  jalr        $v0
label_34c654:
    if (ctx->pc == 0x34C654u) {
        ctx->pc = 0x34C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C650u;
        // 0x34c654: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34C658u;
        goto label_34c658;
    }
    ctx->pc = 0x34C650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34C658u);
        ctx->pc = 0x34C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C650u;
        // 0x34c654: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C650u, 0x34C658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34C658u;
label_34c658:
    // 0x34c658: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x34c658u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_34c65c:
    // 0x34c65c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34c65cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34c660:
    // 0x34c660: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34c660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_34c664:
    // 0x34c664: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34c664u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34c668:
    // 0x34c668: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x34c668u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_34c66c:
    // 0x34c66c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x34c66cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34c670:
    // 0x34c670: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34c670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_34c674:
    // 0x34c674: 0x3e00008  jr          $ra
label_34c678:
    if (ctx->pc == 0x34C678u) {
        ctx->pc = 0x34C678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C674u;
        // 0x34c678: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34C67Cu;
        goto label_34c67c;
    }
    ctx->pc = 0x34C674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C674u;
        // 0x34c678: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34C67Cu;
label_34c67c:
    // 0x34c67c: 0x0  nop
    ctx->pc = 0x34c67cu;
    // NOP
    ctx->pc = 0x34c680u;
}
