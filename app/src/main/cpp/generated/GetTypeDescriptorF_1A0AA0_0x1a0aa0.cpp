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

// Function: GetTypeDescriptorF_1A0AA0
// Address: 0x1a0aa0 - 0x1a0af0
void GetTypeDescriptorF_1A0AA0_0x1a0aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTypeDescriptorF_1A0AA0_0x1a0aa0");
#endif

    switch (ctx->pc) {
        case 0x1a0ac4u: goto label_1a0ac4;
        case 0x1a0adcu: goto label_1a0adc;
        default: break;
    }

    ctx->pc = 0x1a0aa0u;

    // 0x1a0aa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a0aa4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1a0aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1a0aa8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a0aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a0aac: 0x8c625f08  lw          $v0, 0x5F08($v1)
    ctx->pc = 0x1a0aacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785F08u));
    // 0x1a0ab0: 0x24705f08  addiu       $s0, $v1, 0x5F08
    ctx->pc = 0x1a0ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24328));
    // 0x1a0ab4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A0AB4u;
    {
        const bool branch_taken_0x1a0ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0AB4u;
        // 0x1a0ab8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0ab4) {
            ctx->pc = 0x1A0ADCu;
            goto label_1a0adc;
        }
    }
    ctx->pc = 0x1A0ABCu;
    // 0x1a0abc: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x1A0ABCu;
    SET_GPR_U32(ctx, 31, 0x1A0AC4u);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x1A0ABCu, 0x1A0AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0AC4u;
label_1a0ac4:
    // 0x1a0ac4: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1a0ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1a0ac8: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1a0ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1a0acc: 0x24a56d38  addiu       $a1, $a1, 0x6D38
    ctx->pc = 0x1a0accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27960));
    // 0x1a0ad0: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x1a0ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x1a0ad4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1A0AD4u;
    SET_GPR_U32(ctx, 31, 0x1A0ADCu);
    ctx->pc = 0x1A0AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0AD4u;
    // 0x1a0ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1A0AD4u, 0x1A0ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0ADCu;
label_1a0adc:
    // 0x1a0adc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a0adcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0ae4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a0ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0AE8u;
        // 0x1a0aec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0AF0u;
}
