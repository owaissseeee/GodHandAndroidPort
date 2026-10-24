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

// Function: func_0038A4B8
// Address: 0x38a4b8 - 0x38a4e8
void func_0038A4B8_0x38a4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038A4B8_0x38a4b8");
#endif

    switch (ctx->pc) {
        case 0x38a4ccu: goto label_38a4cc;
        case 0x38a4d8u: goto label_38a4d8;
        default: break;
    }

    ctx->pc = 0x38a4b8u;

    // 0x38a4b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38a4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38a4bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38a4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38a4c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38a4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38a4c4: 0xc0c7b74  jal         func_31EDD0
    ctx->pc = 0x38A4C4u;
    SET_GPR_U32(ctx, 31, 0x38A4CCu);
    ctx->pc = 0x38A4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A4C4u;
    // 0x38a4c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x38A4C4u, 0x38A4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A4CCu;
label_38a4cc:
    // 0x38a4cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38a4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a4d0: 0xc0e2346  jal         func_388D18
    ctx->pc = 0x38A4D0u;
    SET_GPR_U32(ctx, 31, 0x38A4D8u);
    ctx->pc = 0x38A4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A4D0u;
    // 0x38a4d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388D18u, 0x38A4D0u, 0x38A4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A4D8u;
label_38a4d8:
    // 0x38a4d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38a4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38a4dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38a4dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x38A4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A4E0u;
        // 0x38a4e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A4E8u;
}
