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

// Function: func_0035A7C8
// Address: 0x35a7c8 - 0x35a810
void func_0035A7C8_0x35a7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035A7C8_0x35a7c8");
#endif

    switch (ctx->pc) {
        case 0x35a7e0u: goto label_35a7e0;
        default: break;
    }

    ctx->pc = 0x35a7c8u;

    // 0x35a7c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35a7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35a7cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a7d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x35a7d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a7d4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35a7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35a7d8: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x35A7D8u;
    SET_GPR_U32(ctx, 31, 0x35A7E0u);
    ctx->pc = 0x35A7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A7D8u;
    // 0x35a7dc: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x35A7D8u, 0x35A7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A7E0u;
label_35a7e0:
    // 0x35a7e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35a7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a7e4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35A7E4u;
    {
        const bool branch_taken_0x35a7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x35a7e4) {
            ctx->pc = 0x35A7F8u;
            goto label_35a7f8;
        }
    }
    ctx->pc = 0x35A7ECu;
    // 0x35a7ec: 0x8e0202a8  lw          $v0, 0x2A8($s0)
    ctx->pc = 0x35a7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x35a7f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x35A7F0u;
    {
        const bool branch_taken_0x35a7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A7F0u;
        // 0x35a7f4: 0xae0202d0  sw          $v0, 0x2D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a7f0) {
            ctx->pc = 0x35A800u;
            goto label_35a800;
        }
    }
    ctx->pc = 0x35A7F8u;
label_35a7f8:
    // 0x35a7f8: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x35a7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x35a7fc: 0xae0202d0  sw          $v0, 0x2D0($s0)
    ctx->pc = 0x35a7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 2));
label_35a800:
    // 0x35a800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a804: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35a804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a808: 0x3e00008  jr          $ra
    ctx->pc = 0x35A808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A808u;
        // 0x35a80c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A810u;
}
