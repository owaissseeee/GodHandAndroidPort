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

// Function: cSndBgmNode_Release
// Address: 0x2ccb10 - 0x2ccb58
void cSndBgmNode_Release_0x2ccb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndBgmNode_Release_0x2ccb10");
#endif

    switch (ctx->pc) {
        case 0x2ccb24u: goto label_2ccb24;
        case 0x2ccb34u: goto label_2ccb34;
        case 0x2ccb3cu: goto label_2ccb3c;
        case 0x2ccb44u: goto label_2ccb44;
        default: break;
    }

    ctx->pc = 0x2ccb10u;

    // 0x2ccb10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ccb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ccb14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ccb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ccb18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ccb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ccb1c: 0xc0b315a  jal         func_2CC568
    ctx->pc = 0x2CCB1Cu;
    SET_GPR_U32(ctx, 31, 0x2CCB24u);
    ctx->pc = 0x2CCB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCB1Cu;
    // 0x2ccb20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC568u, 0x2CCB1Cu, 0x2CCB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCB24u;
label_2ccb24:
    // 0x2ccb24: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CCB24u;
    {
        const bool branch_taken_0x2ccb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccb24) {
            ctx->pc = 0x2CCB28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCB24u;
            // 0x2ccb28: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCB48u;
            goto label_2ccb48;
        }
    }
    ctx->pc = 0x2CCB2Cu;
    // 0x2ccb2c: 0xc0dcd0c  jal         func_373430
    ctx->pc = 0x2CCB2Cu;
    SET_GPR_U32(ctx, 31, 0x2CCB34u);
    ctx->pc = 0x2CCB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCB2Cu;
    // 0x2ccb30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373430u, 0x2CCB2Cu, 0x2CCB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCB34u;
label_2ccb34:
    // 0x2ccb34: 0xc0dccf2  jal         func_3733C8
    ctx->pc = 0x2CCB34u;
    SET_GPR_U32(ctx, 31, 0x2CCB3Cu);
    ctx->pc = 0x2CCB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCB34u;
    // 0x2ccb38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3733C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3733C8u, 0x2CCB34u, 0x2CCB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCB3Cu;
label_2ccb3c:
    // 0x2ccb3c: 0xc0b317a  jal         func_2CC5E8
    ctx->pc = 0x2CCB3Cu;
    SET_GPR_U32(ctx, 31, 0x2CCB44u);
    ctx->pc = 0x2CCB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCB3Cu;
    // 0x2ccb40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC5E8u, 0x2CCB3Cu, 0x2CCB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCB44u;
label_2ccb44:
    // 0x2ccb44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ccb44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ccb48:
    // 0x2ccb48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ccb48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ccb4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CCB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB4Cu;
        // 0x2ccb50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CCB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CCB54u;
    // 0x2ccb54: 0x0  nop
    ctx->pc = 0x2ccb54u;
    // NOP
    ctx->pc = 0x2ccb58u;
}
