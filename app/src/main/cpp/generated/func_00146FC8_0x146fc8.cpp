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

// Function: func_00146FC8
// Address: 0x146fc8 - 0x147018
void func_00146FC8_0x146fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00146FC8_0x146fc8");
#endif

    switch (ctx->pc) {
        case 0x146fecu: goto label_146fec;
        case 0x147004u: goto label_147004;
        default: break;
    }

    ctx->pc = 0x146fc8u;

    // 0x146fc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x146fcc: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x146fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x146fd0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x146fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x146fd4: 0x8c6256b8  lw          $v0, 0x56B8($v1)
    ctx->pc = 0x146fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7856B8u));
    // 0x146fd8: 0x247056b8  addiu       $s0, $v1, 0x56B8
    ctx->pc = 0x146fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22200));
    // 0x146fdc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x146FDCu;
    {
        const bool branch_taken_0x146fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146FDCu;
        // 0x146fe0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146fdc) {
            ctx->pc = 0x147004u;
            goto label_147004;
        }
    }
    ctx->pc = 0x146FE4u;
    // 0x146fe4: 0xc04f1d6  jal         func_13C758
    ctx->pc = 0x146FE4u;
    SET_GPR_U32(ctx, 31, 0x146FECu);
    ctx->pc = 0x13C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C758u, 0x146FE4u, 0x146FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146FECu;
label_146fec:
    // 0x146fec: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x146fecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x146ff0: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x146ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x146ff4: 0x24a5e948  addiu       $a1, $a1, -0x16B8
    ctx->pc = 0x146ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961480));
    // 0x146ff8: 0x24c60d28  addiu       $a2, $a2, 0xD28
    ctx->pc = 0x146ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3368));
    // 0x146ffc: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x146FFCu;
    SET_GPR_U32(ctx, 31, 0x147004u);
    ctx->pc = 0x147000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146FFCu;
    // 0x147000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x146FFCu, 0x147004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147004u;
label_147004:
    // 0x147004: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x147004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x147008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14700c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14700cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147010: 0x3e00008  jr          $ra
    ctx->pc = 0x147010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147010u;
        // 0x147014: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147018u;
}
