#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r605_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r605
{
// Function: r6xx_isActiveLever__FPCc
// Address: 0x799c38 - 0x799cb8
void r6xx_isActiveLever__FPCc_0x799c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r6xx_isActiveLever__FPCc_0x799c38");
#endif

    switch (ctx->pc) {
        case 0x799c60u: goto label_799c60;
        case 0x799c90u: goto label_799c90;
        case 0x799ca0u: goto label_799ca0;
        default: break;
    }

    ctx->pc = 0x799c38u;

    // 0x799c38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x799c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x799c3c: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x799c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x799c40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799c44: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x799c44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x799c48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c4c: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x799c4cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799c50: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x799C50u;
    {
        const bool branch_taken_0x799c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C50u;
        // 0x799c54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c50) {
            ctx->pc = 0x799C88u;
            goto label_799c88;
        }
    }
    ctx->pc = 0x799C58u;
    // 0x799c58: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x799c58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c5c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799c5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799c60:
    // 0x799c60: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799c60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799c64: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799c64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799c68: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799c6c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799c70: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799c70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799c74: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799C74u;
    {
        const bool branch_taken_0x799c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C74u;
        // 0x799c78: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c74) {
            ctx->pc = 0x799C88u;
            goto label_799c88;
        }
    }
    ctx->pc = 0x799C7Cu;
    // 0x799c7c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799c7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799c80: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799C80u;
    {
        const bool branch_taken_0x799c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799c80) {
            ctx->pc = 0x799C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799C80u;
            // 0x799c84: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799c60;
        }
    }
    ctx->pc = 0x799C88u;
label_799c88:
    // 0x799c88: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799C88u;
    SET_GPR_U32(ctx, 31, 0x799C90u);
    ctx->pc = 0x799C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C88u;
    // 0x799c8c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799C88u, 0x799C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C90u;
label_799c90:
    // 0x799c90: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x799C90u;
    {
        const bool branch_taken_0x799c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799c90) {
            ctx->pc = 0x799C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799C90u;
            // 0x799c94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799CA8u;
            goto label_799ca8;
        }
    }
    ctx->pc = 0x799C98u;
    // 0x799c98: 0xc0693c6  jal         func_1A4F18
    ctx->pc = 0x799C98u;
    SET_GPR_U32(ctx, 31, 0x799CA0u);
    ctx->pc = 0x799C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C98u;
    // 0x799c9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F18u, 0x799C98u, 0x799CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CA0u;
label_799ca0:
    // 0x799ca0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x799CA0u;
    {
        const bool branch_taken_0x799ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CA0u;
        // 0x799ca4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ca0) {
            ctx->pc = 0x799CACu;
            goto label_799cac;
        }
    }
    ctx->pc = 0x799CA8u;
label_799ca8:
    // 0x799ca8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799cac:
    // 0x799cac: 0x3e00008  jr          $ra
    ctx->pc = 0x799CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CACu;
        // 0x799cb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799CB4u;
    // 0x799cb4: 0x0  nop
    ctx->pc = 0x799cb4u;
    // NOP
    ctx->pc = 0x799cb8u;
}
} // namespace gh_r605
