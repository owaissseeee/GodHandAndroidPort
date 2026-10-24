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

// Function: _sceMpegMbAddressIncrement
// Address: 0x39e648 - 0x39e7c0
void _sceMpegMbAddressIncrement_0x39e648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceMpegMbAddressIncrement_0x39e648");
#endif

    switch (ctx->pc) {
        case 0x39e680u: goto label_39e680;
        case 0x39e688u: goto label_39e688;
        case 0x39e6a4u: goto label_39e6a4;
        case 0x39e744u: goto label_39e744;
        case 0x39e768u: goto label_39e768;
        case 0x39e780u: goto label_39e780;
        default: break;
    }

    ctx->pc = 0x39e648u;

    // 0x39e648: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x39e648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x39e64c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x39e64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x39e650: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x39e650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x39e654: 0x3c150046  lui         $s5, 0x46
    ctx->pc = 0x39e654u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)70 << 16));
    // 0x39e658: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x39e658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x39e65c: 0x3c143000  lui         $s4, 0x3000
    ctx->pc = 0x39e65cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)12288 << 16));
    // 0x39e660: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x39e660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x39e664: 0x24130020  addiu       $s3, $zero, 0x20
    ctx->pc = 0x39e664u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x39e668: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x39e668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x39e66c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x39e66cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e670: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x39e670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x39e674: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39e674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e678: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39e678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39e67c: 0x0  nop
    ctx->pc = 0x39e67cu;
    // NOP
label_39e680:
    // 0x39e680: 0xc0e7b2e  jal         func_39ECB8
    ctx->pc = 0x39E680u;
    SET_GPR_U32(ctx, 31, 0x39E688u);
    ctx->pc = 0x39E684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E680u;
    // 0x39e684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39ECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ECB8u, 0x39E680u, 0x39E688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E688u;
label_39e688:
    // 0x39e688: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39e688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39e68c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39e68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e690: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x39e690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x39e694: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x39e694u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 20));
    // 0x39e698: 0xae34082c  sw          $s4, 0x82C($s1)
    ctx->pc = 0x39e698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 20));
    // 0x39e69c: 0xc0e7a4a  jal         func_39E928
    ctx->pc = 0x39E69Cu;
    SET_GPR_U32(ctx, 31, 0x39E6A4u);
    ctx->pc = 0x39E6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E69Cu;
    // 0x39e6a0: 0xae200828  sw          $zero, 0x828($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E928u, 0x39E69Cu, 0x39E6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E6A4u;
label_39e6a4:
    // 0x39e6a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x39e6a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e6a8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39e6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39e6ac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39e6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39e6b0: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x39e6b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x39e6b4: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x39e6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x39e6b8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x39e6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u));
    // 0x39e6bc: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x39e6bcu;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x39e6c0: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x39e6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x39e6c4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x39e6c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x39e6c8: 0x4810006  bgez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39E6C8u;
    {
        const bool branch_taken_0x39e6c8 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x39E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E6C8u;
        // 0x39e6cc: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e6c8) {
            ctx->pc = 0x39E6E4u;
            goto label_39e6e4;
        }
    }
    ctx->pc = 0x39E6D0u;
    // 0x39e6d0: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x39e6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x39e6d4: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x39e6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x39e6d8: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x39e6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x39e6dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39E6DCu;
    {
        const bool branch_taken_0x39e6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E6DCu;
        // 0x39e6e0: 0xae22084c  sw          $v0, 0x84C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e6dc) {
            ctx->pc = 0x39E6E8u;
            goto label_39e6e8;
        }
    }
    ctx->pc = 0x39E6E4u;
label_39e6e4:
    // 0x39e6e4: 0xae33084c  sw          $s3, 0x84C($s1)
    ctx->pc = 0x39e6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 19));
label_39e6e8:
    // 0x39e6e8: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x39e6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x39e6ec: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x39e6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x39e6f0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x39e6f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x39e6f4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x39e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x39e6f8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x39e6f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x39e6fc: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x39e6fcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x39e700: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x39e700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x39e704: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x39E704u;
    {
        const bool branch_taken_0x39e704 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x39E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E704u;
        // 0x39e708: 0xae23012c  sw          $v1, 0x12C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e704) {
            ctx->pc = 0x39E768u;
            goto label_39e768;
        }
    }
    ctx->pc = 0x39E70Cu;
    // 0x39e70c: 0x2e020023  sltiu       $v0, $s0, 0x23
    ctx->pc = 0x39e70cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x39e710: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39E710u;
    {
        const bool branch_taken_0x39e710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E710u;
        // 0x39e714: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e710) {
            ctx->pc = 0x39E728u;
            goto label_39e728;
        }
    }
    ctx->pc = 0x39E718u;
    // 0x39e718: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x39E718u;
    {
        const bool branch_taken_0x39e718 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E718u;
        // 0x39e71c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e718) {
            ctx->pc = 0x39E73Cu;
            goto label_39e73c;
        }
    }
    ctx->pc = 0x39E720u;
    // 0x39e720: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x39E720u;
    {
        const bool branch_taken_0x39e720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E720u;
        // 0x39e724: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e720) {
            ctx->pc = 0x39E790u;
            goto label_39e790;
        }
    }
    ctx->pc = 0x39E728u;
label_39e728:
    // 0x39e728: 0x56020019  bnel        $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x39E728u;
    {
        const bool branch_taken_0x39e728 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x39e728) {
            ctx->pc = 0x39E72Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E728u;
            // 0x39e72c: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E790u;
            goto label_39e790;
        }
    }
    ctx->pc = 0x39E730u;
    // 0x39e730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39e730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39e734: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x39E734u;
    {
        const bool branch_taken_0x39e734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E734u;
        // 0x39e738: 0x26520021  addiu       $s2, $s2, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e734) {
            ctx->pc = 0x39E794u;
            goto label_39e794;
        }
    }
    ctx->pc = 0x39E73Cu;
label_39e73c:
    // 0x39e73c: 0xc0e7ae4  jal         func_39EB90
    ctx->pc = 0x39E73Cu;
    SET_GPR_U32(ctx, 31, 0x39E744u);
    ctx->pc = 0x39E740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E73Cu;
    // 0x39e740: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EB90u, 0x39E73Cu, 0x39E744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E744u;
label_39e744:
    // 0x39e744: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x39e744u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e748: 0x8e220858  lw          $v0, 0x858($s1)
    ctx->pc = 0x39e748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x39e74c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x39E74Cu;
    {
        const bool branch_taken_0x39e74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E74Cu;
        // 0x39e750: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e74c) {
            ctx->pc = 0x39E770u;
            goto label_39e770;
        }
    }
    ctx->pc = 0x39E754u;
    // 0x39e754: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39E754u;
    {
        const bool branch_taken_0x39e754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x39E758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E754u;
        // 0x39e758: 0x26a5e770  addiu       $a1, $s5, -0x1890 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e754) {
            ctx->pc = 0x39E774u;
            goto label_39e774;
        }
    }
    ctx->pc = 0x39E75Cu;
    // 0x39e75c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39e75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e760: 0xc0e7b3c  jal         func_39ECF0
    ctx->pc = 0x39E760u;
    SET_GPR_U32(ctx, 31, 0x39E768u);
    ctx->pc = 0x39E764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E760u;
    // 0x39e764: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39ECF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ECF0u, 0x39E760u, 0x39E768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E768u;
label_39e768:
    // 0x39e768: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x39E768u;
    {
        const bool branch_taken_0x39e768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E768u;
        // 0x39e76c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e768) {
            ctx->pc = 0x39E794u;
            goto label_39e794;
        }
    }
    ctx->pc = 0x39E770u;
label_39e770:
    // 0x39e770: 0x26a5e770  addiu       $a1, $s5, -0x1890
    ctx->pc = 0x39e770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961008));
label_39e774:
    // 0x39e774: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x39e774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e778: 0xc0e70fa  jal         func_39C3E8
    ctx->pc = 0x39E778u;
    SET_GPR_U32(ctx, 31, 0x39E780u);
    ctx->pc = 0x39E77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E778u;
    // 0x39e77c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C3E8u, 0x39E778u, 0x39E780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E780u;
label_39e780:
    // 0x39e780: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39e780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39e784: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39e784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39e788: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39E788u;
    {
        const bool branch_taken_0x39e788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E788u;
        // 0x39e78c: 0xae23012c  sw          $v1, 0x12C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e788) {
            ctx->pc = 0x39E79Cu;
            goto label_39e79c;
        }
    }
    ctx->pc = 0x39E790u;
label_39e790:
    // 0x39e790: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39e790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39e794:
    // 0x39e794: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x39E794u;
    {
        const bool branch_taken_0x39e794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E794u;
        // 0x39e798: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e794) {
            ctx->pc = 0x39E680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39e680;
        }
    }
    ctx->pc = 0x39E79Cu;
label_39e79c:
    // 0x39e79c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x39e79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39e7a0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x39e7a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39e7a4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x39e7a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39e7a8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x39e7a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39e7ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x39e7acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39e7b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x39e7b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39e7b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39e7b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39e7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x39E7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E7B8u;
        // 0x39e7bc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E7B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E7C0u;
}
