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

// Function: func_0037ACA0
// Address: 0x37aca0 - 0x37ad08
void func_0037ACA0_0x37aca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037ACA0_0x37aca0");
#endif

    switch (ctx->pc) {
        case 0x37acb4u: goto label_37acb4;
        case 0x37acc4u: goto label_37acc4;
        case 0x37acccu: goto label_37accc;
        case 0x37acdcu: goto label_37acdc;
        case 0x37acecu: goto label_37acec;
        case 0x37acf4u: goto label_37acf4;
        default: break;
    }

    ctx->pc = 0x37aca0u;

    // 0x37aca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37aca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37aca4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37aca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37aca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37aca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37acac: 0xc0de7b0  jal         func_379EC0
    ctx->pc = 0x37ACACu;
    SET_GPR_U32(ctx, 31, 0x37ACB4u);
    ctx->pc = 0x37ACB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ACACu;
    // 0x37acb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379EC0u, 0x37ACACu, 0x37ACB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ACB4u;
label_37acb4:
    // 0x37acb4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x37ACB4u;
    {
        const bool branch_taken_0x37acb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37acb4) {
            ctx->pc = 0x37ACB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37ACB4u;
            // 0x37acb8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37ACF8u;
            goto label_37acf8;
        }
    }
    ctx->pc = 0x37ACBCu;
    // 0x37acbc: 0xc0de87c  jal         func_37A1F0
    ctx->pc = 0x37ACBCu;
    SET_GPR_U32(ctx, 31, 0x37ACC4u);
    ctx->pc = 0x37ACC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ACBCu;
    // 0x37acc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A1F0u, 0x37ACBCu, 0x37ACC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ACC4u;
label_37acc4:
    // 0x37acc4: 0xc0de932  jal         func_37A4C8
    ctx->pc = 0x37ACC4u;
    SET_GPR_U32(ctx, 31, 0x37ACCCu);
    ctx->pc = 0x37ACC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ACC4u;
    // 0x37acc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A4C8u, 0x37ACC4u, 0x37ACCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ACCCu;
label_37accc:
    // 0x37accc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x37ACCCu;
    {
        const bool branch_taken_0x37accc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37accc) {
            ctx->pc = 0x37ACECu;
            goto label_37acec;
        }
    }
    ctx->pc = 0x37ACD4u;
    // 0x37acd4: 0xc0deb42  jal         func_37AD08
    ctx->pc = 0x37ACD4u;
    SET_GPR_U32(ctx, 31, 0x37ACDCu);
    ctx->pc = 0x37ACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ACD4u;
    // 0x37acd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37AD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37AD08u, 0x37ACD4u, 0x37ACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ACDCu;
label_37acdc:
    // 0x37acdc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37ACDCu;
    {
        const bool branch_taken_0x37acdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37acdc) {
            ctx->pc = 0x37ACECu;
            goto label_37acec;
        }
    }
    ctx->pc = 0x37ACE4u;
    // 0x37ace4: 0xc0deb62  jal         func_37AD88
    ctx->pc = 0x37ACE4u;
    SET_GPR_U32(ctx, 31, 0x37ACECu);
    ctx->pc = 0x37ACE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ACE4u;
    // 0x37ace8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37AD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37AD88u, 0x37ACE4u, 0x37ACECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ACECu;
label_37acec:
    // 0x37acec: 0xc0de8a6  jal         func_37A298
    ctx->pc = 0x37ACECu;
    SET_GPR_U32(ctx, 31, 0x37ACF4u);
    ctx->pc = 0x37ACF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ACECu;
    // 0x37acf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A298u, 0x37ACECu, 0x37ACF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ACF4u;
label_37acf4:
    // 0x37acf4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37acf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37acf8:
    // 0x37acf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37acf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37acfc: 0x3e00008  jr          $ra
    ctx->pc = 0x37ACFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ACFCu;
        // 0x37ad00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37ACFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37AD04u;
    // 0x37ad04: 0x0  nop
    ctx->pc = 0x37ad04u;
    // NOP
    ctx->pc = 0x37ad08u;
}
