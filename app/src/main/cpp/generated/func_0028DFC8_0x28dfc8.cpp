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

// Function: func_0028DFC8
// Address: 0x28dfc8 - 0x28e018
void func_0028DFC8_0x28dfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028DFC8_0x28dfc8");
#endif

    switch (ctx->pc) {
        case 0x28dfecu: goto label_28dfec;
        case 0x28e004u: goto label_28e004;
        default: break;
    }

    ctx->pc = 0x28dfc8u;

    // 0x28dfc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28dfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28dfcc: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x28dfccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x28dfd0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28dfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28dfd4: 0x8c6262c8  lw          $v0, 0x62C8($v1)
    ctx->pc = 0x28dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7862C8u));
    // 0x28dfd8: 0x247062c8  addiu       $s0, $v1, 0x62C8
    ctx->pc = 0x28dfd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25288));
    // 0x28dfdc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28DFDCu;
    {
        const bool branch_taken_0x28dfdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DFDCu;
        // 0x28dfe0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dfdc) {
            ctx->pc = 0x28E004u;
            goto label_28e004;
        }
    }
    ctx->pc = 0x28DFE4u;
    // 0x28dfe4: 0xc0a3f74  jal         func_28FDD0
    ctx->pc = 0x28DFE4u;
    SET_GPR_U32(ctx, 31, 0x28DFECu);
    ctx->pc = 0x28FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FDD0u, 0x28DFE4u, 0x28DFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DFECu;
label_28dfec:
    // 0x28dfec: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28dfecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x28dff0: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x28dff0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x28dff4: 0x24a5a4f8  addiu       $a1, $a1, -0x5B08
    ctx->pc = 0x28dff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943992));
    // 0x28dff8: 0x24c661d8  addiu       $a2, $a2, 0x61D8
    ctx->pc = 0x28dff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25048));
    // 0x28dffc: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x28DFFCu;
    SET_GPR_U32(ctx, 31, 0x28E004u);
    ctx->pc = 0x28E000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DFFCu;
    // 0x28e000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x28DFFCu, 0x28E004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E004u;
label_28e004:
    // 0x28e004: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28e004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e00c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28e00cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e010: 0x3e00008  jr          $ra
    ctx->pc = 0x28E010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E010u;
        // 0x28e014: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E018u;
}
