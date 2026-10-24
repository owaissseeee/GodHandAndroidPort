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

// Function: SFH_IsSfdHeader
// Address: 0x35d828 - 0x35d918
void SFH_IsSfdHeader_0x35d828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFH_IsSfdHeader_0x35d828");
#endif

    switch (ctx->pc) {
        case 0x35d85cu: goto label_35d85c;
        case 0x35d8a0u: goto label_35d8a0;
        case 0x35d8ccu: goto label_35d8cc;
        default: break;
    }

    ctx->pc = 0x35d828u;

    // 0x35d828: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35d828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35d82c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35d82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x35d830: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35d830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d834: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x35d834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x35d838: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x35d838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x35d83c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x35d83cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d840: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x35d840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x35d844: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x35d844u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d848: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x35d848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x35d84c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x35d84cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x35d850: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x35d850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35d854: 0xc0d75ea  jal         func_35D7A8
    ctx->pc = 0x35D854u;
    SET_GPR_U32(ctx, 31, 0x35D85Cu);
    ctx->pc = 0x35D858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D854u;
    // 0x35d858: 0x24510020  addiu       $s1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D7A8u, 0x35D854u, 0x35D85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D85Cu;
label_35d85c:
    // 0x35d85c: 0x54530004  bnel        $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x35D85Cu;
    {
        const bool branch_taken_0x35d85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x35d85c) {
            ctx->pc = 0x35D860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35D85Cu;
            // 0x35d860: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35D870u;
            goto label_35d870;
        }
    }
    ctx->pc = 0x35D864u;
    // 0x35d864: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x35D864u;
    {
        const bool branch_taken_0x35d864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D864u;
        // 0x35d868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d864) {
            ctx->pc = 0x35D8FCu;
            goto label_35d8fc;
        }
    }
    ctx->pc = 0x35D86Cu;
    // 0x35d86c: 0x0  nop
    ctx->pc = 0x35d86cu;
    // NOP
label_35d870:
    // 0x35d870: 0x2c420800  sltiu       $v0, $v0, 0x800
    ctx->pc = 0x35d870u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2048) ? 1 : 0);
    // 0x35d874: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35D874u;
    {
        const bool branch_taken_0x35d874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D874u;
        // 0x35d878: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d874) {
            ctx->pc = 0x35D890u;
            goto label_35d890;
        }
    }
    ctx->pc = 0x35D87Cu;
    // 0x35d87c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35d87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35d880: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35d880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d884: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x35D884u;
    {
        const bool branch_taken_0x35d884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D884u;
        // 0x35d888: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d884) {
            ctx->pc = 0x35D8FCu;
            goto label_35d8fc;
        }
    }
    ctx->pc = 0x35D88Cu;
    // 0x35d88c: 0x0  nop
    ctx->pc = 0x35d88cu;
    // NOP
label_35d890:
    // 0x35d890: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35d890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d894: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x35d894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x35d898: 0xc0e942d  jal         func_3A50B4
    ctx->pc = 0x35D898u;
    SET_GPR_U32(ctx, 31, 0x35D8A0u);
    ctx->pc = 0x35D89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D898u;
    // 0x35d89c: 0x24a59c28  addiu       $a1, $a1, -0x63D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A50B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50B4u, 0x35D898u, 0x35D8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D8A0u;
label_35d8a0:
    // 0x35d8a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35d8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d8a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x35d8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d8a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35D8A8u;
    {
        const bool branch_taken_0x35d8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D8A8u;
        // 0x35d8ac: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d8a8) {
            ctx->pc = 0x35D8C0u;
            goto label_35d8c0;
        }
    }
    ctx->pc = 0x35D8B0u;
    // 0x35d8b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35d8b4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x35d8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x35d8b8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x35D8B8u;
    {
        const bool branch_taken_0x35d8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D8B8u;
        // 0x35d8bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d8b8) {
            ctx->pc = 0x35D8FCu;
            goto label_35d8fc;
        }
    }
    ctx->pc = 0x35D8C0u;
label_35d8c0:
    // 0x35d8c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35d8c4: 0xc0d76ce  jal         func_35DB38
    ctx->pc = 0x35D8C4u;
    SET_GPR_U32(ctx, 31, 0x35D8CCu);
    ctx->pc = 0x35D8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D8C4u;
    // 0x35d8c8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35DB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DB38u, 0x35D8C4u, 0x35D8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D8CCu;
label_35d8cc:
    // 0x35d8cc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x35D8CCu;
    {
        const bool branch_taken_0x35d8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D8CCu;
        // 0x35d8d0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d8cc) {
            ctx->pc = 0x35D8FCu;
            goto label_35d8fc;
        }
    }
    ctx->pc = 0x35D8D4u;
    // 0x35d8d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d8d8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x35d8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x35d8dc: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x35d8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x35d8e0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x35d8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x35d8e4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x35d8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x35d8e8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x35d8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x35d8ec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x35d8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35d8f0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x35d8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x35d8f4: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x35d8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x35d8f8: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x35d8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
label_35d8fc:
    // 0x35d8fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x35d8fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d900: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x35d900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35d904: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x35d904u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35d908: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x35d908u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35d90c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x35d90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35d910: 0x3e00008  jr          $ra
    ctx->pc = 0x35D910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D910u;
        // 0x35d914: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D918u;
}
