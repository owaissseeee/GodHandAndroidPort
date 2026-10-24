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

// Function: Trans
// Address: 0x15fba8 - 0x15fc10
void Trans_0x15fba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Trans_0x15fba8");
#endif

    switch (ctx->pc) {
        case 0x15fbb8u: goto label_15fbb8;
        case 0x15fbc4u: goto label_15fbc4;
        case 0x15fbccu: goto label_15fbcc;
        case 0x15fbd8u: goto label_15fbd8;
        case 0x15fbe4u: goto label_15fbe4;
        case 0x15fbecu: goto label_15fbec;
        case 0x15fbf8u: goto label_15fbf8;
        case 0x15fc04u: goto label_15fc04;
        default: break;
    }

    ctx->pc = 0x15fba8u;

    // 0x15fba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15fba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15fbac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15fbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15fbb0: 0xc054e3c  jal         func_1538F0
    ctx->pc = 0x15FBB0u;
    SET_GPR_U32(ctx, 31, 0x15FBB8u);
    ctx->pc = 0x1538F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1538F0u, 0x15FBB0u, 0x15FBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FBB8u;
label_15fbb8:
    // 0x15fbb8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x15fbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x15fbbc: 0xc0b153a  jal         func_2C54E8
    ctx->pc = 0x15FBBCu;
    SET_GPR_U32(ctx, 31, 0x15FBC4u);
    ctx->pc = 0x15FBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FBBCu;
    // 0x15fbc0: 0x8c442fb0  lw          $a0, 0x2FB0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C54E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C54E8u, 0x15FBBCu, 0x15FBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FBC4u;
label_15fbc4:
    // 0x15fbc4: 0xc0c3d94  jal         func_30F650
    ctx->pc = 0x15FBC4u;
    SET_GPR_U32(ctx, 31, 0x15FBCCu);
    ctx->pc = 0x30F650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F650u, 0x15FBC4u, 0x15FBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FBCCu;
label_15fbcc:
    // 0x15fbcc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x15fbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x15fbd0: 0xc0b0e06  jal         func_2C3818
    ctx->pc = 0x15FBD0u;
    SET_GPR_U32(ctx, 31, 0x15FBD8u);
    ctx->pc = 0x15FBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FBD0u;
    // 0x15fbd4: 0x8c442f84  lw          $a0, 0x2F84($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3818u, 0x15FBD0u, 0x15FBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FBD8u;
label_15fbd8:
    // 0x15fbd8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x15fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x15fbdc: 0xc0abc0a  jal         func_2AF028
    ctx->pc = 0x15FBDCu;
    SET_GPR_U32(ctx, 31, 0x15FBE4u);
    ctx->pc = 0x15FBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FBDCu;
    // 0x15fbe0: 0x8c4423a4  lw          $a0, 0x23A4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF028u, 0x15FBDCu, 0x15FBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FBE4u;
label_15fbe4:
    // 0x15fbe4: 0xc0becc4  jal         func_2FB310
    ctx->pc = 0x15FBE4u;
    SET_GPR_U32(ctx, 31, 0x15FBECu);
    ctx->pc = 0x2FB310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB310u, 0x15FBE4u, 0x15FBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FBECu;
label_15fbec:
    // 0x15fbec: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x15fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x15fbf0: 0xc05042a  jal         func_1410A8
    ctx->pc = 0x15FBF0u;
    SET_GPR_U32(ctx, 31, 0x15FBF8u);
    ctx->pc = 0x15FBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FBF0u;
    // 0x15fbf4: 0x8c44d6e8  lw          $a0, -0x2918($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1410A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1410A8u, 0x15FBF0u, 0x15FBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FBF8u;
label_15fbf8:
    // 0x15fbf8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x15fbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x15fbfc: 0xc0582e4  jal         func_160B90
    ctx->pc = 0x15FBFCu;
    SET_GPR_U32(ctx, 31, 0x15FC04u);
    ctx->pc = 0x15FC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FBFCu;
    // 0x15fc00: 0x8c44d930  lw          $a0, -0x26D0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160B90u, 0x15FBFCu, 0x15FC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FC04u;
label_15fc04:
    // 0x15fc04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15fc04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fc08: 0x3e00008  jr          $ra
    ctx->pc = 0x15FC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC08u;
        // 0x15fc0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15FC10u;
}
