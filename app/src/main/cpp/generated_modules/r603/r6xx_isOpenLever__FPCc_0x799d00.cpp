#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r603_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r603
{
// Function: r6xx_isOpenLever__FPCc
// Address: 0x799d00 - 0x799d80
void r6xx_isOpenLever__FPCc_0x799d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r6xx_isOpenLever__FPCc_0x799d00");
#endif

    switch (ctx->pc) {
        case 0x799d28u: goto label_799d28;
        case 0x799d58u: goto label_799d58;
        case 0x799d68u: goto label_799d68;
        default: break;
    }

    ctx->pc = 0x799d00u;

    // 0x799d00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x799d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x799d04: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x799d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x799d08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799d0c: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x799d0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x799d10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d14: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x799d14u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799d18: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x799D18u;
    {
        const bool branch_taken_0x799d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D18u;
        // 0x799d1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d18) {
            ctx->pc = 0x799D50u;
            goto label_799d50;
        }
    }
    ctx->pc = 0x799D20u;
    // 0x799d20: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x799d20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d24: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799d24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799d28:
    // 0x799d28: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799d28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799d2c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799d30: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799d34: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799d38: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799d38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799d3c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799D3Cu;
    {
        const bool branch_taken_0x799d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D3Cu;
        // 0x799d40: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d3c) {
            ctx->pc = 0x799D50u;
            goto label_799d50;
        }
    }
    ctx->pc = 0x799D44u;
    // 0x799d44: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799d44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799d48: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799D48u;
    {
        const bool branch_taken_0x799d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799d48) {
            ctx->pc = 0x799D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799D48u;
            // 0x799d4c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799d28;
        }
    }
    ctx->pc = 0x799D50u;
label_799d50:
    // 0x799d50: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799D50u;
    SET_GPR_U32(ctx, 31, 0x799D58u);
    ctx->pc = 0x799D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D50u;
    // 0x799d54: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799D50u, 0x799D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D58u;
label_799d58:
    // 0x799d58: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x799D58u;
    {
        const bool branch_taken_0x799d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799d58) {
            ctx->pc = 0x799D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799D58u;
            // 0x799d5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799D70u;
            goto label_799d70;
        }
    }
    ctx->pc = 0x799D60u;
    // 0x799d60: 0xc0693c4  jal         func_1A4F10
    ctx->pc = 0x799D60u;
    SET_GPR_U32(ctx, 31, 0x799D68u);
    ctx->pc = 0x799D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D60u;
    // 0x799d64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F10u, 0x799D60u, 0x799D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D68u;
label_799d68:
    // 0x799d68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x799D68u;
    {
        const bool branch_taken_0x799d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D68u;
        // 0x799d6c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d68) {
            ctx->pc = 0x799D74u;
            goto label_799d74;
        }
    }
    ctx->pc = 0x799D70u;
label_799d70:
    // 0x799d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799d74:
    // 0x799d74: 0x3e00008  jr          $ra
    ctx->pc = 0x799D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D74u;
        // 0x799d78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799D7Cu;
    // 0x799d7c: 0x0  nop
    ctx->pc = 0x799d7cu;
    // NOP
    ctx->pc = 0x799d80u;
}
} // namespace gh_r603
