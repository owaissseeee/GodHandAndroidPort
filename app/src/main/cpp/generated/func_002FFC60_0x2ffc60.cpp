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

// Function: func_002FFC60
// Address: 0x2ffc60 - 0x2ffc88
void func_002FFC60_0x2ffc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FFC60_0x2ffc60");
#endif

    switch (ctx->pc) {
        case 0x2ffc78u: goto label_2ffc78;
        default: break;
    }

    ctx->pc = 0x2ffc60u;

    // 0x2ffc60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ffc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ffc64: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ffc64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffc68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FFC68u;
    {
        const bool branch_taken_0x2ffc68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC68u;
        // 0x2ffc6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffc68) {
            ctx->pc = 0x2FFC78u;
            goto label_2ffc78;
        }
    }
    ctx->pc = 0x2FFC70u;
    // 0x2ffc70: 0xc0bafc2  jal         func_2EBF08
    ctx->pc = 0x2FFC70u;
    SET_GPR_U32(ctx, 31, 0x2FFC78u);
    ctx->pc = 0x2EBF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF08u, 0x2FFC70u, 0x2FFC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFC78u;
label_2ffc78:
    // 0x2ffc78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ffc78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ffc7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC7Cu;
        // 0x2ffc80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFC84u;
    // 0x2ffc84: 0x0  nop
    ctx->pc = 0x2ffc84u;
    // NOP
    ctx->pc = 0x2ffc88u;
}
