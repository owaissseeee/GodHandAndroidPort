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

// Function: func_002C7F88
// Address: 0x2c7f88 - 0x2c7fd0
void func_002C7F88_0x2c7f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C7F88_0x2c7f88");
#endif

    ctx->pc = 0x2c7f88u;

    // 0x2c7f88: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C7F88u;
    {
        const bool branch_taken_0x2c7f88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F88u;
        // 0x2c7f8c: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7f88) {
            ctx->pc = 0x2C7FC8u;
            goto label_2c7fc8;
        }
    }
    ctx->pc = 0x2C7F90u;
    // 0x2c7f90: 0x90850001  lbu         $a1, 0x1($a0)
    ctx->pc = 0x2c7f90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2c7f94: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2c7f94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c7f98: 0x34c64553  ori         $a2, $a2, 0x4553
    ctx->pc = 0x2c7f98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)17747);
    // 0x2c7f9c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2c7f9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2c7fa0: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x2c7fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x2c7fa4: 0x90840003  lbu         $a0, 0x3($a0)
    ctx->pc = 0x2c7fa4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x2c7fa8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2c7fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2c7fac: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2c7facu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2c7fb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c7fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c7fb4: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x2c7fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x2c7fb8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2c7fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2c7fbc: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x2c7fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x2c7fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7FC0u;
        // 0x2c7fc4: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7FC8u;
label_2c7fc8:
    // 0x2c7fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7FC8u;
        // 0x2c7fcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7FD0u;
}
