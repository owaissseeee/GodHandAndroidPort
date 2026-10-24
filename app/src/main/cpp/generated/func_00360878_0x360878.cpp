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

// Function: func_00360878
// Address: 0x360878 - 0x360940
void func_00360878_0x360878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00360878_0x360878");
#endif

    switch (ctx->pc) {
        case 0x3608d0u: goto label_3608d0;
        case 0x3608e0u: goto label_3608e0;
        case 0x3608f8u: goto label_3608f8;
        case 0x36090cu: goto label_36090c;
        default: break;
    }

    ctx->pc = 0x360878u;

    // 0x360878: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x360878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36087c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36087cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x360880: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x360880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360884: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x360884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x360888: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x360888u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36088c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x36088cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x360890: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x360890u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360894: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x360894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x360898: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x360898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x36089c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x36089cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3608a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3608a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3608a4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3608a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x3608a8: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3608A8u;
    {
        const bool branch_taken_0x3608a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3608ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3608A8u;
        // 0x3608ac: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3608a8) {
            ctx->pc = 0x36091Cu;
            goto label_36091c;
        }
    }
    ctx->pc = 0x3608B0u;
    // 0x3608b0: 0x58a0001b  blezl       $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3608B0u;
    {
        const bool branch_taken_0x3608b0 = (GPR_S64(ctx, 5) <= 0);
        if (branch_taken_0x3608b0) {
            ctx->pc = 0x3608B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3608B0u;
            // 0x3608b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x360920u;
            goto label_360920;
        }
    }
    ctx->pc = 0x3608B8u;
    // 0x3608b8: 0x58a00019  blezl       $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3608B8u;
    {
        const bool branch_taken_0x3608b8 = (GPR_S64(ctx, 5) <= 0);
        if (branch_taken_0x3608b8) {
            ctx->pc = 0x3608BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3608B8u;
            // 0x3608bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x360920u;
            goto label_360920;
        }
    }
    ctx->pc = 0x3608C0u;
    // 0x3608c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3608c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3608c4: 0x3c150046  lui         $s5, 0x46
    ctx->pc = 0x3608c4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)70 << 16));
    // 0x3608c8: 0x3c140046  lui         $s4, 0x46
    ctx->pc = 0x3608c8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)70 << 16));
    // 0x3608cc: 0x0  nop
    ctx->pc = 0x3608ccu;
    // NOP
label_3608d0:
    // 0x3608d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3608d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3608d4: 0x26a5a258  addiu       $a1, $s5, -0x5DA8
    ctx->pc = 0x3608d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294943320));
    // 0x3608d8: 0xc0e942d  jal         func_3A50B4
    ctx->pc = 0x3608D8u;
    SET_GPR_U32(ctx, 31, 0x3608E0u);
    ctx->pc = 0x3608DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3608D8u;
    // 0x3608dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A50B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50B4u, 0x3608D8u, 0x3608E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3608E0u;
label_3608e0:
    // 0x3608e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3608e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3608e4: 0x2685a1e8  addiu       $a1, $s4, -0x5E18
    ctx->pc = 0x3608e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294943208));
    // 0x3608e8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3608E8u;
    {
        const bool branch_taken_0x3608e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3608ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3608E8u;
        // 0x3608ec: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3608e8) {
            ctx->pc = 0x360910u;
            goto label_360910;
        }
    }
    ctx->pc = 0x3608F0u;
    // 0x3608f0: 0xc0e942d  jal         func_3A50B4
    ctx->pc = 0x3608F0u;
    SET_GPR_U32(ctx, 31, 0x3608F8u);
    ctx->pc = 0x3A50B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50B4u, 0x3608F0u, 0x3608F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3608F8u;
label_3608f8:
    // 0x3608f8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3608F8u;
    {
        const bool branch_taken_0x3608f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3608f8) {
            ctx->pc = 0x3608FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3608F8u;
            // 0x3608fc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x360914u;
            goto label_360914;
        }
    }
    ctx->pc = 0x360900u;
    // 0x360900: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x360900u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x360904: 0xc0d8250  jal         func_360940
    ctx->pc = 0x360904u;
    SET_GPR_U32(ctx, 31, 0x36090Cu);
    ctx->pc = 0x360908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360904u;
    // 0x360908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360940u, 0x360904u, 0x36090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36090Cu;
label_36090c:
    // 0x36090c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x36090cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_360910:
    // 0x360910: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x360910u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_360914:
    // 0x360914: 0x1620ffee  bnez        $s1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x360914u;
    {
        const bool branch_taken_0x360914 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x360918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360914u;
        // 0x360918: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360914) {
            ctx->pc = 0x3608D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3608d0;
        }
    }
    ctx->pc = 0x36091Cu;
label_36091c:
    // 0x36091c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36091cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_360920:
    // 0x360920: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x360920u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x360924: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x360924u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360928: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x360928u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36092c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x36092cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x360930: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x360930u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360934: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x360934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x360938: 0x3e00008  jr          $ra
    ctx->pc = 0x360938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360938u;
        // 0x36093c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360940u;
}
