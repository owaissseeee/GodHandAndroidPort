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

// Function: func_001D48B0
// Address: 0x1d48b0 - 0x1d4918
void func_001D48B0_0x1d48b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D48B0_0x1d48b0");
#endif

    ctx->pc = 0x1d48b0u;

    // 0x1d48b0: 0x948217fc  lhu         $v0, 0x17FC($a0)
    ctx->pc = 0x1d48b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6140)));
    // 0x1d48b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d48b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d48b8: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D48B8u;
    {
        const bool branch_taken_0x1d48b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d48b8) {
            ctx->pc = 0x1D48BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D48B8u;
            // 0x1d48bc: 0x8c8217d4  lw          $v0, 0x17D4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D48C8u;
            goto label_1d48c8;
        }
    }
    ctx->pc = 0x1D48C0u;
    // 0x1d48c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D48C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D48C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48C0u;
        // 0x1d48c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D48C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D48C8u;
label_1d48c8:
    // 0x1d48c8: 0x8c8317d8  lw          $v1, 0x17D8($a0)
    ctx->pc = 0x1d48c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6104)));
    // 0x1d48cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d48ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d48d0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1d48d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d48d4: 0x8c830604  lw          $v1, 0x604($a0)
    ctx->pc = 0x1d48d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1540)));
    // 0x1d48d8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D48D8u;
    {
        const bool branch_taken_0x1d48d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D48DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48D8u;
        // 0x1d48dc: 0x8ca40604  lw          $a0, 0x604($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48d8) {
            ctx->pc = 0x1D48F0u;
            goto label_1d48f0;
        }
    }
    ctx->pc = 0x1D48E0u;
    // 0x1d48e0: 0x2482fff7  addiu       $v0, $a0, -0x9
    ctx->pc = 0x1d48e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967287));
    // 0x1d48e4: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x1d48e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1d48e8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D48E8u;
    {
        const bool branch_taken_0x1d48e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d48e8) {
            ctx->pc = 0x1D4904u;
            goto label_1d4904;
        }
    }
    ctx->pc = 0x1D48F0u;
label_1d48f0:
    // 0x1d48f0: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D48F0u;
    {
        const bool branch_taken_0x1d48f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D48F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48F0u;
        // 0x1d48f4: 0x2462fff7  addiu       $v0, $v1, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48f0) {
            ctx->pc = 0x1D490Cu;
            goto label_1d490c;
        }
    }
    ctx->pc = 0x1D48F8u;
    // 0x1d48f8: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x1d48f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1d48fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D48FCu;
    {
        const bool branch_taken_0x1d48fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d48fc) {
            ctx->pc = 0x1D490Cu;
            goto label_1d490c;
        }
    }
    ctx->pc = 0x1D4904u;
label_1d4904:
    // 0x1d4904: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4904u;
        // 0x1d4908: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D490Cu;
label_1d490c:
    // 0x1d490c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D490Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D490Cu;
        // 0x1d4910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D490Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4914u;
    // 0x1d4914: 0x0  nop
    ctx->pc = 0x1d4914u;
    // NOP
    ctx->pc = 0x1d4918u;
}
