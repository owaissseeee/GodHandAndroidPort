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

// Function: GetOrInit_460D00_1337A0
// Address: 0x1337a0 - 0x1337e0
void GetOrInit_460D00_1337A0_0x1337a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInit_460D00_1337A0_0x1337a0");
#endif

    switch (ctx->pc) {
        case 0x1337ccu: goto label_1337cc;
        default: break;
    }

    ctx->pc = 0x1337a0u;

    // 0x1337a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1337a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1337a4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1337a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1337a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1337a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1337ac: 0x8c620d00  lw          $v0, 0xD00($v1)
    ctx->pc = 0x1337acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x460D00u));
    // 0x1337b0: 0x24700d00  addiu       $s0, $v1, 0xD00
    ctx->pc = 0x1337b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3328));
    // 0x1337b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1337B4u;
    {
        const bool branch_taken_0x1337b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1337B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1337B4u;
        // 0x1337b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1337b4) {
            ctx->pc = 0x1337CCu;
            goto label_1337cc;
        }
    }
    ctx->pc = 0x1337BCu;
    // 0x1337bc: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1337bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1337c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1337c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1337c4: 0xc0c7bb2  jal         func_31EEC8
    ctx->pc = 0x1337C4u;
    SET_GPR_U32(ctx, 31, 0x1337CCu);
    ctx->pc = 0x1337C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1337C4u;
    // 0x1337c8: 0x24a5d5d0  addiu       $a1, $a1, -0x2A30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEC8u, 0x1337C4u, 0x1337CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1337CCu;
label_1337cc:
    // 0x1337cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1337ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1337d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1337d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1337d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1337d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1337d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1337D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1337DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1337D8u;
        // 0x1337dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1337D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1337E0u;
}
