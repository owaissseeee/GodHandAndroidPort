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

// Function: cCoreSave_setComboMax
// Address: 0x1fb868 - 0x1fb8b8
void cCoreSave_setComboMax_0x1fb868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_setComboMax_0x1fb868");
#endif

    ctx->pc = 0x1fb868u;

    // 0x1fb868: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fb868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fb86c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FB86Cu;
    {
        const bool branch_taken_0x1fb86c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB86Cu;
        // 0x1fb870: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb86c) {
            ctx->pc = 0x1FB8A8u;
            goto label_1fb8a8;
        }
    }
    ctx->pc = 0x1FB874u;
    // 0x1fb874: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x1fb874u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1fb878: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FB878u;
    {
        const bool branch_taken_0x1fb878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB878u;
        // 0x1fb87c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb878) {
            ctx->pc = 0x1FB8A8u;
            goto label_1fb8a8;
        }
    }
    ctx->pc = 0x1FB880u;
    // 0x1fb880: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x1fb880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1fb884: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x1fb884u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1fb888: 0xa33818  mult        $a3, $a1, $v1
    ctx->pc = 0x1fb888u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1fb88c: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x1fb88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1fb890: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fb890u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb894: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1fb894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1fb898: 0xc2380b  movn        $a3, $a2, $v0
    ctx->pc = 0x1fb898u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 6));
    // 0x1fb89c: 0x28e20007  slti        $v0, $a3, 0x7
    ctx->pc = 0x1fb89cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1fb8a0: 0x82380a  movz        $a3, $a0, $v0
    ctx->pc = 0x1fb8a0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x1fb8a4: 0xac6701d0  sw          $a3, 0x1D0($v1)
    ctx->pc = 0x1fb8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 7));
label_1fb8a8:
    // 0x1fb8a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB8A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB8B0u;
    // 0x1fb8b0: 0x0  nop
    ctx->pc = 0x1fb8b0u;
    // NOP
    // 0x1fb8b4: 0x0  nop
    ctx->pc = 0x1fb8b4u;
    // NOP
    ctx->pc = 0x1fb8b8u;
}
