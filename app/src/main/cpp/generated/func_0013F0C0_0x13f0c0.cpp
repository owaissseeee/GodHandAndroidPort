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

// Function: func_0013F0C0
// Address: 0x13f0c0 - 0x13f118
void func_0013F0C0_0x13f0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013F0C0_0x13f0c0");
#endif

    switch (ctx->pc) {
        case 0x13f0e4u: goto label_13f0e4;
        case 0x13f0fcu: goto label_13f0fc;
        default: break;
    }

    ctx->pc = 0x13f0c0u;

    // 0x13f0c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13f0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13f0c4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x13f0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x13f0c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13f0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13f0cc: 0x8c625638  lw          $v0, 0x5638($v1)
    ctx->pc = 0x13f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785638u));
    // 0x13f0d0: 0x24705638  addiu       $s0, $v1, 0x5638
    ctx->pc = 0x13f0d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22072));
    // 0x13f0d4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13F0D4u;
    {
        const bool branch_taken_0x13f0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0D4u;
        // 0x13f0d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f0d4) {
            ctx->pc = 0x13F0FCu;
            goto label_13f0fc;
        }
    }
    ctx->pc = 0x13F0DCu;
    // 0x13f0dc: 0xc04f1d6  jal         func_13C758
    ctx->pc = 0x13F0DCu;
    SET_GPR_U32(ctx, 31, 0x13F0E4u);
    ctx->pc = 0x13C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C758u, 0x13F0DCu, 0x13F0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F0E4u;
label_13f0e4:
    // 0x13f0e4: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x13f0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x13f0e8: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x13f0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x13f0ec: 0x24a5e128  addiu       $a1, $a1, -0x1ED8
    ctx->pc = 0x13f0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959400));
    // 0x13f0f0: 0x24c60d28  addiu       $a2, $a2, 0xD28
    ctx->pc = 0x13f0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3368));
    // 0x13f0f4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x13F0F4u;
    SET_GPR_U32(ctx, 31, 0x13F0FCu);
    ctx->pc = 0x13F0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F0F4u;
    // 0x13f0f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x13F0F4u, 0x13F0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F0FCu;
label_13f0fc:
    // 0x13f0fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13f0fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f104: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13f104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f108: 0x3e00008  jr          $ra
    ctx->pc = 0x13F108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F108u;
        // 0x13f10c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F110u;
    // 0x13f110: 0xa48200be  sh          $v0, 0xBE($a0)
    ctx->pc = 0x13f110u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 190), (uint16_t)GPR_U32(ctx, 2));
    // 0x13f114: 0x0  nop
    ctx->pc = 0x13f114u;
    // NOP
    ctx->pc = 0x13f118u;
}
