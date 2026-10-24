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

// Function: sceLseek64
// Address: 0x3b56a0 - 0x3b58e0
void sceLseek64_0x3b56a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceLseek64_0x3b56a0");
#endif

    switch (ctx->pc) {
        case 0x3b56d8u: goto label_3b56d8;
        case 0x3b56e4u: goto label_3b56e4;
        case 0x3b5710u: goto label_3b5710;
        case 0x3b575cu: goto label_3b575c;
        case 0x3b5784u: goto label_3b5784;
        case 0x3b57c4u: goto label_3b57c4;
        case 0x3b5800u: goto label_3b5800;
        case 0x3b5844u: goto label_3b5844;
        case 0x3b5854u: goto label_3b5854;
        case 0x3b585cu: goto label_3b585c;
        case 0x3b5870u: goto label_3b5870;
        case 0x3b5880u: goto label_3b5880;
        case 0x3b5898u: goto label_3b5898;
        case 0x3b58a8u: goto label_3b58a8;
        case 0x3b58b0u: goto label_3b58b0;
        default: break;
    }

    ctx->pc = 0x3b56a0u;

    // 0x3b56a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3b56a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3b56a4: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x3b56a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x3b56a8: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x3b56a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x3b56ac: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3b56acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b56b0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x3b56b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x3b56b4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3b56b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b56b8: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x3b56b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x3b56bc: 0x3c140078  lui         $s4, 0x78
    ctx->pc = 0x3b56bcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)120 << 16));
    // 0x3b56c0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x3b56c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x3b56c4: 0x2691ffc0  addiu       $s1, $s4, -0x40
    ctx->pc = 0x3b56c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967232));
    // 0x3b56c8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x3b56c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x3b56cc: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x3b56ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x3b56d0: 0xc0ece92  jal         func_3B3A48
    ctx->pc = 0x3B56D0u;
    SET_GPR_U32(ctx, 31, 0x3B56D8u);
    ctx->pc = 0x3B56D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B56D0u;
    // 0x3b56d4: 0xffb20060  sd          $s2, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3A48u, 0x3B56D0u, 0x3B56D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B56D8u;
label_3b56d8:
    // 0x3b56d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b56d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b56dc: 0xc0ecfb2  jal         func_3B3EC8
    ctx->pc = 0x3B56DCu;
    SET_GPR_U32(ctx, 31, 0x3B56E4u);
    ctx->pc = 0x3B56E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B56DCu;
    // 0x3b56e0: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EC8u, 0x3B56DCu, 0x3B56E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B56E4u;
label_3b56e4:
    // 0x3b56e4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3b56e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3b56e8: 0x8c62aedc  lw          $v0, -0x5124($v1)
    ctx->pc = 0x3b56e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAEDCu));
    // 0x3b56ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B56ECu;
    {
        const bool branch_taken_0x3b56ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b56ec) {
            ctx->pc = 0x3B5708u;
            goto label_3b5708;
        }
    }
    ctx->pc = 0x3B56F4u;
    // 0x3b56f4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B56F4u;
    {
        const bool branch_taken_0x3b56f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b56f4) {
            ctx->pc = 0x3B5708u;
            goto label_3b5708;
        }
    }
    ctx->pc = 0x3B56FCu;
    // 0x3b56fc: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x3b56fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3b5700: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B5700u;
    {
        const bool branch_taken_0x3b5700 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B5704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5700u;
        // 0x3b5704: 0x3c020078  lui         $v0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5700) {
            ctx->pc = 0x3B5718u;
            goto label_3b5718;
        }
    }
    ctx->pc = 0x3B5708u;
label_3b5708:
    // 0x3b5708: 0xc0ecfbe  jal         func_3B3EF8
    ctx->pc = 0x3B5708u;
    SET_GPR_U32(ctx, 31, 0x3B5710u);
    ctx->pc = 0x3B3EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EF8u, 0x3B5708u, 0x3B5710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5710u;
label_3b5710:
    // 0x3b5710: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x3B5710u;
    {
        const bool branch_taken_0x3b5710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5710u;
        // 0x3b5714: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5710) {
            ctx->pc = 0x3B58B4u;
            goto label_3b58b4;
        }
    }
    ctx->pc = 0x3B5718u;
label_3b5718:
    // 0x3b5718: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3b5718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b571c: 0x244214c0  addiu       $v0, $v0, 0x14C0
    ctx->pc = 0x3b571cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5312));
    // 0x3b5720: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3b5720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3b5724: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x3b5724u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3b5728: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x3b5728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
    // 0x3b572c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3b572cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3b5730: 0xfe330010  sd          $s3, 0x10($s1)
    ctx->pc = 0x3b5730u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 19));
    // 0x3b5734: 0xae350018  sw          $s5, 0x18($s1)
    ctx->pc = 0x3b5734u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 21));
    // 0x3b5738: 0x246302d0  addiu       $v1, $v1, 0x2D0
    ctx->pc = 0x3b5738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 720));
    // 0x3b573c: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x3b573cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x3b5740: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b5740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b5744: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3b5744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3b5748: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x3b5748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x3b574c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x3b574cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x3b5750: 0x32508000  andi        $s0, $s2, 0x8000
    ctx->pc = 0x3b5750u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x3b5754: 0xc0ebf28  jal         func_3AFCA0
    ctx->pc = 0x3B5754u;
    SET_GPR_U32(ctx, 31, 0x3B575Cu);
    ctx->pc = 0x3B5758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5754u;
    // 0x3b5758: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCA0u, 0x3B5754u, 0x3B575Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B575Cu;
label_3b575c:
    // 0x3b575c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3b575cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5760: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3b5760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3b5764: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x3b5764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b5768: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x3b5768u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x3b576c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3b576cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3b5770: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3B5770u;
    {
        const bool branch_taken_0x3b5770 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5770u;
        // 0x3b5774: 0xae93ffc0  sw          $s3, -0x40($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294967232), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5770) {
            ctx->pc = 0x3B5808u;
            goto label_3b5808;
        }
    }
    ctx->pc = 0x3B5778u;
    // 0x3b5778: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x3b5778u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x3b577c: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x3B577Cu;
    SET_GPR_U32(ctx, 31, 0x3B5784u);
    ctx->pc = 0x3B5780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B577Cu;
    // 0x3b5780: 0x8ea4aeec  lw          $a0, -0x5114($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x3B577Cu, 0x3B5784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5784u;
label_3b5784:
    // 0x3b5784: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x3b5784u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x3b5788: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b5788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b578c: 0x8ce3ae58  lw          $v1, -0x51A8($a3)
    ctx->pc = 0x3b578cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FAE58u));
    // 0x3b5790: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b5790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b5794: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B5794u;
    {
        const bool branch_taken_0x3b5794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B5798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5794u;
        // 0x3b5798: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5794) {
            ctx->pc = 0x3B57B8u;
            goto label_3b57b8;
        }
    }
    ctx->pc = 0x3B579Cu;
    // 0x3b579c: 0x8e83ffc0  lw          $v1, -0x40($s4)
    ctx->pc = 0x3b579cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967232)));
    // 0x3b57a0: 0x3c160078  lui         $s6, 0x78
    ctx->pc = 0x3b57a0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)120 << 16));
    // 0x3b57a4: 0x3c100078  lui         $s0, 0x78
    ctx->pc = 0x3b57a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)120 << 16));
    // 0x3b57a8: 0x31023  negu        $v0, $v1
    ctx->pc = 0x3b57a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x3b57ac: 0xace3ae58  sw          $v1, -0x51A8($a3)
    ctx->pc = 0x3b57acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294946392), GPR_U32(ctx, 3));
    // 0x3b57b0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3B57B0u;
    {
        const bool branch_taken_0x3b57b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B57B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B57B0u;
        // 0x3b57b4: 0xae82ffc0  sw          $v0, -0x40($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294967232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b57b0) {
            ctx->pc = 0x3B57F8u;
            goto label_3b57f8;
        }
    }
    ctx->pc = 0x3B57B8u;
label_3b57b8:
    // 0x3b57b8: 0x3c160078  lui         $s6, 0x78
    ctx->pc = 0x3b57b8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)120 << 16));
    // 0x3b57bc: 0x3c100078  lui         $s0, 0x78
    ctx->pc = 0x3b57bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)120 << 16));
    // 0x3b57c0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3b57c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3b57c4:
    // 0x3b57c4: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x3b57c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3b57c8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B57C8u;
    {
        const bool branch_taken_0x3b57c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B57CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B57C8u;
        // 0x3b57cc: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b57c8) {
            ctx->pc = 0x3B57F8u;
            goto label_3b57f8;
        }
    }
    ctx->pc = 0x3B57D0u;
    // 0x3b57d0: 0x24e3ae58  addiu       $v1, $a3, -0x51A8
    ctx->pc = 0x3b57d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946392));
    // 0x3b57d4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3b57d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b57d8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3b57d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b57dc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3b57dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b57e0: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3B57E0u;
    {
        const bool branch_taken_0x3b57e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3B57E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B57E0u;
        // 0x3b57e4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b57e0) {
            ctx->pc = 0x3B57C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b57c4;
        }
    }
    ctx->pc = 0x3B57E8u;
    // 0x3b57e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3b57e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b57ec: 0x21823  negu        $v1, $v0
    ctx->pc = 0x3b57ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3b57f0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3b57f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x3b57f4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3b57f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3b57f8:
    // 0x3b57f8: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x3B57F8u;
    SET_GPR_U32(ctx, 31, 0x3B5800u);
    ctx->pc = 0x3B57FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B57F8u;
    // 0x3b57fc: 0x8ea4aeec  lw          $a0, -0x5114($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x3B57F8u, 0x3B5800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5800u;
label_3b5800:
    // 0x3b5800: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B5800u;
    {
        const bool branch_taken_0x3b5800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5800u;
        // 0x3b5804: 0x26100c00  addiu       $s0, $s0, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5800) {
            ctx->pc = 0x3B5818u;
            goto label_3b5818;
        }
    }
    ctx->pc = 0x3B5808u;
label_3b5808:
    // 0x3b5808: 0x3c160078  lui         $s6, 0x78
    ctx->pc = 0x3b5808u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)120 << 16));
    // 0x3b580c: 0x3c100078  lui         $s0, 0x78
    ctx->pc = 0x3b580cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)120 << 16));
    // 0x3b5810: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3b5810u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5814: 0x26100c00  addiu       $s0, $s0, 0xC00
    ctx->pc = 0x3b5814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3072));
label_3b5818:
    // 0x3b5818: 0x26c416c0  addiu       $a0, $s6, 0x16C0
    ctx->pc = 0x3b5818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 5824));
    // 0x3b581c: 0x2687ffc0  addiu       $a3, $s4, -0x40
    ctx->pc = 0x3b581cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967232));
    // 0x3b5820: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3b5820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3b5824: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x3b5824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x3b5828: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x3b5828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x3b582c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b582cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5830: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x3b5830u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3b5834: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3b5834u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5838: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3b5838u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b583c: 0xc0ece56  jal         func_3B3958
    ctx->pc = 0x3B583Cu;
    SET_GPR_U32(ctx, 31, 0x3B5844u);
    ctx->pc = 0x3B5840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B583Cu;
    // 0x3b5840: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3958u, 0x3B583Cu, 0x3B5844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5844u;
label_3b5844:
    // 0x3b5844: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B5844u;
    {
        const bool branch_taken_0x3b5844 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3B5848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5844u;
        // 0x3b5848: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5844) {
            ctx->pc = 0x3B5864u;
            goto label_3b5864;
        }
    }
    ctx->pc = 0x3B584Cu;
    // 0x3b584c: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B584Cu;
    SET_GPR_U32(ctx, 31, 0x3B5854u);
    ctx->pc = 0x3B5850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B584Cu;
    // 0x3b5850: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B584Cu, 0x3B5854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5854u;
label_3b5854:
    // 0x3b5854: 0xc0ecfbe  jal         func_3B3EF8
    ctx->pc = 0x3B5854u;
    SET_GPR_U32(ctx, 31, 0x3B585Cu);
    ctx->pc = 0x3B3EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EF8u, 0x3B5854u, 0x3B585Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B585Cu;
label_3b585c:
    // 0x3b585c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3B585Cu;
    {
        const bool branch_taken_0x3b585c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B585Cu;
        // 0x3b5860: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b585c) {
            ctx->pc = 0x3B58B4u;
            goto label_3b58b4;
        }
    }
    ctx->pc = 0x3B5864u;
label_3b5864:
    // 0x3b5864: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x3b5864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x3b5868: 0xc0ecfbe  jal         func_3B3EF8
    ctx->pc = 0x3B5868u;
    SET_GPR_U32(ctx, 31, 0x3B5870u);
    ctx->pc = 0x3B586Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5868u;
    // 0x3b586c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EF8u, 0x3B5868u, 0x3B5870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5870u;
label_3b5870:
    // 0x3b5870: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B5870u;
    {
        const bool branch_taken_0x3b5870 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b5870) {
            ctx->pc = 0x3B5888u;
            goto label_3b5888;
        }
    }
    ctx->pc = 0x3B5878u;
    // 0x3b5878: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B5878u;
    SET_GPR_U32(ctx, 31, 0x3B5880u);
    ctx->pc = 0x3B587Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5878u;
    // 0x3b587c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B5878u, 0x3B5880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5880u;
label_3b5880:
    // 0x3b5880: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3B5880u;
    {
        const bool branch_taken_0x3b5880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5880u;
        // 0x3b5884: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5880) {
            ctx->pc = 0x3B58B4u;
            goto label_3b58b4;
        }
    }
    ctx->pc = 0x3B5888u;
label_3b5888:
    // 0x3b5888: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B5888u;
    {
        const bool branch_taken_0x3b5888 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5888) {
            ctx->pc = 0x3B58A0u;
            goto label_3b58a0;
        }
    }
    ctx->pc = 0x3B5890u;
    // 0x3b5890: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B5890u;
    SET_GPR_U32(ctx, 31, 0x3B5898u);
    ctx->pc = 0x3B5894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5890u;
    // 0x3b5894: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B5890u, 0x3B5898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5898u;
label_3b5898:
    // 0x3b5898: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3B5898u;
    {
        const bool branch_taken_0x3b5898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5898u;
        // 0x3b589c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5898) {
            ctx->pc = 0x3B58B4u;
            goto label_3b58b4;
        }
    }
    ctx->pc = 0x3B58A0u;
label_3b58a0:
    // 0x3b58a0: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x3B58A0u;
    SET_GPR_U32(ctx, 31, 0x3B58A8u);
    ctx->pc = 0x3B58A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B58A0u;
    // 0x3b58a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x3B58A0u, 0x3B58A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B58A8u;
label_3b58a8:
    // 0x3b58a8: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B58A8u;
    SET_GPR_U32(ctx, 31, 0x3B58B0u);
    ctx->pc = 0x3B58ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B58A8u;
    // 0x3b58ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B58A8u, 0x3B58B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B58B0u;
label_3b58b0:
    // 0x3b58b0: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x3b58b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b58b4:
    // 0x3b58b4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x3b58b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3b58b8: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x3b58b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3b58bc: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x3b58bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3b58c0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x3b58c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3b58c4: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x3b58c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b58c8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x3b58c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b58cc: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x3b58ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b58d0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3b58d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b58d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B58D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B58D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B58D4u;
        // 0x3b58d8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B58D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B58DCu;
    // 0x3b58dc: 0x0  nop
    ctx->pc = 0x3b58dcu;
    // NOP
    ctx->pc = 0x3b58e0u;
}
