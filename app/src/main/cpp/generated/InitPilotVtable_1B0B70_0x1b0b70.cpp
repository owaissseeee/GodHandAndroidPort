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

// Function: InitPilotVtable_1B0B70
// Address: 0x1b0b70 - 0x1b0ba8
void InitPilotVtable_1B0B70_0x1b0b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitPilotVtable_1B0B70_0x1b0b70");
#endif

    switch (ctx->pc) {
        case 0x1b0b84u: goto label_1b0b84;
        default: break;
    }

    ctx->pc = 0x1b0b70u;

    // 0x1b0b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b0b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b0b74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b0b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b0b78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b0b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b0b7c: 0xc06f560  jal         func_1BD580
    ctx->pc = 0x1B0B7Cu;
    SET_GPR_U32(ctx, 31, 0x1B0B84u);
    ctx->pc = 0x1B0B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0B7Cu;
    // 0x1b0b80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD580u, 0x1B0B7Cu, 0x1B0B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0B84u;
label_1b0b84:
    // 0x1b0b84: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1b0b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1b0b88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b0b88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b8c: 0x24638228  addiu       $v1, $v1, -0x7DD8
    ctx->pc = 0x1b0b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935080));
    // 0x1b0b90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0b94: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x1b0b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x1b0b98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b0b98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B9Cu;
        // 0x1b0ba0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0BA4u;
    // 0x1b0ba4: 0x0  nop
    ctx->pc = 0x1b0ba4u;
    // NOP
    ctx->pc = 0x1b0ba8u;
}
