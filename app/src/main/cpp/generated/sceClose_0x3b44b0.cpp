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

// Function: sceClose
// Address: 0x3b44b0 - 0x3b4628
void sceClose_0x3b44b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceClose_0x3b44b0");
#endif

    switch (ctx->pc) {
        case 0x3b44d8u: goto label_3b44d8;
        case 0x3b44e4u: goto label_3b44e4;
        case 0x3b4510u: goto label_3b4510;
        case 0x3b4550u: goto label_3b4550;
        case 0x3b45a0u: goto label_3b45a0;
        case 0x3b45b0u: goto label_3b45b0;
        case 0x3b45b8u: goto label_3b45b8;
        case 0x3b45d0u: goto label_3b45d0;
        case 0x3b45e0u: goto label_3b45e0;
        case 0x3b45f0u: goto label_3b45f0;
        case 0x3b45f8u: goto label_3b45f8;
        default: break;
    }

    ctx->pc = 0x3b44b0u;

    // 0x3b44b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3b44b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3b44b4: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x3b44b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x3b44b8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x3b44b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x3b44bc: 0x3c140078  lui         $s4, 0x78
    ctx->pc = 0x3b44bcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)120 << 16));
    // 0x3b44c0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x3b44c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x3b44c4: 0x2692ffc0  addiu       $s2, $s4, -0x40
    ctx->pc = 0x3b44c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967232));
    // 0x3b44c8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3b44c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3b44cc: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x3b44ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x3b44d0: 0xc0ece92  jal         func_3B3A48
    ctx->pc = 0x3B44D0u;
    SET_GPR_U32(ctx, 31, 0x3B44D8u);
    ctx->pc = 0x3B44D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B44D0u;
    // 0x3b44d4: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3A48u, 0x3B44D0u, 0x3B44D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B44D8u;
label_3b44d8:
    // 0x3b44d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b44d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b44dc: 0xc0ecfb2  jal         func_3B3EC8
    ctx->pc = 0x3B44DCu;
    SET_GPR_U32(ctx, 31, 0x3B44E4u);
    ctx->pc = 0x3B44E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B44DCu;
    // 0x3b44e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EC8u, 0x3B44DCu, 0x3B44E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B44E4u;
label_3b44e4:
    // 0x3b44e4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3b44e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3b44e8: 0x8c62aedc  lw          $v0, -0x5124($v1)
    ctx->pc = 0x3b44e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAEDCu));
    // 0x3b44ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B44ECu;
    {
        const bool branch_taken_0x3b44ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b44ec) {
            ctx->pc = 0x3B4508u;
            goto label_3b4508;
        }
    }
    ctx->pc = 0x3B44F4u;
    // 0x3b44f4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B44F4u;
    {
        const bool branch_taken_0x3b44f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b44f4) {
            ctx->pc = 0x3B4508u;
            goto label_3b4508;
        }
    }
    ctx->pc = 0x3B44FCu;
    // 0x3b44fc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3b44fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3b4500: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B4500u;
    {
        const bool branch_taken_0x3b4500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B4504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4500u;
        // 0x3b4504: 0x3c020078  lui         $v0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4500) {
            ctx->pc = 0x3B4518u;
            goto label_3b4518;
        }
    }
    ctx->pc = 0x3B4508u;
label_3b4508:
    // 0x3b4508: 0xc0ecfbe  jal         func_3B3EF8
    ctx->pc = 0x3B4508u;
    SET_GPR_U32(ctx, 31, 0x3B4510u);
    ctx->pc = 0x3B3EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EF8u, 0x3B4508u, 0x3B4510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4510u;
label_3b4510:
    // 0x3b4510: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x3B4510u;
    {
        const bool branch_taken_0x3b4510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4510u;
        // 0x3b4514: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4510) {
            ctx->pc = 0x3B4608u;
            goto label_3b4608;
        }
    }
    ctx->pc = 0x3B4518u;
label_3b4518:
    // 0x3b4518: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3b4518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b451c: 0x244214c0  addiu       $v0, $v0, 0x14C0
    ctx->pc = 0x3b451cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5312));
    // 0x3b4520: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3b4520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3b4524: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x3b4524u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3b4528: 0xae44000c  sw          $a0, 0xC($s2)
    ctx->pc = 0x3b4528u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
    // 0x3b452c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3b452cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3b4530: 0x24630138  addiu       $v1, $v1, 0x138
    ctx->pc = 0x3b4530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 312));
    // 0x3b4534: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x3b4534u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x3b4538: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b4538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b453c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3b453cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3b4540: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x3b4540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x3b4544: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x3b4544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x3b4548: 0xc0ebf28  jal         func_3AFCA0
    ctx->pc = 0x3B4548u;
    SET_GPR_U32(ctx, 31, 0x3B4550u);
    ctx->pc = 0x3B454Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4548u;
    // 0x3b454c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCA0u, 0x3B4548u, 0x3B4550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4550u;
label_3b4550:
    // 0x3b4550: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b4550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4554: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3b4554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b4558: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x3b4558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x3b455c: 0xae91ffc0  sw          $s1, -0x40($s4)
    ctx->pc = 0x3b455cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294967232), GPR_U32(ctx, 17));
    // 0x3b4560: 0x24530c00  addiu       $s3, $v0, 0xC00
    ctx->pc = 0x3b4560u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    // 0x3b4564: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x3b4564u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x3b4568: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3b4568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b456c: 0x3c040078  lui         $a0, 0x78
    ctx->pc = 0x3b456cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)120 << 16));
    // 0x3b4570: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3b4570u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x3b4574: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x3b4574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
    // 0x3b4578: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3b4578u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b457c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b457cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b4580: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3b4580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3b4584: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b4584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4588: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3b4588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3b458c: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x3b458cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3b4590: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3b4590u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4594: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3b4594u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b4598: 0xc0ece56  jal         func_3B3958
    ctx->pc = 0x3B4598u;
    SET_GPR_U32(ctx, 31, 0x3B45A0u);
    ctx->pc = 0x3B459Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4598u;
    // 0x3b459c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3958u, 0x3B4598u, 0x3B45A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B45A0u;
label_3b45a0:
    // 0x3b45a0: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B45A0u;
    {
        const bool branch_taken_0x3b45a0 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x3b45a0) {
            ctx->pc = 0x3B45A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B45A0u;
            // 0x3b45a4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B45C0u;
            goto label_3b45c0;
        }
    }
    ctx->pc = 0x3B45A8u;
    // 0x3b45a8: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B45A8u;
    SET_GPR_U32(ctx, 31, 0x3B45B0u);
    ctx->pc = 0x3B45ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B45A8u;
    // 0x3b45ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B45A8u, 0x3B45B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B45B0u;
label_3b45b0:
    // 0x3b45b0: 0xc0ecfbe  jal         func_3B3EF8
    ctx->pc = 0x3B45B0u;
    SET_GPR_U32(ctx, 31, 0x3B45B8u);
    ctx->pc = 0x3B3EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EF8u, 0x3B45B0u, 0x3B45B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B45B8u;
label_3b45b8:
    // 0x3b45b8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3B45B8u;
    {
        const bool branch_taken_0x3b45b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B45BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B45B8u;
        // 0x3b45bc: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b45b8) {
            ctx->pc = 0x3B4608u;
            goto label_3b4608;
        }
    }
    ctx->pc = 0x3B45C0u;
label_3b45c0:
    // 0x3b45c0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3b45c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3b45c4: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x3b45c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x3b45c8: 0xc0ecfbe  jal         func_3B3EF8
    ctx->pc = 0x3B45C8u;
    SET_GPR_U32(ctx, 31, 0x3B45D0u);
    ctx->pc = 0x3B45CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B45C8u;
    // 0x3b45cc: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EF8u, 0x3B45C8u, 0x3B45D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B45D0u;
label_3b45d0:
    // 0x3b45d0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B45D0u;
    {
        const bool branch_taken_0x3b45d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b45d0) {
            ctx->pc = 0x3B45E8u;
            goto label_3b45e8;
        }
    }
    ctx->pc = 0x3B45D8u;
    // 0x3b45d8: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B45D8u;
    SET_GPR_U32(ctx, 31, 0x3B45E0u);
    ctx->pc = 0x3B45DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B45D8u;
    // 0x3b45dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B45D8u, 0x3B45E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B45E0u;
label_3b45e0:
    // 0x3b45e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3B45E0u;
    {
        const bool branch_taken_0x3b45e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B45E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B45E0u;
        // 0x3b45e4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b45e0) {
            ctx->pc = 0x3B4608u;
            goto label_3b4608;
        }
    }
    ctx->pc = 0x3B45E8u;
label_3b45e8:
    // 0x3b45e8: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x3B45E8u;
    SET_GPR_U32(ctx, 31, 0x3B45F0u);
    ctx->pc = 0x3B45ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B45E8u;
    // 0x3b45ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x3B45E8u, 0x3B45F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B45F0u;
label_3b45f0:
    // 0x3b45f0: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B45F0u;
    SET_GPR_U32(ctx, 31, 0x3B45F8u);
    ctx->pc = 0x3B45F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B45F0u;
    // 0x3b45f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B45F0u, 0x3B45F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B45F8u;
label_3b45f8:
    // 0x3b45f8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3b45f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b45fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3b45fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b4600: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3b4600u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b4604: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x3b4604u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_3b4608:
    // 0x3b4608: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3b4608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3b460c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x3b460cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3b4610: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x3b4610u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b4614: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x3b4614u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b4618: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x3b4618u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b461c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3b461cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b4620: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4620u;
        // 0x3b4624: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4628u;
}
