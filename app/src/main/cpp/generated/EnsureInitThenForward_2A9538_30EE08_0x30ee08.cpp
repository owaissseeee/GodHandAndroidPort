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

// Function: EnsureInitThenForward_2A9538_30EE08
// Address: 0x30ee08 - 0x30ee68
void EnsureInitThenForward_2A9538_30EE08_0x30ee08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnsureInitThenForward_2A9538_30EE08_0x30ee08");
#endif

    switch (ctx->pc) {
        case 0x30ee3cu: goto label_30ee3c;
        case 0x30ee4cu: goto label_30ee4c;
        default: break;
    }

    ctx->pc = 0x30ee08u;

    // 0x30ee08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30ee08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30ee0c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x30ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x30ee10: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x30ee10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x30ee14: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30ee14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30ee18: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x30ee18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ee1c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x30ee1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x30ee20: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30ee20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ee24: 0x90433cfc  lbu         $v1, 0x3CFC($v0)
    ctx->pc = 0x30ee24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3C3CFCu));
    // 0x30ee28: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30ee28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ee2c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30EE2Cu;
    {
        const bool branch_taken_0x30ee2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EE2Cu;
        // 0x30ee30: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ee2c) {
            ctx->pc = 0x30EE3Cu;
            goto label_30ee3c;
        }
    }
    ctx->pc = 0x30EE34u;
    // 0x30ee34: 0xc0c3b3e  jal         func_30ECF8
    ctx->pc = 0x30EE34u;
    SET_GPR_U32(ctx, 31, 0x30EE3Cu);
    ctx->pc = 0x30EE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EE34u;
    // 0x30ee38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30ECF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30ECF8u, 0x30EE34u, 0x30EE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EE3Cu;
label_30ee3c:
    // 0x30ee3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30ee3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ee40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x30ee40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ee44: 0xc0aa54e  jal         func_2A9538
    ctx->pc = 0x30EE44u;
    SET_GPR_U32(ctx, 31, 0x30EE4Cu);
    ctx->pc = 0x30EE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EE44u;
    // 0x30ee48: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9538u, 0x30EE44u, 0x30EE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EE4Cu;
label_30ee4c:
    // 0x30ee4c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x30ee4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30ee50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30ee50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30ee54: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x30ee54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30ee58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30ee58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ee5c: 0x3e00008  jr          $ra
    ctx->pc = 0x30EE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EE5Cu;
        // 0x30ee60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30EE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30EE64u;
    // 0x30ee64: 0x0  nop
    ctx->pc = 0x30ee64u;
    // NOP
    ctx->pc = 0x30ee68u;
}
