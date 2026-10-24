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

// Function: func_002D74B8
// Address: 0x2d74b8 - 0x2d7560
void func_002D74B8_0x2d74b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D74B8_0x2d74b8");
#endif

    ctx->pc = 0x2d74b8u;

    // 0x2d74b8: 0x28820100  slti        $v0, $a0, 0x100
    ctx->pc = 0x2d74b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2d74bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2d74bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2d74c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D74C0u;
    {
        const bool branch_taken_0x2d74c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D74C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D74C0u;
        // 0x2d74c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d74c0) {
            ctx->pc = 0x2D74D0u;
            goto label_2d74d0;
        }
    }
    ctx->pc = 0x2D74C8u;
    // 0x2d74c8: 0x28820200  slti        $v0, $a0, 0x200
    ctx->pc = 0x2d74c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x2d74cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d74ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d74d0:
    // 0x2d74d0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2d74d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d74d4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D74D4u;
    {
        const bool branch_taken_0x2d74d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D74D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D74D4u;
        // 0x2d74d8: 0x28820200  slti        $v0, $a0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)512) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d74d4) {
            ctx->pc = 0x2D751Cu;
            goto label_2d751c;
        }
    }
    ctx->pc = 0x2D74DCu;
    // 0x2d74dc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2d74dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2d74e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D74E0u;
    {
        const bool branch_taken_0x2d74e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D74E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D74E0u;
        // 0x2d74e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d74e0) {
            ctx->pc = 0x2D74F0u;
            goto label_2d74f0;
        }
    }
    ctx->pc = 0x2D74E8u;
    // 0x2d74e8: 0x28820301  slti        $v0, $a0, 0x301
    ctx->pc = 0x2d74e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)769) ? 1 : 0);
    // 0x2d74ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d74ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d74f0:
    // 0x2d74f0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2d74f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d74f4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D74F4u;
    {
        const bool branch_taken_0x2d74f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D74F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D74F4u;
        // 0x2d74f8: 0x28820300  slti        $v0, $a0, 0x300 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)768) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d74f4) {
            ctx->pc = 0x2D751Cu;
            goto label_2d751c;
        }
    }
    ctx->pc = 0x2D74FCu;
    // 0x2d74fc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2d74fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2d7500: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7500u;
    {
        const bool branch_taken_0x2d7500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7500u;
        // 0x2d7504: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7500) {
            ctx->pc = 0x2D7510u;
            goto label_2d7510;
        }
    }
    ctx->pc = 0x2D7508u;
    // 0x2d7508: 0x28820501  slti        $v0, $a0, 0x501
    ctx->pc = 0x2d7508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1281) ? 1 : 0);
    // 0x2d750c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d750cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d7510:
    // 0x2d7510: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2d7510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d7514: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7514u;
    {
        const bool branch_taken_0x2d7514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7514u;
        // 0x2d7518: 0x28820500  slti        $v0, $a0, 0x500 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1280) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7514) {
            ctx->pc = 0x2D7524u;
            goto label_2d7524;
        }
    }
    ctx->pc = 0x2D751Cu;
label_2d751c:
    // 0x2d751c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D751Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D751Cu;
        // 0x2d7520: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D751Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7524u;
label_2d7524:
    // 0x2d7524: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2d7524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2d7528: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7528u;
    {
        const bool branch_taken_0x2d7528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7528u;
        // 0x2d752c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7528) {
            ctx->pc = 0x2D7538u;
            goto label_2d7538;
        }
    }
    ctx->pc = 0x2D7530u;
    // 0x2d7530: 0x28820601  slti        $v0, $a0, 0x601
    ctx->pc = 0x2d7530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1537) ? 1 : 0);
    // 0x2d7534: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d7534u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d7538:
    // 0x2d7538: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2d7538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d753c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D753Cu;
    {
        const bool branch_taken_0x2d753c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d753c) {
            ctx->pc = 0x2D7558u;
            goto label_2d7558;
        }
    }
    ctx->pc = 0x2D7544u;
    // 0x2d7544: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2d7544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2d7548: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x2d7548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x2d754c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2d754cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d7550: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7550u;
        // 0x2d7554: 0x2c420002  sltiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7558u;
label_2d7558:
    // 0x2d7558: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7558u;
        // 0x2d755c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7560u;
}
