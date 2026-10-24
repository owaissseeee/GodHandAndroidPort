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

// Function: func_00182590
// Address: 0x182590 - 0x1825e0
void func_00182590_0x182590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00182590_0x182590");
#endif

    switch (ctx->pc) {
        case 0x1825b4u: goto label_1825b4;
        case 0x1825ccu: goto label_1825cc;
        default: break;
    }

    ctx->pc = 0x182590u;

    // 0x182590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x182594: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x182594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x182598: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x182598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18259c: 0x8c625a78  lw          $v0, 0x5A78($v1)
    ctx->pc = 0x18259cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785A78u));
    // 0x1825a0: 0x24705a78  addiu       $s0, $v1, 0x5A78
    ctx->pc = 0x1825a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23160));
    // 0x1825a4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1825A4u;
    {
        const bool branch_taken_0x1825a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1825A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1825A4u;
        // 0x1825a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1825a4) {
            ctx->pc = 0x1825CCu;
            goto label_1825cc;
        }
    }
    ctx->pc = 0x1825ACu;
    // 0x1825ac: 0xc0723cc  jal         func_1C8F30
    ctx->pc = 0x1825ACu;
    SET_GPR_U32(ctx, 31, 0x1825B4u);
    ctx->pc = 0x1C8F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8F30u, 0x1825ACu, 0x1825B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1825B4u;
label_1825b4:
    // 0x1825b4: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1825b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1825b8: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1825b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1825bc: 0x24a52910  addiu       $a1, $a1, 0x2910
    ctx->pc = 0x1825bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10512));
    // 0x1825c0: 0x24c658b8  addiu       $a2, $a2, 0x58B8
    ctx->pc = 0x1825c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22712));
    // 0x1825c4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1825C4u;
    SET_GPR_U32(ctx, 31, 0x1825CCu);
    ctx->pc = 0x1825C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1825C4u;
    // 0x1825c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1825C4u, 0x1825CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1825CCu;
label_1825cc:
    // 0x1825cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1825ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1825d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1825d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1825d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1825d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1825d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1825D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1825DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1825D8u;
        // 0x1825dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1825D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1825E0u;
}
