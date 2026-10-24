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
// Function: writeChoise__7cMcSave
// Address: 0x7c55b8 - 0x7c5830
void writeChoise__7cMcSave_0x7c55b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("writeChoise__7cMcSave_0x7c55b8");
#endif

    switch (ctx->pc) {
        case 0x7c5600u: goto label_7c5600;
        case 0x7c5620u: goto label_7c5620;
        case 0x7c5630u: goto label_7c5630;
        case 0x7c5650u: goto label_7c5650;
        case 0x7c566cu: goto label_7c566c;
        case 0x7c5694u: goto label_7c5694;
        case 0x7c56c0u: goto label_7c56c0;
        case 0x7c56f8u: goto label_7c56f8;
        case 0x7c5758u: goto label_7c5758;
        case 0x7c57acu: goto label_7c57ac;
        case 0x7c57d4u: goto label_7c57d4;
        case 0x7c5810u: goto label_7c5810;
        default: break;
    }

    ctx->pc = 0x7c55b8u;

    // 0x7c55b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7c55b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7c55bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7c55bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7c55c0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7c55c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7c55c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c55c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c55c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7c55c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7c55cc: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x7c55ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x7c55d0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x7c55d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x7c55d4: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x7C55D4u;
    {
        const bool branch_taken_0x7c55d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C55D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C55D4u;
        // 0x7c55d8: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c55d4) {
            ctx->pc = 0x7C5710u;
            goto label_7c5710;
        }
    }
    ctx->pc = 0x7C55DCu;
    // 0x7c55dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7c55dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7c55e0: 0x24420c60  addiu       $v0, $v0, 0xC60
    ctx->pc = 0x7c55e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3168));
    // 0x7c55e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7c55e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7c55e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7c55e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c55ec: 0x800008  jr          $a0
    ctx->pc = 0x7C55ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x7C55F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C55ECu;
        // 0x7c55f0: 0x3c10007d  lui         $s0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7C55F4u: goto label_7c55f4;
            case 0x7C5610u: goto label_7c5610;
            case 0x7C5644u: goto label_7c5644;
            case 0x7C5684u: goto label_7c5684;
            case 0x7C56B0u: goto label_7c56b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C55ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7C55F4u;
label_7c55f4:
    // 0x7c55f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c55f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c55f8: 0xc1f1eb8  jal         func_7C7AE0
    ctx->pc = 0x7C55F8u;
    SET_GPR_U32(ctx, 31, 0x7C5600u);
    ctx->pc = 0x7C55FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C55F8u;
    // 0x7c55fc: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7AE0u, 0x7C55F8u, 0x7C5600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5600u;
label_7c5600:
    // 0x7c5600: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c5600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c5604: 0xae300078  sw          $s0, 0x78($s1)
    ctx->pc = 0x7c5604u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 16));
    // 0x7c5608: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x7c5608u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
    // 0x7c560c: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x7c560cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
label_7c5610:
    // 0x7c5610: 0x3c10007d  lui         $s0, 0x7D
    ctx->pc = 0x7c5610u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
    // 0x7c5614: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c5614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5618: 0xc1f0e34  jal         func_7C38D0
    ctx->pc = 0x7C5618u;
    SET_GPR_U32(ctx, 31, 0x7C5620u);
    ctx->pc = 0x7C561Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5618u;
    // 0x7c561c: 0x26041740  addiu       $a0, $s0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C38D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C38D0u, 0x7C5618u, 0x7C5620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5620u;
label_7c5620:
    // 0x7c5620: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c5620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5624: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x7c5624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x7c5628: 0xc1f1b78  jal         func_7C6DE0
    ctx->pc = 0x7C5628u;
    SET_GPR_U32(ctx, 31, 0x7C5630u);
    ctx->pc = 0x7C562Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5628u;
    // 0x7c562c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6DE0u, 0x7C5628u, 0x7C5630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5630u;
label_7c5630:
    // 0x7c5630: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C5630u;
    {
        const bool branch_taken_0x7c5630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C5634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5630u;
        // 0x7c5634: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5630) {
            ctx->pc = 0x7C5640u;
            goto label_7c5640;
        }
    }
    ctx->pc = 0x7C5638u;
    // 0x7c5638: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x7C5638u;
    {
        const bool branch_taken_0x7c5638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5638u;
        // 0x7c563c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5638) {
            ctx->pc = 0x7C5700u;
            goto label_7c5700;
        }
    }
    ctx->pc = 0x7C5640u;
label_7c5640:
    // 0x7c5640: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x7c5640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
label_7c5644:
    // 0x7c5644: 0x26041740  addiu       $a0, $s0, 0x1740
    ctx->pc = 0x7c5644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
    // 0x7c5648: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C5648u;
    SET_GPR_U32(ctx, 31, 0x7C5650u);
    ctx->pc = 0x7C564Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5648u;
    // 0x7c564c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C5648u, 0x7C5650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5650u;
label_7c5650:
    // 0x7c5650: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7c5650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c5654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c5658: 0x5602002e  bnel        $s0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x7C5658u;
    {
        const bool branch_taken_0x7c5658 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x7c5658) {
            ctx->pc = 0x7C565Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C5658u;
            // 0x7c565c: 0x8e2200f4  lw          $v0, 0xF4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C5714u;
            goto label_7c5714;
        }
    }
    ctx->pc = 0x7C5660u;
    // 0x7c5660: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c5660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c5664: 0xc1f1b8e  jal         func_7C6E38
    ctx->pc = 0x7C5664u;
    SET_GPR_U32(ctx, 31, 0x7C566Cu);
    ctx->pc = 0x7C5668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5664u;
    // 0x7c5668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6E38u, 0x7C5664u, 0x7C566Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C566Cu;
label_7c566c:
    // 0x7c566c: 0x54500003  bnel        $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C566Cu;
    {
        const bool branch_taken_0x7c566c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x7c566c) {
            ctx->pc = 0x7C5670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C566Cu;
            // 0x7c5670: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C567Cu;
            goto label_7c567c;
        }
    }
    ctx->pc = 0x7C5674u;
    // 0x7c5674: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x7C5674u;
    {
        const bool branch_taken_0x7c5674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5674u;
        // 0x7c5678: 0xae2200f4  sw          $v0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5674) {
            ctx->pc = 0x7C5710u;
            goto label_7c5710;
        }
    }
    ctx->pc = 0x7C567Cu;
label_7c567c:
    // 0x7c567c: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x7C567Cu;
    {
        const bool branch_taken_0x7c567c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C567Cu;
        // 0x7c5680: 0xae2200f4  sw          $v0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c567c) {
            ctx->pc = 0x7C5818u;
            goto label_7c5818;
        }
    }
    ctx->pc = 0x7C5684u;
label_7c5684:
    // 0x7c5684: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c5684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c5688: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c5688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c568c: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C568Cu;
    SET_GPR_U32(ctx, 31, 0x7C5694u);
    ctx->pc = 0x7C5690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C568Cu;
    // 0x7c5690: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C568Cu, 0x7C5694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5694u;
label_7c5694:
    // 0x7c5694: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7c5694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c5698: 0x14430060  bne         $v0, $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x7C5698u;
    {
        const bool branch_taken_0x7c5698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x7C569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5698u;
        // 0x7c569c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5698) {
            ctx->pc = 0x7C581Cu;
            goto label_7c581c;
        }
    }
    ctx->pc = 0x7C56A0u;
    // 0x7c56a0: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c56a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c56a4: 0xae2000f0  sw          $zero, 0xF0($s1)
    ctx->pc = 0x7c56a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
    // 0x7c56a8: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x7C56A8u;
    {
        const bool branch_taken_0x7c56a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C56ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C56A8u;
        // 0x7c56ac: 0xae2000f4  sw          $zero, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c56a8) {
            ctx->pc = 0x7C581Cu;
            goto label_7c581c;
        }
    }
    ctx->pc = 0x7C56B0u;
label_7c56b0:
    // 0x7c56b0: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c56b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c56b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c56b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c56b8: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C56B8u;
    SET_GPR_U32(ctx, 31, 0x7C56C0u);
    ctx->pc = 0x7C56BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C56B8u;
    // 0x7c56bc: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C56B8u, 0x7C56C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C56C0u;
label_7c56c0:
    // 0x7c56c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7c56c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c56c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c56c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c56c8: 0x14620054  bne         $v1, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x7C56C8u;
    {
        const bool branch_taken_0x7c56c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C56CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C56C8u;
        // 0x7c56cc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c56c8) {
            ctx->pc = 0x7C581Cu;
            goto label_7c581c;
        }
    }
    ctx->pc = 0x7C56D0u;
    // 0x7c56d0: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x7c56d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x7c56d4: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x7C56D4u;
    {
        const bool branch_taken_0x7c56d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x7C56D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C56D4u;
        // 0x7c56d8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c56d4) {
            ctx->pc = 0x7C5700u;
            goto label_7c5700;
        }
    }
    ctx->pc = 0x7C56DCu;
    // 0x7c56dc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x7c56dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7c56e0: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x7c56e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
    // 0x7c56e4: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c56e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c56e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c56e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c56ec: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x7c56ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x7c56f0: 0xc1f1eb8  jal         func_7C7AE0
    ctx->pc = 0x7C56F0u;
    SET_GPR_U32(ctx, 31, 0x7C56F8u);
    ctx->pc = 0x7C56F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C56F0u;
    // 0x7c56f4: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7AE0u, 0x7C56F0u, 0x7C56F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C56F8u;
label_7c56f8:
    // 0x7c56f8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x7C56F8u;
    {
        const bool branch_taken_0x7c56f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C56FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C56F8u;
        // 0x7c56fc: 0xae300078  sw          $s0, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c56f8) {
            ctx->pc = 0x7C5818u;
            goto label_7c5818;
        }
    }
    ctx->pc = 0x7C5700u;
label_7c5700:
    // 0x7c5700: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c5700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c5704: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x7c5704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x7c5708: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x7C5708u;
    {
        const bool branch_taken_0x7c5708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5708u;
        // 0x7c570c: 0xae2000f4  sw          $zero, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5708) {
            ctx->pc = 0x7C5818u;
            goto label_7c5818;
        }
    }
    ctx->pc = 0x7C5710u;
label_7c5710:
    // 0x7c5710: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x7c5710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_7c5714:
    // 0x7c5714: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x7c5714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7c5718: 0x1050003f  beq         $v0, $s0, . + 4 + (0x3F << 2)
    ctx->pc = 0x7C5718u;
    {
        const bool branch_taken_0x7c5718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x7C571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5718u;
        // 0x7c571c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5718) {
            ctx->pc = 0x7C5818u;
            goto label_7c5818;
        }
    }
    ctx->pc = 0x7C5720u;
    // 0x7c5720: 0x3c040c00  lui         $a0, 0xC00
    ctx->pc = 0x7c5720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3072 << 16));
    // 0x7c5724: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x7c5724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x7c5728: 0xdc4301b0  ld          $v1, 0x1B0($v0)
    ctx->pc = 0x7c5728u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x7c572c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x7c572cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7c5730: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x7C5730u;
    {
        const bool branch_taken_0x7c5730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5730u;
        // 0x7c5734: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5730) {
            ctx->pc = 0x7C576Cu;
            goto label_7c576c;
        }
    }
    ctx->pc = 0x7C5738u;
    // 0x7c5738: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c5738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c573c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7c573cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c5740: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x7c5740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x7c5744: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c5744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c5748: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c5748u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c574c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c574cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5750: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C5750u;
    SET_GPR_U32(ctx, 31, 0x7C5758u);
    ctx->pc = 0x7C5754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5750u;
    // 0x7c5754: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C5750u, 0x7C5758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5758u;
label_7c5758:
    // 0x7c5758: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x7c5758u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x7c575c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x7c575cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x7c5760: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x7c5760u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x7c5764: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x7C5764u;
    {
        const bool branch_taken_0x7c5764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5764u;
        // 0x7c5768: 0xa223000c  sb          $v1, 0xC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5764) {
            ctx->pc = 0x7C5818u;
            goto label_7c5818;
        }
    }
    ctx->pc = 0x7C576Cu;
label_7c576c:
    // 0x7c576c: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x7c576cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x7c5770: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x7c5770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x7c5774: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x7c5774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x7c5778: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x7C5778u;
    {
        const bool branch_taken_0x7c5778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5778u;
        // 0x7c577c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5778) {
            ctx->pc = 0x7C57E0u;
            goto label_7c57e0;
        }
    }
    ctx->pc = 0x7C5780u;
    // 0x7c5780: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x7c5780u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x7c5784: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7C5784u;
    {
        const bool branch_taken_0x7c5784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C5788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5784u;
        // 0x7c5788: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5784) {
            ctx->pc = 0x7C57B4u;
            goto label_7c57b4;
        }
    }
    ctx->pc = 0x7C578Cu;
    // 0x7c578c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c578cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5790: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7c5790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c5794: 0x24060160  addiu       $a2, $zero, 0x160
    ctx->pc = 0x7c5794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x7c5798: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c5798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c579c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c579cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c57a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c57a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c57a4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C57A4u;
    SET_GPR_U32(ctx, 31, 0x7C57ACu);
    ctx->pc = 0x7C57A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C57A4u;
    // 0x7c57a8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C57A4u, 0x7C57ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C57ACu;
label_7c57ac:
    // 0x7c57ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x7C57ACu;
    {
        const bool branch_taken_0x7c57ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C57B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C57ACu;
        // 0x7c57b0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c57ac) {
            ctx->pc = 0x7C57D8u;
            goto label_7c57d8;
        }
    }
    ctx->pc = 0x7C57B4u;
label_7c57b4:
    // 0x7c57b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c57b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c57b8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7c57b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c57bc: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x7c57bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x7c57c0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c57c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c57c4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c57c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c57c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c57c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c57cc: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C57CCu;
    SET_GPR_U32(ctx, 31, 0x7C57D4u);
    ctx->pc = 0x7C57D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C57CCu;
    // 0x7c57d0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C57CCu, 0x7C57D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C57D4u;
label_7c57d4:
    // 0x7c57d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x7c57d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_7c57d8:
    // 0x7c57d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x7C57D8u;
    {
        const bool branch_taken_0x7c57d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C57DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C57D8u;
        // 0x7c57dc: 0xae2200f4  sw          $v0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c57d8) {
            ctx->pc = 0x7C5818u;
            goto label_7c5818;
        }
    }
    ctx->pc = 0x7C57E0u;
label_7c57e0:
    // 0x7c57e0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x7c57e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x7c57e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x7c57e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x7c57e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7C57E8u;
    {
        const bool branch_taken_0x7c57e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C57ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C57E8u;
        // 0x7c57ec: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c57e8) {
            ctx->pc = 0x7C5818u;
            goto label_7c5818;
        }
    }
    ctx->pc = 0x7C57F0u;
    // 0x7c57f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c57f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c57f4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7c57f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c57f8: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x7c57f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x7c57fc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c57fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c5800: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c5800u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c5804: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c5804u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5808: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C5808u;
    SET_GPR_U32(ctx, 31, 0x7C5810u);
    ctx->pc = 0x7C580Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5808u;
    // 0x7c580c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C5808u, 0x7C5810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5810u;
label_7c5810:
    // 0x7c5810: 0xae3000f4  sw          $s0, 0xF4($s1)
    ctx->pc = 0x7c5810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 16));
    // 0x7c5814: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x7c5814u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
label_7c5818:
    // 0x7c5818: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7c5818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_7c581c:
    // 0x7c581c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7c581cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c5820: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c5820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c5824: 0x3e00008  jr          $ra
    ctx->pc = 0x7C5824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C5828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5824u;
        // 0x7c5828: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C5824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C582Cu;
    // 0x7c582c: 0x0  nop
    ctx->pc = 0x7c582cu;
    // NOP
    ctx->pc = 0x7c5830u;
}
} // namespace gh_mcport
