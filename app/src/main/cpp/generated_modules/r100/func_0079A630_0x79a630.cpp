#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r100_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r100
{
// Function: func_0079A630
// Address: 0x79a630 - 0x79a800
void func_0079A630_0x79a630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A630_0x79a630");
#endif

    switch (ctx->pc) {
        case 0x79a664u: goto label_79a664;
        case 0x79a670u: goto label_79a670;
        case 0x79a684u: goto label_79a684;
        case 0x79a6a8u: goto label_79a6a8;
        case 0x79a6bcu: goto label_79a6bc;
        case 0x79a6dcu: goto label_79a6dc;
        case 0x79a6e8u: goto label_79a6e8;
        case 0x79a6fcu: goto label_79a6fc;
        case 0x79a70cu: goto label_79a70c;
        case 0x79a720u: goto label_79a720;
        case 0x79a728u: goto label_79a728;
        case 0x79a738u: goto label_79a738;
        case 0x79a740u: goto label_79a740;
        case 0x79a750u: goto label_79a750;
        case 0x79a76cu: goto label_79a76c;
        case 0x79a780u: goto label_79a780;
        case 0x79a790u: goto label_79a790;
        case 0x79a7a4u: goto label_79a7a4;
        case 0x79a7b8u: goto label_79a7b8;
        case 0x79a7c8u: goto label_79a7c8;
        case 0x79a7dcu: goto label_79a7dc;
        default: break;
    }

    ctx->pc = 0x79a630u;

    // 0x79a630: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x79a630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x79a634: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a638: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x79a638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x79a63c: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79a63cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79a640: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x79a640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x79a644: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x79a644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x79a648: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x79a648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x79a64c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x79a64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x79a650: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x79a650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x79a654: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79a654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79a658: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79a658u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79a65c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A65Cu;
    SET_GPR_U32(ctx, 31, 0x79A664u);
    ctx->pc = 0x79A660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A65Cu;
    // 0x79a660: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A65Cu, 0x79A664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A664u;
label_79a664:
    // 0x79a664: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x79A664u;
    {
        const bool branch_taken_0x79a664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A664u;
        // 0x79a668: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a664) {
            ctx->pc = 0x79A7A4u;
            goto label_79a7a4;
        }
    }
    ctx->pc = 0x79A66Cu;
    // 0x79a66c: 0x0  nop
    ctx->pc = 0x79a66cu;
    // NOP
label_79a670:
    // 0x79a670: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x79a670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x79a674: 0x2450ea60  addiu       $s0, $v0, -0x15A0
    ctx->pc = 0x79a674u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
    // 0x79a678: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a67c: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x79A67Cu;
    SET_GPR_U32(ctx, 31, 0x79A684u);
    ctx->pc = 0x79A680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A67Cu;
    // 0x79a680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79A67Cu, 0x79A684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A684u;
label_79a684:
    // 0x79a684: 0x5451003b  bnel        $v0, $s1, . + 4 + (0x3B << 2)
    ctx->pc = 0x79A684u;
    {
        const bool branch_taken_0x79a684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x79a684) {
            ctx->pc = 0x79A688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A684u;
            // 0x79a688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A774u;
            goto label_79a774;
        }
    }
    ctx->pc = 0x79A68Cu;
    // 0x79a68c: 0x3c110074  lui         $s1, 0x74
    ctx->pc = 0x79a68cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)116 << 16));
    // 0x79a690: 0x8e227a8c  lw          $v0, 0x7A8C($s1)
    ctx->pc = 0x79a690u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A8Cu));
    // 0x79a694: 0x441004e  bgez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x79A694u;
    {
        const bool branch_taken_0x79a694 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x79A698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A694u;
        // 0x79a698: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a694) {
            ctx->pc = 0x79A7D0u;
            goto label_79a7d0;
        }
    }
    ctx->pc = 0x79A69Cu;
    // 0x79a69c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a6a0: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79A6A0u;
    SET_GPR_U32(ctx, 31, 0x79A6A8u);
    ctx->pc = 0x79A6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6A0u;
    // 0x79a6a4: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A6A0u, 0x79A6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6A8u;
label_79a6a8:
    // 0x79a6a8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x79a6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a6ac: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79a6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79a6b0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79a6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a6b4: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79A6B4u;
    SET_GPR_U32(ctx, 31, 0x79A6BCu);
    ctx->pc = 0x79A6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6B4u;
    // 0x79a6b8: 0x3c142000  lui         $s4, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79A6B4u, 0x79A6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6BCu;
label_79a6bc:
    // 0x79a6bc: 0x8e227a8c  lw          $v0, 0x7A8C($s1)
    ctx->pc = 0x79a6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31372)));
    // 0x79a6c0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x79a6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x79a6c4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a6c8: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79a6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79a6cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79a6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x79a6d0: 0x24a5c418  addiu       $a1, $a1, -0x3BE8
    ctx->pc = 0x79a6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951960));
    // 0x79a6d4: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79A6D4u;
    SET_GPR_U32(ctx, 31, 0x79A6DCu);
    ctx->pc = 0x79A6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6D4u;
    // 0x79a6d8: 0xae227a8c  sw          $v0, 0x7A8C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 31372), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79A6D4u, 0x79A6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6DCu;
label_79a6dc:
    // 0x79a6dc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x79A6DCu;
    {
        const bool branch_taken_0x79a6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a6dc) {
            ctx->pc = 0x79A720u;
            goto label_79a720;
        }
    }
    ctx->pc = 0x79A6E4u;
    // 0x79a6e4: 0x0  nop
    ctx->pc = 0x79a6e4u;
    // NOP
label_79a6e8:
    // 0x79a6e8: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x79a6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x79a6ec: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x79A6ECu;
    {
        const bool branch_taken_0x79a6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a6ec) {
            ctx->pc = 0x79A748u;
            goto label_79a748;
        }
    }
    ctx->pc = 0x79A6F4u;
    // 0x79a6f4: 0xc1e6f4c  jal         func_79BD30
    ctx->pc = 0x79A6F4u;
    SET_GPR_U32(ctx, 31, 0x79A6FCu);
    ctx->pc = 0x79BD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BD30u, 0x79A6F4u, 0x79A6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6FCu;
label_79a6fc:
    // 0x79a6fc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A6FCu;
    {
        const bool branch_taken_0x79a6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a6fc) {
            ctx->pc = 0x79A700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A6FCu;
            // 0x79a700: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A714u;
            goto label_79a714;
        }
    }
    ctx->pc = 0x79A704u;
    // 0x79a704: 0xc09cd90  jal         func_273640
    ctx->pc = 0x79A704u;
    SET_GPR_U32(ctx, 31, 0x79A70Cu);
    ctx->pc = 0x79A708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A704u;
    // 0x79a708: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273640u, 0x79A704u, 0x79A70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A70Cu;
label_79a70c:
    // 0x79a70c: 0x1050000e  beq         $v0, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x79A70Cu;
    {
        const bool branch_taken_0x79a70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x79A710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A70Cu;
        // 0x79a710: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a70c) {
            ctx->pc = 0x79A748u;
            goto label_79a748;
        }
    }
    ctx->pc = 0x79A714u;
label_79a714:
    // 0x79a714: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a718: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A718u;
    SET_GPR_U32(ctx, 31, 0x79A720u);
    ctx->pc = 0x79A71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A718u;
    // 0x79a71c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A718u, 0x79A720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A720u;
label_79a720:
    // 0x79a720: 0xc0b1010  jal         func_2C4040
    ctx->pc = 0x79A720u;
    SET_GPR_U32(ctx, 31, 0x79A728u);
    ctx->pc = 0x79A724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A720u;
    // 0x79a724: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4040u, 0x79A720u, 0x79A728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A728u;
label_79a728:
    // 0x79a728: 0x10500007  beq         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A728u;
    {
        const bool branch_taken_0x79a728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x79a728) {
            ctx->pc = 0x79A748u;
            goto label_79a748;
        }
    }
    ctx->pc = 0x79A730u;
    // 0x79a730: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79A730u;
    SET_GPR_U32(ctx, 31, 0x79A738u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A730u, 0x79A738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A738u;
label_79a738:
    // 0x79a738: 0xc0493f2  jal         func_124FC8
    ctx->pc = 0x79A738u;
    SET_GPR_U32(ctx, 31, 0x79A740u);
    ctx->pc = 0x79A73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A738u;
    // 0x79a73c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124FC8u, 0x79A738u, 0x79A740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A740u;
label_79a740:
    // 0x79a740: 0x1450ffe9  bne         $v0, $s0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x79A740u;
    {
        const bool branch_taken_0x79a740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x79A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A740u;
        // 0x79a744: 0x8e627a8c  lw          $v0, 0x7A8C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a740) {
            ctx->pc = 0x79A6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a6e8;
        }
    }
    ctx->pc = 0x79A748u;
label_79a748:
    // 0x79a748: 0xc0b0ff0  jal         func_2C3FC0
    ctx->pc = 0x79A748u;
    SET_GPR_U32(ctx, 31, 0x79A750u);
    ctx->pc = 0x79A74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A748u;
    // 0x79a74c: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3FC0u, 0x79A748u, 0x79A750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A750u;
label_79a750:
    // 0x79a750: 0x8e637a8c  lw          $v1, 0x7A8C($s3)
    ctx->pc = 0x79a750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31372)));
    // 0x79a754: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x79a754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x79a758: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79a758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79a75c: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79a75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79a760: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x79a760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79a764: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79A764u;
    SET_GPR_U32(ctx, 31, 0x79A76Cu);
    ctx->pc = 0x79A768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A764u;
    // 0x79a768: 0xae637a8c  sw          $v1, 0x7A8C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 31372), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79A764u, 0x79A76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A76Cu;
label_79a76c:
    // 0x79a76c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x79A76Cu;
    {
        const bool branch_taken_0x79a76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A76Cu;
        // 0x79a770: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a76c) {
            ctx->pc = 0x79A7D4u;
            goto label_79a7d4;
        }
    }
    ctx->pc = 0x79A774u;
label_79a774:
    // 0x79a774: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x79a774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x79a778: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x79A778u;
    SET_GPR_U32(ctx, 31, 0x79A780u);
    ctx->pc = 0x79A77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A778u;
    // 0x79a77c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79A778u, 0x79A780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A780u;
label_79a780:
    // 0x79a780: 0x14510005  bne         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A780u;
    {
        const bool branch_taken_0x79a780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x79A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A780u;
        // 0x79a784: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a780) {
            ctx->pc = 0x79A798u;
            goto label_79a798;
        }
    }
    ctx->pc = 0x79A788u;
    // 0x79a788: 0xc0a584c  jal         func_296130
    ctx->pc = 0x79A788u;
    SET_GPR_U32(ctx, 31, 0x79A790u);
    ctx->pc = 0x79A78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A788u;
    // 0x79a78c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296130u, 0x79A788u, 0x79A790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A790u;
label_79a790:
    // 0x79a790: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x79A790u;
    {
        const bool branch_taken_0x79a790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A790u;
        // 0x79a794: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a790) {
            ctx->pc = 0x79A7D4u;
            goto label_79a7d4;
        }
    }
    ctx->pc = 0x79A798u;
label_79a798:
    // 0x79a798: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a79c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A79Cu;
    SET_GPR_U32(ctx, 31, 0x79A7A4u);
    ctx->pc = 0x79A7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A79Cu;
    // 0x79a7a0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A79Cu, 0x79A7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7A4u;
label_79a7a4:
    // 0x79a7a4: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x79a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x79a7a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a7ac: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79a7acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a7b0: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79A7B0u;
    SET_GPR_U32(ctx, 31, 0x79A7B8u);
    ctx->pc = 0x79A7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7B0u;
    // 0x79a7b4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A7B0u, 0x79A7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7B8u;
label_79a7b8:
    // 0x79a7b8: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A7B8u;
    {
        const bool branch_taken_0x79a7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x79A7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7B8u;
        // 0x79a7bc: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7b8) {
            ctx->pc = 0x79A7D4u;
            goto label_79a7d4;
        }
    }
    ctx->pc = 0x79A7C0u;
    // 0x79a7c0: 0xc0a57ca  jal         func_295F28
    ctx->pc = 0x79A7C0u;
    SET_GPR_U32(ctx, 31, 0x79A7C8u);
    ctx->pc = 0x79A7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7C0u;
    // 0x79a7c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x79A7C0u, 0x79A7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7C8u;
label_79a7c8:
    // 0x79a7c8: 0x1451ffa9  bne         $v0, $s1, . + 4 + (-0x57 << 2)
    ctx->pc = 0x79A7C8u;
    {
        const bool branch_taken_0x79a7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x79A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7C8u;
        // 0x79a7cc: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7c8) {
            ctx->pc = 0x79A670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a670;
        }
    }
    ctx->pc = 0x79A7D0u;
label_79a7d0:
    // 0x79a7d0: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79a7d4:
    // 0x79a7d4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A7D4u;
    SET_GPR_U32(ctx, 31, 0x79A7DCu);
    ctx->pc = 0x79A7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7D4u;
    // 0x79a7d8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A7D4u, 0x79A7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7DCu;
label_79a7dc:
    // 0x79a7dc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x79a7dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79a7e0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x79a7e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79a7e4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x79a7e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a7e8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x79a7e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a7ec: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x79a7ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a7f0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x79a7f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a7f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79a7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x79A7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7F8u;
        // 0x79a7fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A800u;
}
} // namespace gh_r100
