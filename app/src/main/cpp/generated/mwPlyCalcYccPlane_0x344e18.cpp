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

// Function: mwPlyCalcYccPlane
// Address: 0x344e18 - 0x344e58
void mwPlyCalcYccPlane_0x344e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mwPlyCalcYccPlane_0x344e18");
#endif

    switch (ctx->pc) {
        case 0x344e30u: goto label_344e30;
        case 0x344e3cu: goto label_344e3c;
        default: break;
    }

    ctx->pc = 0x344e18u;

    // 0x344e18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x344e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x344e1c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x344e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x344e20: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x344e20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344e24: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x344e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x344e28: 0xc0d4092  jal         func_350248
    ctx->pc = 0x344E28u;
    SET_GPR_U32(ctx, 31, 0x344E30u);
    ctx->pc = 0x344E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344E28u;
    // 0x344e2c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350248u, 0x344E28u, 0x344E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344E30u;
label_344e30:
    // 0x344e30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x344e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344e34: 0xc0d1396  jal         func_344E58
    ctx->pc = 0x344E34u;
    SET_GPR_U32(ctx, 31, 0x344E3Cu);
    ctx->pc = 0x344E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344E34u;
    // 0x344e38: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344E58u, 0x344E34u, 0x344E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344E3Cu;
label_344e3c:
    // 0x344e3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x344e3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344e40: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x344e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x344e44: 0x3e00008  jr          $ra
    ctx->pc = 0x344E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344E44u;
        // 0x344e48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344E4Cu;
    // 0x344e4c: 0x0  nop
    ctx->pc = 0x344e4cu;
    // NOP
    // 0x344e50: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x344e50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344e54: 0x0  nop
    ctx->pc = 0x344e54u;
    // NOP
    ctx->pc = 0x344e58u;
}
