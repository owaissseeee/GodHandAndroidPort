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

// Function: func_0034C3A8
// Address: 0x34c3a8 - 0x34c4f8
void func_0034C3A8_0x34c3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034C3A8_0x34c3a8");
#endif

    switch (ctx->pc) {
        case 0x34c438u: goto label_34c438;
        case 0x34c45cu: goto label_34c45c;
        case 0x34c478u: goto label_34c478;
        case 0x34c498u: goto label_34c498;
        default: break;
    }

    ctx->pc = 0x34c3a8u;

    // 0x34c3a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34c3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34c3ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34c3acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c3b0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x34c3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x34c3b4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x34c3b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c3b8: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x34c3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x34c3bc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x34c3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x34c3c0: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x34c3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x34c3c4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x34c3c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c3c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34c3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34c3cc: 0x26c41310  addiu       $a0, $s6, 0x1310
    ctx->pc = 0x34c3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4880));
    // 0x34c3d0: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x34c3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x34c3d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34c3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34c3d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34c3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34c3dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x34c3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x34c3e0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x34c3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x34c3e4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x34c3e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c3e8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x34c3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x34c3ec: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x34c3ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c3f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34c3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34c3f4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x34c3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x34c3f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34c3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34c3fc: 0x24920010  addiu       $s2, $a0, 0x10
    ctx->pc = 0x34c3fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x34c400: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34c400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34c404: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x34c404u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c408: 0x1280002f  beqz        $s4, . + 4 + (0x2F << 2)
    ctx->pc = 0x34C408u;
    {
        const bool branch_taken_0x34c408 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C408u;
        // 0x34c40c: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c408) {
            ctx->pc = 0x34C4C8u;
            goto label_34c4c8;
        }
    }
    ctx->pc = 0x34C410u;
    // 0x34c410: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x34c410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x34c414: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x34C414u;
    {
        const bool branch_taken_0x34c414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C414u;
        // 0x34c418: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c414) {
            ctx->pc = 0x34C4C8u;
            goto label_34c4c8;
        }
    }
    ctx->pc = 0x34C41Cu;
    // 0x34c41c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34C41Cu;
    {
        const bool branch_taken_0x34c41c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x34C420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C41Cu;
        // 0x34c420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c41c) {
            ctx->pc = 0x34C430u;
            goto label_34c430;
        }
    }
    ctx->pc = 0x34C424u;
    // 0x34c424: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x34C424u;
    {
        const bool branch_taken_0x34c424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C424u;
        // 0x34c428: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c424) {
            ctx->pc = 0x34C4CCu;
            goto label_34c4cc;
        }
    }
    ctx->pc = 0x34C42Cu;
    // 0x34c42c: 0x0  nop
    ctx->pc = 0x34c42cu;
    // NOP
label_34c430:
    // 0x34c430: 0xc0d31a0  jal         func_34C680
    ctx->pc = 0x34C430u;
    SET_GPR_U32(ctx, 31, 0x34C438u);
    ctx->pc = 0x34C434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C430u;
    // 0x34c434: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C680u, 0x34C430u, 0x34C438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C438u;
label_34c438:
    // 0x34c438: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x34c438u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c43c: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x34c43cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x34c440: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x34C440u;
    {
        const bool branch_taken_0x34c440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c440) {
            ctx->pc = 0x34C444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34C440u;
            // 0x34c444: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34C480u;
            goto label_34c480;
        }
    }
    ctx->pc = 0x34C448u;
    // 0x34c448: 0x2838023  subu        $s0, $s4, $v1
    ctx->pc = 0x34c448u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x34c44c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34c44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c450: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x34c450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c454: 0xc0d31a0  jal         func_34C680
    ctx->pc = 0x34C454u;
    SET_GPR_U32(ctx, 31, 0x34C45Cu);
    ctx->pc = 0x34C458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C454u;
    // 0x34c458: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C680u, 0x34C454u, 0x34C45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C45Cu;
label_34c45c:
    // 0x34c45c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x34c45cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x34c460: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x34C460u;
    {
        const bool branch_taken_0x34c460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c460) {
            ctx->pc = 0x34C464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34C460u;
            // 0x34c464: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34C480u;
            goto label_34c480;
        }
    }
    ctx->pc = 0x34C468u;
    // 0x34c468: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x34c468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x34c46c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x34c46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c470: 0xc0d375c  jal         func_34DD70
    ctx->pc = 0x34C470u;
    SET_GPR_U32(ctx, 31, 0x34C478u);
    ctx->pc = 0x34C474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C470u;
    // 0x34c474: 0x34a5040b  ori         $a1, $a1, 0x40B (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1035);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x34C470u, 0x34C478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C478u;
label_34c478:
    // 0x34c478: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x34c478u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c47c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34c47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34c480:
    // 0x34c480: 0x5662000b  bnel        $s3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x34C480u;
    {
        const bool branch_taken_0x34c480 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x34c480) {
            ctx->pc = 0x34C484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34C480u;
            // 0x34c484: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34C4B0u;
            goto label_34c4b0;
        }
    }
    ctx->pc = 0x34C488u;
    // 0x34c488: 0x56b30004  bnel        $s5, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x34C488u;
    {
        const bool branch_taken_0x34c488 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 19));
        if (branch_taken_0x34c488) {
            ctx->pc = 0x34C48Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34C488u;
            // 0x34c48c: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34C49Cu;
            goto label_34c49c;
        }
    }
    ctx->pc = 0x34C490u;
    // 0x34c490: 0xc0d313e  jal         func_34C4F8
    ctx->pc = 0x34C490u;
    SET_GPR_U32(ctx, 31, 0x34C498u);
    ctx->pc = 0x34C494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C490u;
    // 0x34c494: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C4F8u, 0x34C490u, 0x34C498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C498u;
label_34c498:
    // 0x34c498: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x34c498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_34c49c:
    // 0x34c49c: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34C49Cu;
    {
        const bool branch_taken_0x34c49c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x34C4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C49Cu;
        // 0x34c4a0: 0x541021  addu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c49c) {
            ctx->pc = 0x34C4BCu;
            goto label_34c4bc;
        }
    }
    ctx->pc = 0x34C4A4u;
    // 0x34c4a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x34C4A4u;
    {
        const bool branch_taken_0x34c4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C4A4u;
        // 0x34c4a8: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c4a4) {
            ctx->pc = 0x34C4BCu;
            goto label_34c4bc;
        }
    }
    ctx->pc = 0x34C4ACu;
    // 0x34c4ac: 0x0  nop
    ctx->pc = 0x34c4acu;
    // NOP
label_34c4b0:
    // 0x34c4b0: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x34C4B0u;
    {
        const bool branch_taken_0x34c4b0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x34C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C4B0u;
        // 0x34c4b4: 0x541021  addu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c4b0) {
            ctx->pc = 0x34C4BCu;
            goto label_34c4bc;
        }
    }
    ctx->pc = 0x34C4B8u;
    // 0x34c4b8: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x34c4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_34c4bc:
    // 0x34c4bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34c4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c4c0: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x34c4c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c4c4: 0xaec30044  sw          $v1, 0x44($s6)
    ctx->pc = 0x34c4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 68), GPR_U32(ctx, 3));
label_34c4c8:
    // 0x34c4c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34c4c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34c4cc:
    // 0x34c4cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34c4ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34c4d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34c4d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34c4d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x34c4d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34c4d8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x34c4d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34c4dc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x34c4dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34c4e0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x34c4e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34c4e4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x34c4e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34c4e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34c4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34c4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x34C4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C4ECu;
        // 0x34c4f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34C4F4u;
    // 0x34c4f4: 0x0  nop
    ctx->pc = 0x34c4f4u;
    // NOP
    ctx->pc = 0x34c4f8u;
}
