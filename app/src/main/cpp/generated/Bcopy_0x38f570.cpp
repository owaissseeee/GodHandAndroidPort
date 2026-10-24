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

// Function: Bcopy
// Address: 0x38f570 - 0x38f5b8
void Bcopy_0x38f570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Bcopy_0x38f570");
#endif

    switch (ctx->pc) {
        case 0x38f590u: goto label_38f590;
        default: break;
    }

    ctx->pc = 0x38f570u;

    // 0x38f570: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x38f570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x38f574: 0x24860014  addiu       $a2, $a0, 0x14
    ctx->pc = 0x38f574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x38f578: 0x94a2000e  lhu         $v0, 0xE($a1)
    ctx->pc = 0x38f578u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x38f57c: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x38f57cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x38f580: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x38f580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x38f584: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38f584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x38f588: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x38F588u;
    {
        const bool branch_taken_0x38f588 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x38F58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F588u;
        // 0x38f58c: 0xa482000e  sh          $v0, 0xE($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f588) {
            ctx->pc = 0x38F5ACu;
            goto label_38f5ac;
        }
    }
    ctx->pc = 0x38F590u;
label_38f590:
    // 0x38f590: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x38f590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38f594: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38f594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x38f598: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x38f598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x38f59c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x38f59cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x38f5a0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x38f5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x38f5a4: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x38F5A4u;
    {
        const bool branch_taken_0x38f5a4 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x38f5a4) {
            ctx->pc = 0x38F590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38f590;
        }
    }
    ctx->pc = 0x38F5ACu;
label_38f5ac:
    // 0x38f5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x38F5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F5B4u;
    // 0x38f5b4: 0x0  nop
    ctx->pc = 0x38f5b4u;
    // NOP
    ctx->pc = 0x38f5b8u;
}
