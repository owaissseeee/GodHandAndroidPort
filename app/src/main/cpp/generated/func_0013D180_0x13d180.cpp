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

// Function: func_0013D180
// Address: 0x13d180 - 0x13d1d0
void func_0013D180_0x13d180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013D180_0x13d180");
#endif

    switch (ctx->pc) {
        case 0x13d1a4u: goto label_13d1a4;
        case 0x13d1bcu: goto label_13d1bc;
        default: break;
    }

    ctx->pc = 0x13d180u;

    // 0x13d180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13d180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13d184: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x13d184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x13d188: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13d188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13d18c: 0x8c6255d8  lw          $v0, 0x55D8($v1)
    ctx->pc = 0x13d18cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7855D8u));
    // 0x13d190: 0x247055d8  addiu       $s0, $v1, 0x55D8
    ctx->pc = 0x13d190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21976));
    // 0x13d194: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13D194u;
    {
        const bool branch_taken_0x13d194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D194u;
        // 0x13d198: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d194) {
            ctx->pc = 0x13D1BCu;
            goto label_13d1bc;
        }
    }
    ctx->pc = 0x13D19Cu;
    // 0x13d19c: 0xc04f1d6  jal         func_13C758
    ctx->pc = 0x13D19Cu;
    SET_GPR_U32(ctx, 31, 0x13D1A4u);
    ctx->pc = 0x13C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C758u, 0x13D19Cu, 0x13D1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D1A4u;
label_13d1a4:
    // 0x13d1a4: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x13d1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x13d1a8: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x13d1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x13d1ac: 0x24a5dec8  addiu       $a1, $a1, -0x2138
    ctx->pc = 0x13d1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958792));
    // 0x13d1b0: 0x24c60d28  addiu       $a2, $a2, 0xD28
    ctx->pc = 0x13d1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3368));
    // 0x13d1b4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x13D1B4u;
    SET_GPR_U32(ctx, 31, 0x13D1BCu);
    ctx->pc = 0x13D1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D1B4u;
    // 0x13d1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x13D1B4u, 0x13D1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D1BCu;
label_13d1bc:
    // 0x13d1bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13d1bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d1c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d1c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13d1c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x13D1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D1C8u;
        // 0x13d1cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D1D0u;
}
