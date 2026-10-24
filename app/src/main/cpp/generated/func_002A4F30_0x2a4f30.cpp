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

// Function: func_002A4F30
// Address: 0x2a4f30 - 0x2a4fa0
void func_002A4F30_0x2a4f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A4F30_0x2a4f30");
#endif

    ctx->pc = 0x2a4f30u;

    // 0x2a4f30: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2a4f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2a4f34: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2a4f34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f38: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2a4f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2a4f3c: 0x1023021  addu        $a2, $t0, $v0
    ctx->pc = 0x2a4f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2a4f40: 0x8cc92054  lw          $t1, 0x2054($a2)
    ctx->pc = 0x2a4f40u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8276)));
    // 0x2a4f44: 0x8cc32058  lw          $v1, 0x2058($a2)
    ctx->pc = 0x2a4f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8280)));
    // 0x2a4f48: 0x1253821  addu        $a3, $t1, $a1
    ctx->pc = 0x2a4f48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x2a4f4c: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x2a4f4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2a4f50: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4F50u;
    {
        const bool branch_taken_0x2a4f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4f50) {
            ctx->pc = 0x2A4F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4F50u;
            // 0x2a4f54: 0xacc72054  sw          $a3, 0x2054($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 8276), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4F64u;
            goto label_2a4f64;
        }
    }
    ctx->pc = 0x2A4F58u;
    // 0x2a4f58: 0xacc32054  sw          $v1, 0x2054($a2)
    ctx->pc = 0x2a4f58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8276), GPR_U32(ctx, 3));
    // 0x2a4f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4F5Cu;
        // 0x2a4f60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4F64u;
label_2a4f64:
    // 0x2a4f64: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x2a4f64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x2a4f68: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2a4f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2a4f6c: 0x8cc4208c  lw          $a0, 0x208C($a2)
    ctx->pc = 0x2a4f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8332)));
    // 0x2a4f70: 0x8ca276b0  lw          $v0, 0x76B0($a1)
    ctx->pc = 0x2a4f70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7476B0u));
    // 0x2a4f74: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x2a4f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x2a4f78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a4f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a4f7c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2a4f7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a4f80: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2a4f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2a4f84: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2a4f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2a4f88: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x2a4f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2a4f8c: 0x82202b  sltu        $a0, $a0, $v0
    ctx->pc = 0x2a4f8cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2a4f90: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A4F90u;
    {
        const bool branch_taken_0x2a4f90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4f90) {
            ctx->pc = 0x2A4F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4F90u;
            // 0x2a4f94: 0xacc2208c  sw          $v0, 0x208C($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 8332), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4F98u;
            goto label_2a4f98;
        }
    }
    ctx->pc = 0x2A4F98u;
label_2a4f98:
    // 0x2a4f98: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4F98u;
        // 0x2a4f9c: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4FA0u;
}
