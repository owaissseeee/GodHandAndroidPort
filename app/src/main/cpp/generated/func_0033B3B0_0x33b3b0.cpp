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

// Function: func_0033B3B0
// Address: 0x33b3b0 - 0x33b428
void func_0033B3B0_0x33b3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033B3B0_0x33b3b0");
#endif

    switch (ctx->pc) {
        case 0x33b3e4u: goto label_33b3e4;
        case 0x33b404u: goto label_33b404;
        default: break;
    }

    ctx->pc = 0x33b3b0u;

    // 0x33b3b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33b3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33b3b4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x33b3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x33b3b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33b3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33b3bc: 0x24638dd4  addiu       $v1, $v1, -0x722C
    ctx->pc = 0x33b3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938068));
    // 0x33b3c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33b3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33b3c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33b3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3E8DD4u));
    // 0x33b3c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33b3cc: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x33B3CCu;
    {
        const bool branch_taken_0x33b3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B3CCu;
        // 0x33b3d0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b3cc) {
            ctx->pc = 0x33B418u;
            goto label_33b418;
        }
    }
    ctx->pc = 0x33B3D4u;
    // 0x33b3d4: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x33b3d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    // 0x33b3d8: 0x26109068  addiu       $s0, $s0, -0x6F98
    ctx->pc = 0x33b3d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938728));
    // 0x33b3dc: 0xc0cc8c4  jal         func_332310
    ctx->pc = 0x33B3DCu;
    SET_GPR_U32(ctx, 31, 0x33B3E4u);
    ctx->pc = 0x33B3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B3DCu;
    // 0x33b3e0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332310u, 0x33B3DCu, 0x33B3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B3E4u;
label_33b3e4:
    // 0x33b3e4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x33b3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x33b3e8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x33b3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x33b3ec: 0x24508ddc  addiu       $s0, $v0, -0x7224
    ctx->pc = 0x33b3ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938076));
    // 0x33b3f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E8DDCu));
    // 0x33b3f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33B3F4u;
    {
        const bool branch_taken_0x33b3f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B3F4u;
        // 0x33b3f8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b3f4) {
            ctx->pc = 0x33B408u;
            goto label_33b408;
        }
    }
    ctx->pc = 0x33B3FCu;
    // 0x33b3fc: 0xc0ed694  jal         func_3B5A50
    ctx->pc = 0x33B3FCu;
    SET_GPR_U32(ctx, 31, 0x33B404u);
    ctx->pc = 0x3B5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5A50u, 0x33B3FCu, 0x33B404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B404u;
label_33b404:
    // 0x33b404: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x33b404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_33b408:
    // 0x33b408: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33b408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b40c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33b40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33b410: 0x80cc97e  j           func_3325F8
    ctx->pc = 0x33B410u;
    ctx->pc = 0x33B414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B410u;
    // 0x33b414: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3325F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3325F8u, 0x33B410u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33B418u;
label_33b418:
    // 0x33b418: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33b418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b41c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33b41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33b420: 0x3e00008  jr          $ra
    ctx->pc = 0x33B420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B420u;
        // 0x33b424: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B428u;
}
