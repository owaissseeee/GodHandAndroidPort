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

// Function: func_001A5F88
// Address: 0x1a5f88 - 0x1a5fd8
void func_001A5F88_0x1a5f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A5F88_0x1a5f88");
#endif

    switch (ctx->pc) {
        case 0x1a5facu: goto label_1a5fac;
        case 0x1a5fc4u: goto label_1a5fc4;
        default: break;
    }

    ctx->pc = 0x1a5f88u;

    // 0x1a5f88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a5f8c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1a5f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1a5f90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a5f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a5f94: 0x8c625f78  lw          $v0, 0x5F78($v1)
    ctx->pc = 0x1a5f94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785F78u));
    // 0x1a5f98: 0x24705f78  addiu       $s0, $v1, 0x5F78
    ctx->pc = 0x1a5f98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24440));
    // 0x1a5f9c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A5F9Cu;
    {
        const bool branch_taken_0x1a5f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F9Cu;
        // 0x1a5fa0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f9c) {
            ctx->pc = 0x1A5FC4u;
            goto label_1a5fc4;
        }
    }
    ctx->pc = 0x1A5FA4u;
    // 0x1a5fa4: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1A5FA4u;
    SET_GPR_U32(ctx, 31, 0x1A5FACu);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1A5FA4u, 0x1A5FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5FACu;
label_1a5fac:
    // 0x1a5fac: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1a5facu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1a5fb0: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1a5fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1a5fb4: 0x24a573a8  addiu       $a1, $a1, 0x73A8
    ctx->pc = 0x1a5fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29608));
    // 0x1a5fb8: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1a5fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1a5fbc: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1A5FBCu;
    SET_GPR_U32(ctx, 31, 0x1A5FC4u);
    ctx->pc = 0x1A5FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5FBCu;
    // 0x1a5fc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1A5FBCu, 0x1A5FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5FC4u;
label_1a5fc4:
    // 0x1a5fc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a5fc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5fc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a5fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5fcc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a5fccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FD0u;
        // 0x1a5fd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5FD8u;
}
