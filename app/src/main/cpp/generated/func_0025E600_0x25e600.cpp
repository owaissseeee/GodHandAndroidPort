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

// Function: func_0025E600
// Address: 0x25e600 - 0x25e790
void func_0025E600_0x25e600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0025E600_0x25e600");
#endif

    switch (ctx->pc) {
        case 0x25e600u: goto label_25e600;
        case 0x25e604u: goto label_25e604;
        case 0x25e608u: goto label_25e608;
        case 0x25e60cu: goto label_25e60c;
        case 0x25e610u: goto label_25e610;
        case 0x25e614u: goto label_25e614;
        case 0x25e618u: goto label_25e618;
        case 0x25e61cu: goto label_25e61c;
        case 0x25e620u: goto label_25e620;
        case 0x25e624u: goto label_25e624;
        case 0x25e628u: goto label_25e628;
        case 0x25e62cu: goto label_25e62c;
        case 0x25e630u: goto label_25e630;
        case 0x25e634u: goto label_25e634;
        case 0x25e638u: goto label_25e638;
        case 0x25e63cu: goto label_25e63c;
        case 0x25e640u: goto label_25e640;
        case 0x25e644u: goto label_25e644;
        case 0x25e648u: goto label_25e648;
        case 0x25e64cu: goto label_25e64c;
        case 0x25e650u: goto label_25e650;
        case 0x25e654u: goto label_25e654;
        case 0x25e658u: goto label_25e658;
        case 0x25e65cu: goto label_25e65c;
        case 0x25e660u: goto label_25e660;
        case 0x25e664u: goto label_25e664;
        case 0x25e668u: goto label_25e668;
        case 0x25e66cu: goto label_25e66c;
        case 0x25e670u: goto label_25e670;
        case 0x25e674u: goto label_25e674;
        case 0x25e678u: goto label_25e678;
        case 0x25e67cu: goto label_25e67c;
        case 0x25e680u: goto label_25e680;
        case 0x25e684u: goto label_25e684;
        case 0x25e688u: goto label_25e688;
        case 0x25e68cu: goto label_25e68c;
        case 0x25e690u: goto label_25e690;
        case 0x25e694u: goto label_25e694;
        case 0x25e698u: goto label_25e698;
        case 0x25e69cu: goto label_25e69c;
        case 0x25e6a0u: goto label_25e6a0;
        case 0x25e6a4u: goto label_25e6a4;
        case 0x25e6a8u: goto label_25e6a8;
        case 0x25e6acu: goto label_25e6ac;
        case 0x25e6b0u: goto label_25e6b0;
        case 0x25e6b4u: goto label_25e6b4;
        case 0x25e6b8u: goto label_25e6b8;
        case 0x25e6bcu: goto label_25e6bc;
        case 0x25e6c0u: goto label_25e6c0;
        case 0x25e6c4u: goto label_25e6c4;
        case 0x25e6c8u: goto label_25e6c8;
        case 0x25e6ccu: goto label_25e6cc;
        case 0x25e6d0u: goto label_25e6d0;
        case 0x25e6d4u: goto label_25e6d4;
        case 0x25e6d8u: goto label_25e6d8;
        case 0x25e6dcu: goto label_25e6dc;
        case 0x25e6e0u: goto label_25e6e0;
        case 0x25e6e4u: goto label_25e6e4;
        case 0x25e6e8u: goto label_25e6e8;
        case 0x25e6ecu: goto label_25e6ec;
        case 0x25e6f0u: goto label_25e6f0;
        case 0x25e6f4u: goto label_25e6f4;
        case 0x25e6f8u: goto label_25e6f8;
        case 0x25e6fcu: goto label_25e6fc;
        case 0x25e700u: goto label_25e700;
        case 0x25e704u: goto label_25e704;
        case 0x25e708u: goto label_25e708;
        case 0x25e70cu: goto label_25e70c;
        case 0x25e710u: goto label_25e710;
        case 0x25e714u: goto label_25e714;
        case 0x25e718u: goto label_25e718;
        case 0x25e71cu: goto label_25e71c;
        case 0x25e720u: goto label_25e720;
        case 0x25e724u: goto label_25e724;
        case 0x25e728u: goto label_25e728;
        case 0x25e72cu: goto label_25e72c;
        case 0x25e730u: goto label_25e730;
        case 0x25e734u: goto label_25e734;
        case 0x25e738u: goto label_25e738;
        case 0x25e73cu: goto label_25e73c;
        case 0x25e740u: goto label_25e740;
        case 0x25e744u: goto label_25e744;
        case 0x25e748u: goto label_25e748;
        case 0x25e74cu: goto label_25e74c;
        case 0x25e750u: goto label_25e750;
        case 0x25e754u: goto label_25e754;
        case 0x25e758u: goto label_25e758;
        case 0x25e75cu: goto label_25e75c;
        case 0x25e760u: goto label_25e760;
        case 0x25e764u: goto label_25e764;
        case 0x25e768u: goto label_25e768;
        case 0x25e76cu: goto label_25e76c;
        case 0x25e770u: goto label_25e770;
        case 0x25e774u: goto label_25e774;
        case 0x25e778u: goto label_25e778;
        case 0x25e77cu: goto label_25e77c;
        case 0x25e780u: goto label_25e780;
        case 0x25e784u: goto label_25e784;
        case 0x25e788u: goto label_25e788;
        case 0x25e78cu: goto label_25e78c;
        default: break;
    }

    ctx->pc = 0x25e600u;

label_25e600:
    // 0x25e600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25e600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_25e604:
    // 0x25e604: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25e604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e608:
    // 0x25e608: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25e608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_25e60c:
    // 0x25e60c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25e60cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e610:
    // 0x25e610: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25e610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25e614:
    // 0x25e614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25e614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25e618:
    // 0x25e618: 0xc09aa4e  jal         func_26A938
label_25e61c:
    if (ctx->pc == 0x25E61Cu) {
        ctx->pc = 0x25E61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E618u;
        // 0x25e61c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E620u;
        goto label_25e620;
    }
    ctx->pc = 0x25E618u;
    SET_GPR_U32(ctx, 31, 0x25E620u);
    ctx->pc = 0x25E61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E618u;
    // 0x25e61c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A938u, 0x25E618u, 0x25E620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E620u;
label_25e620:
    // 0x25e620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e624:
    // 0x25e624: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25e624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25e628:
    // 0x25e628: 0xc09aa4e  jal         func_26A938
label_25e62c:
    if (ctx->pc == 0x25E62Cu) {
        ctx->pc = 0x25E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E628u;
        // 0x25e62c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E630u;
        goto label_25e630;
    }
    ctx->pc = 0x25E628u;
    SET_GPR_U32(ctx, 31, 0x25E630u);
    ctx->pc = 0x25E62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E628u;
    // 0x25e62c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A938u, 0x25E628u, 0x25E630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E630u;
label_25e630:
    // 0x25e630: 0xc09ac7a  jal         func_26B1E8
label_25e634:
    if (ctx->pc == 0x25E634u) {
        ctx->pc = 0x25E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E630u;
        // 0x25e634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E638u;
        goto label_25e638;
    }
    ctx->pc = 0x25E630u;
    SET_GPR_U32(ctx, 31, 0x25E638u);
    ctx->pc = 0x25E634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E630u;
    // 0x25e634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x25E630u, 0x25E638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E638u;
label_25e638:
    // 0x25e638: 0x8e04070c  lw          $a0, 0x70C($s0)
    ctx->pc = 0x25e638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1804)));
label_25e63c:
    // 0x25e63c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_25e640:
    if (ctx->pc == 0x25E640u) {
        ctx->pc = 0x25E640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E63Cu;
        // 0x25e640: 0x8e040730  lw          $a0, 0x730($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1840)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E644u;
        goto label_25e644;
    }
    ctx->pc = 0x25E63Cu;
    {
        const bool branch_taken_0x25e63c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e63c) {
            ctx->pc = 0x25E640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E63Cu;
            // 0x25e640: 0x8e040730  lw          $a0, 0x730($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E654u;
            goto label_25e654;
        }
    }
    ctx->pc = 0x25E644u;
label_25e644:
    // 0x25e644: 0xc0708c6  jal         func_1C2318
label_25e648:
    if (ctx->pc == 0x25E648u) {
        ctx->pc = 0x25E64Cu;
        goto label_25e64c;
    }
    ctx->pc = 0x25E644u;
    SET_GPR_U32(ctx, 31, 0x25E64Cu);
    ctx->pc = 0x1C2318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2318u, 0x25E644u, 0x25E64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E64Cu;
label_25e64c:
    // 0x25e64c: 0xae00070c  sw          $zero, 0x70C($s0)
    ctx->pc = 0x25e64cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1804), GPR_U32(ctx, 0));
label_25e650:
    // 0x25e650: 0x8e040730  lw          $a0, 0x730($s0)
    ctx->pc = 0x25e650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1840)));
label_25e654:
    // 0x25e654: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_25e658:
    if (ctx->pc == 0x25E658u) {
        ctx->pc = 0x25E65Cu;
        goto label_25e65c;
    }
    ctx->pc = 0x25E654u;
    {
        const bool branch_taken_0x25e654 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e654) {
            ctx->pc = 0x25E668u;
            goto label_25e668;
        }
    }
    ctx->pc = 0x25E65Cu;
label_25e65c:
    // 0x25e65c: 0xc074042  jal         func_1D0108
label_25e660:
    if (ctx->pc == 0x25E660u) {
        ctx->pc = 0x25E664u;
        goto label_25e664;
    }
    ctx->pc = 0x25E65Cu;
    SET_GPR_U32(ctx, 31, 0x25E664u);
    ctx->pc = 0x1D0108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0108u, 0x25E65Cu, 0x25E664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E664u;
label_25e664:
    // 0x25e664: 0xae000730  sw          $zero, 0x730($s0)
    ctx->pc = 0x25e664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1840), GPR_U32(ctx, 0));
label_25e668:
    // 0x25e668: 0xc09aedc  jal         func_26BB70
label_25e66c:
    if (ctx->pc == 0x25E66Cu) {
        ctx->pc = 0x25E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E668u;
        // 0x25e66c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E670u;
        goto label_25e670;
    }
    ctx->pc = 0x25E668u;
    SET_GPR_U32(ctx, 31, 0x25E670u);
    ctx->pc = 0x25E66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E668u;
    // 0x25e66c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BB70u, 0x25E668u, 0x25E670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E670u;
label_25e670:
    // 0x25e670: 0x8e040738  lw          $a0, 0x738($s0)
    ctx->pc = 0x25e670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1848)));
label_25e674:
    // 0x25e674: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_25e678:
    if (ctx->pc == 0x25E678u) {
        ctx->pc = 0x25E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E674u;
        // 0x25e678: 0x8e0406f0  lw          $a0, 0x6F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1776)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E67Cu;
        goto label_25e67c;
    }
    ctx->pc = 0x25E674u;
    {
        const bool branch_taken_0x25e674 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e674) {
            ctx->pc = 0x25E678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E674u;
            // 0x25e678: 0x8e0406f0  lw          $a0, 0x6F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1776)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E68Cu;
            goto label_25e68c;
        }
    }
    ctx->pc = 0x25E67Cu;
label_25e67c:
    // 0x25e67c: 0xc074102  jal         func_1D0408
label_25e680:
    if (ctx->pc == 0x25E680u) {
        ctx->pc = 0x25E684u;
        goto label_25e684;
    }
    ctx->pc = 0x25E67Cu;
    SET_GPR_U32(ctx, 31, 0x25E684u);
    ctx->pc = 0x1D0408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0408u, 0x25E67Cu, 0x25E684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E684u;
label_25e684:
    // 0x25e684: 0xae000738  sw          $zero, 0x738($s0)
    ctx->pc = 0x25e684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1848), GPR_U32(ctx, 0));
label_25e688:
    // 0x25e688: 0x8e0406f0  lw          $a0, 0x6F0($s0)
    ctx->pc = 0x25e688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1776)));
label_25e68c:
    // 0x25e68c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_25e690:
    if (ctx->pc == 0x25E690u) {
        ctx->pc = 0x25E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E68Cu;
        // 0x25e690: 0x8e040708  lw          $a0, 0x708($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E694u;
        goto label_25e694;
    }
    ctx->pc = 0x25E68Cu;
    {
        const bool branch_taken_0x25e68c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e68c) {
            ctx->pc = 0x25E690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E68Cu;
            // 0x25e690: 0x8e040708  lw          $a0, 0x708($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1800)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E6A0u;
            goto label_25e6a0;
        }
    }
    ctx->pc = 0x25E694u;
label_25e694:
    // 0x25e694: 0xc074134  jal         func_1D04D0
label_25e698:
    if (ctx->pc == 0x25E698u) {
        ctx->pc = 0x25E69Cu;
        goto label_25e69c;
    }
    ctx->pc = 0x25E694u;
    SET_GPR_U32(ctx, 31, 0x25E69Cu);
    ctx->pc = 0x1D04D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04D0u, 0x25E694u, 0x25E69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E69Cu;
label_25e69c:
    // 0x25e69c: 0x8e040708  lw          $a0, 0x708($s0)
    ctx->pc = 0x25e69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1800)));
label_25e6a0:
    // 0x25e6a0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_25e6a4:
    if (ctx->pc == 0x25E6A4u) {
        ctx->pc = 0x25E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E6A0u;
        // 0x25e6a4: 0x8e0216d4  lw          $v0, 0x16D4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E6A8u;
        goto label_25e6a8;
    }
    ctx->pc = 0x25E6A0u;
    {
        const bool branch_taken_0x25e6a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e6a0) {
            ctx->pc = 0x25E6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E6A0u;
            // 0x25e6a4: 0x8e0216d4  lw          $v0, 0x16D4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E6B4u;
            goto label_25e6b4;
        }
    }
    ctx->pc = 0x25E6A8u;
label_25e6a8:
    // 0x25e6a8: 0xc074170  jal         func_1D05C0
label_25e6ac:
    if (ctx->pc == 0x25E6ACu) {
        ctx->pc = 0x25E6B0u;
        goto label_25e6b0;
    }
    ctx->pc = 0x25E6A8u;
    SET_GPR_U32(ctx, 31, 0x25E6B0u);
    ctx->pc = 0x1D05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D05C0u, 0x25E6A8u, 0x25E6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E6B0u;
label_25e6b0:
    // 0x25e6b0: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x25e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
label_25e6b4:
    // 0x25e6b4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x25e6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_25e6b8:
    // 0x25e6b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_25e6bc:
    if (ctx->pc == 0x25E6BCu) {
        ctx->pc = 0x25E6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E6B8u;
        // 0x25e6bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E6C0u;
        goto label_25e6c0;
    }
    ctx->pc = 0x25E6B8u;
    {
        const bool branch_taken_0x25e6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E6B8u;
        // 0x25e6bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e6b8) {
            ctx->pc = 0x25E6E0u;
            goto label_25e6e0;
        }
    }
    ctx->pc = 0x25E6C0u;
label_25e6c0:
    // 0x25e6c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25e6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25e6c4:
    // 0x25e6c4: 0xc0c1880  jal         func_306200
label_25e6c8:
    if (ctx->pc == 0x25E6C8u) {
        ctx->pc = 0x25E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E6C4u;
        // 0x25e6c8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E6CCu;
        goto label_25e6cc;
    }
    ctx->pc = 0x25E6C4u;
    SET_GPR_U32(ctx, 31, 0x25E6CCu);
    ctx->pc = 0x25E6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E6C4u;
    // 0x25e6c8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x25E6C4u, 0x25E6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E6CCu;
label_25e6cc:
    // 0x25e6cc: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x25e6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
label_25e6d0:
    // 0x25e6d0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x25e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_25e6d4:
    // 0x25e6d4: 0x3442ffdf  ori         $v0, $v0, 0xFFDF
    ctx->pc = 0x25e6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65503);
label_25e6d8:
    // 0x25e6d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x25e6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_25e6dc:
    // 0x25e6dc: 0xae0316d4  sw          $v1, 0x16D4($s0)
    ctx->pc = 0x25e6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
label_25e6e0:
    // 0x25e6e0: 0x920202f5  lbu         $v0, 0x2F5($s0)
    ctx->pc = 0x25e6e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_25e6e4:
    // 0x25e6e4: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x25e6e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_25e6e8:
    // 0x25e6e8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_25e6ec:
    if (ctx->pc == 0x25E6ECu) {
        ctx->pc = 0x25E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E6E8u;
        // 0x25e6ec: 0xa2001864  sb          $zero, 0x1864($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E6F0u;
        goto label_25e6f0;
    }
    ctx->pc = 0x25E6E8u;
    {
        const bool branch_taken_0x25e6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E6E8u;
        // 0x25e6ec: 0xa2001864  sb          $zero, 0x1864($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e6e8) {
            ctx->pc = 0x25E6F4u;
            goto label_25e6f4;
        }
    }
    ctx->pc = 0x25E6F0u;
label_25e6f0:
    // 0x25e6f0: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x25e6f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_25e6f4:
    // 0x25e6f4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x25e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_25e6f8:
    // 0x25e6f8: 0x920302f5  lbu         $v1, 0x2F5($s0)
    ctx->pc = 0x25e6f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_25e6fc:
    // 0x25e6fc: 0x2446f878  addiu       $a2, $v0, -0x788
    ctx->pc = 0x25e6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965368));
label_25e700:
    // 0x25e700: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x25e700u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25e704:
    // 0x25e704: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x25e704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_25e708:
    // 0x25e708: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x25e708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_25e70c:
    // 0x25e70c: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x25e70cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_25e710:
    // 0x25e710: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_25e714:
    if (ctx->pc == 0x25E714u) {
        ctx->pc = 0x25E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E710u;
        // 0x25e714: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E718u;
        goto label_25e718;
    }
    ctx->pc = 0x25E710u;
    {
        const bool branch_taken_0x25e710 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x25E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E710u;
        // 0x25e714: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e710) {
            ctx->pc = 0x25E73Cu;
            goto label_25e73c;
        }
    }
    ctx->pc = 0x25E718u;
label_25e718:
    // 0x25e718: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x25e718u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_25e71c:
    // 0x25e71c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x25e71cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_25e720:
    // 0x25e720: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25e720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_25e724:
    // 0x25e724: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25e724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25e728:
    // 0x25e728: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25e728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25e72c:
    // 0x25e72c: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x25e72cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_25e730:
    // 0x25e730: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x25e730u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_25e734:
    // 0x25e734: 0x10000004  b           . + 4 + (0x4 << 2)
label_25e738:
    if (ctx->pc == 0x25E738u) {
        ctx->pc = 0x25E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E734u;
        // 0x25e738: 0x2503f878  addiu       $v1, $t0, -0x788 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E73Cu;
        goto label_25e73c;
    }
    ctx->pc = 0x25E734u;
    {
        const bool branch_taken_0x25e734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E734u;
        // 0x25e738: 0x2503f878  addiu       $v1, $t0, -0x788 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e734) {
            ctx->pc = 0x25E748u;
            goto label_25e748;
        }
    }
    ctx->pc = 0x25E73Cu;
label_25e73c:
    // 0x25e73c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x25e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_25e740:
    // 0x25e740: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x25e740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_25e744:
    // 0x25e744: 0x2503f878  addiu       $v1, $t0, -0x788
    ctx->pc = 0x25e744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965368));
label_25e748:
    // 0x25e748: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x25e748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_25e74c:
    // 0x25e74c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25e750:
    // 0x25e750: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_25e754:
    if (ctx->pc == 0x25E754u) {
        ctx->pc = 0x25E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E750u;
        // 0x25e754: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E758u;
        goto label_25e758;
    }
    ctx->pc = 0x25E750u;
    {
        const bool branch_taken_0x25e750 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x25E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E750u;
        // 0x25e754: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e750) {
            ctx->pc = 0x25E76Cu;
            goto label_25e76c;
        }
    }
    ctx->pc = 0x25E758u;
label_25e758:
    // 0x25e758: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x25e758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_25e75c:
    // 0x25e75c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_25e760:
    // 0x25e760: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x25e760u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_25e764:
    // 0x25e764: 0x10000002  b           . + 4 + (0x2 << 2)
label_25e768:
    if (ctx->pc == 0x25E768u) {
        ctx->pc = 0x25E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E764u;
        // 0x25e768: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E76Cu;
        goto label_25e76c;
    }
    ctx->pc = 0x25E764u;
    {
        const bool branch_taken_0x25e764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E764u;
        // 0x25e768: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e764) {
            ctx->pc = 0x25E770u;
            goto label_25e770;
        }
    }
    ctx->pc = 0x25E76Cu;
label_25e76c:
    // 0x25e76c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x25e76cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_25e770:
    // 0x25e770: 0xc0f809  jalr        $a2
label_25e774:
    if (ctx->pc == 0x25E774u) {
        ctx->pc = 0x25E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E770u;
        // 0x25e774: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E778u;
        goto label_25e778;
    }
    ctx->pc = 0x25E770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x25E778u);
        ctx->pc = 0x25E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E770u;
        // 0x25e774: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E770u, 0x25E778u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25E778u;
label_25e778:
    // 0x25e778: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25e778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25e77c:
    // 0x25e77c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25e77cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25e780:
    // 0x25e780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25e780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25e784:
    // 0x25e784: 0x3e00008  jr          $ra
label_25e788:
    if (ctx->pc == 0x25E788u) {
        ctx->pc = 0x25E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E784u;
        // 0x25e788: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E78Cu;
        goto label_25e78c;
    }
    ctx->pc = 0x25E784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E784u;
        // 0x25e788: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E78Cu;
label_25e78c:
    // 0x25e78c: 0x0  nop
    ctx->pc = 0x25e78cu;
    // NOP
    ctx->pc = 0x25e790u;
}
