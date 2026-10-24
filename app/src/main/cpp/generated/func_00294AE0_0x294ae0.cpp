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

// Function: func_00294AE0
// Address: 0x294ae0 - 0x294b18
void func_00294AE0_0x294ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00294AE0_0x294ae0");
#endif

    switch (ctx->pc) {
        case 0x294b04u: goto label_294b04;
        default: break;
    }

    ctx->pc = 0x294ae0u;

    // 0x294ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x294ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x294ae4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x294ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x294ae8: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x294AE8u;
    {
        const bool branch_taken_0x294ae8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x294AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294AE8u;
        // 0x294aec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294ae8) {
            ctx->pc = 0x294B04u;
            goto label_294b04;
        }
    }
    ctx->pc = 0x294AF0u;
    // 0x294af0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x294AF0u;
    {
        const bool branch_taken_0x294af0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x294AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294AF0u;
        // 0x294af4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294af0) {
            ctx->pc = 0x294B08u;
            goto label_294b08;
        }
    }
    ctx->pc = 0x294AF8u;
    // 0x294af8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x294af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x294afc: 0xc0a4024  jal         func_290090
    ctx->pc = 0x294AFCu;
    SET_GPR_U32(ctx, 31, 0x294B04u);
    ctx->pc = 0x294B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294AFCu;
    // 0x294b00: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290090u, 0x294AFCu, 0x294B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294B04u;
label_294b04:
    // 0x294b04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x294b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_294b08:
    // 0x294b08: 0x3e00008  jr          $ra
    ctx->pc = 0x294B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294B08u;
        // 0x294b0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294B10u;
    // 0x294b10: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x294b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x294b14: 0x0  nop
    ctx->pc = 0x294b14u;
    // NOP
    ctx->pc = 0x294b18u;
}
