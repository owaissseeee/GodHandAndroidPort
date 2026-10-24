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

// Function: func_0035D3A8
// Address: 0x35d3a8 - 0x35d428
void func_0035D3A8_0x35d3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035D3A8_0x35d3a8");
#endif

    switch (ctx->pc) {
        case 0x35d3c8u: goto label_35d3c8;
        case 0x35d3d8u: goto label_35d3d8;
        case 0x35d3e8u: goto label_35d3e8;
        default: break;
    }

    ctx->pc = 0x35d3a8u;

    // 0x35d3a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35d3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35d3ac: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x35d3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x35d3b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35d3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35d3b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35d3b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d3b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35d3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35d3bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35d3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35d3c0: 0xc0d70ce  jal         func_35C338
    ctx->pc = 0x35D3C0u;
    SET_GPR_U32(ctx, 31, 0x35D3C8u);
    ctx->pc = 0x35D3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D3C0u;
    // 0x35d3c4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C338u, 0x35D3C0u, 0x35D3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D3C8u;
label_35d3c8:
    // 0x35d3c8: 0x10510011  beq         $v0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x35D3C8u;
    {
        const bool branch_taken_0x35d3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x35D3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D3C8u;
        // 0x35d3cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d3c8) {
            ctx->pc = 0x35D410u;
            goto label_35d410;
        }
    }
    ctx->pc = 0x35D3D0u;
    // 0x35d3d0: 0xc0d328c  jal         func_34CA30
    ctx->pc = 0x35D3D0u;
    SET_GPR_U32(ctx, 31, 0x35D3D8u);
    ctx->pc = 0x35D3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D3D0u;
    // 0x35d3d4: 0x8e0520d8  lw          $a1, 0x20D8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8408)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA30u, 0x35D3D0u, 0x35D3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D3D8u;
label_35d3d8:
    // 0x35d3d8: 0x1451000d  bne         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x35D3D8u;
    {
        const bool branch_taken_0x35d3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x35D3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D3D8u;
        // 0x35d3dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d3d8) {
            ctx->pc = 0x35D410u;
            goto label_35d410;
        }
    }
    ctx->pc = 0x35D3E0u;
    // 0x35d3e0: 0xc0d750a  jal         func_35D428
    ctx->pc = 0x35D3E0u;
    SET_GPR_U32(ctx, 31, 0x35D3E8u);
    ctx->pc = 0x35D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D428u, 0x35D3E0u, 0x35D3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D3E8u;
label_35d3e8:
    // 0x35d3e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35D3E8u;
    {
        const bool branch_taken_0x35d3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D3E8u;
        // 0x35d3ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d3e8) {
            ctx->pc = 0x35D410u;
            goto label_35d410;
        }
    }
    ctx->pc = 0x35D3F0u;
    // 0x35d3f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35d3f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d3f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35d3f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35d3f8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x35d3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x35d3fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35d3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d400: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35d400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d404: 0x80d70c8  j           func_35C320
    ctx->pc = 0x35D404u;
    ctx->pc = 0x35D408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D404u;
    // 0x35d408: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C320u, 0x35D404u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35D40Cu;
    // 0x35d40c: 0x0  nop
    ctx->pc = 0x35d40cu;
    // NOP
label_35d410:
    // 0x35d410: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35d410u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d414: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35d414u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35d418: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35d418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d41c: 0x3e00008  jr          $ra
    ctx->pc = 0x35D41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D41Cu;
        // 0x35d420: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D424u;
    // 0x35d424: 0x0  nop
    ctx->pc = 0x35d424u;
    // NOP
    ctx->pc = 0x35d428u;
}
