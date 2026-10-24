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

// Function: func_0035D4A8
// Address: 0x35d4a8 - 0x35d4f0
void func_0035D4A8_0x35d4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035D4A8_0x35d4a8");
#endif

    switch (ctx->pc) {
        case 0x35d4e0u: goto label_35d4e0;
        default: break;
    }

    ctx->pc = 0x35d4a8u;

    // 0x35d4a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35d4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35d4ac: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x35d4acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d4b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35d4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35d4b4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x35d4b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d4b8: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x35d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x35d4bc: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x35d4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x35d4c0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x35d4c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x35d4c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35D4C4u;
    {
        const bool branch_taken_0x35d4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D4C4u;
        // 0x35d4c8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d4c4) {
            ctx->pc = 0x35D4D8u;
            goto label_35d4d8;
        }
    }
    ctx->pc = 0x35D4CCu;
    // 0x35d4cc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x35d4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x35d4d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x35D4D0u;
    {
        const bool branch_taken_0x35d4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D4D0u;
        // 0x35d4d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d4d0) {
            ctx->pc = 0x35D4E0u;
            goto label_35d4e0;
        }
    }
    ctx->pc = 0x35D4D8u;
label_35d4d8:
    // 0x35d4d8: 0xc0d324c  jal         func_34C930
    ctx->pc = 0x35D4D8u;
    SET_GPR_U32(ctx, 31, 0x35D4E0u);
    ctx->pc = 0x35D4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D4D8u;
    // 0x35d4dc: 0x8c6520d8  lw          $a1, 0x20D8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8408)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C930u, 0x35D4D8u, 0x35D4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D4E0u;
label_35d4e0:
    // 0x35d4e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35d4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x35D4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D4E4u;
        // 0x35d4e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D4ECu;
    // 0x35d4ec: 0x0  nop
    ctx->pc = 0x35d4ecu;
    // NOP
    ctx->pc = 0x35d4f0u;
}
