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

// Function: dpadd
// Address: 0x31e288 - 0x31e2e0
void dpadd_0x31e288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpadd_0x31e288");
#endif

    switch (ctx->pc) {
        case 0x31e2a8u: goto label_31e2a8;
        case 0x31e2b8u: goto label_31e2b8;
        case 0x31e2c8u: goto label_31e2c8;
        case 0x31e2d0u: goto label_31e2d0;
        default: break;
    }

    ctx->pc = 0x31e288u;

    // 0x31e288: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x31e288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x31e28c: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x31e28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x31e290: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x31e290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x31e294: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x31e294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31e298: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x31e298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x31e29c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x31e29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x31e2a0: 0xc0c77ea  jal         func_31DFA8
    ctx->pc = 0x31E2A0u;
    SET_GPR_U32(ctx, 31, 0x31E2A8u);
    ctx->pc = 0x31E2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E2A0u;
    // 0x31e2a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DFA8u, 0x31E2A0u, 0x31E2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E2A8u;
label_31e2a8:
    // 0x31e2a8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x31e2a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31e2ac: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x31e2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x31e2b0: 0xc0c77ea  jal         func_31DFA8
    ctx->pc = 0x31E2B0u;
    SET_GPR_U32(ctx, 31, 0x31E2B8u);
    ctx->pc = 0x31E2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E2B0u;
    // 0x31e2b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DFA8u, 0x31E2B0u, 0x31E2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E2B8u;
label_31e2b8:
    // 0x31e2b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31e2b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e2bc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x31e2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31e2c0: 0xc0c7812  jal         func_31E048
    ctx->pc = 0x31E2C0u;
    SET_GPR_U32(ctx, 31, 0x31E2C8u);
    ctx->pc = 0x31E2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E2C0u;
    // 0x31e2c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E048u, 0x31E2C0u, 0x31E2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E2C8u;
label_31e2c8:
    // 0x31e2c8: 0xc0c779e  jal         func_31DE78
    ctx->pc = 0x31E2C8u;
    SET_GPR_U32(ctx, 31, 0x31E2D0u);
    ctx->pc = 0x31E2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E2C8u;
    // 0x31e2cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE78u, 0x31E2C8u, 0x31E2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E2D0u;
label_31e2d0:
    // 0x31e2d0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x31e2d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31e2d4: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x31e2d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31e2d8: 0x3e00008  jr          $ra
    ctx->pc = 0x31E2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E2D8u;
        // 0x31e2dc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E2E0u;
}
