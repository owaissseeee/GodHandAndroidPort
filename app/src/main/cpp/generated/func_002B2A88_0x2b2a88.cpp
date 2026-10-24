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

// Function: func_002B2A88
// Address: 0x2b2a88 - 0x2b2ae8
void func_002B2A88_0x2b2a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B2A88_0x2b2a88");
#endif

    switch (ctx->pc) {
        case 0x2b2aa4u: goto label_2b2aa4;
        case 0x2b2ab0u: goto label_2b2ab0;
        default: break;
    }

    ctx->pc = 0x2b2a88u;

    // 0x2b2a88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b2a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b2a8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b2a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b2a90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b2a94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b2a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2a98: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x2b2a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2b2a9c: 0xc0ad1a4  jal         func_2B4690
    ctx->pc = 0x2B2A9Cu;
    SET_GPR_U32(ctx, 31, 0x2B2AA4u);
    ctx->pc = 0x2B2AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2A9Cu;
    // 0x2b2aa0: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4690u, 0x2B2A9Cu, 0x2B2AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2AA4u;
label_2b2aa4:
    // 0x2b2aa4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b2aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2aa8: 0xc0ac8b8  jal         func_2B22E0
    ctx->pc = 0x2B2AA8u;
    SET_GPR_U32(ctx, 31, 0x2B2AB0u);
    ctx->pc = 0x2B2AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2AA8u;
    // 0x2b2aac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B22E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B22E0u, 0x2B2AA8u, 0x2B2AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2AB0u;
label_2b2ab0:
    // 0x2b2ab0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2b2ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2b2ab4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B2AB4u;
    {
        const bool branch_taken_0x2b2ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2AB4u;
        // 0x2b2ab8: 0xa200003c  sb          $zero, 0x3C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ab4) {
            ctx->pc = 0x2B2AD4u;
            goto label_2b2ad4;
        }
    }
    ctx->pc = 0x2B2ABCu;
    // 0x2b2abc: 0x944302fe  lhu         $v1, 0x2FE($v0)
    ctx->pc = 0x2b2abcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
    // 0x2b2ac0: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x2b2ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x2b2ac4: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B2AC4u;
    {
        const bool branch_taken_0x2b2ac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b2ac4) {
            ctx->pc = 0x2B2AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2AC4u;
            // 0x2b2ac8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2AD8u;
            goto label_2b2ad8;
        }
    }
    ctx->pc = 0x2B2ACCu;
    // 0x2b2acc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b2accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b2ad0: 0xa20200a4  sb          $v0, 0xA4($s0)
    ctx->pc = 0x2b2ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 164), (uint8_t)GPR_U32(ctx, 2));
label_2b2ad4:
    // 0x2b2ad4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b2ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b2ad8:
    // 0x2b2ad8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b2ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2adc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2ADCu;
        // 0x2b2ae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2AE4u;
    // 0x2b2ae4: 0x0  nop
    ctx->pc = 0x2b2ae4u;
    // NOP
    ctx->pc = 0x2b2ae8u;
}
