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

// Function: func_001FFE10
// Address: 0x1ffe10 - 0x1ffe60
void func_001FFE10_0x1ffe10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FFE10_0x1ffe10");
#endif

    switch (ctx->pc) {
        case 0x1ffe50u: goto label_1ffe50;
        default: break;
    }

    ctx->pc = 0x1ffe10u;

    // 0x1ffe10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ffe10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ffe14: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ffe14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffe18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ffe18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ffe1c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x1ffe1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ffe20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFE20u;
    {
        const bool branch_taken_0x1ffe20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE20u;
        // 0x1ffe24: 0x94a30000  lhu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffe20) {
            ctx->pc = 0x1FFE30u;
            goto label_1ffe30;
        }
    }
    ctx->pc = 0x1FFE28u;
    // 0x1ffe28: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1ffe28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ffe2c: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x1ffe2cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_1ffe30:
    // 0x1ffe30: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1ffe30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1ffe34: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x1ffe34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
    // 0x1ffe38: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x1ffe38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x1ffe3c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1ffe3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1ffe40: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFE40u;
    {
        const bool branch_taken_0x1ffe40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE40u;
        // 0x1ffe44: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffe40) {
            ctx->pc = 0x1FFE54u;
            goto label_1ffe54;
        }
    }
    ctx->pc = 0x1FFE48u;
    // 0x1ffe48: 0xc08003e  jal         func_2000F8
    ctx->pc = 0x1FFE48u;
    SET_GPR_U32(ctx, 31, 0x1FFE50u);
    ctx->pc = 0x1FFE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFE48u;
    // 0x1ffe4c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2000F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2000F8u, 0x1FFE48u, 0x1FFE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFE50u;
label_1ffe50:
    // 0x1ffe50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ffe50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ffe54:
    // 0x1ffe54: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE54u;
        // 0x1ffe58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFE5Cu;
    // 0x1ffe5c: 0x0  nop
    ctx->pc = 0x1ffe5cu;
    // NOP
    ctx->pc = 0x1ffe60u;
}
