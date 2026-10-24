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

// Function: func_0037D170
// Address: 0x37d170 - 0x37d1a8
void func_0037D170_0x37d170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037D170_0x37d170");
#endif

    switch (ctx->pc) {
        case 0x37d180u: goto label_37d180;
        default: break;
    }

    ctx->pc = 0x37d170u;

    // 0x37d170: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37d170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x37d174: 0x2443b9c0  addiu       $v1, $v0, -0x4640
    ctx->pc = 0x37d174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949312));
    // 0x37d178: 0x24640f00  addiu       $a0, $v1, 0xF00
    ctx->pc = 0x37d178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3840));
    // 0x37d17c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x37d17cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x76B9C0u));
label_37d180:
    // 0x37d180: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x37D180u;
    {
        const bool branch_taken_0x37d180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37d180) {
            ctx->pc = 0x37D184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D180u;
            // 0x37d184: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D190u;
            goto label_37d190;
        }
    }
    ctx->pc = 0x37D188u;
    // 0x37d188: 0x3e00008  jr          $ra
    ctx->pc = 0x37D188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D188u;
        // 0x37d18c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D190u;
label_37d190:
    // 0x37d190: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x37d190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x37d194: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x37D194u;
    {
        const bool branch_taken_0x37d194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37d194) {
            ctx->pc = 0x37D198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D194u;
            // 0x37d198: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37d180;
        }
    }
    ctx->pc = 0x37D19Cu;
    // 0x37d19c: 0x3e00008  jr          $ra
    ctx->pc = 0x37D19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D19Cu;
        // 0x37d1a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D19Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D1A4u;
    // 0x37d1a4: 0x0  nop
    ctx->pc = 0x37d1a4u;
    // NOP
    ctx->pc = 0x37d1a8u;
}
