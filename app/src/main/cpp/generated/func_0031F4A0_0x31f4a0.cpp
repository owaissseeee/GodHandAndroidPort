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

// Function: func_0031F4A0
// Address: 0x31f4a0 - 0x31f4e0
void func_0031F4A0_0x31f4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031F4A0_0x31f4a0");
#endif

    switch (ctx->pc) {
        case 0x31f4ccu: goto label_31f4cc;
        default: break;
    }

    ctx->pc = 0x31f4a0u;

    // 0x31f4a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31f4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31f4a4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x31f4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x31f4a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31f4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31f4ac: 0x8c620da0  lw          $v0, 0xDA0($v1)
    ctx->pc = 0x31f4acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x460DA0u));
    // 0x31f4b0: 0x24700da0  addiu       $s0, $v1, 0xDA0
    ctx->pc = 0x31f4b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3488));
    // 0x31f4b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31F4B4u;
    {
        const bool branch_taken_0x31f4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F4B4u;
        // 0x31f4b8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f4b4) {
            ctx->pc = 0x31F4CCu;
            goto label_31f4cc;
        }
    }
    ctx->pc = 0x31F4BCu;
    // 0x31f4bc: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x31f4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x31f4c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31f4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f4c4: 0xc0c7bb2  jal         func_31EEC8
    ctx->pc = 0x31F4C4u;
    SET_GPR_U32(ctx, 31, 0x31F4CCu);
    ctx->pc = 0x31F4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F4C4u;
    // 0x31f4c8: 0x24a510b0  addiu       $a1, $a1, 0x10B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEC8u, 0x31F4C4u, 0x31F4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F4CCu;
label_31f4cc:
    // 0x31f4cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31f4ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f4d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31f4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31f4d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31f4d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x31F4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F4D8u;
        // 0x31f4dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F4E0u;
}
