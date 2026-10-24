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

// Function: func_00327F70
// Address: 0x327f70 - 0x327fa8
void func_00327F70_0x327f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00327F70_0x327f70");
#endif

    switch (ctx->pc) {
        case 0x327f84u: goto label_327f84;
        case 0x327f88u: goto label_327f88;
        case 0x327f90u: goto label_327f90;
        default: break;
    }

    ctx->pc = 0x327f70u;

    // 0x327f70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x327f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x327f74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x327f78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x327f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x327f7c: 0xc0c9f86  jal         func_327E18
    ctx->pc = 0x327F7Cu;
    SET_GPR_U32(ctx, 31, 0x327F84u);
    ctx->pc = 0x327F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327F7Cu;
    // 0x327f80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327E18u, 0x327F7Cu, 0x327F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327F84u;
label_327f84:
    // 0x327f84: 0x0  nop
    ctx->pc = 0x327f84u;
    // NOP
label_327f88:
    // 0x327f88: 0xc0cfd64  jal         func_33F590
    ctx->pc = 0x327F88u;
    SET_GPR_U32(ctx, 31, 0x327F90u);
    ctx->pc = 0x33F590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F590u, 0x327F88u, 0x327F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327F90u;
label_327f90:
    // 0x327f90: 0x82020045  lb          $v0, 0x45($s0)
    ctx->pc = 0x327f90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x327f94: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x327F94u;
    {
        const bool branch_taken_0x327f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x327F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F94u;
        // 0x327f98: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327f94) {
            ctx->pc = 0x327F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327f88;
        }
    }
    ctx->pc = 0x327F9Cu;
    // 0x327f9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x327f9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x327FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327FA0u;
        // 0x327fa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327FA8u;
}
