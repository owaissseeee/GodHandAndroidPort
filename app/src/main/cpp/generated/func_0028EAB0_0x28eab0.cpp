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

// Function: func_0028EAB0
// Address: 0x28eab0 - 0x28eb00
void func_0028EAB0_0x28eab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028EAB0_0x28eab0");
#endif

    switch (ctx->pc) {
        case 0x28ead4u: goto label_28ead4;
        case 0x28eaecu: goto label_28eaec;
        default: break;
    }

    ctx->pc = 0x28eab0u;

    // 0x28eab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28eab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28eab4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x28eab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x28eab8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28eab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28eabc: 0x8c6262d8  lw          $v0, 0x62D8($v1)
    ctx->pc = 0x28eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7862D8u));
    // 0x28eac0: 0x247062d8  addiu       $s0, $v1, 0x62D8
    ctx->pc = 0x28eac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25304));
    // 0x28eac4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28EAC4u;
    {
        const bool branch_taken_0x28eac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EAC4u;
        // 0x28eac8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eac4) {
            ctx->pc = 0x28EAECu;
            goto label_28eaec;
        }
    }
    ctx->pc = 0x28EACCu;
    // 0x28eacc: 0xc0a3f74  jal         func_28FDD0
    ctx->pc = 0x28EACCu;
    SET_GPR_U32(ctx, 31, 0x28EAD4u);
    ctx->pc = 0x28FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FDD0u, 0x28EACCu, 0x28EAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EAD4u;
label_28ead4:
    // 0x28ead4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28ead4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x28ead8: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x28ead8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x28eadc: 0x24a5a618  addiu       $a1, $a1, -0x59E8
    ctx->pc = 0x28eadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944280));
    // 0x28eae0: 0x24c661d8  addiu       $a2, $a2, 0x61D8
    ctx->pc = 0x28eae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25048));
    // 0x28eae4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x28EAE4u;
    SET_GPR_U32(ctx, 31, 0x28EAECu);
    ctx->pc = 0x28EAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EAE4u;
    // 0x28eae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x28EAE4u, 0x28EAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EAECu;
label_28eaec:
    // 0x28eaec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28eaecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eaf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28eaf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28eaf4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28eaf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28eaf8: 0x3e00008  jr          $ra
    ctx->pc = 0x28EAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EAF8u;
        // 0x28eafc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EB00u;
}
