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

// Function: func_002B16F0
// Address: 0x2b16f0 - 0x2b17a8
void func_002B16F0_0x2b16f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B16F0_0x2b16f0");
#endif

    switch (ctx->pc) {
        case 0x2b1758u: goto label_2b1758;
        case 0x2b1768u: goto label_2b1768;
        case 0x2b1778u: goto label_2b1778;
        case 0x2b1788u: goto label_2b1788;
        case 0x2b1798u: goto label_2b1798;
        default: break;
    }

    ctx->pc = 0x2b16f0u;

    // 0x2b16f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b16f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b16f4: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2b16f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2b16f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b16f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b16fc: 0x24637a2c  addiu       $v1, $v1, 0x7A2C
    ctx->pc = 0x2b16fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31276));
    // 0x2b1700: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2b1700u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A30u));
    // 0x2b1704: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x2b1704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x2b1708: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b1708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b170c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2B170Cu;
    {
        const bool branch_taken_0x2b170c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B170Cu;
        // 0x2b1710: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b170c) {
            ctx->pc = 0x2B1798u;
            goto label_2b1798;
        }
    }
    ctx->pc = 0x2B1714u;
    // 0x2b1714: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x2b1714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2b1718: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2b1718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2b171c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b171cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1720: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2B1720u;
    {
        const bool branch_taken_0x2b1720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1720u;
        // 0x2b1724: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1720) {
            ctx->pc = 0x2B179Cu;
            goto label_2b179c;
        }
    }
    ctx->pc = 0x2B1728u;
    // 0x2b1728: 0x90a300a4  lbu         $v1, 0xA4($a1)
    ctx->pc = 0x2b1728u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 164)));
    // 0x2b172c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x2b172cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2b1730: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B1730u;
    {
        const bool branch_taken_0x2b1730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1730u;
        // 0x2b1734: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1730) {
            ctx->pc = 0x2B179Cu;
            goto label_2b179c;
        }
    }
    ctx->pc = 0x2B1738u;
    // 0x2b1738: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b1738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b173c: 0x2442b190  addiu       $v0, $v0, -0x4E70
    ctx->pc = 0x2b173cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947216));
    // 0x2b1740: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b1740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b1744: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b1744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b1748: 0x800008  jr          $a0
    ctx->pc = 0x2B1748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B1750u: goto label_2b1750;
            case 0x2B1760u: goto label_2b1760;
            case 0x2B1770u: goto label_2b1770;
            case 0x2B1780u: goto label_2b1780;
            case 0x2B1790u: goto label_2b1790;
            case 0x2B1798u: goto label_2b1798;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1748u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B1750u;
label_2b1750:
    // 0x2b1750: 0xc0ac5ea  jal         func_2B17A8
    ctx->pc = 0x2B1750u;
    SET_GPR_U32(ctx, 31, 0x2B1758u);
    ctx->pc = 0x2B1754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1750u;
    // 0x2b1754: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B17A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B17A8u, 0x2B1750u, 0x2B1758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1758u;
label_2b1758:
    // 0x2b1758: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2B1758u;
    {
        const bool branch_taken_0x2b1758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1758u;
        // 0x2b175c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1758) {
            ctx->pc = 0x2B179Cu;
            goto label_2b179c;
        }
    }
    ctx->pc = 0x2B1760u;
label_2b1760:
    // 0x2b1760: 0xc0ac5fe  jal         func_2B17F8
    ctx->pc = 0x2B1760u;
    SET_GPR_U32(ctx, 31, 0x2B1768u);
    ctx->pc = 0x2B1764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1760u;
    // 0x2b1764: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B17F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B17F8u, 0x2B1760u, 0x2B1768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1768u;
label_2b1768:
    // 0x2b1768: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B1768u;
    {
        const bool branch_taken_0x2b1768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1768u;
        // 0x2b176c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1768) {
            ctx->pc = 0x2B179Cu;
            goto label_2b179c;
        }
    }
    ctx->pc = 0x2B1770u;
label_2b1770:
    // 0x2b1770: 0xc0ac60c  jal         func_2B1830
    ctx->pc = 0x2B1770u;
    SET_GPR_U32(ctx, 31, 0x2B1778u);
    ctx->pc = 0x2B1774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1770u;
    // 0x2b1774: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1830u, 0x2B1770u, 0x2B1778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1778u;
label_2b1778:
    // 0x2b1778: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B1778u;
    {
        const bool branch_taken_0x2b1778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1778u;
        // 0x2b177c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1778) {
            ctx->pc = 0x2B179Cu;
            goto label_2b179c;
        }
    }
    ctx->pc = 0x2B1780u;
label_2b1780:
    // 0x2b1780: 0xc0ac6fa  jal         func_2B1BE8
    ctx->pc = 0x2B1780u;
    SET_GPR_U32(ctx, 31, 0x2B1788u);
    ctx->pc = 0x2B1784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1780u;
    // 0x2b1784: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1BE8u, 0x2B1780u, 0x2B1788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1788u;
label_2b1788:
    // 0x2b1788: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1788u;
    {
        const bool branch_taken_0x2b1788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1788u;
        // 0x2b178c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1788) {
            ctx->pc = 0x2B179Cu;
            goto label_2b179c;
        }
    }
    ctx->pc = 0x2B1790u;
label_2b1790:
    // 0x2b1790: 0xc0ac70c  jal         func_2B1C30
    ctx->pc = 0x2B1790u;
    SET_GPR_U32(ctx, 31, 0x2B1798u);
    ctx->pc = 0x2B1794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1790u;
    // 0x2b1794: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1C30u, 0x2B1790u, 0x2B1798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1798u;
label_2b1798:
    // 0x2b1798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b1798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b179c:
    // 0x2b179c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B179Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B17A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B179Cu;
        // 0x2b17a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B179Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B17A4u;
    // 0x2b17a4: 0x0  nop
    ctx->pc = 0x2b17a4u;
    // NOP
    ctx->pc = 0x2b17a8u;
}
