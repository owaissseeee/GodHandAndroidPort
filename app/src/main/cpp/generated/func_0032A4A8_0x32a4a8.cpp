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

// Function: func_0032A4A8
// Address: 0x32a4a8 - 0x32a4e0
void func_0032A4A8_0x32a4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032A4A8_0x32a4a8");
#endif

    switch (ctx->pc) {
        case 0x32a4bcu: goto label_32a4bc;
        case 0x32a4c4u: goto label_32a4c4;
        case 0x32a4ccu: goto label_32a4cc;
        default: break;
    }

    ctx->pc = 0x32a4a8u;

    // 0x32a4a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32a4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32a4ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32a4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32a4b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32a4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32a4b4: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x32A4B4u;
    SET_GPR_U32(ctx, 31, 0x32A4BCu);
    ctx->pc = 0x32A4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A4B4u;
    // 0x32a4b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32A4B4u, 0x32A4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A4BCu;
label_32a4bc:
    // 0x32a4bc: 0xc0ca938  jal         func_32A4E0
    ctx->pc = 0x32A4BCu;
    SET_GPR_U32(ctx, 31, 0x32A4C4u);
    ctx->pc = 0x32A4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A4BCu;
    // 0x32a4c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A4E0u, 0x32A4BCu, 0x32A4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A4C4u;
label_32a4c4:
    // 0x32a4c4: 0xc0cf9ac  jal         func_33E6B0
    ctx->pc = 0x32A4C4u;
    SET_GPR_U32(ctx, 31, 0x32A4CCu);
    ctx->pc = 0x32A4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A4C4u;
    // 0x32a4c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32A4C4u, 0x32A4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A4CCu;
label_32a4cc:
    // 0x32a4cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32a4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32a4d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32a4d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a4d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32a4d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x32A4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A4D8u;
        // 0x32a4dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A4E0u;
}
