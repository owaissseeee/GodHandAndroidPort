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

// Function: func_00325DF0
// Address: 0x325df0 - 0x325e78
void func_00325DF0_0x325df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00325DF0_0x325df0");
#endif

    switch (ctx->pc) {
        case 0x325e0cu: goto label_325e0c;
        case 0x325e20u: goto label_325e20;
        case 0x325e28u: goto label_325e28;
        case 0x325e44u: goto label_325e44;
        default: break;
    }

    ctx->pc = 0x325df0u;

    // 0x325df0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x325df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x325df4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x325df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x325df8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x325df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x325dfc: 0x2450814c  addiu       $s0, $v0, -0x7EB4
    ctx->pc = 0x325dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934860));
    // 0x325e00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x325e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x325e04: 0xc0c94be  jal         func_3252F8
    ctx->pc = 0x325E04u;
    SET_GPR_U32(ctx, 31, 0x325E0Cu);
    ctx->pc = 0x325E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325E04u;
    // 0x325e08: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3252F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3252F8u, 0x325E04u, 0x325E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325E0Cu;
label_325e0c:
    // 0x325e0c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x325e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x325e10: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x325E10u;
    {
        const bool branch_taken_0x325e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x325e10) {
            ctx->pc = 0x325E20u;
            goto label_325e20;
        }
    }
    ctx->pc = 0x325E18u;
    // 0x325e18: 0xc0c94a4  jal         func_325290
    ctx->pc = 0x325E18u;
    SET_GPR_U32(ctx, 31, 0x325E20u);
    ctx->pc = 0x325E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325E18u;
    // 0x325e1c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325290u, 0x325E18u, 0x325E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325E20u;
label_325e20:
    // 0x325e20: 0xc0c9584  jal         func_325610
    ctx->pc = 0x325E20u;
    SET_GPR_U32(ctx, 31, 0x325E28u);
    ctx->pc = 0x325610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325610u, 0x325E20u, 0x325E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325E28u;
label_325e28:
    // 0x325e28: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x325e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x325e2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x325e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325e30: 0x1444000d  bne         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x325E30u;
    {
        const bool branch_taken_0x325e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x325E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325E30u;
        // 0x325e34: 0x24708150  addiu       $s0, $v1, -0x7EB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325e30) {
            ctx->pc = 0x325E68u;
            goto label_325e68;
        }
    }
    ctx->pc = 0x325E38u;
    // 0x325e38: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x325e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x325e3c: 0xc0c94be  jal         func_3252F8
    ctx->pc = 0x325E3Cu;
    SET_GPR_U32(ctx, 31, 0x325E44u);
    ctx->pc = 0x3252F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3252F8u, 0x325E3Cu, 0x325E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325E44u;
label_325e44:
    // 0x325e44: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x325e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x325e48: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x325E48u;
    {
        const bool branch_taken_0x325e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x325e48) {
            ctx->pc = 0x325E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325E48u;
            // 0x325e4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x325E6Cu;
            goto label_325e6c;
        }
    }
    ctx->pc = 0x325E50u;
    // 0x325e50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x325e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x325e54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x325e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x325e58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x325e58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325e5c: 0x80c94a4  j           func_325290
    ctx->pc = 0x325E5Cu;
    ctx->pc = 0x325E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325E5Cu;
    // 0x325e60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325290u, 0x325E5Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x325E64u;
    // 0x325e64: 0x0  nop
    ctx->pc = 0x325e64u;
    // NOP
label_325e68:
    // 0x325e68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x325e68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_325e6c:
    // 0x325e6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x325e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x325e70: 0x3e00008  jr          $ra
    ctx->pc = 0x325E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325E70u;
        // 0x325e74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325E78u;
}
