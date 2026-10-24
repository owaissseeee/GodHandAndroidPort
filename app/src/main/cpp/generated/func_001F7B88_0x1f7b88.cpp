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

// Function: func_001F7B88
// Address: 0x1f7b88 - 0x1f7bd8
void func_001F7B88_0x1f7b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F7B88_0x1f7b88");
#endif

    switch (ctx->pc) {
        case 0x1f7bacu: goto label_1f7bac;
        case 0x1f7bc4u: goto label_1f7bc4;
        default: break;
    }

    ctx->pc = 0x1f7b88u;

    // 0x1f7b88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f7b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f7b8c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1f7b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1f7b90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f7b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f7b94: 0x8c626188  lw          $v0, 0x6188($v1)
    ctx->pc = 0x1f7b94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786188u));
    // 0x1f7b98: 0x24706188  addiu       $s0, $v1, 0x6188
    ctx->pc = 0x1f7b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24968));
    // 0x1f7b9c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F7B9Cu;
    {
        const bool branch_taken_0x1f7b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B9Cu;
        // 0x1f7ba0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7b9c) {
            ctx->pc = 0x1F7BC4u;
            goto label_1f7bc4;
        }
    }
    ctx->pc = 0x1F7BA4u;
    // 0x1f7ba4: 0xc07df22  jal         func_1F7C88
    ctx->pc = 0x1F7BA4u;
    SET_GPR_U32(ctx, 31, 0x1F7BACu);
    ctx->pc = 0x1F7C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7C88u, 0x1F7BA4u, 0x1F7BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7BACu;
label_1f7bac:
    // 0x1f7bac: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1f7bacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1f7bb0: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x1f7bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x1f7bb4: 0x24a5c300  addiu       $a1, $a1, -0x3D00
    ctx->pc = 0x1f7bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951680));
    // 0x1f7bb8: 0x24c60d40  addiu       $a2, $a2, 0xD40
    ctx->pc = 0x1f7bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3392));
    // 0x1f7bbc: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1F7BBCu;
    SET_GPR_U32(ctx, 31, 0x1F7BC4u);
    ctx->pc = 0x1F7BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7BBCu;
    // 0x1f7bc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1F7BBCu, 0x1F7BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7BC4u;
label_1f7bc4:
    // 0x1f7bc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f7bc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7bc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f7bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7bcc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f7bccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BD0u;
        // 0x1f7bd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7BD8u;
}
