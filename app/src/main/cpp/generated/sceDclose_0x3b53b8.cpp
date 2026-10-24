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

// Function: sceDclose
// Address: 0x3b53b8 - 0x3b5520
void sceDclose_0x3b53b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDclose_0x3b53b8");
#endif

    switch (ctx->pc) {
        case 0x3b53e0u: goto label_3b53e0;
        case 0x3b53ecu: goto label_3b53ec;
        case 0x3b5418u: goto label_3b5418;
        case 0x3b5444u: goto label_3b5444;
        case 0x3b5494u: goto label_3b5494;
        case 0x3b54a4u: goto label_3b54a4;
        case 0x3b54acu: goto label_3b54ac;
        case 0x3b54c4u: goto label_3b54c4;
        case 0x3b54d4u: goto label_3b54d4;
        case 0x3b54e4u: goto label_3b54e4;
        case 0x3b54ecu: goto label_3b54ec;
        default: break;
    }

    ctx->pc = 0x3b53b8u;

    // 0x3b53b8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3b53b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3b53bc: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x3b53bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x3b53c0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x3b53c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x3b53c4: 0x3c140078  lui         $s4, 0x78
    ctx->pc = 0x3b53c4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)120 << 16));
    // 0x3b53c8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x3b53c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x3b53cc: 0x2692ffc0  addiu       $s2, $s4, -0x40
    ctx->pc = 0x3b53ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967232));
    // 0x3b53d0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3b53d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3b53d4: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x3b53d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x3b53d8: 0xc0ece92  jal         func_3B3A48
    ctx->pc = 0x3B53D8u;
    SET_GPR_U32(ctx, 31, 0x3B53E0u);
    ctx->pc = 0x3B53DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B53D8u;
    // 0x3b53dc: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3A48u, 0x3B53D8u, 0x3B53E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B53E0u;
label_3b53e0:
    // 0x3b53e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b53e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b53e4: 0xc0ecfb2  jal         func_3B3EC8
    ctx->pc = 0x3B53E4u;
    SET_GPR_U32(ctx, 31, 0x3B53ECu);
    ctx->pc = 0x3B53E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B53E4u;
    // 0x3b53e8: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EC8u, 0x3B53E4u, 0x3B53ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B53ECu;
label_3b53ec:
    // 0x3b53ec: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3b53ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3b53f0: 0x8c62aedc  lw          $v0, -0x5124($v1)
    ctx->pc = 0x3b53f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAEDCu));
    // 0x3b53f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B53F4u;
    {
        const bool branch_taken_0x3b53f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b53f4) {
            ctx->pc = 0x3B5410u;
            goto label_3b5410;
        }
    }
    ctx->pc = 0x3B53FCu;
    // 0x3b53fc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B53FCu;
    {
        const bool branch_taken_0x3b53fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b53fc) {
            ctx->pc = 0x3B5410u;
            goto label_3b5410;
        }
    }
    ctx->pc = 0x3B5404u;
    // 0x3b5404: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3b5404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3b5408: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B5408u;
    {
        const bool branch_taken_0x3b5408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b5408) {
            ctx->pc = 0x3B540Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B5408u;
            // 0x3b540c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B5420u;
            goto label_3b5420;
        }
    }
    ctx->pc = 0x3B5410u;
label_3b5410:
    // 0x3b5410: 0xc0ecfbe  jal         func_3B3EF8
    ctx->pc = 0x3B5410u;
    SET_GPR_U32(ctx, 31, 0x3B5418u);
    ctx->pc = 0x3B3EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EF8u, 0x3B5410u, 0x3B5418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5418u;
label_3b5418:
    // 0x3b5418: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x3B5418u;
    {
        const bool branch_taken_0x3b5418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5418u;
        // 0x3b541c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5418) {
            ctx->pc = 0x3B54FCu;
            goto label_3b54fc;
        }
    }
    ctx->pc = 0x3B5420u;
label_3b5420:
    // 0x3b5420: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3b5420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3b5424: 0x24420228  addiu       $v0, $v0, 0x228
    ctx->pc = 0x3b5424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 552));
    // 0x3b5428: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b5428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b542c: 0xae44000c  sw          $a0, 0xC($s2)
    ctx->pc = 0x3b542cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
    // 0x3b5430: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3b5430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3b5434: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x3b5434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x3b5438: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x3b5438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x3b543c: 0xc0ebf28  jal         func_3AFCA0
    ctx->pc = 0x3B543Cu;
    SET_GPR_U32(ctx, 31, 0x3B5444u);
    ctx->pc = 0x3B5440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B543Cu;
    // 0x3b5440: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCA0u, 0x3B543Cu, 0x3B5444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5444u;
label_3b5444:
    // 0x3b5444: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b5444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5448: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3b5448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b544c: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x3b544cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x3b5450: 0xae91ffc0  sw          $s1, -0x40($s4)
    ctx->pc = 0x3b5450u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294967232), GPR_U32(ctx, 17));
    // 0x3b5454: 0x24530c00  addiu       $s3, $v0, 0xC00
    ctx->pc = 0x3b5454u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    // 0x3b5458: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x3b5458u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x3b545c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3b545cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b5460: 0x3c040078  lui         $a0, 0x78
    ctx->pc = 0x3b5460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)120 << 16));
    // 0x3b5464: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3b5464u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x3b5468: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x3b5468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
    // 0x3b546c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3b546cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5470: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3b5470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3b5474: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3b5474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3b5478: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b5478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b547c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3b547cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3b5480: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x3b5480u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3b5484: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3b5484u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5488: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3b5488u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b548c: 0xc0ece56  jal         func_3B3958
    ctx->pc = 0x3B548Cu;
    SET_GPR_U32(ctx, 31, 0x3B5494u);
    ctx->pc = 0x3B5490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B548Cu;
    // 0x3b5490: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3958u, 0x3B548Cu, 0x3B5494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5494u;
label_3b5494:
    // 0x3b5494: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B5494u;
    {
        const bool branch_taken_0x3b5494 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x3b5494) {
            ctx->pc = 0x3B5498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B5494u;
            // 0x3b5498: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B54B4u;
            goto label_3b54b4;
        }
    }
    ctx->pc = 0x3B549Cu;
    // 0x3b549c: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B549Cu;
    SET_GPR_U32(ctx, 31, 0x3B54A4u);
    ctx->pc = 0x3B54A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B549Cu;
    // 0x3b54a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B549Cu, 0x3B54A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B54A4u;
label_3b54a4:
    // 0x3b54a4: 0xc0ecfbe  jal         func_3B3EF8
    ctx->pc = 0x3B54A4u;
    SET_GPR_U32(ctx, 31, 0x3B54ACu);
    ctx->pc = 0x3B3EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EF8u, 0x3B54A4u, 0x3B54ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B54ACu;
label_3b54ac:
    // 0x3b54ac: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3B54ACu;
    {
        const bool branch_taken_0x3b54ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B54B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B54ACu;
        // 0x3b54b0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b54ac) {
            ctx->pc = 0x3B54FCu;
            goto label_3b54fc;
        }
    }
    ctx->pc = 0x3B54B4u;
label_3b54b4:
    // 0x3b54b4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3b54b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3b54b8: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x3b54b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x3b54bc: 0xc0ecfbe  jal         func_3B3EF8
    ctx->pc = 0x3B54BCu;
    SET_GPR_U32(ctx, 31, 0x3B54C4u);
    ctx->pc = 0x3B54C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B54BCu;
    // 0x3b54c0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EF8u, 0x3B54BCu, 0x3B54C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B54C4u;
label_3b54c4:
    // 0x3b54c4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B54C4u;
    {
        const bool branch_taken_0x3b54c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b54c4) {
            ctx->pc = 0x3B54DCu;
            goto label_3b54dc;
        }
    }
    ctx->pc = 0x3B54CCu;
    // 0x3b54cc: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B54CCu;
    SET_GPR_U32(ctx, 31, 0x3B54D4u);
    ctx->pc = 0x3B54D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B54CCu;
    // 0x3b54d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B54CCu, 0x3B54D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B54D4u;
label_3b54d4:
    // 0x3b54d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3B54D4u;
    {
        const bool branch_taken_0x3b54d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B54D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B54D4u;
        // 0x3b54d8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b54d4) {
            ctx->pc = 0x3B54FCu;
            goto label_3b54fc;
        }
    }
    ctx->pc = 0x3B54DCu;
label_3b54dc:
    // 0x3b54dc: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x3B54DCu;
    SET_GPR_U32(ctx, 31, 0x3B54E4u);
    ctx->pc = 0x3B54E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B54DCu;
    // 0x3b54e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x3B54DCu, 0x3B54E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B54E4u;
label_3b54e4:
    // 0x3b54e4: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B54E4u;
    SET_GPR_U32(ctx, 31, 0x3B54ECu);
    ctx->pc = 0x3B54E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B54E4u;
    // 0x3b54e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B54E4u, 0x3B54ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B54ECu;
label_3b54ec:
    // 0x3b54ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3b54ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b54f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3b54f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b54f4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3b54f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b54f8: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x3b54f8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_3b54fc:
    // 0x3b54fc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3b54fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3b5500: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x3b5500u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3b5504: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x3b5504u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b5508: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x3b5508u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b550c: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x3b550cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b5510: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3b5510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b5514: 0x3e00008  jr          $ra
    ctx->pc = 0x3B5514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5514u;
        // 0x3b5518: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B551Cu;
    // 0x3b551c: 0x0  nop
    ctx->pc = 0x3b551cu;
    // NOP
    ctx->pc = 0x3b5520u;
}
