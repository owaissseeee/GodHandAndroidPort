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

// Function: func_0032A988
// Address: 0x32a988 - 0x32a9c0
void func_0032A988_0x32a988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032A988_0x32a988");
#endif

    switch (ctx->pc) {
        case 0x32a99cu: goto label_32a99c;
        case 0x32a9a4u: goto label_32a9a4;
        case 0x32a9acu: goto label_32a9ac;
        default: break;
    }

    ctx->pc = 0x32a988u;

    // 0x32a988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32a988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32a98c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32a98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32a990: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32a990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32a994: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x32A994u;
    SET_GPR_U32(ctx, 31, 0x32A99Cu);
    ctx->pc = 0x32A998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A994u;
    // 0x32a998: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32A994u, 0x32A99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A99Cu;
label_32a99c:
    // 0x32a99c: 0xc0caa70  jal         func_32A9C0
    ctx->pc = 0x32A99Cu;
    SET_GPR_U32(ctx, 31, 0x32A9A4u);
    ctx->pc = 0x32A9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A99Cu;
    // 0x32a9a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A9C0u, 0x32A99Cu, 0x32A9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A9A4u;
label_32a9a4:
    // 0x32a9a4: 0xc0cf9ac  jal         func_33E6B0
    ctx->pc = 0x32A9A4u;
    SET_GPR_U32(ctx, 31, 0x32A9ACu);
    ctx->pc = 0x32A9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A9A4u;
    // 0x32a9a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32A9A4u, 0x32A9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A9ACu;
label_32a9ac:
    // 0x32a9ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32a9acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32a9b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32a9b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a9b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32a9b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a9b8: 0x3e00008  jr          $ra
    ctx->pc = 0x32A9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A9B8u;
        // 0x32a9bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A9B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A9C0u;
}
