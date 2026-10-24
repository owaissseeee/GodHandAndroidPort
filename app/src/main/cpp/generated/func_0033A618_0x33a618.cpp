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

// Function: func_0033A618
// Address: 0x33a618 - 0x33a6d0
void func_0033A618_0x33a618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033A618_0x33a618");
#endif

    switch (ctx->pc) {
        case 0x33a618u: goto label_33a618;
        case 0x33a61cu: goto label_33a61c;
        case 0x33a620u: goto label_33a620;
        case 0x33a624u: goto label_33a624;
        case 0x33a628u: goto label_33a628;
        case 0x33a62cu: goto label_33a62c;
        case 0x33a630u: goto label_33a630;
        case 0x33a634u: goto label_33a634;
        case 0x33a638u: goto label_33a638;
        case 0x33a63cu: goto label_33a63c;
        case 0x33a640u: goto label_33a640;
        case 0x33a644u: goto label_33a644;
        case 0x33a648u: goto label_33a648;
        case 0x33a64cu: goto label_33a64c;
        case 0x33a650u: goto label_33a650;
        case 0x33a654u: goto label_33a654;
        case 0x33a658u: goto label_33a658;
        case 0x33a65cu: goto label_33a65c;
        case 0x33a660u: goto label_33a660;
        case 0x33a664u: goto label_33a664;
        case 0x33a668u: goto label_33a668;
        case 0x33a66cu: goto label_33a66c;
        case 0x33a670u: goto label_33a670;
        case 0x33a674u: goto label_33a674;
        case 0x33a678u: goto label_33a678;
        case 0x33a67cu: goto label_33a67c;
        case 0x33a680u: goto label_33a680;
        case 0x33a684u: goto label_33a684;
        case 0x33a688u: goto label_33a688;
        case 0x33a68cu: goto label_33a68c;
        case 0x33a690u: goto label_33a690;
        case 0x33a694u: goto label_33a694;
        case 0x33a698u: goto label_33a698;
        case 0x33a69cu: goto label_33a69c;
        case 0x33a6a0u: goto label_33a6a0;
        case 0x33a6a4u: goto label_33a6a4;
        case 0x33a6a8u: goto label_33a6a8;
        case 0x33a6acu: goto label_33a6ac;
        case 0x33a6b0u: goto label_33a6b0;
        case 0x33a6b4u: goto label_33a6b4;
        case 0x33a6b8u: goto label_33a6b8;
        case 0x33a6bcu: goto label_33a6bc;
        case 0x33a6c0u: goto label_33a6c0;
        case 0x33a6c4u: goto label_33a6c4;
        case 0x33a6c8u: goto label_33a6c8;
        case 0x33a6ccu: goto label_33a6cc;
        default: break;
    }

    ctx->pc = 0x33a618u;

label_33a618:
    // 0x33a618: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33a618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33a61c:
    // 0x33a61c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_33a620:
    if (ctx->pc == 0x33A620u) {
        ctx->pc = 0x33A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A61Cu;
        // 0x33a620: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A624u;
        goto label_33a624;
    }
    ctx->pc = 0x33A61Cu;
    {
        const bool branch_taken_0x33a61c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A61Cu;
        // 0x33a620: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a61c) {
            ctx->pc = 0x33A638u;
            goto label_33a638;
        }
    }
    ctx->pc = 0x33A624u;
label_33a624:
    // 0x33a624: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33a624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_33a628:
    // 0x33a628: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x33a628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_33a62c:
    // 0x33a62c: 0x24845c88  addiu       $a0, $a0, 0x5C88
    ctx->pc = 0x33a62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23688));
label_33a630:
    // 0x33a630: 0x10000008  b           . + 4 + (0x8 << 2)
label_33a634:
    if (ctx->pc == 0x33A634u) {
        ctx->pc = 0x33A634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A630u;
        // 0x33a634: 0x24a55bd8  addiu       $a1, $a1, 0x5BD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A638u;
        goto label_33a638;
    }
    ctx->pc = 0x33A630u;
    {
        const bool branch_taken_0x33a630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A630u;
        // 0x33a634: 0x24a55bd8  addiu       $a1, $a1, 0x5BD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a630) {
            ctx->pc = 0x33A654u;
            goto label_33a654;
        }
    }
    ctx->pc = 0x33A638u;
label_33a638:
    // 0x33a638: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x33a638u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_33a63c:
    // 0x33a63c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_33a640:
    if (ctx->pc == 0x33A640u) {
        ctx->pc = 0x33A640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A63Cu;
        // 0x33a640: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A644u;
        goto label_33a644;
    }
    ctx->pc = 0x33A63Cu;
    {
        const bool branch_taken_0x33a63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a63c) {
            ctx->pc = 0x33A640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A63Cu;
            // 0x33a640: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A668u;
            goto label_33a668;
        }
    }
    ctx->pc = 0x33A644u;
label_33a644:
    // 0x33a644: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33a644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_33a648:
    // 0x33a648: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x33a648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_33a64c:
    // 0x33a64c: 0x24845c98  addiu       $a0, $a0, 0x5C98
    ctx->pc = 0x33a64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23704));
label_33a650:
    // 0x33a650: 0x24a55c08  addiu       $a1, $a1, 0x5C08
    ctx->pc = 0x33a650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23560));
label_33a654:
    // 0x33a654: 0xc0ce812  jal         func_33A048
label_33a658:
    if (ctx->pc == 0x33A658u) {
        ctx->pc = 0x33A65Cu;
        goto label_33a65c;
    }
    ctx->pc = 0x33A654u;
    SET_GPR_U32(ctx, 31, 0x33A65Cu);
    ctx->pc = 0x33A048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A048u, 0x33A654u, 0x33A65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A65Cu;
label_33a65c:
    // 0x33a65c: 0x10000018  b           . + 4 + (0x18 << 2)
label_33a660:
    if (ctx->pc == 0x33A660u) {
        ctx->pc = 0x33A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A65Cu;
        // 0x33a660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A664u;
        goto label_33a664;
    }
    ctx->pc = 0x33A65Cu;
    {
        const bool branch_taken_0x33a65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A65Cu;
        // 0x33a660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a65c) {
            ctx->pc = 0x33A6C0u;
            goto label_33a6c0;
        }
    }
    ctx->pc = 0x33A664u;
label_33a664:
    // 0x33a664: 0x0  nop
    ctx->pc = 0x33a664u;
    // NOP
label_33a668:
    // 0x33a668: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_33a66c:
    if (ctx->pc == 0x33A66Cu) {
        ctx->pc = 0x33A66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A668u;
        // 0x33a66c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A670u;
        goto label_33a670;
    }
    ctx->pc = 0x33A668u;
    {
        const bool branch_taken_0x33a668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A668u;
        // 0x33a66c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a668) {
            ctx->pc = 0x33A690u;
            goto label_33a690;
        }
    }
    ctx->pc = 0x33A670u;
label_33a670:
    // 0x33a670: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x33a670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_33a674:
    // 0x33a674: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_33a678:
    if (ctx->pc == 0x33A678u) {
        ctx->pc = 0x33A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A674u;
        // 0x33a678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A67Cu;
        goto label_33a67c;
    }
    ctx->pc = 0x33A674u;
    {
        const bool branch_taken_0x33a674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a674) {
            ctx->pc = 0x33A678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A674u;
            // 0x33a678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A6C0u;
            goto label_33a6c0;
        }
    }
    ctx->pc = 0x33A67Cu;
label_33a67c:
    // 0x33a67c: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x33a67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_33a680:
    // 0x33a680: 0x40f809  jalr        $v0
label_33a684:
    if (ctx->pc == 0x33A684u) {
        ctx->pc = 0x33A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A680u;
        // 0x33a684: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A688u;
        goto label_33a688;
    }
    ctx->pc = 0x33A680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33A688u);
        ctx->pc = 0x33A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A680u;
        // 0x33a684: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A680u, 0x33A688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33A688u;
label_33a688:
    // 0x33a688: 0x1000000d  b           . + 4 + (0xD << 2)
label_33a68c:
    if (ctx->pc == 0x33A68Cu) {
        ctx->pc = 0x33A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A688u;
        // 0x33a68c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A690u;
        goto label_33a690;
    }
    ctx->pc = 0x33A688u;
    {
        const bool branch_taken_0x33a688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A688u;
        // 0x33a68c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a688) {
            ctx->pc = 0x33A6C0u;
            goto label_33a6c0;
        }
    }
    ctx->pc = 0x33A690u;
label_33a690:
    // 0x33a690: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33a690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_33a694:
    // 0x33a694: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x33a694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_33a698:
    // 0x33a698: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_33a69c:
    if (ctx->pc == 0x33A69Cu) {
        ctx->pc = 0x33A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A698u;
        // 0x33a69c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A6A0u;
        goto label_33a6a0;
    }
    ctx->pc = 0x33A698u;
    {
        const bool branch_taken_0x33a698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A698u;
        // 0x33a69c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a698) {
            ctx->pc = 0x33A6BCu;
            goto label_33a6bc;
        }
    }
    ctx->pc = 0x33A6A0u;
label_33a6a0:
    // 0x33a6a0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x33a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_33a6a4:
    // 0x33a6a4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x33a6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33a6a8:
    // 0x33a6a8: 0x0  nop
    ctx->pc = 0x33a6a8u;
    // NOP
label_33a6ac:
    // 0x33a6ac: 0x0  nop
    ctx->pc = 0x33a6acu;
    // NOP
label_33a6b0:
    // 0x33a6b0: 0x0  nop
    ctx->pc = 0x33a6b0u;
    // NOP
label_33a6b4:
    // 0x33a6b4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_33a6b8:
    if (ctx->pc == 0x33A6B8u) {
        ctx->pc = 0x33A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A6B4u;
        // 0x33a6b8: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A6BCu;
        goto label_33a6bc;
    }
    ctx->pc = 0x33A6B4u;
    {
        const bool branch_taken_0x33a6b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A6B4u;
        // 0x33a6b8: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a6b4) {
            ctx->pc = 0x33A6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a6a0;
        }
    }
    ctx->pc = 0x33A6BCu;
label_33a6bc:
    // 0x33a6bc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x33a6bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_33a6c0:
    // 0x33a6c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33a6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33a6c4:
    // 0x33a6c4: 0x3e00008  jr          $ra
label_33a6c8:
    if (ctx->pc == 0x33A6C8u) {
        ctx->pc = 0x33A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A6C4u;
        // 0x33a6c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A6CCu;
        goto label_33a6cc;
    }
    ctx->pc = 0x33A6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A6C4u;
        // 0x33a6c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A6C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A6CCu;
label_33a6cc:
    // 0x33a6cc: 0x0  nop
    ctx->pc = 0x33a6ccu;
    // NOP
    ctx->pc = 0x33a6d0u;
}
