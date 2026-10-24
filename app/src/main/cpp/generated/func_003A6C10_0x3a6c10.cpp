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

// Function: func_003A6C10
// Address: 0x3a6c10 - 0x3a6c58
void func_003A6C10_0x3a6c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A6C10_0x3a6c10");
#endif

    switch (ctx->pc) {
        case 0x3a6c24u: goto label_3a6c24;
        default: break;
    }

    ctx->pc = 0x3a6c10u;

    // 0x3a6c10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a6c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a6c14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a6c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a6c18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a6c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a6c1c: 0xc0e9aaa  jal         func_3A6AA8
    ctx->pc = 0x3A6C1Cu;
    SET_GPR_U32(ctx, 31, 0x3A6C24u);
    ctx->pc = 0x3A6C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6C1Cu;
    // 0x3a6c20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6AA8u, 0x3A6C1Cu, 0x3A6C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6C24u;
label_3a6c24:
    // 0x3a6c24: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A6C24u;
    {
        const bool branch_taken_0x3a6c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6C24u;
        // 0x3a6c28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6c24) {
            ctx->pc = 0x3A6C48u;
            goto label_3a6c48;
        }
    }
    ctx->pc = 0x3A6C2Cu;
    // 0x3a6c2c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3a6c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3a6c30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a6c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a6c34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a6c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3a6c38: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3a6c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3a6c3c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3a6c3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a6c40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a6c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a6c44: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3a6c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3a6c48:
    // 0x3a6c48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a6c48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a6c4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a6c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6c50: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6C50u;
        // 0x3a6c54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6C58u;
}
