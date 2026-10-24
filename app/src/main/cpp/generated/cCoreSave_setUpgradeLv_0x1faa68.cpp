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

// Function: cCoreSave_setUpgradeLv
// Address: 0x1faa68 - 0x1faab0
void cCoreSave_setUpgradeLv_0x1faa68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_setUpgradeLv_0x1faa68");
#endif

    ctx->pc = 0x1faa68u;

    // 0x1faa68: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x1faa68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1faa6c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1faa6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faa70: 0x1100000d  beqz        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FAA70u;
    {
        const bool branch_taken_0x1faa70 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA70u;
        // 0x1faa74: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faa70) {
            ctx->pc = 0x1FAAA8u;
            goto label_1faaa8;
        }
    }
    ctx->pc = 0x1FAA78u;
    // 0x1faa78: 0x28e4000a  slti        $a0, $a3, 0xA
    ctx->pc = 0x1faa78u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1faa7c: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x1faa7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1faa80: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x1faa80u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x1faa84: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x1faa84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1faa88: 0xc4380b  movn        $a3, $a2, $a0
    ctx->pc = 0x1faa88u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 6));
    // 0x1faa8c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1faa8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faa90: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1faa90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1faa94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1faa94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1faa98: 0x67182a  slt         $v1, $v1, $a3
    ctx->pc = 0x1faa98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1faa9c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1faa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1faaa0: 0x3380a  movz        $a3, $zero, $v1
    ctx->pc = 0x1faaa0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x1faaa4: 0xac470070  sw          $a3, 0x70($v0)
    ctx->pc = 0x1faaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 7));
label_1faaa8:
    // 0x1faaa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAAA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAAB0u;
}
