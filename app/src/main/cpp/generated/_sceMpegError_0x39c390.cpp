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

// Function: _sceMpegError
// Address: 0x39c390 - 0x39c3e8
void _sceMpegError_0x39c390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceMpegError_0x39c390");
#endif

    switch (ctx->pc) {
        case 0x39c3c8u: goto label_39c3c8;
        case 0x39c3d8u: goto label_39c3d8;
        default: break;
    }

    ctx->pc = 0x39c390u;

    // 0x39c390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39c390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39c394: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39c394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39c398: 0x8c830868  lw          $v1, 0x868($a0)
    ctx->pc = 0x39c398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2152)));
    // 0x39c39c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x39C39Cu;
    {
        const bool branch_taken_0x39c39c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c39c) {
            ctx->pc = 0x39C3D0u;
            goto label_39c3d0;
        }
    }
    ctx->pc = 0x39C3A4u;
    // 0x39c3a4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x39C3A4u;
    {
        const bool branch_taken_0x39c3a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c3a4) {
            ctx->pc = 0x39C3D0u;
            goto label_39c3d0;
        }
    }
    ctx->pc = 0x39C3ACu;
    // 0x39c3ac: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x39c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x39c3b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39C3B0u;
    {
        const bool branch_taken_0x39c3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C3B0u;
        // 0x39c3b4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c3b0) {
            ctx->pc = 0x39C3D0u;
            goto label_39c3d0;
        }
    }
    ctx->pc = 0x39C3B8u;
    // 0x39c3b8: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x39c3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x39c3bc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x39c3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x39c3c0: 0xc0e6ac8  jal         func_39AB20
    ctx->pc = 0x39C3C0u;
    SET_GPR_U32(ctx, 31, 0x39C3C8u);
    ctx->pc = 0x39C3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C3C0u;
    // 0x39c3c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AB20u, 0x39C3C0u, 0x39C3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C3C8u;
label_39c3c8:
    // 0x39c3c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39C3C8u;
    {
        const bool branch_taken_0x39c3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C3C8u;
        // 0x39c3cc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c3c8) {
            ctx->pc = 0x39C3DCu;
            goto label_39c3dc;
        }
    }
    ctx->pc = 0x39C3D0u;
label_39c3d0:
    // 0x39c3d0: 0xc0e7086  jal         func_39C218
    ctx->pc = 0x39C3D0u;
    SET_GPR_U32(ctx, 31, 0x39C3D8u);
    ctx->pc = 0x39C3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C3D0u;
    // 0x39c3d4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C218u, 0x39C3D0u, 0x39C3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C3D8u;
label_39c3d8:
    // 0x39c3d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39c3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39c3dc:
    // 0x39c3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x39C3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C3DCu;
        // 0x39c3e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C3E4u;
    // 0x39c3e4: 0x0  nop
    ctx->pc = 0x39c3e4u;
    // NOP
    ctx->pc = 0x39c3e8u;
}
