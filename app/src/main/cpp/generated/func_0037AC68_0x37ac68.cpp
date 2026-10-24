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

// Function: func_0037AC68
// Address: 0x37ac68 - 0x37aca0
void func_0037AC68_0x37ac68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037AC68_0x37ac68");
#endif

    switch (ctx->pc) {
        case 0x37ac7cu: goto label_37ac7c;
        case 0x37ac84u: goto label_37ac84;
        case 0x37ac8cu: goto label_37ac8c;
        default: break;
    }

    ctx->pc = 0x37ac68u;

    // 0x37ac68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37ac68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37ac6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37ac6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37ac70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37ac70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37ac74: 0xc0deb28  jal         func_37ACA0
    ctx->pc = 0x37AC74u;
    SET_GPR_U32(ctx, 31, 0x37AC7Cu);
    ctx->pc = 0x37AC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AC74u;
    // 0x37ac78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37ACA0u, 0x37AC74u, 0x37AC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AC7Cu;
label_37ac7c:
    // 0x37ac7c: 0xc0dec38  jal         func_37B0E0
    ctx->pc = 0x37AC7Cu;
    SET_GPR_U32(ctx, 31, 0x37AC84u);
    ctx->pc = 0x37AC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AC7Cu;
    // 0x37ac80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0E0u, 0x37AC7Cu, 0x37AC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AC84u;
label_37ac84:
    // 0x37ac84: 0xc0debb0  jal         func_37AEC0
    ctx->pc = 0x37AC84u;
    SET_GPR_U32(ctx, 31, 0x37AC8Cu);
    ctx->pc = 0x37AC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AC84u;
    // 0x37ac88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37AEC0u, 0x37AC84u, 0x37AC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AC8Cu;
label_37ac8c:
    // 0x37ac8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37ac8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37ac90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37ac90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37ac94: 0x3e00008  jr          $ra
    ctx->pc = 0x37AC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AC94u;
        // 0x37ac98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37AC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37AC9Cu;
    // 0x37ac9c: 0x0  nop
    ctx->pc = 0x37ac9cu;
    // NOP
    ctx->pc = 0x37aca0u;
}
