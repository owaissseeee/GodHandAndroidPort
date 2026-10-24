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

// Function: func_00327A00
// Address: 0x327a00 - 0x327a50
void func_00327A00_0x327a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00327A00_0x327a00");
#endif

    ctx->pc = 0x327a00u;

    // 0x327a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x327a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x327a04: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x327a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x327a08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x327a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x327a0c: 0x246304b0  addiu       $v1, $v1, 0x4B0
    ctx->pc = 0x327a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1200));
    // 0x327a10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x327a10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3D04B0u));
    // 0x327a14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x327a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x327a18: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x327A18u;
    {
        const bool branch_taken_0x327a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x327A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A18u;
        // 0x327a1c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327a18) {
            ctx->pc = 0x327A40u;
            goto label_327a40;
        }
    }
    ctx->pc = 0x327A20u;
    // 0x327a20: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x327a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x327a24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x327a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327a28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x327a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327a2c: 0x248404d0  addiu       $a0, $a0, 0x4D0
    ctx->pc = 0x327a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1232));
    // 0x327a30: 0x24060f00  addiu       $a2, $zero, 0xF00
    ctx->pc = 0x327a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3840));
    // 0x327a34: 0x80e94bc  j           func_3A52F0
    ctx->pc = 0x327A34u;
    ctx->pc = 0x327A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327A34u;
    // 0x327a38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x327A34u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x327A3Cu;
    // 0x327a3c: 0x0  nop
    ctx->pc = 0x327a3cu;
    // NOP
label_327a40:
    // 0x327a40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x327a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327a44: 0x3e00008  jr          $ra
    ctx->pc = 0x327A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A44u;
        // 0x327a48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327A4Cu;
    // 0x327a4c: 0x0  nop
    ctx->pc = 0x327a4cu;
    // NOP
    ctx->pc = 0x327a50u;
}
