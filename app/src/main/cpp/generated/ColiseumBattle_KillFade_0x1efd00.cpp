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

// Function: ColiseumBattle_KillFade
// Address: 0x1efd00 - 0x1efd50
void ColiseumBattle_KillFade_0x1efd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ColiseumBattle_KillFade_0x1efd00");
#endif

    switch (ctx->pc) {
        case 0x1efd30u: goto label_1efd30;
        default: break;
    }

    ctx->pc = 0x1efd00u;

    // 0x1efd00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1efd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1efd04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1efd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1efd08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1efd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1efd0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1efd0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efd10: 0x9e020054  lwu         $v0, 0x54($s0)
    ctx->pc = 0x1efd10u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1efd14: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1efd14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1efd18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1efd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1efd1c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EFD1Cu;
    {
        const bool branch_taken_0x1efd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efd1c) {
            ctx->pc = 0x1EFD20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EFD1Cu;
            // 0x1efd20: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFD44u;
            goto label_1efd44;
        }
    }
    ctx->pc = 0x1EFD24u;
    // 0x1efd24: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x1efd24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x1efd28: 0xc0c1db8  jal         func_3076E0
    ctx->pc = 0x1EFD28u;
    SET_GPR_U32(ctx, 31, 0x1EFD30u);
    ctx->pc = 0x1EFD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFD28u;
    // 0x1efd2c: 0x24847470  addiu       $a0, $a0, 0x7470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3076E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3076E0u, 0x1EFD28u, 0x1EFD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFD30u;
label_1efd30:
    // 0x1efd30: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x1efd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1efd34: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1efd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1efd38: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1efd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1efd3c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x1efd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x1efd40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1efd40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1efd44:
    // 0x1efd44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1efd44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1efd48: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD48u;
        // 0x1efd4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFD48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFD50u;
}
