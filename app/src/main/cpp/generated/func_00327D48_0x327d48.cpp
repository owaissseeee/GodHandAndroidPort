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

// Function: func_00327D48
// Address: 0x327d48 - 0x327d90
void func_00327D48_0x327d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00327D48_0x327d48");
#endif

    switch (ctx->pc) {
        case 0x327d70u: goto label_327d70;
        case 0x327d80u: goto label_327d80;
        default: break;
    }

    ctx->pc = 0x327d48u;

    // 0x327d48: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x327d48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327d4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x327d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327d50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x327d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x327d54: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x327d54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x327d58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x327d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x327d5c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x327d5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327d60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x327D60u;
    {
        const bool branch_taken_0x327d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D60u;
        // 0x327d64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327d60) {
            ctx->pc = 0x327D78u;
            goto label_327d78;
        }
    }
    ctx->pc = 0x327D68u;
    // 0x327d68: 0xc0c9ed6  jal         func_327B58
    ctx->pc = 0x327D68u;
    SET_GPR_U32(ctx, 31, 0x327D70u);
    ctx->pc = 0x327D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327D68u;
    // 0x327d6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327B58u, 0x327D68u, 0x327D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327D70u;
label_327d70:
    // 0x327d70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x327D70u;
    {
        const bool branch_taken_0x327d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D70u;
        // 0x327d74: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327d70) {
            ctx->pc = 0x327D84u;
            goto label_327d84;
        }
    }
    ctx->pc = 0x327D78u;
label_327d78:
    // 0x327d78: 0xc0c9f0c  jal         func_327C30
    ctx->pc = 0x327D78u;
    SET_GPR_U32(ctx, 31, 0x327D80u);
    ctx->pc = 0x327D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327D78u;
    // 0x327d7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327C30u, 0x327D78u, 0x327D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327D80u;
label_327d80:
    // 0x327d80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x327d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_327d84:
    // 0x327d84: 0x3e00008  jr          $ra
    ctx->pc = 0x327D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D84u;
        // 0x327d88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327D8Cu;
    // 0x327d8c: 0x0  nop
    ctx->pc = 0x327d8cu;
    // NOP
    ctx->pc = 0x327d90u;
}
