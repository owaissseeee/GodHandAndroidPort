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

// Function: cPlCamera_update
// Address: 0x139fa8 - 0x139ff8
void cPlCamera_update_0x139fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cPlCamera_update_0x139fa8");
#endif

    switch (ctx->pc) {
        case 0x139fbcu: goto label_139fbc;
        case 0x139fd4u: goto label_139fd4;
        case 0x139fe4u: goto label_139fe4;
        default: break;
    }

    ctx->pc = 0x139fa8u;

    // 0x139fa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x139fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x139fac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x139facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x139fb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x139fb4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x139FB4u;
    SET_GPR_U32(ctx, 31, 0x139FBCu);
    ctx->pc = 0x139FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139FB4u;
    // 0x139fb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x139FB4u, 0x139FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139FBCu;
label_139fbc:
    // 0x139fbc: 0x8c4305d8  lw          $v1, 0x5D8($v0)
    ctx->pc = 0x139fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1496)));
    // 0x139fc0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x139fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x139fc4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x139FC4u;
    {
        const bool branch_taken_0x139fc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x139fc4) {
            ctx->pc = 0x139FDCu;
            goto label_139fdc;
        }
    }
    ctx->pc = 0x139FCCu;
    // 0x139fcc: 0xc04e7fe  jal         func_139FF8
    ctx->pc = 0x139FCCu;
    SET_GPR_U32(ctx, 31, 0x139FD4u);
    ctx->pc = 0x139FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139FCCu;
    // 0x139fd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139FF8u, 0x139FCCu, 0x139FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139FD4u;
label_139fd4:
    // 0x139fd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x139FD4u;
    {
        const bool branch_taken_0x139fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139FD4u;
        // 0x139fd8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139fd4) {
            ctx->pc = 0x139FE8u;
            goto label_139fe8;
        }
    }
    ctx->pc = 0x139FDCu;
label_139fdc:
    // 0x139fdc: 0xc04eb64  jal         func_13AD90
    ctx->pc = 0x139FDCu;
    SET_GPR_U32(ctx, 31, 0x139FE4u);
    ctx->pc = 0x139FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139FDCu;
    // 0x139fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AD90u, 0x139FDCu, 0x139FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139FE4u;
label_139fe4:
    // 0x139fe4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x139fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_139fe8:
    // 0x139fe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139fec: 0x3e00008  jr          $ra
    ctx->pc = 0x139FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139FECu;
        // 0x139ff0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139FF4u;
    // 0x139ff4: 0x0  nop
    ctx->pc = 0x139ff4u;
    // NOP
    ctx->pc = 0x139ff8u;
}
