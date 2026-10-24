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

// Function: func_00393F80
// Address: 0x393f80 - 0x393fd8
void func_00393F80_0x393f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00393F80_0x393f80");
#endif

    ctx->pc = 0x393f80u;

    // 0x393f80: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x393f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393f84: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x393f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x393f88: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x393f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x393f8c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x393f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x393f90: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x393f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
    // 0x393f94: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x393f94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x393f98: 0x34634e53  ori         $v1, $v1, 0x4E53
    ctx->pc = 0x393f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20051);
    // 0x393f9c: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x393F9Cu;
    {
        const bool branch_taken_0x393f9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x393f9c) {
            ctx->pc = 0x393FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393F9Cu;
            // 0x393fa0: 0x90a20003  lbu         $v0, 0x3($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393FACu;
            goto label_393fac;
        }
    }
    ctx->pc = 0x393FA4u;
    // 0x393fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x393FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393FA4u;
        // 0x393fa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x393FACu;
label_393fac:
    // 0x393fac: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x393facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
    // 0x393fb0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x393fb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x393fb4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x393FB4u;
    {
        const bool branch_taken_0x393fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x393FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393FB4u;
        // 0x393fb8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393fb4) {
            ctx->pc = 0x393FD0u;
            goto label_393fd0;
        }
    }
    ctx->pc = 0x393FBCu;
    // 0x393fbc: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x393fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x393fc0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x393fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x393fc4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x393fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x393fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x393FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393FC8u;
        // 0x393fcc: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x393FD0u;
label_393fd0:
    // 0x393fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x393FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393FD0u;
        // 0x393fd4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x393FD8u;
}
