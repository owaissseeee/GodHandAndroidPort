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

// Function: func_001A3CC0
// Address: 0x1a3cc0 - 0x1a3d10
void func_001A3CC0_0x1a3cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A3CC0_0x1a3cc0");
#endif

    switch (ctx->pc) {
        case 0x1a3ce4u: goto label_1a3ce4;
        case 0x1a3cfcu: goto label_1a3cfc;
        default: break;
    }

    ctx->pc = 0x1a3cc0u;

    // 0x1a3cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a3cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a3cc4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1a3cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1a3cc8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a3cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a3ccc: 0x8c625f48  lw          $v0, 0x5F48($v1)
    ctx->pc = 0x1a3cccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785F48u));
    // 0x1a3cd0: 0x24705f48  addiu       $s0, $v1, 0x5F48
    ctx->pc = 0x1a3cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24392));
    // 0x1a3cd4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A3CD4u;
    {
        const bool branch_taken_0x1a3cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CD4u;
        // 0x1a3cd8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3cd4) {
            ctx->pc = 0x1A3CFCu;
            goto label_1a3cfc;
        }
    }
    ctx->pc = 0x1A3CDCu;
    // 0x1a3cdc: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x1A3CDCu;
    SET_GPR_U32(ctx, 31, 0x1A3CE4u);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x1A3CDCu, 0x1A3CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3CE4u;
label_1a3ce4:
    // 0x1a3ce4: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1a3ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1a3ce8: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1a3ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1a3cec: 0x24a57130  addiu       $a1, $a1, 0x7130
    ctx->pc = 0x1a3cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28976));
    // 0x1a3cf0: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x1a3cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x1a3cf4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1A3CF4u;
    SET_GPR_U32(ctx, 31, 0x1A3CFCu);
    ctx->pc = 0x1A3CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3CF4u;
    // 0x1a3cf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1A3CF4u, 0x1A3CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3CFCu;
label_1a3cfc:
    // 0x1a3cfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a3cfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3d00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a3d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3d04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a3d04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3d08: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D08u;
        // 0x1a3d0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3D10u;
}
