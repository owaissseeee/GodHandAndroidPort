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

// Function: sceRead
// Address: 0x3b4868 - 0x3b4ad8
void sceRead_0x3b4868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceRead_0x3b4868");
#endif

    switch (ctx->pc) {
        case 0x3b48a8u: goto label_3b48a8;
        case 0x3b48b4u: goto label_3b48b4;
        case 0x3b48e0u: goto label_3b48e0;
        case 0x3b492cu: goto label_3b492c;
        case 0x3b4954u: goto label_3b4954;
        case 0x3b4990u: goto label_3b4990;
        case 0x3b49ccu: goto label_3b49cc;
        case 0x3b49f8u: goto label_3b49f8;
        case 0x3b4a04u: goto label_3b4a04;
        case 0x3b4a38u: goto label_3b4a38;
        case 0x3b4a48u: goto label_3b4a48;
        case 0x3b4a50u: goto label_3b4a50;
        case 0x3b4a60u: goto label_3b4a60;
        case 0x3b4a70u: goto label_3b4a70;
        case 0x3b4a88u: goto label_3b4a88;
        case 0x3b4a98u: goto label_3b4a98;
        case 0x3b4aa0u: goto label_3b4aa0;
        default: break;
    }

    ctx->pc = 0x3b4868u;

    // 0x3b4868: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3b4868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x3b486c: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x3b486cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x3b4870: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x3b4870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x3b4874: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x3b4874u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4878: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x3b4878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x3b487c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x3b487cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4880: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x3b4880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x3b4884: 0x3c150078  lui         $s5, 0x78
    ctx->pc = 0x3b4884u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)120 << 16));
    // 0x3b4888: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x3b4888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x3b488c: 0x26b1ffc0  addiu       $s1, $s5, -0x40
    ctx->pc = 0x3b488cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967232));
    // 0x3b4890: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x3b4890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x3b4894: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x3b4894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x3b4898: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x3b4898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x3b489c: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x3b489cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x3b48a0: 0xc0ece92  jal         func_3B3A48
    ctx->pc = 0x3B48A0u;
    SET_GPR_U32(ctx, 31, 0x3B48A8u);
    ctx->pc = 0x3B48A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B48A0u;
    // 0x3b48a4: 0xffb20060  sd          $s2, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3A48u, 0x3B48A0u, 0x3B48A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B48A8u;
label_3b48a8:
    // 0x3b48a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b48a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b48ac: 0xc0ecfb2  jal         func_3B3EC8
    ctx->pc = 0x3B48ACu;
    SET_GPR_U32(ctx, 31, 0x3B48B4u);
    ctx->pc = 0x3B48B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B48ACu;
    // 0x3b48b0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EC8u, 0x3B48ACu, 0x3B48B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B48B4u;
label_3b48b4:
    // 0x3b48b4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3b48b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3b48b8: 0x8c62aedc  lw          $v0, -0x5124($v1)
    ctx->pc = 0x3b48b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAEDCu));
    // 0x3b48bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B48BCu;
    {
        const bool branch_taken_0x3b48bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b48bc) {
            ctx->pc = 0x3B48D8u;
            goto label_3b48d8;
        }
    }
    ctx->pc = 0x3B48C4u;
    // 0x3b48c4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B48C4u;
    {
        const bool branch_taken_0x3b48c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b48c4) {
            ctx->pc = 0x3B48D8u;
            goto label_3b48d8;
        }
    }
    ctx->pc = 0x3B48CCu;
    // 0x3b48cc: 0x8e140004  lw          $s4, 0x4($s0)
    ctx->pc = 0x3b48ccu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3b48d0: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B48D0u;
    {
        const bool branch_taken_0x3b48d0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B48D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B48D0u;
        // 0x3b48d4: 0x3c020078  lui         $v0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b48d0) {
            ctx->pc = 0x3B48E8u;
            goto label_3b48e8;
        }
    }
    ctx->pc = 0x3B48D8u;
label_3b48d8:
    // 0x3b48d8: 0xc0ecfbe  jal         func_3B3EF8
    ctx->pc = 0x3B48D8u;
    SET_GPR_U32(ctx, 31, 0x3B48E0u);
    ctx->pc = 0x3B3EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EF8u, 0x3B48D8u, 0x3B48E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B48E0u;
label_3b48e0:
    // 0x3b48e0: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x3B48E0u;
    {
        const bool branch_taken_0x3b48e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B48E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B48E0u;
        // 0x3b48e4: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b48e0) {
            ctx->pc = 0x3B4AA4u;
            goto label_3b4aa4;
        }
    }
    ctx->pc = 0x3B48E8u;
label_3b48e8:
    // 0x3b48e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3b48e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b48ec: 0x244214c0  addiu       $v0, $v0, 0x14C0
    ctx->pc = 0x3b48ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5312));
    // 0x3b48f0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3b48f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3b48f4: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x3b48f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3b48f8: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x3b48f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
    // 0x3b48fc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3b48fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3b4900: 0x24630168  addiu       $v1, $v1, 0x168
    ctx->pc = 0x3b4900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 360));
    // 0x3b4904: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x3b4904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x3b4908: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b4908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b490c: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x3b490cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x3b4910: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3b4910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3b4914: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x3b4914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x3b4918: 0x32908000  andi        $s0, $s4, 0x8000
    ctx->pc = 0x3b4918u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32768);
    // 0x3b491c: 0xae370010  sw          $s7, 0x10($s1)
    ctx->pc = 0x3b491cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 23));
    // 0x3b4920: 0xae3e0014  sw          $fp, 0x14($s1)
    ctx->pc = 0x3b4920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 30));
    // 0x3b4924: 0xc0ebf28  jal         func_3AFCA0
    ctx->pc = 0x3B4924u;
    SET_GPR_U32(ctx, 31, 0x3B492Cu);
    ctx->pc = 0x3B4928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4924u;
    // 0x3b4928: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCA0u, 0x3B4924u, 0x3B492Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B492Cu;
label_3b492c:
    // 0x3b492c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3b492cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4930: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3b4930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b4934: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x3b4934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b4938: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x3b4938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x3b493c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3b493cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3b4940: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3B4940u;
    {
        const bool branch_taken_0x3b4940 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4940u;
        // 0x3b4944: 0xaeb3ffc0  sw          $s3, -0x40($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294967232), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4940) {
            ctx->pc = 0x3B49D4u;
            goto label_3b49d4;
        }
    }
    ctx->pc = 0x3B4948u;
    // 0x3b4948: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x3b4948u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    // 0x3b494c: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x3B494Cu;
    SET_GPR_U32(ctx, 31, 0x3B4954u);
    ctx->pc = 0x3B4950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B494Cu;
    // 0x3b4950: 0x8ec4aeec  lw          $a0, -0x5114($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294946540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x3B494Cu, 0x3B4954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4954u;
label_3b4954:
    // 0x3b4954: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x3b4954u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x3b4958: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b4958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b495c: 0x8ce3ae58  lw          $v1, -0x51A8($a3)
    ctx->pc = 0x3b495cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FAE58u));
    // 0x3b4960: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b4960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b4964: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B4964u;
    {
        const bool branch_taken_0x3b4964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B4968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4964u;
        // 0x3b4968: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4964) {
            ctx->pc = 0x3B4988u;
            goto label_3b4988;
        }
    }
    ctx->pc = 0x3B496Cu;
    // 0x3b496c: 0x8ea3ffc0  lw          $v1, -0x40($s5)
    ctx->pc = 0x3b496cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967232)));
    // 0x3b4970: 0x3c100078  lui         $s0, 0x78
    ctx->pc = 0x3b4970u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)120 << 16));
    // 0x3b4974: 0x31023  negu        $v0, $v1
    ctx->pc = 0x3b4974u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x3b4978: 0xace3ae58  sw          $v1, -0x51A8($a3)
    ctx->pc = 0x3b4978u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294946392), GPR_U32(ctx, 3));
    // 0x3b497c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3B497Cu;
    {
        const bool branch_taken_0x3b497c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B497Cu;
        // 0x3b4980: 0xaea2ffc0  sw          $v0, -0x40($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294967232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b497c) {
            ctx->pc = 0x3B49C4u;
            goto label_3b49c4;
        }
    }
    ctx->pc = 0x3B4984u;
    // 0x3b4984: 0x0  nop
    ctx->pc = 0x3b4984u;
    // NOP
label_3b4988:
    // 0x3b4988: 0x3c100078  lui         $s0, 0x78
    ctx->pc = 0x3b4988u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)120 << 16));
    // 0x3b498c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3b498cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3b4990:
    // 0x3b4990: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x3b4990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3b4994: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B4994u;
    {
        const bool branch_taken_0x3b4994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4994u;
        // 0x3b4998: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4994) {
            ctx->pc = 0x3B49C4u;
            goto label_3b49c4;
        }
    }
    ctx->pc = 0x3B499Cu;
    // 0x3b499c: 0x24e3ae58  addiu       $v1, $a3, -0x51A8
    ctx->pc = 0x3b499cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946392));
    // 0x3b49a0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3b49a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b49a4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3b49a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b49a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3b49a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b49ac: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3B49ACu;
    {
        const bool branch_taken_0x3b49ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3B49B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B49ACu;
        // 0x3b49b0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b49ac) {
            ctx->pc = 0x3B4990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b4990;
        }
    }
    ctx->pc = 0x3B49B4u;
    // 0x3b49b4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3b49b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b49b8: 0x21823  negu        $v1, $v0
    ctx->pc = 0x3b49b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3b49bc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3b49bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x3b49c0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3b49c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3b49c4:
    // 0x3b49c4: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x3B49C4u;
    SET_GPR_U32(ctx, 31, 0x3B49CCu);
    ctx->pc = 0x3B49C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B49C4u;
    // 0x3b49c8: 0x8ec4aeec  lw          $a0, -0x5114($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294946540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x3B49C4u, 0x3B49CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B49CCu;
label_3b49cc:
    // 0x3b49cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B49CCu;
    {
        const bool branch_taken_0x3b49cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B49D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B49CCu;
        // 0x3b49d0: 0x3c162000  lui         $s6, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b49cc) {
            ctx->pc = 0x3B49E0u;
            goto label_3b49e0;
        }
    }
    ctx->pc = 0x3B49D4u;
label_3b49d4:
    // 0x3b49d4: 0x3c100078  lui         $s0, 0x78
    ctx->pc = 0x3b49d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)120 << 16));
    // 0x3b49d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3b49d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b49dc: 0x3c162000  lui         $s6, 0x2000
    ctx->pc = 0x3b49dcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)8192 << 16));
label_3b49e0:
    // 0x3b49e0: 0x2961024  and         $v0, $s4, $s6
    ctx->pc = 0x3b49e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 22));
    // 0x3b49e4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B49E4u;
    {
        const bool branch_taken_0x3b49e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B49E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B49E4u;
        // 0x3b49e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b49e4) {
            ctx->pc = 0x3B49FCu;
            goto label_3b49fc;
        }
    }
    ctx->pc = 0x3B49ECu;
    // 0x3b49ec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3b49ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b49f0: 0xc0eca14  jal         func_3B2850
    ctx->pc = 0x3B49F0u;
    SET_GPR_U32(ctx, 31, 0x3B49F8u);
    ctx->pc = 0x3B49F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B49F0u;
    // 0x3b49f4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2850u, 0x3B49F0u, 0x3B49F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B49F8u;
label_3b49f8:
    // 0x3b49f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b49f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b49fc:
    // 0x3b49fc: 0xc0eca14  jal         func_3B2850
    ctx->pc = 0x3B49FCu;
    SET_GPR_U32(ctx, 31, 0x3B4A04u);
    ctx->pc = 0x3B4A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B49FCu;
    // 0x3b4a00: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2850u, 0x3B49FCu, 0x3B4A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4A04u;
label_3b4a04:
    // 0x3b4a04: 0x26100c00  addiu       $s0, $s0, 0xC00
    ctx->pc = 0x3b4a04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3072));
    // 0x3b4a08: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x3b4a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x3b4a0c: 0x26a7ffc0  addiu       $a3, $s5, -0x40
    ctx->pc = 0x3b4a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967232));
    // 0x3b4a10: 0x244416c0  addiu       $a0, $v0, 0x16C0
    ctx->pc = 0x3b4a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x3b4a14: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3b4a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3b4a18: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3b4a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b4a1c: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x3b4a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x3b4a20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b4a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4a24: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x3b4a24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3b4a28: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3b4a28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4a2c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3b4a2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b4a30: 0xc0ece56  jal         func_3B3958
    ctx->pc = 0x3B4A30u;
    SET_GPR_U32(ctx, 31, 0x3B4A38u);
    ctx->pc = 0x3B4A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4A30u;
    // 0x3b4a34: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3958u, 0x3B4A30u, 0x3B4A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4A38u;
label_3b4a38:
    // 0x3b4a38: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B4A38u;
    {
        const bool branch_taken_0x3b4a38 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3B4A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4A38u;
        // 0x3b4a3c: 0x2d01025  or          $v0, $s6, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4a38) {
            ctx->pc = 0x3B4A58u;
            goto label_3b4a58;
        }
    }
    ctx->pc = 0x3B4A40u;
    // 0x3b4a40: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B4A40u;
    SET_GPR_U32(ctx, 31, 0x3B4A48u);
    ctx->pc = 0x3B4A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4A40u;
    // 0x3b4a44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B4A40u, 0x3B4A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4A48u;
label_3b4a48:
    // 0x3b4a48: 0xc0ecfbe  jal         func_3B3EF8
    ctx->pc = 0x3B4A48u;
    SET_GPR_U32(ctx, 31, 0x3B4A50u);
    ctx->pc = 0x3B3EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EF8u, 0x3B4A48u, 0x3B4A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4A50u;
label_3b4a50:
    // 0x3b4a50: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3B4A50u;
    {
        const bool branch_taken_0x3b4a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4A50u;
        // 0x3b4a54: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4a50) {
            ctx->pc = 0x3B4AA4u;
            goto label_3b4aa4;
        }
    }
    ctx->pc = 0x3B4A58u;
label_3b4a58:
    // 0x3b4a58: 0xc0ecfbe  jal         func_3B3EF8
    ctx->pc = 0x3B4A58u;
    SET_GPR_U32(ctx, 31, 0x3B4A60u);
    ctx->pc = 0x3B4A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4A58u;
    // 0x3b4a5c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EF8u, 0x3B4A58u, 0x3B4A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4A60u;
label_3b4a60:
    // 0x3b4a60: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B4A60u;
    {
        const bool branch_taken_0x3b4a60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b4a60) {
            ctx->pc = 0x3B4A78u;
            goto label_3b4a78;
        }
    }
    ctx->pc = 0x3B4A68u;
    // 0x3b4a68: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B4A68u;
    SET_GPR_U32(ctx, 31, 0x3B4A70u);
    ctx->pc = 0x3B4A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4A68u;
    // 0x3b4a6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B4A68u, 0x3B4A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4A70u;
label_3b4a70:
    // 0x3b4a70: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3B4A70u;
    {
        const bool branch_taken_0x3b4a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4A70u;
        // 0x3b4a74: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4a70) {
            ctx->pc = 0x3B4AA4u;
            goto label_3b4aa4;
        }
    }
    ctx->pc = 0x3B4A78u;
label_3b4a78:
    // 0x3b4a78: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B4A78u;
    {
        const bool branch_taken_0x3b4a78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4a78) {
            ctx->pc = 0x3B4A90u;
            goto label_3b4a90;
        }
    }
    ctx->pc = 0x3B4A80u;
    // 0x3b4a80: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B4A80u;
    SET_GPR_U32(ctx, 31, 0x3B4A88u);
    ctx->pc = 0x3B4A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4A80u;
    // 0x3b4a84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B4A80u, 0x3B4A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4A88u;
label_3b4a88:
    // 0x3b4a88: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3B4A88u;
    {
        const bool branch_taken_0x3b4a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4A88u;
        // 0x3b4a8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4a88) {
            ctx->pc = 0x3B4AA4u;
            goto label_3b4aa4;
        }
    }
    ctx->pc = 0x3B4A90u;
label_3b4a90:
    // 0x3b4a90: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x3B4A90u;
    SET_GPR_U32(ctx, 31, 0x3B4A98u);
    ctx->pc = 0x3B4A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4A90u;
    // 0x3b4a94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x3B4A90u, 0x3B4A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4A98u;
label_3b4a98:
    // 0x3b4a98: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B4A98u;
    SET_GPR_U32(ctx, 31, 0x3B4AA0u);
    ctx->pc = 0x3B4A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4A98u;
    // 0x3b4a9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B4A98u, 0x3B4AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4AA0u;
label_3b4aa0:
    // 0x3b4aa0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3b4aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3b4aa4:
    // 0x3b4aa4: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x3b4aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3b4aa8: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x3b4aa8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3b4aac: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x3b4aacu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3b4ab0: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x3b4ab0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3b4ab4: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x3b4ab4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3b4ab8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x3b4ab8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3b4abc: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x3b4abcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b4ac0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x3b4ac0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b4ac4: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x3b4ac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b4ac8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3b4ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b4acc: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4ACCu;
        // 0x3b4ad0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4AD4u;
    // 0x3b4ad4: 0x0  nop
    ctx->pc = 0x3b4ad4u;
    // NOP
    ctx->pc = 0x3b4ad8u;
}
