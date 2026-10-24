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

// Function: Add_nullspeed
// Address: 0x2da9b8 - 0x2da9e0
void Add_nullspeed_0x2da9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Add_nullspeed_0x2da9b8");
#endif

    switch (ctx->pc) {
        case 0x2da9d4u: goto label_2da9d4;
        default: break;
    }

    ctx->pc = 0x2da9b8u;

    // 0x2da9b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2da9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2da9bc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2da9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da9c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2da9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2da9c4: 0x24a60330  addiu       $a2, $a1, 0x330
    ctx->pc = 0x2da9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 816));
    // 0x2da9c8: 0x8ca400f0  lw          $a0, 0xF0($a1)
    ctx->pc = 0x2da9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x2da9cc: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2DA9CCu;
    SET_GPR_U32(ctx, 31, 0x2DA9D4u);
    ctx->pc = 0x2DA9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA9CCu;
    // 0x2da9d0: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2DA9CCu, 0x2DA9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA9D4u;
label_2da9d4:
    // 0x2da9d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2da9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA9D8u;
        // 0x2da9dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA9E0u;
}
