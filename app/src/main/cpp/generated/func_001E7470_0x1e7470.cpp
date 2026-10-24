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

// Function: func_001E7470
// Address: 0x1e7470 - 0x1e7538
void func_001E7470_0x1e7470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E7470_0x1e7470");
#endif

    switch (ctx->pc) {
        case 0x1e74a0u: goto label_1e74a0;
        case 0x1e74acu: goto label_1e74ac;
        case 0x1e74d4u: goto label_1e74d4;
        case 0x1e74f0u: goto label_1e74f0;
        case 0x1e74fcu: goto label_1e74fc;
        case 0x1e7524u: goto label_1e7524;
        default: break;
    }

    ctx->pc = 0x1e7470u;

    // 0x1e7470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e7470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e7474: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1e7474u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7478: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e7478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e747c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1e747cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7480: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e7484: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E7484u;
    {
        const bool branch_taken_0x1e7484 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7484u;
        // 0x1e7488: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7484) {
            ctx->pc = 0x1E74DCu;
            goto label_1e74dc;
        }
    }
    ctx->pc = 0x1E748Cu;
    // 0x1e748c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1e748cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e7490: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E7490u;
    {
        const bool branch_taken_0x1e7490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E7494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7490u;
        // 0x1e7494: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7490) {
            ctx->pc = 0x1E74C0u;
            goto label_1e74c0;
        }
    }
    ctx->pc = 0x1E7498u;
    // 0x1e7498: 0x24f00050  addiu       $s0, $a3, 0x50
    ctx->pc = 0x1e7498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x1e749c: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x1e749cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1e74a0:
    // 0x1e74a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e74a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e74a4: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1E74A4u;
    SET_GPR_U32(ctx, 31, 0x1E74ACu);
    ctx->pc = 0x1E74A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E74A4u;
    // 0x1e74a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1E74A4u, 0x1E74ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E74ACu;
label_1e74ac:
    // 0x1e74ac: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e74acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1e74b0: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E74B0u;
    {
        const bool branch_taken_0x1e74b0 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1E74B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E74B0u;
        // 0x1e74b4: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e74b0) {
            ctx->pc = 0x1E74A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e74a0;
        }
    }
    ctx->pc = 0x1E74B8u;
    // 0x1e74b8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1E74B8u;
    {
        const bool branch_taken_0x1e74b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E74BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E74B8u;
        // 0x1e74bc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e74b8) {
            ctx->pc = 0x1E7528u;
            goto label_1e7528;
        }
    }
    ctx->pc = 0x1E74C0u;
label_1e74c0:
    // 0x1e74c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e74c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e74c4: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x1e74c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1e74c8: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x1e74c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x1e74cc: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1E74CCu;
    SET_GPR_U32(ctx, 31, 0x1E74D4u);
    ctx->pc = 0x1E74D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E74CCu;
    // 0x1e74d0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1E74CCu, 0x1E74D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E74D4u;
label_1e74d4:
    // 0x1e74d4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1E74D4u;
    {
        const bool branch_taken_0x1e74d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E74D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E74D4u;
        // 0x1e74d8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e74d4) {
            ctx->pc = 0x1E7528u;
            goto label_1e7528;
        }
    }
    ctx->pc = 0x1E74DCu;
label_1e74dc:
    // 0x1e74dc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1e74dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e74e0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E74E0u;
    {
        const bool branch_taken_0x1e74e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E74E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E74E0u;
        // 0x1e74e4: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e74e0) {
            ctx->pc = 0x1E7510u;
            goto label_1e7510;
        }
    }
    ctx->pc = 0x1E74E8u;
    // 0x1e74e8: 0x24f00050  addiu       $s0, $a3, 0x50
    ctx->pc = 0x1e74e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x1e74ec: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x1e74ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1e74f0:
    // 0x1e74f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e74f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e74f4: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1E74F4u;
    SET_GPR_U32(ctx, 31, 0x1E74FCu);
    ctx->pc = 0x1E74F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E74F4u;
    // 0x1e74f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1E74F4u, 0x1E74FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E74FCu;
label_1e74fc:
    // 0x1e74fc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e74fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1e7500: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E7500u;
    {
        const bool branch_taken_0x1e7500 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1E7504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7500u;
        // 0x1e7504: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7500) {
            ctx->pc = 0x1E74F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e74f0;
        }
    }
    ctx->pc = 0x1E7508u;
    // 0x1e7508: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7508u;
    {
        const bool branch_taken_0x1e7508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7508u;
        // 0x1e750c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7508) {
            ctx->pc = 0x1E7528u;
            goto label_1e7528;
        }
    }
    ctx->pc = 0x1E7510u;
label_1e7510:
    // 0x1e7510: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e7510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7514: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x1e7514u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1e7518: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x1e7518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x1e751c: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1E751Cu;
    SET_GPR_U32(ctx, 31, 0x1E7524u);
    ctx->pc = 0x1E7520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E751Cu;
    // 0x1e7520: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1E751Cu, 0x1E7524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7524u;
label_1e7524:
    // 0x1e7524: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e7524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e7528:
    // 0x1e7528: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e7528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e752c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e752cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7530: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7530u;
        // 0x1e7534: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7538u;
}
