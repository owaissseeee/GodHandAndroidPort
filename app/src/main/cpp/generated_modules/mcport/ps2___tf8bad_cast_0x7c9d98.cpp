#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: __tf8bad_cast
// Address: 0x7c9d98 - 0x7c9de8
void ps2___tf8bad_cast_0x7c9d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf8bad_cast_0x7c9d98");
#endif

    switch (ctx->pc) {
        case 0x7c9dbcu: goto label_7c9dbc;
        case 0x7c9dd4u: goto label_7c9dd4;
        default: break;
    }

    ctx->pc = 0x7c9d98u;

    // 0x7c9d98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c9d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c9d9c: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7c9d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7c9da0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7c9da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x7c9da4: 0x8c625918  lw          $v0, 0x5918($v1)
    ctx->pc = 0x7c9da4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D5918u));
    // 0x7c9da8: 0x24705918  addiu       $s0, $v1, 0x5918
    ctx->pc = 0x7c9da8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22808));
    // 0x7c9dac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7C9DACu;
    {
        const bool branch_taken_0x7c9dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C9DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9DACu;
        // 0x7c9db0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9dac) {
            ctx->pc = 0x7C9DD4u;
            goto label_7c9dd4;
        }
    }
    ctx->pc = 0x7C9DB4u;
    // 0x7c9db4: 0xc1f2960  jal         func_7CA580
    ctx->pc = 0x7C9DB4u;
    SET_GPR_U32(ctx, 31, 0x7C9DBCu);
    ctx->pc = 0x7CA580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CA580u, 0x7C9DB4u, 0x7C9DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C9DBCu;
label_7c9dbc:
    // 0x7c9dbc: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7c9dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7c9dc0: 0x3c06007d  lui         $a2, 0x7D
    ctx->pc = 0x7c9dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)125 << 16));
    // 0x7c9dc4: 0x24a51020  addiu       $a1, $a1, 0x1020
    ctx->pc = 0x7c9dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4128));
    // 0x7c9dc8: 0x24c61490  addiu       $a2, $a2, 0x1490
    ctx->pc = 0x7c9dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5264));
    // 0x7c9dcc: 0xc1f260c  jal         func_7C9830
    ctx->pc = 0x7C9DCCu;
    SET_GPR_U32(ctx, 31, 0x7C9DD4u);
    ctx->pc = 0x7C9DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C9DCCu;
    // 0x7c9dd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9830u, 0x7C9DCCu, 0x7C9DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C9DD4u;
label_7c9dd4:
    // 0x7c9dd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x7c9dd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c9dd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c9dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c9ddc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7c9ddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c9de0: 0x3e00008  jr          $ra
    ctx->pc = 0x7C9DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C9DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9DE0u;
        // 0x7c9de4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C9DE8u;
}
} // namespace gh_mcport
