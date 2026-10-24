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

// Function: M2V_Destroy
// Address: 0x36d528 - 0x36d578
void M2V_Destroy_0x36d528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("M2V_Destroy_0x36d528");
#endif

    switch (ctx->pc) {
        case 0x36d53cu: goto label_36d53c;
        default: break;
    }

    ctx->pc = 0x36d528u;

    // 0x36d528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36d528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36d52c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36d52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36d530: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36d530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36d534: 0xc0db5a2  jal         func_36D688
    ctx->pc = 0x36D534u;
    SET_GPR_U32(ctx, 31, 0x36D53Cu);
    ctx->pc = 0x36D538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D534u;
    // 0x36d538: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D688u, 0x36D534u, 0x36D53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D53Cu;
label_36d53c:
    // 0x36d53c: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x36d53cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x36d540: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x36d540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d544: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36D544u;
    {
        const bool branch_taken_0x36d544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D544u;
        // 0x36d548: 0x34a50201  ori         $a1, $a1, 0x201 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)513);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d544) {
            ctx->pc = 0x36D560u;
            goto label_36d560;
        }
    }
    ctx->pc = 0x36D54Cu;
    // 0x36d54c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36d54cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d550: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36d550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36d554: 0x80db63a  j           func_36D8E8
    ctx->pc = 0x36D554u;
    ctx->pc = 0x36D558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D554u;
    // 0x36d558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D8E8u, 0x36D554u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36D55Cu;
    // 0x36d55c: 0x0  nop
    ctx->pc = 0x36d55cu;
    // NOP
label_36d560:
    // 0x36d560: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36d560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d564: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36d564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36d568: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x36d568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x36d56c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36d56cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d570: 0x3e00008  jr          $ra
    ctx->pc = 0x36D570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D570u;
        // 0x36d574: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D578u;
}
