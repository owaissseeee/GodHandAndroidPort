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

// Function: func_0019AA20
// Address: 0x19aa20 - 0x19aa80
void func_0019AA20_0x19aa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019AA20_0x19aa20");
#endif

    switch (ctx->pc) {
        case 0x19aa5cu: goto label_19aa5c;
        case 0x19aa6cu: goto label_19aa6c;
        default: break;
    }

    ctx->pc = 0x19aa20u;

    // 0x19aa20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19aa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19aa24: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19aa28: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19aa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19aa2c: 0x24425630  addiu       $v0, $v0, 0x5630
    ctx->pc = 0x19aa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22064));
    // 0x19aa30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19aa30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19aa34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19aa34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aa38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19aa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19aa3c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x19aa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x19aa40: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x19aa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x19aa44: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19AA44u;
    {
        const bool branch_taken_0x19aa44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA44u;
        // 0x19aa48: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa44) {
            ctx->pc = 0x19AA60u;
            goto label_19aa60;
        }
    }
    ctx->pc = 0x19AA4Cu;
    // 0x19aa4c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19aa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19aa50: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x19aa50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aa54: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x19AA54u;
    SET_GPR_U32(ctx, 31, 0x19AA5Cu);
    ctx->pc = 0x19AA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AA54u;
    // 0x19aa58: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x19AA54u, 0x19AA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AA5Cu;
label_19aa5c:
    // 0x19aa5c: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x19aa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_19aa60:
    // 0x19aa60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19aa60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aa64: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x19AA64u;
    SET_GPR_U32(ctx, 31, 0x19AA6Cu);
    ctx->pc = 0x19AA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AA64u;
    // 0x19aa68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x19AA64u, 0x19AA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AA6Cu;
label_19aa6c:
    // 0x19aa6c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19aa6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19aa70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19aa70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19aa74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19aa74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19aa78: 0x3e00008  jr          $ra
    ctx->pc = 0x19AA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA78u;
        // 0x19aa7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AA80u;
}
