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

// Function: func_003BA5A0
// Address: 0x3ba5a0 - 0x3ba6c0
void func_003BA5A0_0x3ba5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003BA5A0_0x3ba5a0");
#endif

    switch (ctx->pc) {
        case 0x3ba5a0u: goto label_3ba5a0;
        case 0x3ba5a4u: goto label_3ba5a4;
        case 0x3ba5a8u: goto label_3ba5a8;
        case 0x3ba5acu: goto label_3ba5ac;
        case 0x3ba5b0u: goto label_3ba5b0;
        case 0x3ba5b4u: goto label_3ba5b4;
        case 0x3ba5b8u: goto label_3ba5b8;
        case 0x3ba5bcu: goto label_3ba5bc;
        case 0x3ba5c0u: goto label_3ba5c0;
        case 0x3ba5c4u: goto label_3ba5c4;
        case 0x3ba5c8u: goto label_3ba5c8;
        case 0x3ba5ccu: goto label_3ba5cc;
        case 0x3ba5d0u: goto label_3ba5d0;
        case 0x3ba5d4u: goto label_3ba5d4;
        case 0x3ba5d8u: goto label_3ba5d8;
        case 0x3ba5dcu: goto label_3ba5dc;
        case 0x3ba5e0u: goto label_3ba5e0;
        case 0x3ba5e4u: goto label_3ba5e4;
        case 0x3ba5e8u: goto label_3ba5e8;
        case 0x3ba5ecu: goto label_3ba5ec;
        case 0x3ba5f0u: goto label_3ba5f0;
        case 0x3ba5f4u: goto label_3ba5f4;
        case 0x3ba5f8u: goto label_3ba5f8;
        case 0x3ba5fcu: goto label_3ba5fc;
        case 0x3ba600u: goto label_3ba600;
        case 0x3ba604u: goto label_3ba604;
        case 0x3ba608u: goto label_3ba608;
        case 0x3ba60cu: goto label_3ba60c;
        case 0x3ba610u: goto label_3ba610;
        case 0x3ba614u: goto label_3ba614;
        case 0x3ba618u: goto label_3ba618;
        case 0x3ba61cu: goto label_3ba61c;
        case 0x3ba620u: goto label_3ba620;
        case 0x3ba624u: goto label_3ba624;
        case 0x3ba628u: goto label_3ba628;
        case 0x3ba62cu: goto label_3ba62c;
        case 0x3ba630u: goto label_3ba630;
        case 0x3ba634u: goto label_3ba634;
        case 0x3ba638u: goto label_3ba638;
        case 0x3ba63cu: goto label_3ba63c;
        case 0x3ba640u: goto label_3ba640;
        case 0x3ba644u: goto label_3ba644;
        case 0x3ba648u: goto label_3ba648;
        case 0x3ba64cu: goto label_3ba64c;
        case 0x3ba650u: goto label_3ba650;
        case 0x3ba654u: goto label_3ba654;
        case 0x3ba658u: goto label_3ba658;
        case 0x3ba65cu: goto label_3ba65c;
        case 0x3ba660u: goto label_3ba660;
        case 0x3ba664u: goto label_3ba664;
        case 0x3ba668u: goto label_3ba668;
        case 0x3ba66cu: goto label_3ba66c;
        case 0x3ba670u: goto label_3ba670;
        case 0x3ba674u: goto label_3ba674;
        case 0x3ba678u: goto label_3ba678;
        case 0x3ba67cu: goto label_3ba67c;
        case 0x3ba680u: goto label_3ba680;
        case 0x3ba684u: goto label_3ba684;
        case 0x3ba688u: goto label_3ba688;
        case 0x3ba68cu: goto label_3ba68c;
        case 0x3ba690u: goto label_3ba690;
        case 0x3ba694u: goto label_3ba694;
        case 0x3ba698u: goto label_3ba698;
        case 0x3ba69cu: goto label_3ba69c;
        case 0x3ba6a0u: goto label_3ba6a0;
        case 0x3ba6a4u: goto label_3ba6a4;
        case 0x3ba6a8u: goto label_3ba6a8;
        case 0x3ba6acu: goto label_3ba6ac;
        case 0x3ba6b0u: goto label_3ba6b0;
        case 0x3ba6b4u: goto label_3ba6b4;
        case 0x3ba6b8u: goto label_3ba6b8;
        case 0x3ba6bcu: goto label_3ba6bc;
        default: break;
    }

    ctx->pc = 0x3ba5a0u;

label_3ba5a0:
    // 0x3ba5a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ba5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3ba5a4:
    // 0x3ba5a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ba5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ba5a8:
    // 0x3ba5a8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3ba5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_3ba5ac:
    // 0x3ba5ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ba5acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ba5b0:
    // 0x3ba5b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3ba5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_3ba5b4:
    // 0x3ba5b4: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x3ba5b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3ba5b8:
    // 0x3ba5b8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3ba5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_3ba5bc:
    // 0x3ba5bc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x3ba5bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ba5c0:
    // 0x3ba5c0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3ba5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_3ba5c4:
    // 0x3ba5c4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3ba5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3ba5c8:
    // 0x3ba5c8: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x3ba5c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_3ba5cc:
    // 0x3ba5cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ba5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ba5d0:
    // 0x3ba5d0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3ba5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3ba5d4:
    // 0x3ba5d4: 0x40f809  jalr        $v0
label_3ba5d8:
    if (ctx->pc == 0x3BA5D8u) {
        ctx->pc = 0x3BA5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA5D4u;
        // 0x3ba5d8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA5DCu;
        goto label_3ba5dc;
    }
    ctx->pc = 0x3BA5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BA5DCu);
        ctx->pc = 0x3BA5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA5D4u;
        // 0x3ba5d8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA5D4u, 0x3BA5DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BA5DCu;
label_3ba5dc:
    // 0x3ba5dc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3ba5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3ba5e0:
    // 0x3ba5e0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3ba5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3ba5e4:
    // 0x3ba5e4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x3ba5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3ba5e8:
    // 0x3ba5e8: 0xc0e9452  jal         func_3A5148
label_3ba5ec:
    if (ctx->pc == 0x3BA5ECu) {
        ctx->pc = 0x3BA5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA5E8u;
        // 0x3ba5ec: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA5F0u;
        goto label_3ba5f0;
    }
    ctx->pc = 0x3BA5E8u;
    SET_GPR_U32(ctx, 31, 0x3BA5F0u);
    ctx->pc = 0x3BA5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA5E8u;
    // 0x3ba5ec: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3BA5E8u, 0x3BA5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA5F0u;
label_3ba5f0:
    // 0x3ba5f0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3ba5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3ba5f4:
    // 0x3ba5f4: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x3ba5f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3ba5f8:
    // 0x3ba5f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ba5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ba5fc:
    // 0x3ba5fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ba5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ba600:
    // 0x3ba600: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3ba600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ba604:
    // 0x3ba604: 0x2278823  subu        $s1, $s1, $a3
    ctx->pc = 0x3ba604u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_3ba608:
    // 0x3ba608: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3ba608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_3ba60c:
    // 0x3ba60c: 0x40f809  jalr        $v0
label_3ba610:
    if (ctx->pc == 0x3BA610u) {
        ctx->pc = 0x3BA610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA60Cu;
        // 0x3ba610: 0xf29021  addu        $s2, $a3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA614u;
        goto label_3ba614;
    }
    ctx->pc = 0x3BA60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BA614u);
        ctx->pc = 0x3BA610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA60Cu;
        // 0x3ba610: 0xf29021  addu        $s2, $a3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA60Cu, 0x3BA614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BA614u;
label_3ba614:
    // 0x3ba614: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ba614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ba618:
    // 0x3ba618: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3ba618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ba61c:
    // 0x3ba61c: 0x1a200014  blez        $s1, . + 4 + (0x14 << 2)
label_3ba620:
    if (ctx->pc == 0x3BA620u) {
        ctx->pc = 0x3BA620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA61Cu;
        // 0x3ba620: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA624u;
        goto label_3ba624;
    }
    ctx->pc = 0x3BA61Cu;
    {
        const bool branch_taken_0x3ba61c = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x3BA620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA61Cu;
        // 0x3ba620: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba61c) {
            ctx->pc = 0x3BA670u;
            goto label_3ba670;
        }
    }
    ctx->pc = 0x3BA624u;
label_3ba624:
    // 0x3ba624: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x3ba624u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3ba628:
    // 0x3ba628: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3ba628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3ba62c:
    // 0x3ba62c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x3ba62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3ba630:
    // 0x3ba630: 0x60f809  jalr        $v1
label_3ba634:
    if (ctx->pc == 0x3BA634u) {
        ctx->pc = 0x3BA634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA630u;
        // 0x3ba634: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA638u;
        goto label_3ba638;
    }
    ctx->pc = 0x3BA630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3BA638u);
        ctx->pc = 0x3BA634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA630u;
        // 0x3ba634: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA630u, 0x3BA638u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BA638u;
label_3ba638:
    // 0x3ba638: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3ba638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3ba63c:
    // 0x3ba63c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3ba63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3ba640:
    // 0x3ba640: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x3ba640u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3ba644:
    // 0x3ba644: 0xc0e9452  jal         func_3A5148
label_3ba648:
    if (ctx->pc == 0x3BA648u) {
        ctx->pc = 0x3BA648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA644u;
        // 0x3ba648: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA64Cu;
        goto label_3ba64c;
    }
    ctx->pc = 0x3BA644u;
    SET_GPR_U32(ctx, 31, 0x3BA64Cu);
    ctx->pc = 0x3BA648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA644u;
    // 0x3ba648: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3BA644u, 0x3BA64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA64Cu;
label_3ba64c:
    // 0x3ba64c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3ba64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3ba650:
    // 0x3ba650: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x3ba650u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3ba654:
    // 0x3ba654: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ba654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ba658:
    // 0x3ba658: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ba658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ba65c:
    // 0x3ba65c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3ba65cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ba660:
    // 0x3ba660: 0x2479021  addu        $s2, $s2, $a3
    ctx->pc = 0x3ba660u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_3ba664:
    // 0x3ba664: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3ba664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_3ba668:
    // 0x3ba668: 0x40f809  jalr        $v0
label_3ba66c:
    if (ctx->pc == 0x3BA66Cu) {
        ctx->pc = 0x3BA66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA668u;
        // 0x3ba66c: 0x2278823  subu        $s1, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA670u;
        goto label_3ba670;
    }
    ctx->pc = 0x3BA668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BA670u);
        ctx->pc = 0x3BA66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA668u;
        // 0x3ba66c: 0x2278823  subu        $s1, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA668u, 0x3BA670u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BA670u;
label_3ba670:
    // 0x3ba670: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_3ba674:
    if (ctx->pc == 0x3BA674u) {
        ctx->pc = 0x3BA674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA670u;
        // 0x3ba674: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA678u;
        goto label_3ba678;
    }
    ctx->pc = 0x3BA670u;
    {
        const bool branch_taken_0x3ba670 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA670u;
        // 0x3ba674: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba670) {
            ctx->pc = 0x3BA688u;
            goto label_3ba688;
        }
    }
    ctx->pc = 0x3BA678u;
label_3ba678:
    // 0x3ba678: 0xc0ee778  jal         func_3B9DE0
label_3ba67c:
    if (ctx->pc == 0x3BA67Cu) {
        ctx->pc = 0x3BA67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA678u;
        // 0x3ba67c: 0x24840a38  addiu       $a0, $a0, 0xA38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA680u;
        goto label_3ba680;
    }
    ctx->pc = 0x3BA678u;
    SET_GPR_U32(ctx, 31, 0x3BA680u);
    ctx->pc = 0x3BA67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA678u;
    // 0x3ba67c: 0x24840a38  addiu       $a0, $a0, 0xA38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9DE0u, 0x3BA678u, 0x3BA680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA680u;
label_3ba680:
    // 0x3ba680: 0x10000008  b           . + 4 + (0x8 << 2)
label_3ba684:
    if (ctx->pc == 0x3BA684u) {
        ctx->pc = 0x3BA684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA680u;
        // 0x3ba684: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA688u;
        goto label_3ba688;
    }
    ctx->pc = 0x3BA680u;
    {
        const bool branch_taken_0x3ba680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA680u;
        // 0x3ba684: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba680) {
            ctx->pc = 0x3BA6A4u;
            goto label_3ba6a4;
        }
    }
    ctx->pc = 0x3BA688u;
label_3ba688:
    // 0x3ba688: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3ba688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3ba68c:
    // 0x3ba68c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ba68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ba690:
    // 0x3ba690: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x3ba690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3ba694:
    // 0x3ba694: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x3ba694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_3ba698:
    // 0x3ba698: 0xc0e94bc  jal         func_3A52F0
label_3ba69c:
    if (ctx->pc == 0x3BA69Cu) {
        ctx->pc = 0x3BA69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA698u;
        // 0x3ba69c: 0xd23023  subu        $a2, $a2, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA6A0u;
        goto label_3ba6a0;
    }
    ctx->pc = 0x3BA698u;
    SET_GPR_U32(ctx, 31, 0x3BA6A0u);
    ctx->pc = 0x3BA69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA698u;
    // 0x3ba69c: 0xd23023  subu        $a2, $a2, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3BA698u, 0x3BA6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA6A0u;
label_3ba6a0:
    // 0x3ba6a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ba6a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ba6a4:
    // 0x3ba6a4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3ba6a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ba6a8:
    // 0x3ba6a8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3ba6a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3ba6ac:
    // 0x3ba6ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3ba6acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3ba6b0:
    // 0x3ba6b0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3ba6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3ba6b4:
    // 0x3ba6b4: 0x3e00008  jr          $ra
label_3ba6b8:
    if (ctx->pc == 0x3BA6B8u) {
        ctx->pc = 0x3BA6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA6B4u;
        // 0x3ba6b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA6BCu;
        goto label_3ba6bc;
    }
    ctx->pc = 0x3BA6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA6B4u;
        // 0x3ba6b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BA6BCu;
label_3ba6bc:
    // 0x3ba6bc: 0x0  nop
    ctx->pc = 0x3ba6bcu;
    // NOP
    ctx->pc = 0x3ba6c0u;
}
