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

// Function: func_0017EE40
// Address: 0x17ee40 - 0x17ee78
void func_0017EE40_0x17ee40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017EE40_0x17ee40");
#endif

    switch (ctx->pc) {
        case 0x17ee54u: goto label_17ee54;
        default: break;
    }

    ctx->pc = 0x17ee40u;

    // 0x17ee40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17ee40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17ee44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17ee44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17ee48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ee48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ee4c: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x17EE4Cu;
    SET_GPR_U32(ctx, 31, 0x17EE54u);
    ctx->pc = 0x17EE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EE4Cu;
    // 0x17ee50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x17EE4Cu, 0x17EE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EE54u;
label_17ee54:
    // 0x17ee54: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x17ee54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x17ee58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17ee58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ee5c: 0x24632308  addiu       $v1, $v1, 0x2308
    ctx->pc = 0x17ee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8968));
    // 0x17ee60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ee60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ee64: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x17ee64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x17ee68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17ee68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ee6c: 0x3e00008  jr          $ra
    ctx->pc = 0x17EE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE6Cu;
        // 0x17ee70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EE74u;
    // 0x17ee74: 0x0  nop
    ctx->pc = 0x17ee74u;
    // NOP
    ctx->pc = 0x17ee78u;
}
