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

// Function: sfadxt_AdjDiscard
// Address: 0x34a358 - 0x34a3e0
void sfadxt_AdjDiscard_0x34a358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfadxt_AdjDiscard_0x34a358");
#endif

    switch (ctx->pc) {
        case 0x34a390u: goto label_34a390;
        case 0x34a3b4u: goto label_34a3b4;
        default: break;
    }

    ctx->pc = 0x34a358u;

    // 0x34a358: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34a358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34a35c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34a35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x34a360: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34a360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a364: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34a364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x34a368: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34a368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a36c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x34a36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x34a370: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x34a370u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a374: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x34a374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x34a378: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x34a378u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a37c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x34a37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x34a380: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x34a380u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a384: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x34a384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x34a388: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x34A388u;
    {
        const bool branch_taken_0x34a388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A388u;
        // 0x34a38c: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a388) {
            ctx->pc = 0x34A394u;
            goto label_34a394;
        }
    }
    ctx->pc = 0x34A390u;
label_34a390:
    // 0x34a390: 0x26310012  addiu       $s1, $s1, 0x12
    ctx->pc = 0x34a390u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18));
label_34a394:
    // 0x34a394: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x34a394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x34a398: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x34A398u;
    {
        const bool branch_taken_0x34a398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a398) {
            ctx->pc = 0x34A39Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A398u;
            // 0x34a39c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A3C0u;
            goto label_34a3c0;
        }
    }
    ctx->pc = 0x34A3A0u;
    // 0x34a3a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34a3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a3a4: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x34a3a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
    // 0x34a3a8: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x34a3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x34a3ac: 0xc0cadfc  jal         func_32B7F0
    ctx->pc = 0x34A3ACu;
    SET_GPR_U32(ctx, 31, 0x34A3B4u);
    ctx->pc = 0x34A3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A3ACu;
    // 0x34a3b0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B7F0u, 0x34A3ACu, 0x34A3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A3B4u;
label_34a3b4:
    // 0x34a3b4: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x34A3B4u;
    {
        const bool branch_taken_0x34a3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A3B4u;
        // 0x34a3b8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a3b4) {
            ctx->pc = 0x34A390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34a390;
        }
    }
    ctx->pc = 0x34A3BCu;
    // 0x34a3bc: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x34a3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
label_34a3c0:
    // 0x34a3c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34a3c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a3c4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34a3c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34a3c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34a3c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34a3cc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x34a3ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a3d0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x34a3d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34a3d4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x34a3d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x34A3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A3D8u;
        // 0x34a3dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A3E0u;
}
