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

// Function: sfmps_SkipNext
// Address: 0x34e808 - 0x34e8e8
void sfmps_SkipNext_0x34e808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfmps_SkipNext_0x34e808");
#endif

    switch (ctx->pc) {
        case 0x34e858u: goto label_34e858;
        case 0x34e870u: goto label_34e870;
        case 0x34e87cu: goto label_34e87c;
        case 0x34e8b4u: goto label_34e8b4;
        default: break;
    }

    ctx->pc = 0x34e808u;

    // 0x34e808: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34e808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34e80c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x34e80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x34e810: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x34e810u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34e814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34e818: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x34e818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e81c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34e81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34e820: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x34e820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x34e824: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x34e824u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e828: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34e828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34e82c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x34e82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x34e830: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x34e830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x34e834: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x34e834u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x34e838: 0x8eb20028  lw          $s2, 0x28($s5)
    ctx->pc = 0x34e838u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x34e83c: 0x26420003  addiu       $v0, $s2, 0x3
    ctx->pc = 0x34e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x34e840: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x34e840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x34e844: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34E844u;
    {
        const bool branch_taken_0x34e844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E844u;
        // 0x34e848: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e844) {
            ctx->pc = 0x34E860u;
            goto label_34e860;
        }
    }
    ctx->pc = 0x34E84Cu;
    // 0x34e84c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34e84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e850: 0xc0d3a3a  jal         func_34E8E8
    ctx->pc = 0x34E850u;
    SET_GPR_U32(ctx, 31, 0x34E858u);
    ctx->pc = 0x34E854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E850u;
    // 0x34e854: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E8E8u, 0x34E850u, 0x34E858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E858u;
label_34e858:
    // 0x34e858: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x34E858u;
    {
        const bool branch_taken_0x34e858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34e858) {
            ctx->pc = 0x34E85Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34E858u;
            // 0x34e85c: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34E8C0u;
            goto label_34e8c0;
        }
    }
    ctx->pc = 0x34E860u;
label_34e860:
    // 0x34e860: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x34e860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x34e864: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x34E864u;
    {
        const bool branch_taken_0x34e864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E864u;
        // 0x34e868: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e864) {
            ctx->pc = 0x34E898u;
            goto label_34e898;
        }
    }
    ctx->pc = 0x34E86Cu;
    // 0x34e86c: 0x3c14000d  lui         $s4, 0xD
    ctx->pc = 0x34e86cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)13 << 16));
label_34e870:
    // 0x34e870: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34e870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e874: 0xc0da28a  jal         func_368A28
    ctx->pc = 0x34E874u;
    SET_GPR_U32(ctx, 31, 0x34E87Cu);
    ctx->pc = 0x34E878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E874u;
    // 0x34e878: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368A28u, 0x34E874u, 0x34E87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E87Cu;
label_34e87c:
    // 0x34e87c: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x34e87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x34e880: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x34E880u;
    {
        const bool branch_taken_0x34e880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34e880) {
            ctx->pc = 0x34E884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34E880u;
            // 0x34e884: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34E8C0u;
            goto label_34e8c0;
        }
    }
    ctx->pc = 0x34E888u;
    // 0x34e888: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x34e888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x34e88c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x34e88cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x34e890: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x34E890u;
    {
        const bool branch_taken_0x34e890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E890u;
        // 0x34e894: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e890) {
            ctx->pc = 0x34E870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34e870;
        }
    }
    ctx->pc = 0x34E898u;
label_34e898:
    // 0x34e898: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x34e898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x34e89c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x34e89cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x34e8a0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x34E8A0u;
    {
        const bool branch_taken_0x34e8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e8a0) {
            ctx->pc = 0x34E8A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34E8A0u;
            // 0x34e8a4: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34E8C0u;
            goto label_34e8c0;
        }
    }
    ctx->pc = 0x34E8A8u;
    // 0x34e8a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x34e8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e8ac: 0xc0d3a4a  jal         func_34E928
    ctx->pc = 0x34E8ACu;
    SET_GPR_U32(ctx, 31, 0x34E8B4u);
    ctx->pc = 0x34E8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E8ACu;
    // 0x34e8b0: 0x2302821  addu        $a1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E928u, 0x34E8ACu, 0x34E8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E8B4u;
label_34e8b4:
    // 0x34e8b4: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x34e8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x34e8b8: 0x62900b  movn        $s2, $v1, $v0
    ctx->pc = 0x34e8b8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    // 0x34e8bc: 0xae720000  sw          $s2, 0x0($s3)
    ctx->pc = 0x34e8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
label_34e8c0:
    // 0x34e8c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34e8c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e8c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34e8c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34e8c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34e8c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34e8cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x34e8ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34e8d0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x34e8d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34e8d4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x34e8d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34e8d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x34e8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34e8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x34E8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E8DCu;
        // 0x34e8e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E8E4u;
    // 0x34e8e4: 0x0  nop
    ctx->pc = 0x34e8e4u;
    // NOP
    ctx->pc = 0x34e8e8u;
}
