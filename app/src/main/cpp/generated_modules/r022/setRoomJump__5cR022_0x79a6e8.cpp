#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: setRoomJump__5cR022
// Address: 0x79a6e8 - 0x79a7b0
void setRoomJump__5cR022_0x79a6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setRoomJump__5cR022_0x79a6e8");
#endif

    switch (ctx->pc) {
        case 0x79a710u: goto label_79a710;
        case 0x79a728u: goto label_79a728;
        default: break;
    }

    ctx->pc = 0x79a6e8u;

    // 0x79a6e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79a6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79a6ec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x79a6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79a6f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79a6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x79a6f4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x79a6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a6f8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x79a6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x79a6fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79a6fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a700: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a704: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x79A704u;
    {
        const bool branch_taken_0x79a704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A704u;
        // 0x79a708: 0x3c120057  lui         $s2, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a704) {
            ctx->pc = 0x79A714u;
            goto label_79a714;
        }
    }
    ctx->pc = 0x79A70Cu;
    // 0x79a70c: 0x0  nop
    ctx->pc = 0x79a70cu;
    // NOP
label_79a710:
    // 0x79a710: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x79a710u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_79a714:
    // 0x79a714: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x79a714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a718: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A718u;
    {
        const bool branch_taken_0x79a718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A718u;
        // 0x79a71c: 0x26449b70  addiu       $a0, $s2, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a718) {
            ctx->pc = 0x79A730u;
            goto label_79a730;
        }
    }
    ctx->pc = 0x79A720u;
    // 0x79a720: 0xc07eff4  jal         func_1FBFD0
    ctx->pc = 0x79A720u;
    SET_GPR_U32(ctx, 31, 0x79A728u);
    ctx->pc = 0x79A724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A720u;
    // 0x79a724: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x79A720u, 0x79A728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A728u;
label_79a728:
    // 0x79a728: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79A728u;
    {
        const bool branch_taken_0x79a728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A728u;
        // 0x79a72c: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a728) {
            ctx->pc = 0x79A710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a710;
        }
    }
    ctx->pc = 0x79A730u;
label_79a730:
    // 0x79a730: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x79a730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x79a734: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x79a734u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x79a738: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x79a738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x79a73c: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x79a73cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x79a740: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x79A740u;
    {
        const bool branch_taken_0x79a740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A740u;
        // 0x79a744: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a740) {
            ctx->pc = 0x79A798u;
            goto label_79a798;
        }
    }
    ctx->pc = 0x79A748u;
    // 0x79a748: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79a748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79a74c: 0x2442cd00  addiu       $v0, $v0, -0x3300
    ctx->pc = 0x79a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954240));
    // 0x79a750: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79a754: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79a754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79a758: 0x800008  jr          $a0
    ctx->pc = 0x79A758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79A760u: goto label_79a760;
            case 0x79A768u: goto label_79a768;
            case 0x79A770u: goto label_79a770;
            case 0x79A778u: goto label_79a778;
            case 0x79A780u: goto label_79a780;
            case 0x79A788u: goto label_79a788;
            case 0x79A790u: goto label_79a790;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A758u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79A760u;
label_79a760:
    // 0x79a760: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x79A760u;
    {
        const bool branch_taken_0x79a760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A760u;
        // 0x79a764: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a760) {
            ctx->pc = 0x79A794u;
            goto label_79a794;
        }
    }
    ctx->pc = 0x79A768u;
label_79a768:
    // 0x79a768: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x79A768u;
    {
        const bool branch_taken_0x79a768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A768u;
        // 0x79a76c: 0x24020300  addiu       $v0, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a768) {
            ctx->pc = 0x79A794u;
            goto label_79a794;
        }
    }
    ctx->pc = 0x79A770u;
label_79a770:
    // 0x79a770: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x79A770u;
    {
        const bool branch_taken_0x79a770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A770u;
        // 0x79a774: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a770) {
            ctx->pc = 0x79A794u;
            goto label_79a794;
        }
    }
    ctx->pc = 0x79A778u;
label_79a778:
    // 0x79a778: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79A778u;
    {
        const bool branch_taken_0x79a778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A778u;
        // 0x79a77c: 0x24020500  addiu       $v0, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a778) {
            ctx->pc = 0x79A794u;
            goto label_79a794;
        }
    }
    ctx->pc = 0x79A780u;
label_79a780:
    // 0x79a780: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79A780u;
    {
        const bool branch_taken_0x79a780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A780u;
        // 0x79a784: 0x24020600  addiu       $v0, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a780) {
            ctx->pc = 0x79A794u;
            goto label_79a794;
        }
    }
    ctx->pc = 0x79A788u;
label_79a788:
    // 0x79a788: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A788u;
    {
        const bool branch_taken_0x79a788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A788u;
        // 0x79a78c: 0x24020700  addiu       $v0, $zero, 0x700 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a788) {
            ctx->pc = 0x79A794u;
            goto label_79a794;
        }
    }
    ctx->pc = 0x79A790u;
label_79a790:
    // 0x79a790: 0x24020802  addiu       $v0, $zero, 0x802
    ctx->pc = 0x79a790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
label_79a794:
    // 0x79a794: 0xa62200c8  sh          $v0, 0xC8($s1)
    ctx->pc = 0x79a794u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 200), (uint16_t)GPR_U32(ctx, 2));
label_79a798:
    // 0x79a798: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79a798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a79c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79a79cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a7a0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x79a7a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a7a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x79A7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7A8u;
        // 0x79a7ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A7B0u;
}
} // namespace gh_r022
