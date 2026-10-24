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

// Function: ResetBufferOnFirstEnterA
// Address: 0x338ac0 - 0x338b10
void ResetBufferOnFirstEnterA_0x338ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetBufferOnFirstEnterA_0x338ac0");
#endif

    switch (ctx->pc) {
        case 0x338af0u: goto label_338af0;
        default: break;
    }

    ctx->pc = 0x338ac0u;

    // 0x338ac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x338ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x338ac4: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x338ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x338ac8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x338ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x338acc: 0x24503ac8  addiu       $s0, $v0, 0x3AC8
    ctx->pc = 0x338accu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 15048));
    // 0x338ad0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x338ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3E3AC8u));
    // 0x338ad4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x338AD4u;
    {
        const bool branch_taken_0x338ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x338AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338AD4u;
        // 0x338ad8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338ad4) {
            ctx->pc = 0x338AF4u;
            goto label_338af4;
        }
    }
    ctx->pc = 0x338ADCu;
    // 0x338adc: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x338adcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x338ae0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x338ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338ae4: 0x24843ad0  addiu       $a0, $a0, 0x3AD0
    ctx->pc = 0x338ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15056));
    // 0x338ae8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x338AE8u;
    SET_GPR_U32(ctx, 31, 0x338AF0u);
    ctx->pc = 0x338AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338AE8u;
    // 0x338aec: 0x24060480  addiu       $a2, $zero, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x338AE8u, 0x338AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338AF0u;
label_338af0:
    // 0x338af0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x338af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_338af4:
    // 0x338af4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x338af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x338af8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x338af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x338afc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x338afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x338b00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x338b00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338b04: 0x3e00008  jr          $ra
    ctx->pc = 0x338B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338B04u;
        // 0x338b08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338B0Cu;
    // 0x338b0c: 0x0  nop
    ctx->pc = 0x338b0cu;
    // NOP
    ctx->pc = 0x338b10u;
}
