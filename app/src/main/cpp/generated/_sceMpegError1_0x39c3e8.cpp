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

// Function: _sceMpegError1
// Address: 0x39c3e8 - 0x39c430
void _sceMpegError1_0x39c3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceMpegError1_0x39c3e8");
#endif

    switch (ctx->pc) {
        case 0x39c40cu: goto label_39c40c;
        case 0x39c418u: goto label_39c418;
        default: break;
    }

    ctx->pc = 0x39c3e8u;

    // 0x39c3e8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x39c3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x39c3ec: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x39c3ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c3f0: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x39c3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x39c3f4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x39c3f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c3f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39c3f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c3fc: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x39c3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x39c400: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x39c400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x39c404: 0xc0ec7b8  jal         func_3B1EE0
    ctx->pc = 0x39C404u;
    SET_GPR_U32(ctx, 31, 0x39C40Cu);
    ctx->pc = 0x39C408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C404u;
    // 0x39c408: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1EE0u, 0x39C404u, 0x39C40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C40Cu;
label_39c40c:
    // 0x39c40c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39c40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c410: 0xc0e70e4  jal         func_39C390
    ctx->pc = 0x39C410u;
    SET_GPR_U32(ctx, 31, 0x39C418u);
    ctx->pc = 0x39C414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C410u;
    // 0x39c414: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C390u, 0x39C410u, 0x39C418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C418u;
label_39c418:
    // 0x39c418: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x39c418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x39c41c: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x39c41cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x39c420: 0x3e00008  jr          $ra
    ctx->pc = 0x39C420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C420u;
        // 0x39c424: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C428u;
    // 0x39c428: 0x0  nop
    ctx->pc = 0x39c428u;
    // NOP
    // 0x39c42c: 0x0  nop
    ctx->pc = 0x39c42cu;
    // NOP
    ctx->pc = 0x39c430u;
}
