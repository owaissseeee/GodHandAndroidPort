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

// Function: func_00385A20
// Address: 0x385a20 - 0x385a68
void func_00385A20_0x385a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00385A20_0x385a20");
#endif

    switch (ctx->pc) {
        case 0x385a3cu: goto label_385a3c;
        case 0x385a50u: goto label_385a50;
        default: break;
    }

    ctx->pc = 0x385a20u;

    // 0x385a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x385a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x385a24: 0x24850484  addiu       $a1, $a0, 0x484
    ctx->pc = 0x385a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1156));
    // 0x385a28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x385a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x385a2c: 0x24900470  addiu       $s0, $a0, 0x470
    ctx->pc = 0x385a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1136));
    // 0x385a30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x385a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x385a34: 0xc0e03a2  jal         func_380E88
    ctx->pc = 0x385A34u;
    SET_GPR_U32(ctx, 31, 0x385A3Cu);
    ctx->pc = 0x385A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385A34u;
    // 0x385a38: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380E88u, 0x385A34u, 0x385A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385A3Cu;
label_385a3c:
    // 0x385a3c: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x385a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x385a40: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x385A40u;
    {
        const bool branch_taken_0x385a40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x385a40) {
            ctx->pc = 0x385A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385A40u;
            // 0x385a44: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385A58u;
            goto label_385a58;
        }
    }
    ctx->pc = 0x385A48u;
    // 0x385a48: 0xc0c7240  jal         func_31C900
    ctx->pc = 0x385A48u;
    SET_GPR_U32(ctx, 31, 0x385A50u);
    ctx->pc = 0x31C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C900u, 0x385A48u, 0x385A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385A50u;
label_385a50:
    // 0x385a50: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x385a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x385a54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x385a54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_385a58:
    // 0x385a58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x385a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x385a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x385A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A5Cu;
        // 0x385a60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385A64u;
    // 0x385a64: 0x0  nop
    ctx->pc = 0x385a64u;
    // NOP
    ctx->pc = 0x385a68u;
}
