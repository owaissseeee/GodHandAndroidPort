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

// Function: func_00140B88
// Address: 0x140b88 - 0x140bf0
void func_00140B88_0x140b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00140B88_0x140b88");
#endif

    switch (ctx->pc) {
        case 0x140bacu: goto label_140bac;
        case 0x140bc4u: goto label_140bc4;
        default: break;
    }

    ctx->pc = 0x140b88u;

    // 0x140b88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x140b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x140b8c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x140b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x140b90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x140b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x140b94: 0x8c625658  lw          $v0, 0x5658($v1)
    ctx->pc = 0x140b94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785658u));
    // 0x140b98: 0x24705658  addiu       $s0, $v1, 0x5658
    ctx->pc = 0x140b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22104));
    // 0x140b9c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x140B9Cu;
    {
        const bool branch_taken_0x140b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B9Cu;
        // 0x140ba0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140b9c) {
            ctx->pc = 0x140BC4u;
            goto label_140bc4;
        }
    }
    ctx->pc = 0x140BA4u;
    // 0x140ba4: 0xc04f1d6  jal         func_13C758
    ctx->pc = 0x140BA4u;
    SET_GPR_U32(ctx, 31, 0x140BACu);
    ctx->pc = 0x13C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C758u, 0x140BA4u, 0x140BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140BACu;
label_140bac:
    // 0x140bac: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x140bacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x140bb0: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x140bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x140bb4: 0x24a5e580  addiu       $a1, $a1, -0x1A80
    ctx->pc = 0x140bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960512));
    // 0x140bb8: 0x24c60d28  addiu       $a2, $a2, 0xD28
    ctx->pc = 0x140bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3368));
    // 0x140bbc: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x140BBCu;
    SET_GPR_U32(ctx, 31, 0x140BC4u);
    ctx->pc = 0x140BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140BBCu;
    // 0x140bc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x140BBCu, 0x140BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140BC4u;
label_140bc4:
    // 0x140bc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x140bc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140bc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x140bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140bcc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x140bccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x140BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BD0u;
        // 0x140bd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140BD8u;
    // 0x140bd8: 0xac8200a8  sw          $v0, 0xA8($a0)
    ctx->pc = 0x140bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 2));
    // 0x140bdc: 0x0  nop
    ctx->pc = 0x140bdcu;
    // NOP
    // 0x140be0: 0xac820090  sw          $v0, 0x90($a0)
    ctx->pc = 0x140be0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 2));
    // 0x140be4: 0x0  nop
    ctx->pc = 0x140be4u;
    // NOP
    // 0x140be8: 0x0  nop
    ctx->pc = 0x140be8u;
    // NOP
    // 0x140bec: 0x0  nop
    ctx->pc = 0x140becu;
    // NOP
    ctx->pc = 0x140bf0u;
}
