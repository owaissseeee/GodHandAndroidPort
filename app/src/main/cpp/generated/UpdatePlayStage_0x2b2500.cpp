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

// Function: UpdatePlayStage
// Address: 0x2b2500 - 0x2b2580
void UpdatePlayStage_0x2b2500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdatePlayStage_0x2b2500");
#endif

    switch (ctx->pc) {
        case 0x2b2534u: goto label_2b2534;
        case 0x2b2548u: goto label_2b2548;
        case 0x2b2558u: goto label_2b2558;
        default: break;
    }

    ctx->pc = 0x2b2500u;

    // 0x2b2500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b2500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b2504: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b2504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b2508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b250c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b250cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2510: 0x9203000d  lbu         $v1, 0xD($s0)
    ctx->pc = 0x2b2510u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x2b2514: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B2514u;
    {
        const bool branch_taken_0x2b2514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2514u;
        // 0x2b2518: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2514) {
            ctx->pc = 0x2B252Cu;
            goto label_2b252c;
        }
    }
    ctx->pc = 0x2B251Cu;
    // 0x2b251c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B251Cu;
    {
        const bool branch_taken_0x2b251c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b251c) {
            ctx->pc = 0x2B2540u;
            goto label_2b2540;
        }
    }
    ctx->pc = 0x2B2524u;
    // 0x2b2524: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2B2524u;
    {
        const bool branch_taken_0x2b2524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2524u;
        // 0x2b2528: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2524) {
            ctx->pc = 0x2B2570u;
            goto label_2b2570;
        }
    }
    ctx->pc = 0x2B252Cu;
label_2b252c:
    // 0x2b252c: 0xc0ac960  jal         func_2B2580
    ctx->pc = 0x2B252Cu;
    SET_GPR_U32(ctx, 31, 0x2B2534u);
    ctx->pc = 0x2B2530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B252Cu;
    // 0x2b2530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2580u, 0x2B252Cu, 0x2B2534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2534u;
label_2b2534:
    // 0x2b2534: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x2b2534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x2b2538: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b2538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b253c: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x2b253cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
label_2b2540:
    // 0x2b2540: 0xc0ac962  jal         func_2B2588
    ctx->pc = 0x2B2540u;
    SET_GPR_U32(ctx, 31, 0x2B2548u);
    ctx->pc = 0x2B2544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2540u;
    // 0x2b2544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2588u, 0x2B2540u, 0x2B2548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2548u;
label_2b2548:
    // 0x2b2548: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B2548u;
    {
        const bool branch_taken_0x2b2548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2548u;
        // 0x2b254c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2548) {
            ctx->pc = 0x2B256Cu;
            goto label_2b256c;
        }
    }
    ctx->pc = 0x2B2550u;
    // 0x2b2550: 0xc0acba0  jal         func_2B2E80
    ctx->pc = 0x2B2550u;
    SET_GPR_U32(ctx, 31, 0x2B2558u);
    ctx->pc = 0x2B2554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2550u;
    // 0x2b2554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2E80u, 0x2B2550u, 0x2B2558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2558u;
label_2b2558:
    // 0x2b2558: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b2558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b255c: 0xa200000f  sb          $zero, 0xF($s0)
    ctx->pc = 0x2b255cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b2560: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x2b2560u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b2564: 0xa200000d  sb          $zero, 0xD($s0)
    ctx->pc = 0x2b2564u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b2568: 0xa200000e  sb          $zero, 0xE($s0)
    ctx->pc = 0x2b2568u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 0));
label_2b256c:
    // 0x2b256c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b256cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b2570:
    // 0x2b2570: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b2570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2574: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2574u;
        // 0x2b2578: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B257Cu;
    // 0x2b257c: 0x0  nop
    ctx->pc = 0x2b257cu;
    // NOP
    ctx->pc = 0x2b2580u;
}
