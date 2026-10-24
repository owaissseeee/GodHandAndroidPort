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

// Function: checkModelVersion
// Address: 0x3964c0 - 0x396560
void checkModelVersion_0x3964c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkModelVersion_0x3964c0");
#endif

    switch (ctx->pc) {
        case 0x3964e4u: goto label_3964e4;
        case 0x396500u: goto label_396500;
        case 0x39651cu: goto label_39651c;
        case 0x396530u: goto label_396530;
        case 0x39653cu: goto label_39653c;
        default: break;
    }

    ctx->pc = 0x3964c0u;

    // 0x3964c0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x3964c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x3964c4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3964c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3964c8: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x3964c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x3964cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3964ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3964d0: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x3964d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x3964d4: 0x2484df50  addiu       $a0, $a0, -0x20B0
    ctx->pc = 0x3964d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958928));
    // 0x3964d8: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x3964d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x3964dc: 0xc0ed088  jal         func_3B4220
    ctx->pc = 0x3964DCu;
    SET_GPR_U32(ctx, 31, 0x3964E4u);
    ctx->pc = 0x3964E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3964DCu;
    // 0x3964e0: 0xffb00100  sd          $s0, 0x100($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4220u, 0x3964DCu, 0x3964E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3964E4u;
label_3964e4:
    // 0x3964e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3964e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3964e8: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3964E8u;
    {
        const bool branch_taken_0x3964e8 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x3964ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3964E8u;
        // 0x3964ec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3964e8) {
            ctx->pc = 0x3964F8u;
            goto label_3964f8;
        }
    }
    ctx->pc = 0x3964F0u;
    // 0x3964f0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3964F0u;
    {
        const bool branch_taken_0x3964f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3964F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3964F0u;
        // 0x3964f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3964f0) {
            ctx->pc = 0x396548u;
            goto label_396548;
        }
    }
    ctx->pc = 0x3964F8u;
label_3964f8:
    // 0x3964f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3964F8u;
    {
        const bool branch_taken_0x3964f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3964FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3964F8u;
        // 0x3964fc: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3964f8) {
            ctx->pc = 0x396504u;
            goto label_396504;
        }
    }
    ctx->pc = 0x396500u;
label_396500:
    // 0x396500: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x396500u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_396504:
    // 0x396504: 0x2e220100  sltiu       $v0, $s1, 0x100
    ctx->pc = 0x396504u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x396508: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x396508u;
    {
        const bool branch_taken_0x396508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396508u;
        // 0x39650c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396508) {
            ctx->pc = 0x396528u;
            goto label_396528;
        }
    }
    ctx->pc = 0x396510u;
    // 0x396510: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x396510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396514: 0xc0ed21a  jal         func_3B4868
    ctx->pc = 0x396514u;
    SET_GPR_U32(ctx, 31, 0x39651Cu);
    ctx->pc = 0x396518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396514u;
    // 0x396518: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4868u, 0x396514u, 0x39651Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39651Cu;
label_39651c:
    // 0x39651c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x39651cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x396520: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x396520u;
    {
        const bool branch_taken_0x396520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x396524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396520u;
        // 0x396524: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396520) {
            ctx->pc = 0x396500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396500;
        }
    }
    ctx->pc = 0x396528u;
label_396528:
    // 0x396528: 0xc0ed12c  jal         func_3B44B0
    ctx->pc = 0x396528u;
    SET_GPR_U32(ctx, 31, 0x396530u);
    ctx->pc = 0x39652Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396528u;
    // 0x39652c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B44B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B44B0u, 0x396528u, 0x396530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396530u;
label_396530:
    // 0x396530: 0x2624fff7  addiu       $a0, $s1, -0x9
    ctx->pc = 0x396530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967287));
    // 0x396534: 0xc0e9f12  jal         func_3A7C48
    ctx->pc = 0x396534u;
    SET_GPR_U32(ctx, 31, 0x39653Cu);
    ctx->pc = 0x396538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396534u;
    // 0x396538: 0x3a42021  addu        $a0, $sp, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C48u, 0x396534u, 0x39653Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39653Cu;
label_39653c:
    // 0x39653c: 0x3c030131  lui         $v1, 0x131
    ctx->pc = 0x39653cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)305 << 16));
    // 0x396540: 0x34635670  ori         $v1, $v1, 0x5670
    ctx->pc = 0x396540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22128);
    // 0x396544: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x396544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_396548:
    // 0x396548: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x396548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x39654c: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x39654cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x396550: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x396550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x396554: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x396554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x396558: 0x3e00008  jr          $ra
    ctx->pc = 0x396558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396558u;
        // 0x39655c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396560u;
}
