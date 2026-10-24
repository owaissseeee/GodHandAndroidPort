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

// Function: func_001B66C0
// Address: 0x1b66c0 - 0x1b6710
void func_001B66C0_0x1b66c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B66C0_0x1b66c0");
#endif

    switch (ctx->pc) {
        case 0x1b66e4u: goto label_1b66e4;
        case 0x1b66fcu: goto label_1b66fc;
        default: break;
    }

    ctx->pc = 0x1b66c0u;

    // 0x1b66c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b66c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b66c4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1b66c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1b66c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b66c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b66cc: 0x8c6260c8  lw          $v0, 0x60C8($v1)
    ctx->pc = 0x1b66ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7860C8u));
    // 0x1b66d0: 0x247060c8  addiu       $s0, $v1, 0x60C8
    ctx->pc = 0x1b66d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24776));
    // 0x1b66d4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B66D4u;
    {
        const bool branch_taken_0x1b66d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B66D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B66D4u;
        // 0x1b66d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b66d4) {
            ctx->pc = 0x1B66FCu;
            goto label_1b66fc;
        }
    }
    ctx->pc = 0x1B66DCu;
    // 0x1b66dc: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1B66DCu;
    SET_GPR_U32(ctx, 31, 0x1B66E4u);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1B66DCu, 0x1B66E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B66E4u;
label_1b66e4:
    // 0x1b66e4: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1b66e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1b66e8: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1b66e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1b66ec: 0x24a588f0  addiu       $a1, $a1, -0x7710
    ctx->pc = 0x1b66ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936816));
    // 0x1b66f0: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1b66f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1b66f4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1B66F4u;
    SET_GPR_U32(ctx, 31, 0x1B66FCu);
    ctx->pc = 0x1B66F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B66F4u;
    // 0x1b66f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1B66F4u, 0x1B66FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B66FCu;
label_1b66fc:
    // 0x1b66fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b66fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6700: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6704: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b6704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6708: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6708u;
        // 0x1b670c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6710u;
}
