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

// Function: Slot2_PayoutJackpotLine
// Address: 0x1e6498 - 0x1e66c0
void Slot2_PayoutJackpotLine_0x1e6498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_PayoutJackpotLine_0x1e6498");
#endif

    switch (ctx->pc) {
        case 0x1e64fcu: goto label_1e64fc;
        case 0x1e650cu: goto label_1e650c;
        case 0x1e65b4u: goto label_1e65b4;
        case 0x1e65d4u: goto label_1e65d4;
        case 0x1e6600u: goto label_1e6600;
        case 0x1e6634u: goto label_1e6634;
        case 0x1e6650u: goto label_1e6650;
        case 0x1e6660u: goto label_1e6660;
        case 0x1e6670u: goto label_1e6670;
        case 0x1e668cu: goto label_1e668c;
        default: break;
    }

    ctx->pc = 0x1e6498u;

    // 0x1e6498: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e6498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e649c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e649cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e64a0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e64a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1e64a4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e64a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1e64a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e64a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e64ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e64acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e64b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e64b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e64b4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1e64b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e64b8: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E64B8u;
    {
        const bool branch_taken_0x1e64b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E64BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E64B8u;
        // 0x1e64bc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e64b8) {
            ctx->pc = 0x1E651Cu;
            goto label_1e651c;
        }
    }
    ctx->pc = 0x1E64C0u;
    // 0x1e64c0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E64C0u;
    {
        const bool branch_taken_0x1e64c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e64c0) {
            ctx->pc = 0x1E64C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E64C0u;
            // 0x1e64c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E64D8u;
            goto label_1e64d8;
        }
    }
    ctx->pc = 0x1E64C8u;
    // 0x1e64c8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E64C8u;
    {
        const bool branch_taken_0x1e64c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E64CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E64C8u;
        // 0x1e64cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e64c8) {
            ctx->pc = 0x1E64F0u;
            goto label_1e64f0;
        }
    }
    ctx->pc = 0x1E64D0u;
    // 0x1e64d0: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x1E64D0u;
    {
        const bool branch_taken_0x1e64d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E64D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E64D0u;
        // 0x1e64d4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e64d0) {
            ctx->pc = 0x1E66A8u;
            goto label_1e66a8;
        }
    }
    ctx->pc = 0x1E64D8u;
label_1e64d8:
    // 0x1e64d8: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1E64D8u;
    {
        const bool branch_taken_0x1e64d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E64DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E64D8u;
        // 0x1e64dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e64d8) {
            ctx->pc = 0x1E65E8u;
            goto label_1e65e8;
        }
    }
    ctx->pc = 0x1E64E0u;
    // 0x1e64e0: 0x5062006e  beql        $v1, $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x1E64E0u;
    {
        const bool branch_taken_0x1e64e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e64e0) {
            ctx->pc = 0x1E64E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E64E0u;
            // 0x1e64e4: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E669Cu;
            goto label_1e669c;
        }
    }
    ctx->pc = 0x1E64E8u;
    // 0x1e64e8: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1E64E8u;
    {
        const bool branch_taken_0x1e64e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E64ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E64E8u;
        // 0x1e64ec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e64e8) {
            ctx->pc = 0x1E66A8u;
            goto label_1e66a8;
        }
    }
    ctx->pc = 0x1E64F0u;
label_1e64f0:
    // 0x1e64f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e64f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e64f4: 0xc079bb6  jal         func_1E6ED8
    ctx->pc = 0x1E64F4u;
    SET_GPR_U32(ctx, 31, 0x1E64FCu);
    ctx->pc = 0x1E64F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E64F4u;
    // 0x1e64f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6ED8u, 0x1E64F4u, 0x1E64FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E64FCu;
label_1e64fc:
    // 0x1e64fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e64fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6500: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e6500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6504: 0xc079b84  jal         func_1E6E10
    ctx->pc = 0x1E6504u;
    SET_GPR_U32(ctx, 31, 0x1E650Cu);
    ctx->pc = 0x1E6508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6504u;
    // 0x1e6508: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6E10u, 0x1E6504u, 0x1E650Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E650Cu;
label_1e650c:
    // 0x1e650c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e650cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e6510: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1e6510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1e6514: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1E6514u;
    {
        const bool branch_taken_0x1e6514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6514u;
        // 0x1e6518: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6514) {
            ctx->pc = 0x1E6674u;
            goto label_1e6674;
        }
    }
    ctx->pc = 0x1E651Cu;
label_1e651c:
    // 0x1e651c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1e651cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1e6520: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E6520u;
    {
        const bool branch_taken_0x1e6520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6520u;
        // 0x1e6524: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6520) {
            ctx->pc = 0x1E6534u;
            goto label_1e6534;
        }
    }
    ctx->pc = 0x1E6528u;
    // 0x1e6528: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e6528u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e652c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E652Cu;
    {
        const bool branch_taken_0x1e652c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E652Cu;
        // 0x1e6530: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e652c) {
            ctx->pc = 0x1E6538u;
            goto label_1e6538;
        }
    }
    ctx->pc = 0x1E6534u;
label_1e6534:
    // 0x1e6534: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e6534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6538:
    // 0x1e6538: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e6538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e653c: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x1E653Cu;
    {
        const bool branch_taken_0x1e653c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E653Cu;
        // 0x1e6540: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e653c) {
            ctx->pc = 0x1E66A4u;
            goto label_1e66a4;
        }
    }
    ctx->pc = 0x1E6544u;
    // 0x1e6544: 0x8e0303d4  lw          $v1, 0x3D4($s0)
    ctx->pc = 0x1e6544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 980)));
    // 0x1e6548: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6548u;
    {
        const bool branch_taken_0x1e6548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6548u;
        // 0x1e654c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6548) {
            ctx->pc = 0x1E6558u;
            goto label_1e6558;
        }
    }
    ctx->pc = 0x1E6550u;
    // 0x1e6550: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E6550u;
    {
        const bool branch_taken_0x1e6550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6550u;
        // 0x1e6554: 0x8e030374  lw          $v1, 0x374($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 884)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6550) {
            ctx->pc = 0x1E6584u;
            goto label_1e6584;
        }
    }
    ctx->pc = 0x1E6558u;
label_1e6558:
    // 0x1e6558: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6558u;
    {
        const bool branch_taken_0x1e6558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6558u;
        // 0x1e655c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6558) {
            ctx->pc = 0x1E6568u;
            goto label_1e6568;
        }
    }
    ctx->pc = 0x1E6560u;
    // 0x1e6560: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E6560u;
    {
        const bool branch_taken_0x1e6560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6560u;
        // 0x1e6564: 0x8e030378  lw          $v1, 0x378($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 888)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6560) {
            ctx->pc = 0x1E6584u;
            goto label_1e6584;
        }
    }
    ctx->pc = 0x1E6568u;
label_1e6568:
    // 0x1e6568: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6568u;
    {
        const bool branch_taken_0x1e6568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6568u;
        // 0x1e656c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6568) {
            ctx->pc = 0x1E6578u;
            goto label_1e6578;
        }
    }
    ctx->pc = 0x1E6570u;
    // 0x1e6570: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E6570u;
    {
        const bool branch_taken_0x1e6570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6570u;
        // 0x1e6574: 0x8e03037c  lw          $v1, 0x37C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6570) {
            ctx->pc = 0x1E6584u;
            goto label_1e6584;
        }
    }
    ctx->pc = 0x1E6578u;
label_1e6578:
    // 0x1e6578: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E6578u;
    {
        const bool branch_taken_0x1e6578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e6578) {
            ctx->pc = 0x1E65A4u;
            goto label_1e65a4;
        }
    }
    ctx->pc = 0x1E6580u;
    // 0x1e6580: 0x8e030380  lw          $v1, 0x380($s0)
    ctx->pc = 0x1e6580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
label_1e6584:
    // 0x1e6584: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1e6584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e6588: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1e6588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1e658c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1e658cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e6590: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e6590u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e6594: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E6594u;
    {
        const bool branch_taken_0x1e6594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6594) {
            ctx->pc = 0x1E6598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6594u;
            // 0x1e6598: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E659Cu;
            goto label_1e659c;
        }
    }
    ctx->pc = 0x1E659Cu;
label_1e659c:
    // 0x1e659c: 0x1812  mflo        $v1
    ctx->pc = 0x1e659cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1e65a0: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x1e65a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_1e65a4:
    // 0x1e65a4: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1e65a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1e65a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e65a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e65ac: 0xc07a392  jal         func_1E8E48
    ctx->pc = 0x1E65ACu;
    SET_GPR_U32(ctx, 31, 0x1E65B4u);
    ctx->pc = 0x1E65B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E65ACu;
    // 0x1e65b0: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8E48u, 0x1E65ACu, 0x1E65B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E65B4u;
label_1e65b4:
    // 0x1e65b4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e65b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e65b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e65b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e65bc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1e65bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1e65c0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e65c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e65c4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1e65c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e65c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e65c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e65cc: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x1E65CCu;
    SET_GPR_U32(ctx, 31, 0x1E65D4u);
    ctx->pc = 0x1E65D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E65CCu;
    // 0x1e65d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x1E65CCu, 0x1E65D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E65D4u;
label_1e65d4:
    // 0x1e65d4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1e65d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e65d8: 0xae0203f0  sw          $v0, 0x3F0($s0)
    ctx->pc = 0x1e65d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1008), GPR_U32(ctx, 2));
    // 0x1e65dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e65dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e65e0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1E65E0u;
    {
        const bool branch_taken_0x1e65e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E65E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65E0u;
        // 0x1e65e4: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e65e0) {
            ctx->pc = 0x1E66A4u;
            goto label_1e66a4;
        }
    }
    ctx->pc = 0x1E65E8u;
label_1e65e8:
    // 0x1e65e8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1e65e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1e65ec: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E65ECu;
    {
        const bool branch_taken_0x1e65ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E65F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65ECu;
        // 0x1e65f0: 0x3c110057  lui         $s1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e65ec) {
            ctx->pc = 0x1E6624u;
            goto label_1e6624;
        }
    }
    ctx->pc = 0x1E65F4u;
    // 0x1e65f4: 0x26329b70  addiu       $s2, $s1, -0x6490
    ctx->pc = 0x1e65f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941552));
    // 0x1e65f8: 0xc07ea38  jal         func_1FA8E0
    ctx->pc = 0x1E65F8u;
    SET_GPR_U32(ctx, 31, 0x1E6600u);
    ctx->pc = 0x1E65FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E65F8u;
    // 0x1e65fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA8E0u, 0x1E65F8u, 0x1E6600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6600u;
label_1e6600:
    // 0x1e6600: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E6600u;
    {
        const bool branch_taken_0x1e6600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6600) {
            ctx->pc = 0x1E6604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6600u;
            // 0x1e6604: 0x8e0503f0  lw          $a1, 0x3F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1008)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6628u;
            goto label_1e6628;
        }
    }
    ctx->pc = 0x1E6608u;
    // 0x1e6608: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1e6608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1e660c: 0x3404f000  ori         $a0, $zero, 0xF000
    ctx->pc = 0x1e660cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1e6610: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x1e6610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x1e6614: 0xdc437650  ld          $v1, 0x7650($v0)
    ctx->pc = 0x1e6614u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30288)));
    // 0x1e6618: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e6618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e661c: 0x50600018  beql        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E661Cu;
    {
        const bool branch_taken_0x1e661c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e661c) {
            ctx->pc = 0x1E6620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E661Cu;
            // 0x1e6620: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6680u;
            goto label_1e6680;
        }
    }
    ctx->pc = 0x1E6624u;
label_1e6624:
    // 0x1e6624: 0x8e0503f0  lw          $a1, 0x3F0($s0)
    ctx->pc = 0x1e6624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1008)));
label_1e6628:
    // 0x1e6628: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e6628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e662c: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x1E662Cu;
    SET_GPR_U32(ctx, 31, 0x1E6634u);
    ctx->pc = 0x1E6630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E662Cu;
    // 0x1e6630: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x1E662Cu, 0x1E6634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6634u;
label_1e6634:
    // 0x1e6634: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1e6634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1e6638: 0x26249b70  addiu       $a0, $s1, -0x6490
    ctx->pc = 0x1e6638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941552));
    // 0x1e663c: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x1e663cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1e6640: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x1e6640u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1e6644: 0x2812  mflo        $a1
    ctx->pc = 0x1e6644u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1e6648: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1E6648u;
    SET_GPR_U32(ctx, 31, 0x1E6650u);
    ctx->pc = 0x1E664Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6648u;
    // 0x1e664c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1E6648u, 0x1E6650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6650u;
label_1e6650:
    // 0x1e6650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e6650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6654: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e6654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6658: 0xc079bb6  jal         func_1E6ED8
    ctx->pc = 0x1E6658u;
    SET_GPR_U32(ctx, 31, 0x1E6660u);
    ctx->pc = 0x1E665Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6658u;
    // 0x1e665c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6ED8u, 0x1E6658u, 0x1E6660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6660u;
label_1e6660:
    // 0x1e6660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e6660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6664: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e6664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6668: 0xc079b84  jal         func_1E6E10
    ctx->pc = 0x1E6668u;
    SET_GPR_U32(ctx, 31, 0x1E6670u);
    ctx->pc = 0x1E666Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6668u;
    // 0x1e666c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6E10u, 0x1E6668u, 0x1E6670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6670u;
label_1e6670:
    // 0x1e6670: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e6670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e6674:
    // 0x1e6674: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e6674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e6678: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E6678u;
    {
        const bool branch_taken_0x1e6678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E667Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6678u;
        // 0x1e667c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6678) {
            ctx->pc = 0x1E66A4u;
            goto label_1e66a4;
        }
    }
    ctx->pc = 0x1E6680u;
label_1e6680:
    // 0x1e6680: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e6680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6684: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1E6684u;
    SET_GPR_U32(ctx, 31, 0x1E668Cu);
    ctx->pc = 0x1E6688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6684u;
    // 0x1e6688: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1E6684u, 0x1E668Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E668Cu;
label_1e668c:
    // 0x1e668c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1e668cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1e6690: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e6690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e6694: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6694u;
    {
        const bool branch_taken_0x1e6694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6694u;
        // 0x1e6698: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6694) {
            ctx->pc = 0x1E66A4u;
            goto label_1e66a4;
        }
    }
    ctx->pc = 0x1E669Cu;
label_1e669c:
    // 0x1e669c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1e669cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1e66a0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e66a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1e66a4:
    // 0x1e66a4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e66a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e66a8:
    // 0x1e66a8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e66a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e66ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e66acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e66b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e66b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e66b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E66B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E66B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E66B4u;
        // 0x1e66b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E66B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E66BCu;
    // 0x1e66bc: 0x0  nop
    ctx->pc = 0x1e66bcu;
    // NOP
    ctx->pc = 0x1e66c0u;
}
