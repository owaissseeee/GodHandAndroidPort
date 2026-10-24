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

// Function: func_00328D80
// Address: 0x328d80 - 0x328db8
void func_00328D80_0x328d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00328D80_0x328d80");
#endif

    switch (ctx->pc) {
        case 0x328d94u: goto label_328d94;
        case 0x328d9cu: goto label_328d9c;
        case 0x328da4u: goto label_328da4;
        default: break;
    }

    ctx->pc = 0x328d80u;

    // 0x328d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x328d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x328d84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x328d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x328d88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x328d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x328d8c: 0xc0ca41c  jal         func_329070
    ctx->pc = 0x328D8Cu;
    SET_GPR_U32(ctx, 31, 0x328D94u);
    ctx->pc = 0x328D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328D8Cu;
    // 0x328d90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329070u, 0x328D8Cu, 0x328D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328D94u;
label_328d94:
    // 0x328d94: 0xc0ca36e  jal         func_328DB8
    ctx->pc = 0x328D94u;
    SET_GPR_U32(ctx, 31, 0x328D9Cu);
    ctx->pc = 0x328D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328D94u;
    // 0x328d98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328DB8u, 0x328D94u, 0x328D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328D9Cu;
label_328d9c:
    // 0x328d9c: 0xc0ca422  jal         func_329088
    ctx->pc = 0x328D9Cu;
    SET_GPR_U32(ctx, 31, 0x328DA4u);
    ctx->pc = 0x328DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328D9Cu;
    // 0x328da0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329088u, 0x328D9Cu, 0x328DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328DA4u;
label_328da4:
    // 0x328da4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x328da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x328da8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x328da8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328dac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x328dacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328db0: 0x3e00008  jr          $ra
    ctx->pc = 0x328DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328DB0u;
        // 0x328db4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328DB8u;
}
