#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: getObjPtr__C11cEventActorUsUc
// Address: 0x7a96c0 - 0x7a9720
void getObjPtr__C11cEventActorUsUc_0x7a96c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getObjPtr__C11cEventActorUsUc_0x7a96c0");
#endif

    switch (ctx->pc) {
        case 0x7a96e0u: goto label_7a96e0;
        default: break;
    }

    ctx->pc = 0x7a96c0u;

    // 0x7a96c0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x7a96c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x7a96c4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x7a96c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x7a96c8: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x7a96c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x7a96cc: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x7A96CCu;
    {
        const bool branch_taken_0x7a96cc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7A96D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A96CCu;
        // 0x7a96d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a96cc) {
            ctx->pc = 0x7A9718u;
            goto label_7a9718;
        }
    }
    ctx->pc = 0x7A96D4u;
    // 0x7a96d4: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x7a96d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x7a96d8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x7a96d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a96dc: 0x0  nop
    ctx->pc = 0x7a96dcu;
    // NOP
label_7a96e0:
    // 0x7a96e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x7a96e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7a96e4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x7A96E4u;
    {
        const bool branch_taken_0x7a96e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A96E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A96E4u;
        // 0x7a96e8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a96e4) {
            ctx->pc = 0x7A970Cu;
            goto label_7a970c;
        }
    }
    ctx->pc = 0x7A96ECu;
    // 0x7a96ec: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x7a96ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x7a96f0: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7A96F0u;
    {
        const bool branch_taken_0x7a96f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x7a96f0) {
            ctx->pc = 0x7A970Cu;
            goto label_7a970c;
        }
    }
    ctx->pc = 0x7A96F8u;
    // 0x7a96f8: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x7a96f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x7a96fc: 0x14460004  bne         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x7A96FCu;
    {
        const bool branch_taken_0x7a96fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x7A9700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A96FCu;
        // 0x7a9700: 0xe8102a  slt         $v0, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a96fc) {
            ctx->pc = 0x7A9710u;
            goto label_7a9710;
        }
    }
    ctx->pc = 0x7A9704u;
    // 0x7a9704: 0x3e00008  jr          $ra
    ctx->pc = 0x7A9704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A9708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9704u;
        // 0x7a9708: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A9704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A970Cu;
label_7a970c:
    // 0x7a970c: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x7a970cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_7a9710:
    // 0x7a9710: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x7A9710u;
    {
        const bool branch_taken_0x7a9710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7A9714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9710u;
        // 0x7a9714: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9710) {
            ctx->pc = 0x7A96E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7a96e0;
        }
    }
    ctx->pc = 0x7A9718u;
label_7a9718:
    // 0x7a9718: 0x3e00008  jr          $ra
    ctx->pc = 0x7A9718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9718u;
        // 0x7a971c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A9718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A9720u;
}
} // namespace gh_event
