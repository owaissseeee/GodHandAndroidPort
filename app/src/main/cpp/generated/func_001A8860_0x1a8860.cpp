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

// Function: func_001A8860
// Address: 0x1a8860 - 0x1a88b0
void func_001A8860_0x1a8860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A8860_0x1a8860");
#endif

    switch (ctx->pc) {
        case 0x1a8884u: goto label_1a8884;
        case 0x1a889cu: goto label_1a889c;
        default: break;
    }

    ctx->pc = 0x1a8860u;

    // 0x1a8860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a8860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a8864: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1a8864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1a8868: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a8868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a886c: 0x8c625fd8  lw          $v0, 0x5FD8($v1)
    ctx->pc = 0x1a886cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785FD8u));
    // 0x1a8870: 0x24705fd8  addiu       $s0, $v1, 0x5FD8
    ctx->pc = 0x1a8870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24536));
    // 0x1a8874: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A8874u;
    {
        const bool branch_taken_0x1a8874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8874u;
        // 0x1a8878: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8874) {
            ctx->pc = 0x1A889Cu;
            goto label_1a889c;
        }
    }
    ctx->pc = 0x1A887Cu;
    // 0x1a887c: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1A887Cu;
    SET_GPR_U32(ctx, 31, 0x1A8884u);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1A887Cu, 0x1A8884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8884u;
label_1a8884:
    // 0x1a8884: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1a8884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1a8888: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1a8888u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1a888c: 0x24a57930  addiu       $a1, $a1, 0x7930
    ctx->pc = 0x1a888cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31024));
    // 0x1a8890: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1a8890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1a8894: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1A8894u;
    SET_GPR_U32(ctx, 31, 0x1A889Cu);
    ctx->pc = 0x1A8898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8894u;
    // 0x1a8898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1A8894u, 0x1A889Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A889Cu;
label_1a889c:
    // 0x1a889c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a889cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a88a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a88a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a88a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a88a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a88a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A88A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A88ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A88A8u;
        // 0x1a88ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A88A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A88B0u;
}
