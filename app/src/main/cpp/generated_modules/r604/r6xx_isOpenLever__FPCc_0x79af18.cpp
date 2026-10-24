#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r604_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r604
{
// Function: r6xx_isOpenLever__FPCc
// Address: 0x79af18 - 0x79af98
void r6xx_isOpenLever__FPCc_0x79af18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r6xx_isOpenLever__FPCc_0x79af18");
#endif

    switch (ctx->pc) {
        case 0x79af40u: goto label_79af40;
        case 0x79af70u: goto label_79af70;
        case 0x79af80u: goto label_79af80;
        default: break;
    }

    ctx->pc = 0x79af18u;

    // 0x79af18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79af18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79af1c: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79af20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79af20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79af24: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x79af24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x79af28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79af28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79af2c: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x79af2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79af30: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x79AF30u;
    {
        const bool branch_taken_0x79af30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF30u;
        // 0x79af34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af30) {
            ctx->pc = 0x79AF68u;
            goto label_79af68;
        }
    }
    ctx->pc = 0x79AF38u;
    // 0x79af38: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x79af38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79af3c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79af3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79af40:
    // 0x79af40: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79af40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79af44: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79af44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79af48: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79af48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79af4c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79af4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79af50: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79af50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79af54: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79AF54u;
    {
        const bool branch_taken_0x79af54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF54u;
        // 0x79af58: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af54) {
            ctx->pc = 0x79AF68u;
            goto label_79af68;
        }
    }
    ctx->pc = 0x79AF5Cu;
    // 0x79af5c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79af5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79af60: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79AF60u;
    {
        const bool branch_taken_0x79af60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79af60) {
            ctx->pc = 0x79AF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AF60u;
            // 0x79af64: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79af40;
        }
    }
    ctx->pc = 0x79AF68u;
label_79af68:
    // 0x79af68: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79AF68u;
    SET_GPR_U32(ctx, 31, 0x79AF70u);
    ctx->pc = 0x79AF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF68u;
    // 0x79af6c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79AF68u, 0x79AF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF70u;
label_79af70:
    // 0x79af70: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79AF70u;
    {
        const bool branch_taken_0x79af70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79af70) {
            ctx->pc = 0x79AF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AF70u;
            // 0x79af74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AF88u;
            goto label_79af88;
        }
    }
    ctx->pc = 0x79AF78u;
    // 0x79af78: 0xc0693c4  jal         func_1A4F10
    ctx->pc = 0x79AF78u;
    SET_GPR_U32(ctx, 31, 0x79AF80u);
    ctx->pc = 0x79AF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF78u;
    // 0x79af7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F10u, 0x79AF78u, 0x79AF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF80u;
label_79af80:
    // 0x79af80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79AF80u;
    {
        const bool branch_taken_0x79af80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF80u;
        // 0x79af84: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af80) {
            ctx->pc = 0x79AF8Cu;
            goto label_79af8c;
        }
    }
    ctx->pc = 0x79AF88u;
label_79af88:
    // 0x79af88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79af88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79af8c:
    // 0x79af8c: 0x3e00008  jr          $ra
    ctx->pc = 0x79AF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF8Cu;
        // 0x79af90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AF94u;
    // 0x79af94: 0x0  nop
    ctx->pc = 0x79af94u;
    // NOP
    ctx->pc = 0x79af98u;
}
} // namespace gh_r604
