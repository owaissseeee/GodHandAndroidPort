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

// Function: func_00324D18
// Address: 0x324d18 - 0x324d88
void func_00324D18_0x324d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00324D18_0x324d18");
#endif

    switch (ctx->pc) {
        case 0x324d50u: goto label_324d50;
        case 0x324d58u: goto label_324d58;
        case 0x324d68u: goto label_324d68;
        default: break;
    }

    ctx->pc = 0x324d18u;

    // 0x324d18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x324d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x324d1c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x324d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x324d20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x324d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x324d24: 0x247180e0  addiu       $s1, $v1, -0x7F20
    ctx->pc = 0x324d24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934752));
    // 0x324d28: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x324d28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C80E0u));
    // 0x324d2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x324d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x324d30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x324d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x324d34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x324d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x324d38: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x324D38u;
    {
        const bool branch_taken_0x324d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x324D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324D38u;
        // 0x324d3c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324d38) {
            ctx->pc = 0x324D68u;
            goto label_324d68;
        }
    }
    ctx->pc = 0x324D40u;
    // 0x324d40: 0x3c10003d  lui         $s0, 0x3D
    ctx->pc = 0x324d40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)61 << 16));
    // 0x324d44: 0x26108138  addiu       $s0, $s0, -0x7EC8
    ctx->pc = 0x324d44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934840));
    // 0x324d48: 0xc0c94d8  jal         func_325360
    ctx->pc = 0x324D48u;
    SET_GPR_U32(ctx, 31, 0x324D50u);
    ctx->pc = 0x324D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324D48u;
    // 0x324d4c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325360u, 0x324D48u, 0x324D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324D50u;
label_324d50:
    // 0x324d50: 0xc0ebee4  jal         func_3AFB90
    ctx->pc = 0x324D50u;
    SET_GPR_U32(ctx, 31, 0x324D58u);
    ctx->pc = 0x324D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324D50u;
    // 0x324d54: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFB90u, 0x324D50u, 0x324D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324D58u;
label_324d58:
    // 0x324d58: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x324d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x324d5c: 0x8c65f9d0  lw          $a1, -0x630($v1)
    ctx->pc = 0x324d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3CF9D0u));
    // 0x324d60: 0xc0ebecc  jal         func_3AFB30
    ctx->pc = 0x324D60u;
    SET_GPR_U32(ctx, 31, 0x324D68u);
    ctx->pc = 0x324D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324D60u;
    // 0x324d64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFB30u, 0x324D60u, 0x324D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324D68u;
label_324d68:
    // 0x324d68: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x324d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x324d6c: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x324D6Cu;
    {
        const bool branch_taken_0x324d6c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x324d6c) {
            ctx->pc = 0x324D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324D6Cu;
            // 0x324d70: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324D74u;
            goto label_324d74;
        }
    }
    ctx->pc = 0x324D74u;
label_324d74:
    // 0x324d74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x324d74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324d78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x324d78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x324d7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x324d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324d80: 0x3e00008  jr          $ra
    ctx->pc = 0x324D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324D80u;
        // 0x324d84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324D88u;
}
