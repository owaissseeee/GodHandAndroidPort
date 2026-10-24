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

// Function: func_00319FC8
// Address: 0x319fc8 - 0x31a018
void func_00319FC8_0x319fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00319FC8_0x319fc8");
#endif

    switch (ctx->pc) {
        case 0x319fecu: goto label_319fec;
        case 0x31a004u: goto label_31a004;
        default: break;
    }

    ctx->pc = 0x319fc8u;

    // 0x319fc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x319fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x319fcc: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x319fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x319fd0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x319fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x319fd4: 0x8c626628  lw          $v0, 0x6628($v1)
    ctx->pc = 0x319fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786628u));
    // 0x319fd8: 0x24706628  addiu       $s0, $v1, 0x6628
    ctx->pc = 0x319fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26152));
    // 0x319fdc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x319FDCu;
    {
        const bool branch_taken_0x319fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319FDCu;
        // 0x319fe0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319fdc) {
            ctx->pc = 0x31A004u;
            goto label_31a004;
        }
    }
    ctx->pc = 0x319FE4u;
    // 0x319fe4: 0xc053a36  jal         func_14E8D8
    ctx->pc = 0x319FE4u;
    SET_GPR_U32(ctx, 31, 0x319FECu);
    ctx->pc = 0x14E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E8D8u, 0x319FE4u, 0x319FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319FECu;
label_319fec:
    // 0x319fec: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x319fecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x319ff0: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x319ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x319ff4: 0x24a50d58  addiu       $a1, $a1, 0xD58
    ctx->pc = 0x319ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3416));
    // 0x319ff8: 0x24c656e8  addiu       $a2, $a2, 0x56E8
    ctx->pc = 0x319ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22248));
    // 0x319ffc: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x319FFCu;
    SET_GPR_U32(ctx, 31, 0x31A004u);
    ctx->pc = 0x31A000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319FFCu;
    // 0x31a000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x319FFCu, 0x31A004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A004u;
label_31a004:
    // 0x31a004: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31a004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a00c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31a00cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31a010: 0x3e00008  jr          $ra
    ctx->pc = 0x31A010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A010u;
        // 0x31a014: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A018u;
}
