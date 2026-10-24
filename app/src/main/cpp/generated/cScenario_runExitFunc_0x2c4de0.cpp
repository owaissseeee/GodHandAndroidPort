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

// Function: cScenario_runExitFunc
// Address: 0x2c4de0 - 0x2c4e18
void cScenario_runExitFunc_0x2c4de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_runExitFunc_0x2c4de0");
#endif

    switch (ctx->pc) {
        case 0x2c4de0u: goto label_2c4de0;
        case 0x2c4de4u: goto label_2c4de4;
        case 0x2c4de8u: goto label_2c4de8;
        case 0x2c4decu: goto label_2c4dec;
        case 0x2c4df0u: goto label_2c4df0;
        case 0x2c4df4u: goto label_2c4df4;
        case 0x2c4df8u: goto label_2c4df8;
        case 0x2c4dfcu: goto label_2c4dfc;
        case 0x2c4e00u: goto label_2c4e00;
        case 0x2c4e04u: goto label_2c4e04;
        case 0x2c4e08u: goto label_2c4e08;
        case 0x2c4e0cu: goto label_2c4e0c;
        case 0x2c4e10u: goto label_2c4e10;
        case 0x2c4e14u: goto label_2c4e14;
        default: break;
    }

    ctx->pc = 0x2c4de0u;

label_2c4de0:
    // 0x2c4de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c4de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2c4de4:
    // 0x2c4de4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c4de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2c4de8:
    // 0x2c4de8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c4de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c4dec:
    // 0x2c4dec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c4decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c4df0:
    // 0x2c4df0: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x2c4df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_2c4df4:
    // 0x2c4df4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2c4df8:
    if (ctx->pc == 0x2C4DF8u) {
        ctx->pc = 0x2C4DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DF4u;
        // 0x2c4df8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4DFCu;
        goto label_2c4dfc;
    }
    ctx->pc = 0x2C4DF4u;
    {
        const bool branch_taken_0x2c4df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4df4) {
            ctx->pc = 0x2C4DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4DF4u;
            // 0x2c4df8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4E0Cu;
            goto label_2c4e0c;
        }
    }
    ctx->pc = 0x2C4DFCu;
label_2c4dfc:
    // 0x2c4dfc: 0x40f809  jalr        $v0
label_2c4e00:
    if (ctx->pc == 0x2C4E00u) {
        ctx->pc = 0x2C4E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DFCu;
        // 0x2c4e00: 0x8e0400f8  lw          $a0, 0xF8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4E04u;
        goto label_2c4e04;
    }
    ctx->pc = 0x2C4DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C4E04u);
        ctx->pc = 0x2C4E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DFCu;
        // 0x2c4e00: 0x8e0400f8  lw          $a0, 0xF8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4DFCu, 0x2C4E04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C4E04u;
label_2c4e04:
    // 0x2c4e04: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x2c4e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
label_2c4e08:
    // 0x2c4e08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c4e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c4e0c:
    // 0x2c4e0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c4e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c4e10:
    // 0x2c4e10: 0x3e00008  jr          $ra
label_2c4e14:
    if (ctx->pc == 0x2C4E14u) {
        ctx->pc = 0x2C4E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E10u;
        // 0x2c4e14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4E18u;
        goto label_fallthrough_0x2c4e10;
    }
    ctx->pc = 0x2C4E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E10u;
        // 0x2c4e14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c4e10:
    ctx->pc = 0x2C4E18u;
}
