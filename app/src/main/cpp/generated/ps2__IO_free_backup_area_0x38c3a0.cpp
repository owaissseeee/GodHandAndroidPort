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

// Function: _IO_free_backup_area
// Address: 0x38c3a0 - 0x38c3f0
void ps2__IO_free_backup_area_0x38c3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_free_backup_area_0x38c3a0");
#endif

    switch (ctx->pc) {
        case 0x38c3c8u: goto label_38c3c8;
        case 0x38c3d0u: goto label_38c3d0;
        default: break;
    }

    ctx->pc = 0x38c3a0u;

    // 0x38c3a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38c3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38c3a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38c3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38c3a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38c3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38c3ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38c3acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c3b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38c3b4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x38c3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x38c3b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38C3B8u;
    {
        const bool branch_taken_0x38c3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c3b8) {
            ctx->pc = 0x38C3C8u;
            goto label_38c3c8;
        }
    }
    ctx->pc = 0x38C3C0u;
    // 0x38c3c0: 0xc0e30a0  jal         func_38C280
    ctx->pc = 0x38C3C0u;
    SET_GPR_U32(ctx, 31, 0x38C3C8u);
    ctx->pc = 0x38C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C280u, 0x38C3C0u, 0x38C3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C3C8u;
label_38c3c8:
    // 0x38c3c8: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x38C3C8u;
    SET_GPR_U32(ctx, 31, 0x38C3D0u);
    ctx->pc = 0x38C3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C3C8u;
    // 0x38c3cc: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x38C3C8u, 0x38C3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C3D0u;
label_38c3d0:
    // 0x38c3d0: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x38c3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x38c3d4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x38c3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x38c3d8: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x38c3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x38c3dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38c3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38c3e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38c3e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38c3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x38C3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C3E4u;
        // 0x38c3e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C3E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C3ECu;
    // 0x38c3ec: 0x0  nop
    ctx->pc = 0x38c3ecu;
    // NOP
    ctx->pc = 0x38c3f0u;
}
