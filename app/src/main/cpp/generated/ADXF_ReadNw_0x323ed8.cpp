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

// Function: ADXF_ReadNw
// Address: 0x323ed8 - 0x323f18
void ADXF_ReadNw_0x323ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ADXF_ReadNw_0x323ed8");
#endif

    switch (ctx->pc) {
        case 0x323ef4u: goto label_323ef4;
        default: break;
    }

    ctx->pc = 0x323ed8u;

    // 0x323ed8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x323edc: 0x30c2003f  andi        $v0, $a2, 0x3F
    ctx->pc = 0x323edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x323ee0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x323EE0u;
    {
        const bool branch_taken_0x323ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x323EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323EE0u;
        // 0x323ee4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323ee0) {
            ctx->pc = 0x323F08u;
            goto label_323f08;
        }
    }
    ctx->pc = 0x323EE8u;
    // 0x323ee8: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x323ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x323eec: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x323EECu;
    SET_GPR_U32(ctx, 31, 0x323EF4u);
    ctx->pc = 0x323EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323EECu;
    // 0x323ef0: 0x248417c8  addiu       $a0, $a0, 0x17C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x323EECu, 0x323EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323EF4u;
label_323ef4:
    // 0x323ef4: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x323ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x323ef8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323efc: 0x3e00008  jr          $ra
    ctx->pc = 0x323EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323EFCu;
        // 0x323f00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323F04u;
    // 0x323f04: 0x0  nop
    ctx->pc = 0x323f04u;
    // NOP
label_323f08:
    // 0x323f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323f0c: 0x80c8f3c  j           func_323CF0
    ctx->pc = 0x323F0Cu;
    ctx->pc = 0x323F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323F0Cu;
    // 0x323f10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323CF0u, 0x323F0Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x323F14u;
    // 0x323f14: 0x0  nop
    ctx->pc = 0x323f14u;
    // NOP
    ctx->pc = 0x323f18u;
}
