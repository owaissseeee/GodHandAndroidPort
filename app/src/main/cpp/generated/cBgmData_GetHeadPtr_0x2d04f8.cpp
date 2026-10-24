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

// Function: cBgmData_GetHeadPtr
// Address: 0x2d04f8 - 0x2d0528
void cBgmData_GetHeadPtr_0x2d04f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cBgmData_GetHeadPtr_0x2d04f8");
#endif

    switch (ctx->pc) {
        case 0x2d050cu: goto label_2d050c;
        default: break;
    }

    ctx->pc = 0x2d04f8u;

    // 0x2d04f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d04f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d04fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d04fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d0500: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0504: 0xc0b3fda  jal         func_2CFF68
    ctx->pc = 0x2D0504u;
    SET_GPR_U32(ctx, 31, 0x2D050Cu);
    ctx->pc = 0x2D0508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0504u;
    // 0x2d0508: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF68u, 0x2D0504u, 0x2D050Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D050Cu;
label_2d050c:
    // 0x2d050c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D050Cu;
    {
        const bool branch_taken_0x2d050c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D050Cu;
        // 0x2d0510: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d050c) {
            ctx->pc = 0x2D0518u;
            goto label_2d0518;
        }
    }
    ctx->pc = 0x2D0514u;
    // 0x2d0514: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2d0514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2d0518:
    // 0x2d0518: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d0518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d051c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d051cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0520: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0520u;
        // 0x2d0524: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0528u;
}
