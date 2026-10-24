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

// Function: func_003769B0
// Address: 0x3769b0 - 0x376a10
void func_003769B0_0x3769b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003769B0_0x3769b0");
#endif

    switch (ctx->pc) {
        case 0x3769c0u: goto label_3769c0;
        case 0x3769e4u: goto label_3769e4;
        default: break;
    }

    ctx->pc = 0x3769b0u;

    // 0x3769b0: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x3769b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x3769b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3769b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3769b8: 0x2443f050  addiu       $v1, $v0, -0xFB0
    ctx->pc = 0x3769b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963280));
    // 0x3769bc: 0x0  nop
    ctx->pc = 0x3769bcu;
    // NOP
label_3769c0:
    // 0x3769c0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3769c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3769c4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3769C4u;
    {
        const bool branch_taken_0x3769c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3769c4) {
            ctx->pc = 0x3769C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3769C4u;
            // 0x3769c8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3769FCu;
            goto label_3769fc;
        }
    }
    ctx->pc = 0x3769CCu;
    // 0x3769cc: 0x90620008  lbu         $v0, 0x8($v1)
    ctx->pc = 0x3769ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3769d0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3769d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x3769d4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3769D4u;
    {
        const bool branch_taken_0x3769d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3769d4) {
            ctx->pc = 0x3769D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3769D4u;
            // 0x3769d8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3769FCu;
            goto label_3769fc;
        }
    }
    ctx->pc = 0x3769DCu;
    // 0x3769dc: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3769DCu;
    {
        const bool branch_taken_0x3769dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3769dc) {
            ctx->pc = 0x3769E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3769DCu;
            // 0x3769e0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3769ECu;
            goto label_3769ec;
        }
    }
    ctx->pc = 0x3769E4u;
label_3769e4:
    // 0x3769e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3769E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3769E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3769E4u;
        // 0x3769e8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3769E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3769ECu;
label_3769ec:
    // 0x3769ec: 0x0  nop
    ctx->pc = 0x3769ecu;
    // NOP
    // 0x3769f0: 0x0  nop
    ctx->pc = 0x3769f0u;
    // NOP
    // 0x3769f4: 0x1044fffb  beq         $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3769F4u;
    {
        const bool branch_taken_0x3769f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3769F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3769F4u;
        // 0x3769f8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3769f4) {
            ctx->pc = 0x3769E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3769e4;
        }
    }
    ctx->pc = 0x3769FCu;
label_3769fc:
    // 0x3769fc: 0x28a20060  slti        $v0, $a1, 0x60
    ctx->pc = 0x3769fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)96) ? 1 : 0);
    // 0x376a00: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x376A00u;
    {
        const bool branch_taken_0x376a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376A00u;
        // 0x376a04: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376a00) {
            ctx->pc = 0x3769C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3769c0;
        }
    }
    ctx->pc = 0x376A08u;
    // 0x376a08: 0x3e00008  jr          $ra
    ctx->pc = 0x376A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376A08u;
        // 0x376a0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376A10u;
}
