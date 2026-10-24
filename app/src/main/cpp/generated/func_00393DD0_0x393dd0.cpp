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

// Function: func_00393DD0
// Address: 0x393dd0 - 0x393e28
void func_00393DD0_0x393dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00393DD0_0x393dd0");
#endif

    switch (ctx->pc) {
        case 0x393df4u: goto label_393df4;
        case 0x393e10u: goto label_393e10;
        default: break;
    }

    ctx->pc = 0x393dd0u;

    // 0x393dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x393dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x393dd4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x393dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x393dd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x393dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x393ddc: 0x8c626798  lw          $v0, 0x6798($v1)
    ctx->pc = 0x393ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786798u));
    // 0x393de0: 0x24706798  addiu       $s0, $v1, 0x6798
    ctx->pc = 0x393de0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26520));
    // 0x393de4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x393DE4u;
    {
        const bool branch_taken_0x393de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x393DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393DE4u;
        // 0x393de8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393de4) {
            ctx->pc = 0x393E10u;
            goto label_393e10;
        }
    }
    ctx->pc = 0x393DECu;
    // 0x393dec: 0xc0e28d0  jal         func_38A340
    ctx->pc = 0x393DECu;
    SET_GPR_U32(ctx, 31, 0x393DF4u);
    ctx->pc = 0x38A340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A340u, 0x393DECu, 0x393DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393DF4u;
label_393df4:
    // 0x393df4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x393df4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x393df8: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x393df8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x393dfc: 0x24a5db90  addiu       $a1, $a1, -0x2470
    ctx->pc = 0x393dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957968));
    // 0x393e00: 0x24c6dba0  addiu       $a2, $a2, -0x2460
    ctx->pc = 0x393e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957984));
    // 0x393e04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x393e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393e08: 0xc0c7ba0  jal         func_31EE80
    ctx->pc = 0x393E08u;
    SET_GPR_U32(ctx, 31, 0x393E10u);
    ctx->pc = 0x393E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393E08u;
    // 0x393e0c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EE80u, 0x393E08u, 0x393E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393E10u;
label_393e10:
    // 0x393e10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x393e10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393e14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x393e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x393e18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x393e18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x393e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x393E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393E1Cu;
        // 0x393e20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x393E24u;
    // 0x393e24: 0x0  nop
    ctx->pc = 0x393e24u;
    // NOP
    ctx->pc = 0x393e28u;
}
