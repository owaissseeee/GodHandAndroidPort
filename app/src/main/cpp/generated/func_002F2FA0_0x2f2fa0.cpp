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

// Function: func_002F2FA0
// Address: 0x2f2fa0 - 0x2f2ff8
void func_002F2FA0_0x2f2fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F2FA0_0x2f2fa0");
#endif

    switch (ctx->pc) {
        case 0x2f2fc4u: goto label_2f2fc4;
        case 0x2f2fdcu: goto label_2f2fdc;
        default: break;
    }

    ctx->pc = 0x2f2fa0u;

    // 0x2f2fa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f2fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f2fa4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2f2fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2f2fa8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f2fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f2fac: 0x8c6264b8  lw          $v0, 0x64B8($v1)
    ctx->pc = 0x2f2facu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7864B8u));
    // 0x2f2fb0: 0x247064b8  addiu       $s0, $v1, 0x64B8
    ctx->pc = 0x2f2fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25784));
    // 0x2f2fb4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F2FB4u;
    {
        const bool branch_taken_0x2f2fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2FB4u;
        // 0x2f2fb8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2fb4) {
            ctx->pc = 0x2F2FDCu;
            goto label_2f2fdc;
        }
    }
    ctx->pc = 0x2F2FBCu;
    // 0x2f2fbc: 0xc0c0052  jal         func_300148
    ctx->pc = 0x2F2FBCu;
    SET_GPR_U32(ctx, 31, 0x2F2FC4u);
    ctx->pc = 0x300148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300148u, 0x2F2FBCu, 0x2F2FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2FC4u;
label_2f2fc4:
    // 0x2f2fc4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f2fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2f2fc8: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x2f2fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x2f2fcc: 0x24a5ef98  addiu       $a1, $a1, -0x1068
    ctx->pc = 0x2f2fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963096));
    // 0x2f2fd0: 0x24c663c8  addiu       $a2, $a2, 0x63C8
    ctx->pc = 0x2f2fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25544));
    // 0x2f2fd4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2F2FD4u;
    SET_GPR_U32(ctx, 31, 0x2F2FDCu);
    ctx->pc = 0x2F2FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2FD4u;
    // 0x2f2fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2F2FD4u, 0x2F2FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2FDCu;
label_2f2fdc:
    // 0x2f2fdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f2fdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2fe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f2fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2fe4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f2fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2FE8u;
        // 0x2f2fec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2FF0u;
    // 0x2f2ff0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2f2ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f2ff4: 0x0  nop
    ctx->pc = 0x2f2ff4u;
    // NOP
    ctx->pc = 0x2f2ff8u;
}
