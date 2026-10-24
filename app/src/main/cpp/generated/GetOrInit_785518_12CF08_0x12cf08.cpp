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

// Function: GetOrInit_785518_12CF08
// Address: 0x12cf08 - 0x12cf70
void GetOrInit_785518_12CF08_0x12cf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInit_785518_12CF08_0x12cf08");
#endif

    switch (ctx->pc) {
        case 0x12cf2cu: goto label_12cf2c;
        case 0x12cf44u: goto label_12cf44;
        default: break;
    }

    ctx->pc = 0x12cf08u;

    // 0x12cf08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12cf08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12cf0c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x12cf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x12cf10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12cf10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12cf14: 0x8c625518  lw          $v0, 0x5518($v1)
    ctx->pc = 0x12cf14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785518u));
    // 0x12cf18: 0x24705518  addiu       $s0, $v1, 0x5518
    ctx->pc = 0x12cf18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21784));
    // 0x12cf1c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12CF1Cu;
    {
        const bool branch_taken_0x12cf1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF1Cu;
        // 0x12cf20: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf1c) {
            ctx->pc = 0x12CF44u;
            goto label_12cf44;
        }
    }
    ctx->pc = 0x12CF24u;
    // 0x12cf24: 0xc0400ca  jal         func_100328
    ctx->pc = 0x12CF24u;
    SET_GPR_U32(ctx, 31, 0x12CF2Cu);
    ctx->pc = 0x100328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100328u, 0x12CF24u, 0x12CF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CF2Cu;
label_12cf2c:
    // 0x12cf2c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x12cf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x12cf30: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x12cf30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x12cf34: 0x24a5d2c0  addiu       $a1, $a1, -0x2D40
    ctx->pc = 0x12cf34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955712));
    // 0x12cf38: 0x24c654c8  addiu       $a2, $a2, 0x54C8
    ctx->pc = 0x12cf38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21704));
    // 0x12cf3c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x12CF3Cu;
    SET_GPR_U32(ctx, 31, 0x12CF44u);
    ctx->pc = 0x12CF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CF3Cu;
    // 0x12cf40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x12CF3Cu, 0x12CF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CF44u;
label_12cf44:
    // 0x12cf44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12cf44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12cf48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12cf4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12cf4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12cf50: 0x3e00008  jr          $ra
    ctx->pc = 0x12CF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF50u;
        // 0x12cf54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CF58u;
    // 0x12cf58: 0xac8215f4  sw          $v0, 0x15F4($a0)
    ctx->pc = 0x12cf58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5620), GPR_U32(ctx, 2));
    // 0x12cf5c: 0x0  nop
    ctx->pc = 0x12cf5cu;
    // NOP
    // 0x12cf60: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x12cf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x12cf64: 0x0  nop
    ctx->pc = 0x12cf64u;
    // NOP
    // 0x12cf68: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x12cf68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12cf6c: 0x0  nop
    ctx->pc = 0x12cf6cu;
    // NOP
    ctx->pc = 0x12cf70u;
}
