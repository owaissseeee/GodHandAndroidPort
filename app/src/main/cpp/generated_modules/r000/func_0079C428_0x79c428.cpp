#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r000_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r000
{
// Function: func_0079C428
// Address: 0x79c428 - 0x79c5c8
void func_0079C428_0x79c428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079C428_0x79c428");
#endif

    switch (ctx->pc) {
        case 0x79c454u: goto label_79c454;
        case 0x79c470u: goto label_79c470;
        case 0x79c4e0u: goto label_79c4e0;
        case 0x79c504u: goto label_79c504;
        case 0x79c514u: goto label_79c514;
        case 0x79c524u: goto label_79c524;
        case 0x79c580u: goto label_79c580;
        case 0x79c590u: goto label_79c590;
        case 0x79c59cu: goto label_79c59c;
        case 0x79c5a8u: goto label_79c5a8;
        default: break;
    }

    ctx->pc = 0x79c428u;

    // 0x79c428: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79c428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79c42c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79c42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79c430: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x79c430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x79c434: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79c434u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79c438: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x79c438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x79c43c: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79c43cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79c440: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x79c440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x79c444: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x79c444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x79c448: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79c448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79c44c: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79C44Cu;
    SET_GPR_U32(ctx, 31, 0x79C454u);
    ctx->pc = 0x79C450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C44Cu;
    // 0x79c450: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79C44Cu, 0x79C454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C454u;
label_79c454:
    // 0x79c454: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79c454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79c458: 0x2405102e  addiu       $a1, $zero, 0x102E
    ctx->pc = 0x79c458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4142));
    // 0x79c45c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79c45cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c460: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79c460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c464: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79c464u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c468: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79C468u;
    SET_GPR_U32(ctx, 31, 0x79C470u);
    ctx->pc = 0x79C46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C468u;
    // 0x79c46c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79C468u, 0x79C470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C470u;
label_79c470:
    // 0x79c470: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79c470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x79c474: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79c474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c478: 0x8c6223a4  lw          $v0, 0x23A4($v1)
    ctx->pc = 0x79c478u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C23A4u));
    // 0x79c47c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x79c47cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c480: 0x84430bec  lh          $v1, 0xBEC($v0)
    ctx->pc = 0x79c480u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 3052)));
    // 0x79c484: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x79C484u;
    {
        const bool branch_taken_0x79c484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x79C488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C484u;
        // 0x79c488: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c484) {
            ctx->pc = 0x79C4B0u;
            goto label_79c4b0;
        }
    }
    ctx->pc = 0x79C48Cu;
    // 0x79c48c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x79C48Cu;
    {
        const bool branch_taken_0x79c48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c48c) {
            ctx->pc = 0x79C490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C48Cu;
            // 0x79c490: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C4C4u;
            goto label_79c4c4;
        }
    }
    ctx->pc = 0x79C494u;
    // 0x79c494: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79c494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79c498: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79C498u;
    {
        const bool branch_taken_0x79c498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C498u;
        // 0x79c49c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c498) {
            ctx->pc = 0x79C4B8u;
            goto label_79c4b8;
        }
    }
    ctx->pc = 0x79C4A0u;
    // 0x79c4a0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79C4A0u;
    {
        const bool branch_taken_0x79c4a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79C4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C4A0u;
        // 0x79c4a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c4a0) {
            ctx->pc = 0x79C4C0u;
            goto label_79c4c0;
        }
    }
    ctx->pc = 0x79C4A8u;
    // 0x79c4a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x79C4A8u;
    {
        const bool branch_taken_0x79c4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C4A8u;
        // 0x79c4ac: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c4a8) {
            ctx->pc = 0x79C4C8u;
            goto label_79c4c8;
        }
    }
    ctx->pc = 0x79C4B0u;
label_79c4b0:
    // 0x79c4b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79C4B0u;
    {
        const bool branch_taken_0x79c4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C4B0u;
        // 0x79c4b4: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c4b0) {
            ctx->pc = 0x79C4C4u;
            goto label_79c4c4;
        }
    }
    ctx->pc = 0x79C4B8u;
label_79c4b8:
    // 0x79c4b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79C4B8u;
    {
        const bool branch_taken_0x79c4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C4B8u;
        // 0x79c4bc: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c4b8) {
            ctx->pc = 0x79C4C4u;
            goto label_79c4c4;
        }
    }
    ctx->pc = 0x79C4C0u;
label_79c4c0:
    // 0x79c4c0: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x79c4c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79c4c4:
    // 0x79c4c4: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79c4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79c4c8:
    // 0x79c4c8: 0x2405102f  addiu       $a1, $zero, 0x102F
    ctx->pc = 0x79c4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4143));
    // 0x79c4cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79c4ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c4d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79c4d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c4d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79c4d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c4d8: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79C4D8u;
    SET_GPR_U32(ctx, 31, 0x79C4E0u);
    ctx->pc = 0x79C4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C4D8u;
    // 0x79c4dc: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79C4D8u, 0x79C4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C4E0u;
label_79c4e0:
    // 0x79c4e0: 0x8e2223a4  lw          $v0, 0x23A4($s1)
    ctx->pc = 0x79c4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 9124)));
    // 0x79c4e4: 0x84430bec  lh          $v1, 0xBEC($v0)
    ctx->pc = 0x79c4e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 3052)));
    // 0x79c4e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C4E8u;
    {
        const bool branch_taken_0x79c4e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C4E8u;
        // 0x79c4ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c4e8) {
            ctx->pc = 0x79C4F8u;
            goto label_79c4f8;
        }
    }
    ctx->pc = 0x79C4F0u;
    // 0x79c4f0: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x79C4F0u;
    {
        const bool branch_taken_0x79c4f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C4F0u;
        // 0x79c4f4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c4f0) {
            ctx->pc = 0x79C4FCu;
            goto label_79c4fc;
        }
    }
    ctx->pc = 0x79C4F8u;
label_79c4f8:
    // 0x79c4f8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x79c4f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79c4fc:
    // 0x79c4fc: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79C4FCu;
    SET_GPR_U32(ctx, 31, 0x79C504u);
    ctx->pc = 0x79C500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C4FCu;
    // 0x79c500: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79C4FCu, 0x79C504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C504u;
label_79c504:
    // 0x79c504: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x79c504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x79c508: 0x24519b70  addiu       $s1, $v0, -0x6490
    ctx->pc = 0x79c508u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x79c50c: 0xc07f02a  jal         func_1FC0A8
    ctx->pc = 0x79C50Cu;
    SET_GPR_U32(ctx, 31, 0x79C514u);
    ctx->pc = 0x79C510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C50Cu;
    // 0x79c510: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x79C50Cu, 0x79C514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C514u;
label_79c514:
    // 0x79c514: 0x1202001e  beq         $s0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x79C514u;
    {
        const bool branch_taken_0x79c514 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x79C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C514u;
        // 0x79c518: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c514) {
            ctx->pc = 0x79C590u;
            goto label_79c590;
        }
    }
    ctx->pc = 0x79C51Cu;
    // 0x79c51c: 0xc07f036  jal         func_1FC0D8
    ctx->pc = 0x79C51Cu;
    SET_GPR_U32(ctx, 31, 0x79C524u);
    ctx->pc = 0x79C520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C51Cu;
    // 0x79c520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0D8u, 0x79C51Cu, 0x79C524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C524u;
label_79c524:
    // 0x79c524: 0x3c01c246  lui         $at, 0xC246
    ctx->pc = 0x79c524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49734 << 16));
    // 0x79c528: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x79c528u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x79c52c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79c52cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79c530: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79c530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c534: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x79c534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x79c538: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79c538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79c53c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x79c53cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c540: 0x3c01c25e  lui         $at, 0xC25E
    ctx->pc = 0x79c540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49758 << 16));
    // 0x79c544: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79c544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79c548: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x79c548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c54c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79c54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79c550: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79c550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79c554: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x79c554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79c558: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79c558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79c55c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79c55cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c560: 0x3c01bf13  lui         $at, 0xBF13
    ctx->pc = 0x79c560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48915 << 16));
    // 0x79c564: 0x34217207  ori         $at, $at, 0x7207
    ctx->pc = 0x79c564u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29191);
    // 0x79c568: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79c568u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79c56c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x79c56cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x79c570: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x79c570u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x79c574: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x79c574u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x79c578: 0xc0b115e  jal         func_2C4578
    ctx->pc = 0x79C578u;
    SET_GPR_U32(ctx, 31, 0x79C580u);
    ctx->pc = 0x79C57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C578u;
    // 0x79c57c: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4578u, 0x79C578u, 0x79C580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C580u;
label_79c580:
    // 0x79c580: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79c580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79c584: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x79c584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x79c588: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x79C588u;
    SET_GPR_U32(ctx, 31, 0x79C590u);
    ctx->pc = 0x79C58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C588u;
    // 0x79c58c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79C588u, 0x79C590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C590u;
label_79c590:
    // 0x79c590: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79c590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c594: 0xc07f1ca  jal         func_1FC728
    ctx->pc = 0x79C594u;
    SET_GPR_U32(ctx, 31, 0x79C59Cu);
    ctx->pc = 0x79C598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C594u;
    // 0x79c598: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC728u, 0x79C594u, 0x79C59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C59Cu;
label_79c59c:
    // 0x79c59c: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79c5a0: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79C5A0u;
    SET_GPR_U32(ctx, 31, 0x79C5A8u);
    ctx->pc = 0x79C5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C5A0u;
    // 0x79c5a4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79C5A0u, 0x79C5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C5A8u;
label_79c5a8:
    // 0x79c5a8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x79c5a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79c5ac: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x79c5acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79c5b0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x79c5b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79c5b4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x79c5b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79c5b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79c5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79c5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x79C5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C5BCu;
        // 0x79c5c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C5C4u;
    // 0x79c5c4: 0x0  nop
    ctx->pc = 0x79c5c4u;
    // NOP
    ctx->pc = 0x79c5c8u;
}
} // namespace gh_r000
