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

// Function: func_001787C0
// Address: 0x1787c0 - 0x178810
void func_001787C0_0x1787c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001787C0_0x1787c0");
#endif

    switch (ctx->pc) {
        case 0x1787e4u: goto label_1787e4;
        case 0x1787fcu: goto label_1787fc;
        default: break;
    }

    ctx->pc = 0x1787c0u;

    // 0x1787c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1787c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1787c4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1787c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1787c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1787c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1787cc: 0x8c625908  lw          $v0, 0x5908($v1)
    ctx->pc = 0x1787ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785908u));
    // 0x1787d0: 0x24705908  addiu       $s0, $v1, 0x5908
    ctx->pc = 0x1787d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22792));
    // 0x1787d4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1787D4u;
    {
        const bool branch_taken_0x1787d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1787D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1787D4u;
        // 0x1787d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1787d4) {
            ctx->pc = 0x1787FCu;
            goto label_1787fc;
        }
    }
    ctx->pc = 0x1787DCu;
    // 0x1787dc: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x1787DCu;
    SET_GPR_U32(ctx, 31, 0x1787E4u);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x1787DCu, 0x1787E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1787E4u;
label_1787e4:
    // 0x1787e4: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1787e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1787e8: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1787e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1787ec: 0x24a51578  addiu       $a1, $a1, 0x1578
    ctx->pc = 0x1787ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5496));
    // 0x1787f0: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x1787f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x1787f4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1787F4u;
    SET_GPR_U32(ctx, 31, 0x1787FCu);
    ctx->pc = 0x1787F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1787F4u;
    // 0x1787f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1787F4u, 0x1787FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1787FCu;
label_1787fc:
    // 0x1787fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1787fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178804: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x178804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178808: 0x3e00008  jr          $ra
    ctx->pc = 0x178808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178808u;
        // 0x17880c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178810u;
}
