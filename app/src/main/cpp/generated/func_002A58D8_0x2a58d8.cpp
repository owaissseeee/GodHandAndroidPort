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

// Function: func_002A58D8
// Address: 0x2a58d8 - 0x2a5930
void func_002A58D8_0x2a58d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A58D8_0x2a58d8");
#endif

    ctx->pc = 0x2a58d8u;

    // 0x2a58d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2a58d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2a58dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a58dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a58e0: 0x14a2000f  bne         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A58E0u;
    {
        const bool branch_taken_0x2a58e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A58E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A58E0u;
        // 0x2a58e4: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a58e0) {
            ctx->pc = 0x2A5920u;
            goto label_2a5920;
        }
    }
    ctx->pc = 0x2A58E8u;
    // 0x2a58e8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2a58e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a58ec: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2a58ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2a58f0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2a58f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a58f4: 0x8c852060  lw          $a1, 0x2060($a0)
    ctx->pc = 0x2a58f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8288)));
    // 0x2a58f8: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A58F8u;
    {
        const bool branch_taken_0x2a58f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A58FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A58F8u;
        // 0x2a58fc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a58f8) {
            ctx->pc = 0x2A5914u;
            goto label_2a5914;
        }
    }
    ctx->pc = 0x2A5900u;
    // 0x2a5900: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A5900u;
    {
        const bool branch_taken_0x2a5900 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A5904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5900u;
        // 0x2a5904: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5900) {
            ctx->pc = 0x2A5918u;
            goto label_2a5918;
        }
    }
    ctx->pc = 0x2A5908u;
    // 0x2a5908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a5908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a590c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A590Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A590Cu;
        // 0x2a5910: 0xac822064  sw          $v0, 0x2064($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A590Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5914u;
label_2a5914:
    // 0x2a5914: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a5914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a5918:
    // 0x2a5918: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5918u;
        // 0x2a591c: 0xac822064  sw          $v0, 0x2064($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5920u;
label_2a5920:
    // 0x2a5920: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2a5920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2a5924: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a5924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a5928: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5928u;
        // 0x2a592c: 0xac452064  sw          $a1, 0x2064($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8292), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5930u;
}
