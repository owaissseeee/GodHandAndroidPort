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

// Function: func_00201250
// Address: 0x201250 - 0x201290
void func_00201250_0x201250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00201250_0x201250");
#endif

    switch (ctx->pc) {
        case 0x201260u: goto label_201260;
        default: break;
    }

    ctx->pc = 0x201250u;

    // 0x201250: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x201250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x201254: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x201254u;
    {
        const bool branch_taken_0x201254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201254u;
        // 0x201258: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201254) {
            ctx->pc = 0x201280u;
            goto label_201280;
        }
    }
    ctx->pc = 0x20125Cu;
    // 0x20125c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x20125cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_201260:
    // 0x201260: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x201260u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x201264: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x201264u;
    {
        const bool branch_taken_0x201264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201264u;
        // 0x201268: 0x24020088  addiu       $v0, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201264) {
            ctx->pc = 0x201288u;
            goto label_201288;
        }
    }
    ctx->pc = 0x20126Cu;
    // 0x20126c: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x20126cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x201270: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x201270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201274: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x201274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x201278: 0x1060fff9  beqz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x201278u;
    {
        const bool branch_taken_0x201278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201278u;
        // 0x20127c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201278) {
            ctx->pc = 0x201260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201260;
        }
    }
    ctx->pc = 0x201280u;
label_201280:
    // 0x201280: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201284: 0xac821108  sw          $v0, 0x1108($a0)
    ctx->pc = 0x201284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4360), GPR_U32(ctx, 2));
label_201288:
    // 0x201288: 0x3e00008  jr          $ra
    ctx->pc = 0x201288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201290u;
}
