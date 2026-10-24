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

// Function: dpcmp
// Address: 0x31e870 - 0x31e8c0
void dpcmp_0x31e870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpcmp_0x31e870");
#endif

    switch (ctx->pc) {
        case 0x31e890u: goto label_31e890;
        case 0x31e8a0u: goto label_31e8a0;
        case 0x31e8acu: goto label_31e8ac;
        default: break;
    }

    ctx->pc = 0x31e870u;

    // 0x31e870: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x31e870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x31e874: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x31e874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x31e878: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x31e878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x31e87c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x31e87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31e880: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x31e880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x31e884: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x31e884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x31e888: 0xc0c77ea  jal         func_31DFA8
    ctx->pc = 0x31E888u;
    SET_GPR_U32(ctx, 31, 0x31E890u);
    ctx->pc = 0x31E88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E888u;
    // 0x31e88c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DFA8u, 0x31E888u, 0x31E890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E890u;
label_31e890:
    // 0x31e890: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x31e890u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31e894: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x31e894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x31e898: 0xc0c77ea  jal         func_31DFA8
    ctx->pc = 0x31E898u;
    SET_GPR_U32(ctx, 31, 0x31E8A0u);
    ctx->pc = 0x31E89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E898u;
    // 0x31e89c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DFA8u, 0x31E898u, 0x31E8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E8A0u;
label_31e8a0:
    // 0x31e8a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31e8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e8a4: 0xc0c79d6  jal         func_31E758
    ctx->pc = 0x31E8A4u;
    SET_GPR_U32(ctx, 31, 0x31E8ACu);
    ctx->pc = 0x31E8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E8A4u;
    // 0x31e8a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E758u, 0x31E8A4u, 0x31E8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E8ACu;
label_31e8ac:
    // 0x31e8ac: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x31e8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31e8b0: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x31e8b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31e8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x31E8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E8B4u;
        // 0x31e8b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E8B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E8BCu;
    // 0x31e8bc: 0x0  nop
    ctx->pc = 0x31e8bcu;
    // NOP
    ctx->pc = 0x31e8c0u;
}
