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
// Function: Control__7cMcLoad
// Address: 0x7c1610 - 0x7c16d8
void Control__7cMcLoad_0x7c1610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Control__7cMcLoad_0x7c1610");
#endif

    switch (ctx->pc) {
        case 0x7c1650u: goto label_7c1650;
        case 0x7c1660u: goto label_7c1660;
        case 0x7c1670u: goto label_7c1670;
        case 0x7c1680u: goto label_7c1680;
        case 0x7c1690u: goto label_7c1690;
        case 0x7c16a0u: goto label_7c16a0;
        case 0x7c16b0u: goto label_7c16b0;
        case 0x7c16c0u: goto label_7c16c0;
        case 0x7c16c8u: goto label_7c16c8;
        default: break;
    }

    ctx->pc = 0x7c1610u;

    // 0x7c1610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c1610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c1614: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7c1614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7c1618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c1618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c161c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c161cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1620: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x7c1620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x7c1624: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x7c1624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x7c1628: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x7C1628u;
    {
        const bool branch_taken_0x7c1628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1628u;
        // 0x7c162c: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1628) {
            ctx->pc = 0x7C16C0u;
            goto label_7c16c0;
        }
    }
    ctx->pc = 0x7C1630u;
    // 0x7c1630: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7c1630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7c1634: 0x24420a20  addiu       $v0, $v0, 0xA20
    ctx->pc = 0x7c1634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2592));
    // 0x7c1638: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7c1638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7c163c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7c163cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c1640: 0x800008  jr          $a0
    ctx->pc = 0x7C1640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7C1648u: goto label_7c1648;
            case 0x7C1658u: goto label_7c1658;
            case 0x7C1668u: goto label_7c1668;
            case 0x7C1678u: goto label_7c1678;
            case 0x7C1688u: goto label_7c1688;
            case 0x7C1698u: goto label_7c1698;
            case 0x7C16A8u: goto label_7c16a8;
            case 0x7C16B8u: goto label_7c16b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C1640u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7C1648u;
label_7c1648:
    // 0x7c1648: 0xc1f05b6  jal         func_7C16D8
    ctx->pc = 0x7C1648u;
    SET_GPR_U32(ctx, 31, 0x7C1650u);
    ctx->pc = 0x7C164Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1648u;
    // 0x7c164c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C16D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C16D8u, 0x7C1648u, 0x7C1650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1650u;
label_7c1650:
    // 0x7c1650: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x7C1650u;
    {
        const bool branch_taken_0x7c1650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c1650) {
            ctx->pc = 0x7C16C0u;
            goto label_7c16c0;
        }
    }
    ctx->pc = 0x7C1658u;
label_7c1658:
    // 0x7c1658: 0xc1f0634  jal         func_7C18D0
    ctx->pc = 0x7C1658u;
    SET_GPR_U32(ctx, 31, 0x7C1660u);
    ctx->pc = 0x7C165Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1658u;
    // 0x7c165c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C18D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C18D0u, 0x7C1658u, 0x7C1660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1660u;
label_7c1660:
    // 0x7c1660: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x7C1660u;
    {
        const bool branch_taken_0x7c1660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c1660) {
            ctx->pc = 0x7C16C0u;
            goto label_7c16c0;
        }
    }
    ctx->pc = 0x7C1668u;
label_7c1668:
    // 0x7c1668: 0xc1f0710  jal         func_7C1C40
    ctx->pc = 0x7C1668u;
    SET_GPR_U32(ctx, 31, 0x7C1670u);
    ctx->pc = 0x7C166Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1668u;
    // 0x7c166c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C1C40u, 0x7C1668u, 0x7C1670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1670u;
label_7c1670:
    // 0x7c1670: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x7C1670u;
    {
        const bool branch_taken_0x7c1670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c1670) {
            ctx->pc = 0x7C16C0u;
            goto label_7c16c0;
        }
    }
    ctx->pc = 0x7C1678u;
label_7c1678:
    // 0x7c1678: 0xc1f084c  jal         func_7C2130
    ctx->pc = 0x7C1678u;
    SET_GPR_U32(ctx, 31, 0x7C1680u);
    ctx->pc = 0x7C167Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1678u;
    // 0x7c167c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C2130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C2130u, 0x7C1678u, 0x7C1680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1680u;
label_7c1680:
    // 0x7c1680: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x7C1680u;
    {
        const bool branch_taken_0x7c1680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c1680) {
            ctx->pc = 0x7C16C0u;
            goto label_7c16c0;
        }
    }
    ctx->pc = 0x7C1688u;
label_7c1688:
    // 0x7c1688: 0xc1f0944  jal         func_7C2510
    ctx->pc = 0x7C1688u;
    SET_GPR_U32(ctx, 31, 0x7C1690u);
    ctx->pc = 0x7C168Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1688u;
    // 0x7c168c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C2510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C2510u, 0x7C1688u, 0x7C1690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1690u;
label_7c1690:
    // 0x7c1690: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x7C1690u;
    {
        const bool branch_taken_0x7c1690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c1690) {
            ctx->pc = 0x7C16C0u;
            goto label_7c16c0;
        }
    }
    ctx->pc = 0x7C1698u;
label_7c1698:
    // 0x7c1698: 0xc1f09e0  jal         func_7C2780
    ctx->pc = 0x7C1698u;
    SET_GPR_U32(ctx, 31, 0x7C16A0u);
    ctx->pc = 0x7C169Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1698u;
    // 0x7c169c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C2780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C2780u, 0x7C1698u, 0x7C16A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C16A0u;
label_7c16a0:
    // 0x7c16a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x7C16A0u;
    {
        const bool branch_taken_0x7c16a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c16a0) {
            ctx->pc = 0x7C16C0u;
            goto label_7c16c0;
        }
    }
    ctx->pc = 0x7C16A8u;
label_7c16a8:
    // 0x7c16a8: 0xc1f0a7a  jal         func_7C29E8
    ctx->pc = 0x7C16A8u;
    SET_GPR_U32(ctx, 31, 0x7C16B0u);
    ctx->pc = 0x7C16ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C16A8u;
    // 0x7c16ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C29E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C29E8u, 0x7C16A8u, 0x7C16B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C16B0u;
label_7c16b0:
    // 0x7c16b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7C16B0u;
    {
        const bool branch_taken_0x7c16b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c16b0) {
            ctx->pc = 0x7C16C0u;
            goto label_7c16c0;
        }
    }
    ctx->pc = 0x7C16B8u;
label_7c16b8:
    // 0x7c16b8: 0xc1f0ab6  jal         func_7C2AD8
    ctx->pc = 0x7C16B8u;
    SET_GPR_U32(ctx, 31, 0x7C16C0u);
    ctx->pc = 0x7C16BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C16B8u;
    // 0x7c16bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C2AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C2AD8u, 0x7C16B8u, 0x7C16C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C16C0u;
label_7c16c0:
    // 0x7c16c0: 0xc1f1cd2  jal         func_7C7348
    ctx->pc = 0x7C16C0u;
    SET_GPR_U32(ctx, 31, 0x7C16C8u);
    ctx->pc = 0x7C16C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C16C0u;
    // 0x7c16c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7348u, 0x7C16C0u, 0x7C16C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C16C8u;
label_7c16c8:
    // 0x7c16c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7c16c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c16cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c16ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c16d0: 0x3e00008  jr          $ra
    ctx->pc = 0x7C16D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C16D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C16D0u;
        // 0x7c16d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C16D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C16D8u;
}
} // namespace gh_mcport
