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

// Function: scePadGetReqState
// Address: 0x397ed0 - 0x397f38
void scePadGetReqState_0x397ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scePadGetReqState_0x397ed0");
#endif

    switch (ctx->pc) {
        case 0x397f18u: goto label_397f18;
        default: break;
    }

    ctx->pc = 0x397ed0u;

    // 0x397ed0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x397ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397ed4: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x397ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x397ed8: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x397ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x397edc: 0x70c31818  mult1       $v1, $a2, $v1
    ctx->pc = 0x397edcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x397ee0: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x397ee0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x397ee4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x397ee4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x397ee8: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x397ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x397eec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x397eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x397ef0: 0x2442c110  addiu       $v0, $v0, -0x3EF0
    ctx->pc = 0x397ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951184));
    // 0x397ef4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x397ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x397ef8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x397ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x397efc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x397efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x397f00: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x397F00u;
    {
        const bool branch_taken_0x397f00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x397F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397F00u;
        // 0x397f04: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397f00) {
            ctx->pc = 0x397F10u;
            goto label_397f10;
        }
    }
    ctx->pc = 0x397F08u;
    // 0x397f08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x397F08u;
    {
        const bool branch_taken_0x397f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397F08u;
        // 0x397f0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397f08) {
            ctx->pc = 0x397F1Cu;
            goto label_397f1c;
        }
    }
    ctx->pc = 0x397F10u;
label_397f10:
    // 0x397f10: 0xc0e5ef2  jal         func_397BC8
    ctx->pc = 0x397F10u;
    SET_GPR_U32(ctx, 31, 0x397F18u);
    ctx->pc = 0x397F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397F10u;
    // 0x397f14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397BC8u, 0x397F10u, 0x397F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397F18u;
label_397f18:
    // 0x397f18: 0x90420071  lbu         $v0, 0x71($v0)
    ctx->pc = 0x397f18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 113)));
label_397f1c:
    // 0x397f1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x397f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397f20: 0x3e00008  jr          $ra
    ctx->pc = 0x397F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397F20u;
        // 0x397f24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397F28u;
    // 0x397f28: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x397f28u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x397f2c: 0x0  nop
    ctx->pc = 0x397f2cu;
    // NOP
    // 0x397f30: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x397f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x397f34: 0x0  nop
    ctx->pc = 0x397f34u;
    // NOP
    ctx->pc = 0x397f38u;
}
