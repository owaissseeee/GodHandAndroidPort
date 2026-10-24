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

// Function: ForwardInitBuffer_314A90
// Address: 0x314a90 - 0x314b00
void ForwardInitBuffer_314A90_0x314a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_314A90_0x314a90");
#endif

    switch (ctx->pc) {
        case 0x314ac4u: goto label_314ac4;
        case 0x314adcu: goto label_314adc;
        case 0x314ae4u: goto label_314ae4;
        default: break;
    }

    ctx->pc = 0x314a90u;

    // 0x314a90: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x314a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x314a94: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x314a94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314a98: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x314a98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x314a9c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x314a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x314aa0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x314aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x314aa4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x314aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x314aa8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x314AA8u;
    {
        const bool branch_taken_0x314aa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x314AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314AA8u;
        // 0x314aac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314aa8) {
            ctx->pc = 0x314AECu;
            goto label_314aec;
        }
    }
    ctx->pc = 0x314AB0u;
    // 0x314ab0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x314ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x314ab4: 0x240408c0  addiu       $a0, $zero, 0x8C0
    ctx->pc = 0x314ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2240));
    // 0x314ab8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x314ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x314abc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x314ABCu;
    SET_GPR_U32(ctx, 31, 0x314AC4u);
    ctx->pc = 0x314AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314ABCu;
    // 0x314ac0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x314ABCu, 0x314AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314AC4u;
label_314ac4:
    // 0x314ac4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x314ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314ac8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x314AC8u;
    {
        const bool branch_taken_0x314ac8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x314ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314AC8u;
        // 0x314acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314ac8) {
            ctx->pc = 0x314AECu;
            goto label_314aec;
        }
    }
    ctx->pc = 0x314AD0u;
    // 0x314ad0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x314ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314ad4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x314AD4u;
    SET_GPR_U32(ctx, 31, 0x314ADCu);
    ctx->pc = 0x314AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314AD4u;
    // 0x314ad8: 0x240608c0  addiu       $a2, $zero, 0x8C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x314AD4u, 0x314ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314ADCu;
label_314adc:
    // 0x314adc: 0xc0667f4  jal         func_199FD0
    ctx->pc = 0x314ADCu;
    SET_GPR_U32(ctx, 31, 0x314AE4u);
    ctx->pc = 0x314AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314ADCu;
    // 0x314ae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199FD0u, 0x314ADCu, 0x314AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314AE4u;
label_314ae4:
    // 0x314ae4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x314AE4u;
    {
        const bool branch_taken_0x314ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314AE4u;
        // 0x314ae8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314ae4) {
            ctx->pc = 0x314AF4u;
            goto label_314af4;
        }
    }
    ctx->pc = 0x314AECu;
label_314aec:
    // 0x314aec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x314aecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314af0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_314af4:
    // 0x314af4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314af8: 0x3e00008  jr          $ra
    ctx->pc = 0x314AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314AF8u;
        // 0x314afc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314B00u;
}
