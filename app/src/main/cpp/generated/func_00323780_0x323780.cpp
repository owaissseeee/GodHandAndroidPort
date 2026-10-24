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

// Function: func_00323780
// Address: 0x323780 - 0x323840
void func_00323780_0x323780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00323780_0x323780");
#endif

    switch (ctx->pc) {
        case 0x3237c4u: goto label_3237c4;
        case 0x3237ccu: goto label_3237cc;
        case 0x3237f0u: goto label_3237f0;
        case 0x323804u: goto label_323804;
        case 0x32381cu: goto label_32381c;
        default: break;
    }

    ctx->pc = 0x323780u;

    // 0x323780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x323780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x323784: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x323784u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x323788: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x323788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x32378c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x32378cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323790: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x323790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x323794: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x323794u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323798: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x323798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32379c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x32379cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3237a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3237a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3237a4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3237a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3237a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3237a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3237ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3237acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3237b0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3237b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3237b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3237b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3237b8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3237b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3237bc: 0xc0c8a30  jal         func_3228C0
    ctx->pc = 0x3237BCu;
    SET_GPR_U32(ctx, 31, 0x3237C4u);
    ctx->pc = 0x3237C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3237BCu;
    // 0x3237c0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3228C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3228C0u, 0x3237BCu, 0x3237C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3237C4u;
label_3237c4:
    // 0x3237c4: 0xc0c8d34  jal         func_3234D0
    ctx->pc = 0x3237C4u;
    SET_GPR_U32(ctx, 31, 0x3237CCu);
    ctx->pc = 0x3234D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234D0u, 0x3237C4u, 0x3237CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3237CCu;
label_3237cc:
    // 0x3237cc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3237ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3237d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3237d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3237d4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3237d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3237d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3237d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3237dc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3237dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3237e0: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3237E0u;
    {
        const bool branch_taken_0x3237e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3237E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3237E0u;
        // 0x3237e4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3237e0) {
            ctx->pc = 0x323804u;
            goto label_323804;
        }
    }
    ctx->pc = 0x3237E8u;
    // 0x3237e8: 0xc0c8dc0  jal         func_323700
    ctx->pc = 0x3237E8u;
    SET_GPR_U32(ctx, 31, 0x3237F0u);
    ctx->pc = 0x323700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323700u, 0x3237E8u, 0x3237F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3237F0u;
label_3237f0:
    // 0x3237f0: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3237F0u;
    {
        const bool branch_taken_0x3237f0 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3237F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3237F0u;
        // 0x3237f4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3237f0) {
            ctx->pc = 0x323808u;
            goto label_323808;
        }
    }
    ctx->pc = 0x3237F8u;
    // 0x3237f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3237f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3237fc: 0xc0c8ea8  jal         func_323AA0
    ctx->pc = 0x3237FCu;
    SET_GPR_U32(ctx, 31, 0x323804u);
    ctx->pc = 0x323800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3237FCu;
    // 0x323800: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323AA0u, 0x3237FCu, 0x323804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323804u;
label_323804:
    // 0x323804: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x323804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_323808:
    // 0x323808: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x323808u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32380c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32380cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323810: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x323810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323814: 0xc0c8a30  jal         func_3228C0
    ctx->pc = 0x323814u;
    SET_GPR_U32(ctx, 31, 0x32381Cu);
    ctx->pc = 0x323818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323814u;
    // 0x323818: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3228C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3228C0u, 0x323814u, 0x32381Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32381Cu;
label_32381c:
    // 0x32381c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x32381cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323820: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x323820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323824: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x323824u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x323828: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x323828u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32382c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32382cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x323830: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x323830u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x323834: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x323834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x323838: 0x3e00008  jr          $ra
    ctx->pc = 0x323838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323838u;
        // 0x32383c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323840u;
}
