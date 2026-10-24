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

// Function: cEmWrap_GetVital
// Address: 0x295dc8 - 0x295e00
void cEmWrap_GetVital_0x295dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmWrap_GetVital_0x295dc8");
#endif

    switch (ctx->pc) {
        case 0x295ddcu: goto label_295ddc;
        default: break;
    }

    ctx->pc = 0x295dc8u;

    // 0x295dc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x295dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x295dcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x295dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x295dd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x295dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x295dd4: 0xc0a565e  jal         func_295978
    ctx->pc = 0x295DD4u;
    SET_GPR_U32(ctx, 31, 0x295DDCu);
    ctx->pc = 0x295DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295DD4u;
    // 0x295dd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295978u, 0x295DD4u, 0x295DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295DDCu;
label_295ddc:
    // 0x295ddc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x295DDCu;
    {
        const bool branch_taken_0x295ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295DDCu;
        // 0x295de0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295ddc) {
            ctx->pc = 0x295DECu;
            goto label_295dec;
        }
    }
    ctx->pc = 0x295DE4u;
    // 0x295de4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x295de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x295de8: 0x8462054a  lh          $v0, 0x54A($v1)
    ctx->pc = 0x295de8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1354)));
label_295dec:
    // 0x295dec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x295decu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295df0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x295df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295df4: 0x3e00008  jr          $ra
    ctx->pc = 0x295DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295DF4u;
        // 0x295df8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295DFCu;
    // 0x295dfc: 0x0  nop
    ctx->pc = 0x295dfcu;
    // NOP
    ctx->pc = 0x295e00u;
}
