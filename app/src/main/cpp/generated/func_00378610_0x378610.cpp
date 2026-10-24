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

// Function: func_00378610
// Address: 0x378610 - 0x378760
void func_00378610_0x378610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00378610_0x378610");
#endif

    switch (ctx->pc) {
        case 0x378684u: goto label_378684;
        case 0x3786a4u: goto label_3786a4;
        case 0x3786acu: goto label_3786ac;
        case 0x3786d8u: goto label_3786d8;
        case 0x378748u: goto label_378748;
        default: break;
    }

    ctx->pc = 0x378610u;

    // 0x378610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x378610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x378614: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x378614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x378618: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x378618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37861c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37861cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378620: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x378620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x378624: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x378624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x378628: 0x30420120  andi        $v0, $v0, 0x120
    ctx->pc = 0x378628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)288);
    // 0x37862c: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x37862Cu;
    {
        const bool branch_taken_0x37862c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37862c) {
            ctx->pc = 0x378630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37862Cu;
            // 0x378630: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3786E8u;
            goto label_3786e8;
        }
    }
    ctx->pc = 0x378634u;
    // 0x378634: 0x82030005  lb          $v1, 0x5($s0)
    ctx->pc = 0x378634u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x378638: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x378638u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x37863c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x37863Cu;
    {
        const bool branch_taken_0x37863c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x378640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37863Cu;
        // 0x378640: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37863c) {
            ctx->pc = 0x3786BCu;
            goto label_3786bc;
        }
    }
    ctx->pc = 0x378644u;
    // 0x378644: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x378644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x378648: 0x2442b180  addiu       $v0, $v0, -0x4E80
    ctx->pc = 0x378648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947200));
    // 0x37864c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x37864cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x378650: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x378650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x378654: 0x800008  jr          $a0
    ctx->pc = 0x378654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37865Cu: goto label_37865c;
            case 0x378664u: goto label_378664;
            case 0x378670u: goto label_378670;
            case 0x37867Cu: goto label_37867c;
            case 0x37868Cu: goto label_37868c;
            case 0x3786BCu: goto label_3786bc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378654u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x37865Cu;
label_37865c:
    // 0x37865c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x37865Cu;
    {
        const bool branch_taken_0x37865c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37865Cu;
        // 0x378660: 0xa2000007  sb          $zero, 0x7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37865c) {
            ctx->pc = 0x3786BCu;
            goto label_3786bc;
        }
    }
    ctx->pc = 0x378664u;
label_378664:
    // 0x378664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x378664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378668: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x378668u;
    {
        const bool branch_taken_0x378668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378668u;
        // 0x37866c: 0xa2020007  sb          $v0, 0x7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378668) {
            ctx->pc = 0x3786BCu;
            goto label_3786bc;
        }
    }
    ctx->pc = 0x378670u;
label_378670:
    // 0x378670: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x378670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x378674: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x378674u;
    {
        const bool branch_taken_0x378674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378674u;
        // 0x378678: 0xa2020007  sb          $v0, 0x7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378674) {
            ctx->pc = 0x3786BCu;
            goto label_3786bc;
        }
    }
    ctx->pc = 0x37867Cu;
label_37867c:
    // 0x37867c: 0xc0ded78  jal         func_37B5E0
    ctx->pc = 0x37867Cu;
    SET_GPR_U32(ctx, 31, 0x378684u);
    ctx->pc = 0x378680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37867Cu;
    // 0x378680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B5E0u, 0x37867Cu, 0x378684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378684u;
label_378684:
    // 0x378684: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x378684u;
    {
        const bool branch_taken_0x378684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378684u;
        // 0x378688: 0x82020007  lb          $v0, 0x7($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378684) {
            ctx->pc = 0x3786C0u;
            goto label_3786c0;
        }
    }
    ctx->pc = 0x37868Cu;
label_37868c:
    // 0x37868c: 0x3c11003f  lui         $s1, 0x3F
    ctx->pc = 0x37868cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
    // 0x378690: 0x8e2221b8  lw          $v0, 0x21B8($s1)
    ctx->pc = 0x378690u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F21B8u));
    // 0x378694: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x378694u;
    {
        const bool branch_taken_0x378694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x378694) {
            ctx->pc = 0x378698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378694u;
            // 0x378698: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37874Cu;
            goto label_37874c;
        }
    }
    ctx->pc = 0x37869Cu;
    // 0x37869c: 0xc0c3d54  jal         func_30F550
    ctx->pc = 0x37869Cu;
    SET_GPR_U32(ctx, 31, 0x3786A4u);
    ctx->pc = 0x3786A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37869Cu;
    // 0x3786a0: 0x240404f8  addiu       $a0, $zero, 0x4F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F550u, 0x37869Cu, 0x3786A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3786A4u;
label_3786a4:
    // 0x3786a4: 0xc0df68a  jal         func_37DA28
    ctx->pc = 0x3786A4u;
    SET_GPR_U32(ctx, 31, 0x3786ACu);
    ctx->pc = 0x3786A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3786A4u;
    // 0x3786a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37DA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37DA28u, 0x3786A4u, 0x3786ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3786ACu;
label_3786ac:
    // 0x3786ac: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3786ACu;
    {
        const bool branch_taken_0x3786ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3786B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3786ACu;
        // 0x3786b0: 0xae2221b8  sw          $v0, 0x21B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8632), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3786ac) {
            ctx->pc = 0x378748u;
            goto label_378748;
        }
    }
    ctx->pc = 0x3786B4u;
    // 0x3786b4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x3786B4u;
    {
        const bool branch_taken_0x3786b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3786B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3786B4u;
        // 0x3786b8: 0xa2000004  sb          $zero, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3786b4) {
            ctx->pc = 0x378748u;
            goto label_378748;
        }
    }
    ctx->pc = 0x3786BCu;
label_3786bc:
    // 0x3786bc: 0x82020007  lb          $v0, 0x7($s0)
    ctx->pc = 0x3786bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_3786c0:
    // 0x3786c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3786c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3786c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3786c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3786c8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3786c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3786cc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3786ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3786d0: 0xc0de83c  jal         func_37A0F0
    ctx->pc = 0x3786D0u;
    SET_GPR_U32(ctx, 31, 0x3786D8u);
    ctx->pc = 0x3786D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3786D0u;
    // 0x3786d4: 0x84450016  lh          $a1, 0x16($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A0F0u, 0x3786D0u, 0x3786D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3786D8u;
label_3786d8:
    // 0x3786d8: 0x443001b  bgezl       $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3786D8u;
    {
        const bool branch_taken_0x3786d8 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x3786d8) {
            ctx->pc = 0x3786DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3786D8u;
            // 0x3786dc: 0xa2000004  sb          $zero, 0x4($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378748u;
            goto label_378748;
        }
    }
    ctx->pc = 0x3786E0u;
    // 0x3786e0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3786E0u;
    {
        const bool branch_taken_0x3786e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3786E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3786E0u;
        // 0x3786e4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3786e0) {
            ctx->pc = 0x37874Cu;
            goto label_37874c;
        }
    }
    ctx->pc = 0x3786E8u;
label_3786e8:
    // 0x3786e8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x3786e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x3786ec: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3786ECu;
    {
        const bool branch_taken_0x3786ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3786ec) {
            ctx->pc = 0x3786F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3786ECu;
            // 0x3786f0: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378704u;
            goto label_378704;
        }
    }
    ctx->pc = 0x3786F4u;
    // 0x3786f4: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x3786f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x3786f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3786f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3786fc: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x3786fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x378700: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x378700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_378704:
    // 0x378704: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x378704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x378708: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x378708u;
    {
        const bool branch_taken_0x378708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x378708) {
            ctx->pc = 0x37870Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378708u;
            // 0x37870c: 0x82020005  lb          $v0, 0x5($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378720u;
            goto label_378720;
        }
    }
    ctx->pc = 0x378710u;
    // 0x378710: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x378710u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x378714: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x378714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x378718: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x378718u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x37871c: 0x82020005  lb          $v0, 0x5($s0)
    ctx->pc = 0x37871cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_378720:
    // 0x378720: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x378720u;
    {
        const bool branch_taken_0x378720 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x378720) {
            ctx->pc = 0x378724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378720u;
            // 0x378724: 0x82020005  lb          $v0, 0x5($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378734u;
            goto label_378734;
        }
    }
    ctx->pc = 0x378728u;
    // 0x378728: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x378728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37872c: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x37872cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x378730: 0x82020005  lb          $v0, 0x5($s0)
    ctx->pc = 0x378730u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_378734:
    // 0x378734: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x378734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x378738: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x378738u;
    {
        const bool branch_taken_0x378738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x378738) {
            ctx->pc = 0x37873Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378738u;
            // 0x37873c: 0xa2000005  sb          $zero, 0x5($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378740u;
            goto label_378740;
        }
    }
    ctx->pc = 0x378740u;
label_378740:
    // 0x378740: 0xc0de21a  jal         func_378868
    ctx->pc = 0x378740u;
    SET_GPR_U32(ctx, 31, 0x378748u);
    ctx->pc = 0x378744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378740u;
    // 0x378744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378868u, 0x378740u, 0x378748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378748u;
label_378748:
    // 0x378748: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x378748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37874c:
    // 0x37874c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37874cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x378750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x378750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x378754: 0x3e00008  jr          $ra
    ctx->pc = 0x378754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378754u;
        // 0x378758: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37875Cu;
    // 0x37875c: 0x0  nop
    ctx->pc = 0x37875cu;
    // NOP
    ctx->pc = 0x378760u;
}
