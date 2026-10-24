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

// Function: func_001D4918
// Address: 0x1d4918 - 0x1d4980
void func_001D4918_0x1d4918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D4918_0x1d4918");
#endif

    ctx->pc = 0x1d4918u;

    // 0x1d4918: 0x948217fe  lhu         $v0, 0x17FE($a0)
    ctx->pc = 0x1d4918u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6142)));
    // 0x1d491c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d491cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d4920: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4920u;
    {
        const bool branch_taken_0x1d4920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d4920) {
            ctx->pc = 0x1D4924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4920u;
            // 0x1d4924: 0x8c8217e8  lw          $v0, 0x17E8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4930u;
            goto label_1d4930;
        }
    }
    ctx->pc = 0x1D4928u;
    // 0x1d4928: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4928u;
        // 0x1d492c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4930u;
label_1d4930:
    // 0x1d4930: 0x8c8317ec  lw          $v1, 0x17EC($a0)
    ctx->pc = 0x1d4930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6124)));
    // 0x1d4934: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d4934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d4938: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1d4938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d493c: 0x8c830604  lw          $v1, 0x604($a0)
    ctx->pc = 0x1d493cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1540)));
    // 0x1d4940: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4940u;
    {
        const bool branch_taken_0x1d4940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4940u;
        // 0x1d4944: 0x8ca40604  lw          $a0, 0x604($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4940) {
            ctx->pc = 0x1D4958u;
            goto label_1d4958;
        }
    }
    ctx->pc = 0x1D4948u;
    // 0x1d4948: 0x2482fff7  addiu       $v0, $a0, -0x9
    ctx->pc = 0x1d4948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967287));
    // 0x1d494c: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x1d494cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1d4950: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D4950u;
    {
        const bool branch_taken_0x1d4950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4950) {
            ctx->pc = 0x1D496Cu;
            goto label_1d496c;
        }
    }
    ctx->pc = 0x1D4958u;
label_1d4958:
    // 0x1d4958: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D4958u;
    {
        const bool branch_taken_0x1d4958 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4958u;
        // 0x1d495c: 0x2462fff7  addiu       $v0, $v1, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4958) {
            ctx->pc = 0x1D4974u;
            goto label_1d4974;
        }
    }
    ctx->pc = 0x1D4960u;
    // 0x1d4960: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x1d4960u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1d4964: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4964u;
    {
        const bool branch_taken_0x1d4964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4964) {
            ctx->pc = 0x1D4974u;
            goto label_1d4974;
        }
    }
    ctx->pc = 0x1D496Cu;
label_1d496c:
    // 0x1d496c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D496Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D496Cu;
        // 0x1d4970: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D496Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4974u;
label_1d4974:
    // 0x1d4974: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4974u;
        // 0x1d4978: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D497Cu;
    // 0x1d497c: 0x0  nop
    ctx->pc = 0x1d497cu;
    // NOP
    ctx->pc = 0x1d4980u;
}
