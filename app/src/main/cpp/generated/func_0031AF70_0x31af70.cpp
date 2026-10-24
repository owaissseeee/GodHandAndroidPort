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

// Function: func_0031AF70
// Address: 0x31af70 - 0x31afa0
void func_0031AF70_0x31af70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031AF70_0x31af70");
#endif

    ctx->pc = 0x31af70u;

    // 0x31af70: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x31af70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x31af74: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31af74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x31af78: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x31af78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31af7c: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x31af7cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x31af80: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31AF80u;
    {
        const bool branch_taken_0x31af80 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x31AF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF80u;
        // 0x31af84: 0x2882ffc1  slti        $v0, $a0, -0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967233) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31af80) {
            ctx->pc = 0x31AF90u;
            goto label_31af90;
        }
    }
    ctx->pc = 0x31AF88u;
    // 0x31af88: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x31af88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x31af8c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x31af8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_31af90:
    // 0x31af90: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x31af90u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x31af94: 0x3e00008  jr          $ra
    ctx->pc = 0x31AF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF94u;
        // 0x31af98: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AF9Cu;
    // 0x31af9c: 0x0  nop
    ctx->pc = 0x31af9cu;
    // NOP
    ctx->pc = 0x31afa0u;
}
