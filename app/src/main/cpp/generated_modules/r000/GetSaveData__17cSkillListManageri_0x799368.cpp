#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r000_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r000
{
// Function: GetSaveData__17cSkillListManageri
// Address: 0x799368 - 0x7993c0
void GetSaveData__17cSkillListManageri_0x799368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSaveData__17cSkillListManageri_0x799368");
#endif

    ctx->pc = 0x799368u;

    // 0x799368: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x799368u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79936c: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x79936Cu;
    {
        const bool branch_taken_0x79936c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x79936c) {
            ctx->pc = 0x799394u;
            goto label_799394;
        }
    }
    ctx->pc = 0x799374u;
    // 0x799374: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x799374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x799378: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x799378u;
    {
        const bool branch_taken_0x799378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799378u;
        // 0x79937c: 0x45102a  slt         $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799378) {
            ctx->pc = 0x799394u;
            goto label_799394;
        }
    }
    ctx->pc = 0x799380u;
    // 0x799380: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799380u;
    {
        const bool branch_taken_0x799380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799380) {
            ctx->pc = 0x799394u;
            goto label_799394;
        }
    }
    ctx->pc = 0x799388u;
    // 0x799388: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x799388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x79938c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79938Cu;
    {
        const bool branch_taken_0x79938c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79938Cu;
        // 0x799390: 0xa2102b  sltu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79938c) {
            ctx->pc = 0x79939Cu;
            goto label_79939c;
        }
    }
    ctx->pc = 0x799394u;
label_799394:
    // 0x799394: 0x3e00008  jr          $ra
    ctx->pc = 0x799394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799394u;
        // 0x799398: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79939Cu;
label_79939c:
    // 0x79939c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79939Cu;
    {
        const bool branch_taken_0x79939c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79939Cu;
        // 0x7993a0: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79939c) {
            ctx->pc = 0x7993B8u;
            goto label_7993b8;
        }
    }
    ctx->pc = 0x7993A4u;
    // 0x7993a4: 0x80620014  lb          $v0, 0x14($v1)
    ctx->pc = 0x7993a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x7993a8: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x7993a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x7993ac: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x7993acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x7993b0: 0x3e00008  jr          $ra
    ctx->pc = 0x7993B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7993B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993B0u;
        // 0x7993b4: 0x661021  addu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7993B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7993B8u;
label_7993b8:
    // 0x7993b8: 0x3e00008  jr          $ra
    ctx->pc = 0x7993B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7993BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993B8u;
        // 0x7993bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7993B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7993C0u;
}
} // namespace gh_r000
