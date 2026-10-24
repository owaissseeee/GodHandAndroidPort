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

// Function: func_002C9008
// Address: 0x2c9008 - 0x2c9060
void func_002C9008_0x2c9008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C9008_0x2c9008");
#endif

    ctx->pc = 0x2c9008u;

    // 0x2c9008: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2c9008u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c900c: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C900Cu;
    {
        const bool branch_taken_0x2c900c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c900c) {
            ctx->pc = 0x2C9034u;
            goto label_2c9034;
        }
    }
    ctx->pc = 0x2C9014u;
    // 0x2c9014: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2c9014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2c9018: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C9018u;
    {
        const bool branch_taken_0x2c9018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9018u;
        // 0x2c901c: 0x45102a  slt         $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9018) {
            ctx->pc = 0x2C9034u;
            goto label_2c9034;
        }
    }
    ctx->pc = 0x2C9020u;
    // 0x2c9020: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9020u;
    {
        const bool branch_taken_0x2c9020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9020) {
            ctx->pc = 0x2C9034u;
            goto label_2c9034;
        }
    }
    ctx->pc = 0x2C9028u;
    // 0x2c9028: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2c9028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2c902c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C902Cu;
    {
        const bool branch_taken_0x2c902c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C902Cu;
        // 0x2c9030: 0xa2102b  sltu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c902c) {
            ctx->pc = 0x2C903Cu;
            goto label_2c903c;
        }
    }
    ctx->pc = 0x2C9034u;
label_2c9034:
    // 0x2c9034: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9034u;
        // 0x2c9038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C903Cu;
label_2c903c:
    // 0x2c903c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C903Cu;
    {
        const bool branch_taken_0x2c903c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C903Cu;
        // 0x2c9040: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c903c) {
            ctx->pc = 0x2C9058u;
            goto label_2c9058;
        }
    }
    ctx->pc = 0x2C9044u;
    // 0x2c9044: 0x80620014  lb          $v0, 0x14($v1)
    ctx->pc = 0x2c9044u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2c9048: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x2c9048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2c904c: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x2c904cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c9050: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9050u;
        // 0x2c9054: 0x661021  addu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9058u;
label_2c9058:
    // 0x2c9058: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9058u;
        // 0x2c905c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9060u;
}
