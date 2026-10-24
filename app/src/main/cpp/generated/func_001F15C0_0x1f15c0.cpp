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

// Function: func_001F15C0
// Address: 0x1f15c0 - 0x1f16d8
void func_001F15C0_0x1f15c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F15C0_0x1f15c0");
#endif

    switch (ctx->pc) {
        case 0x1f1614u: goto label_1f1614;
        case 0x1f1640u: goto label_1f1640;
        case 0x1f1670u: goto label_1f1670;
        case 0x1f1690u: goto label_1f1690;
        case 0x1f1698u: goto label_1f1698;
        default: break;
    }

    ctx->pc = 0x1f15c0u;

    // 0x1f15c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f15c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f15c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f15c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f15c8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f15c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f15cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f15ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f15d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f15d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f15d4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f15d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f15d8: 0x8e110b94  lw          $s1, 0xB94($s0)
    ctx->pc = 0x1f15d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f15dc: 0x12220012  beq         $s1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F15DCu;
    {
        const bool branch_taken_0x1f15dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F15E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F15DCu;
        // 0x1f15e0: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f15dc) {
            ctx->pc = 0x1F1628u;
            goto label_1f1628;
        }
    }
    ctx->pc = 0x1F15E4u;
    // 0x1f15e4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F15E4u;
    {
        const bool branch_taken_0x1f15e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f15e4) {
            ctx->pc = 0x1F15E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F15E4u;
            // 0x1f15e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F15FCu;
            goto label_1f15fc;
        }
    }
    ctx->pc = 0x1F15ECu;
    // 0x1f15ec: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F15ECu;
    {
        const bool branch_taken_0x1f15ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f15ec) {
            ctx->pc = 0x1F160Cu;
            goto label_1f160c;
        }
    }
    ctx->pc = 0x1F15F4u;
    // 0x1f15f4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1F15F4u;
    {
        const bool branch_taken_0x1f15f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F15F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F15F4u;
        // 0x1f15f8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f15f4) {
            ctx->pc = 0x1F16C4u;
            goto label_1f16c4;
        }
    }
    ctx->pc = 0x1F15FCu;
label_1f15fc:
    // 0x1f15fc: 0x52220017  beql        $s1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F15FCu;
    {
        const bool branch_taken_0x1f15fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f15fc) {
            ctx->pc = 0x1F1600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F15FCu;
            // 0x1f1600: 0x8e020ba0  lw          $v0, 0xBA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F165Cu;
            goto label_1f165c;
        }
    }
    ctx->pc = 0x1F1604u;
    // 0x1f1604: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1F1604u;
    {
        const bool branch_taken_0x1f1604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1604u;
        // 0x1f1608: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1604) {
            ctx->pc = 0x1F16C4u;
            goto label_1f16c4;
        }
    }
    ctx->pc = 0x1F160Cu;
label_1f160c:
    // 0x1f160c: 0xc07be5e  jal         func_1EF978
    ctx->pc = 0x1F160Cu;
    SET_GPR_U32(ctx, 31, 0x1F1614u);
    ctx->pc = 0x1F1610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F160Cu;
    // 0x1f1610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF978u, 0x1F160Cu, 0x1F1614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1614u;
label_1f1614:
    // 0x1f1614: 0x8e020b94  lw          $v0, 0xB94($s0)
    ctx->pc = 0x1f1614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f1618: 0xae000ba0  sw          $zero, 0xBA0($s0)
    ctx->pc = 0x1f1618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2976), GPR_U32(ctx, 0));
    // 0x1f161c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f161cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f1620: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1F1620u;
    {
        const bool branch_taken_0x1f1620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1620u;
        // 0x1f1624: 0xae020b94  sw          $v0, 0xB94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2964), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1620) {
            ctx->pc = 0x1F16C0u;
            goto label_1f16c0;
        }
    }
    ctx->pc = 0x1F1628u;
label_1f1628:
    // 0x1f1628: 0x8e020ba0  lw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f1628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
    // 0x1f162c: 0x28420258  slti        $v0, $v0, 0x258
    ctx->pc = 0x1f162cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x1f1630: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1630u;
    {
        const bool branch_taken_0x1f1630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1630u;
        // 0x1f1634: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1630) {
            ctx->pc = 0x1F164Cu;
            goto label_1f164c;
        }
    }
    ctx->pc = 0x1F1638u;
    // 0x1f1638: 0xc07be2e  jal         func_1EF8B8
    ctx->pc = 0x1F1638u;
    SET_GPR_U32(ctx, 31, 0x1F1640u);
    ctx->pc = 0x1F163Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1638u;
    // 0x1f163c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF8B8u, 0x1F1638u, 0x1F1640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1640u;
label_1f1640:
    // 0x1f1640: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F1640u;
    {
        const bool branch_taken_0x1f1640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1640) {
            ctx->pc = 0x1F1644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1640u;
            // 0x1f1644: 0x8e020ba0  lw          $v0, 0xBA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F16B8u;
            goto label_1f16b8;
        }
    }
    ctx->pc = 0x1F1648u;
    // 0x1f1648: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f1648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_1f164c:
    // 0x1f164c: 0xa3b10000  sb          $s1, 0x0($sp)
    ctx->pc = 0x1f164cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x1f1650: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f1650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f1654: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F1654u;
    {
        const bool branch_taken_0x1f1654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1654u;
        // 0x1f1658: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1654) {
            ctx->pc = 0x1F1688u;
            goto label_1f1688;
        }
    }
    ctx->pc = 0x1F165Cu;
label_1f165c:
    // 0x1f165c: 0x28420258  slti        $v0, $v0, 0x258
    ctx->pc = 0x1f165cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x1f1660: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1660u;
    {
        const bool branch_taken_0x1f1660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1660u;
        // 0x1f1664: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1660) {
            ctx->pc = 0x1F167Cu;
            goto label_1f167c;
        }
    }
    ctx->pc = 0x1F1668u;
    // 0x1f1668: 0xc07be2e  jal         func_1EF8B8
    ctx->pc = 0x1F1668u;
    SET_GPR_U32(ctx, 31, 0x1F1670u);
    ctx->pc = 0x1F166Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1668u;
    // 0x1f166c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF8B8u, 0x1F1668u, 0x1F1670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1670u;
label_1f1670:
    // 0x1f1670: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F1670u;
    {
        const bool branch_taken_0x1f1670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1670) {
            ctx->pc = 0x1F1674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1670u;
            // 0x1f1674: 0x8e020ba0  lw          $v0, 0xBA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F16B8u;
            goto label_1f16b8;
        }
    }
    ctx->pc = 0x1F1678u;
    // 0x1f1678: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f1678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_1f167c:
    // 0x1f167c: 0xa3b10000  sb          $s1, 0x0($sp)
    ctx->pc = 0x1f167cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x1f1680: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f1680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f1684: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f1684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f1688:
    // 0x1f1688: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x1F1688u;
    SET_GPR_U32(ctx, 31, 0x1F1690u);
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x1F1688u, 0x1F1690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1690u;
label_1f1690:
    // 0x1f1690: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x1F1690u;
    SET_GPR_U32(ctx, 31, 0x1F1698u);
    ctx->pc = 0x1F1694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1690u;
    // 0x1f1694: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x1F1690u, 0x1F1698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1698u;
label_1f1698:
    // 0x1f1698: 0x8e020b8c  lw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f1698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2956)));
    // 0x1f169c: 0x8e030b94  lw          $v1, 0xB94($s0)
    ctx->pc = 0x1f169cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f16a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f16a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f16a4: 0xae000ba0  sw          $zero, 0xBA0($s0)
    ctx->pc = 0x1f16a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2976), GPR_U32(ctx, 0));
    // 0x1f16a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f16a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f16ac: 0xae020b8c  sw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f16acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2956), GPR_U32(ctx, 2));
    // 0x1f16b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F16B0u;
    {
        const bool branch_taken_0x1f16b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F16B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16B0u;
        // 0x1f16b4: 0xae030b94  sw          $v1, 0xB94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2964), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f16b0) {
            ctx->pc = 0x1F16C0u;
            goto label_1f16c0;
        }
    }
    ctx->pc = 0x1F16B8u;
label_1f16b8:
    // 0x1f16b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f16b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f16bc: 0xae020ba0  sw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f16bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2976), GPR_U32(ctx, 2));
label_1f16c0:
    // 0x1f16c0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f16c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f16c4:
    // 0x1f16c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f16c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f16c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f16c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f16cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F16CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F16D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16CCu;
        // 0x1f16d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F16CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F16D4u;
    // 0x1f16d4: 0x0  nop
    ctx->pc = 0x1f16d4u;
    // NOP
    ctx->pc = 0x1f16d8u;
}
