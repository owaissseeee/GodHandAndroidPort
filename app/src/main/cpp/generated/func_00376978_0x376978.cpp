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

// Function: func_00376978
// Address: 0x376978 - 0x3769b0
void func_00376978_0x376978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00376978_0x376978");
#endif

    switch (ctx->pc) {
        case 0x376988u: goto label_376988;
        default: break;
    }

    ctx->pc = 0x376978u;

    // 0x376978: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x376978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x37697c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x37697cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376980: 0x2443f050  addiu       $v1, $v0, -0xFB0
    ctx->pc = 0x376980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963280));
    // 0x376984: 0x0  nop
    ctx->pc = 0x376984u;
    // NOP
label_376988:
    // 0x376988: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x376988u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37698c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37698Cu;
    {
        const bool branch_taken_0x37698c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37698Cu;
        // 0x376990: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37698c) {
            ctx->pc = 0x37699Cu;
            goto label_37699c;
        }
    }
    ctx->pc = 0x376994u;
    // 0x376994: 0x3e00008  jr          $ra
    ctx->pc = 0x376994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376994u;
        // 0x376998: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37699Cu;
label_37699c:
    // 0x37699c: 0x28820060  slti        $v0, $a0, 0x60
    ctx->pc = 0x37699cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)96) ? 1 : 0);
    // 0x3769a0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3769A0u;
    {
        const bool branch_taken_0x3769a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3769A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3769A0u;
        // 0x3769a4: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3769a0) {
            ctx->pc = 0x376988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376988;
        }
    }
    ctx->pc = 0x3769A8u;
    // 0x3769a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3769A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3769ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3769A8u;
        // 0x3769ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3769A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3769B0u;
}
