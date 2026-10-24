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

// Function: func_00328CE8
// Address: 0x328ce8 - 0x328d30
void func_00328CE8_0x328ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00328CE8_0x328ce8");
#endif

    switch (ctx->pc) {
        case 0x328d04u: goto label_328d04;
        case 0x328d10u: goto label_328d10;
        case 0x328d18u: goto label_328d18;
        default: break;
    }

    ctx->pc = 0x328ce8u;

    // 0x328ce8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x328ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x328cec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x328cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x328cf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x328cf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328cf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x328cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x328cf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x328cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x328cfc: 0xc0ca41c  jal         func_329070
    ctx->pc = 0x328CFCu;
    SET_GPR_U32(ctx, 31, 0x328D04u);
    ctx->pc = 0x328D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328CFCu;
    // 0x328d00: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329070u, 0x328CFCu, 0x328D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328D04u;
label_328d04:
    // 0x328d04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x328d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328d08: 0xc0ca34c  jal         func_328D30
    ctx->pc = 0x328D08u;
    SET_GPR_U32(ctx, 31, 0x328D10u);
    ctx->pc = 0x328D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328D08u;
    // 0x328d0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328D30u, 0x328D08u, 0x328D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328D10u;
label_328d10:
    // 0x328d10: 0xc0ca422  jal         func_329088
    ctx->pc = 0x328D10u;
    SET_GPR_U32(ctx, 31, 0x328D18u);
    ctx->pc = 0x328D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328D10u;
    // 0x328d14: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329088u, 0x328D10u, 0x328D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328D18u;
label_328d18:
    // 0x328d18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x328d18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x328d1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x328d1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328d20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x328d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328d24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x328d24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328d28: 0x3e00008  jr          $ra
    ctx->pc = 0x328D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328D28u;
        // 0x328d2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328D30u;
}
