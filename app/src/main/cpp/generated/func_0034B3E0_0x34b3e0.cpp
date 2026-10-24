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

// Function: func_0034B3E0
// Address: 0x34b3e0 - 0x34b430
void func_0034B3E0_0x34b3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034B3E0_0x34b3e0");
#endif

    ctx->pc = 0x34b3e0u;

    // 0x34b3e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34b3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34b3e4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x34b3e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b3e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34b3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34b3ec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x34b3ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b3f0: 0x24851020  addiu       $a1, $a0, 0x1020
    ctx->pc = 0x34b3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4128));
    // 0x34b3f4: 0x8c832004  lw          $v1, 0x2004($a0)
    ctx->pc = 0x34b3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8196)));
    // 0x34b3f8: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x34b3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x34b3fc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34B3FCu;
    {
        const bool branch_taken_0x34b3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B3FCu;
        // 0x34b400: 0x8c670000  lw          $a3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b3fc) {
            ctx->pc = 0x34B414u;
            goto label_34b414;
        }
    }
    ctx->pc = 0x34B404u;
    // 0x34b404: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x34b404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x34b408: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34b408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b40c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34B40Cu;
    {
        const bool branch_taken_0x34b40c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x34B410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B40Cu;
        // 0x34b410: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b40c) {
            ctx->pc = 0x34B428u;
            goto label_34b428;
        }
    }
    ctx->pc = 0x34B414u;
label_34b414:
    // 0x34b414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34b414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b418: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x34b418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b41c: 0x80d2d1e  j           func_34B478
    ctx->pc = 0x34B41Cu;
    ctx->pc = 0x34B420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B41Cu;
    // 0x34b420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B478u, 0x34B41Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34B424u;
    // 0x34b424: 0x0  nop
    ctx->pc = 0x34b424u;
    // NOP
label_34b428:
    // 0x34b428: 0x3e00008  jr          $ra
    ctx->pc = 0x34B428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B428u;
        // 0x34b42c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B430u;
}
