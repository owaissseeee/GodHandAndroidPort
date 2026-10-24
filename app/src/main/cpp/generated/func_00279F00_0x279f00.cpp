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

// Function: func_00279F00
// Address: 0x279f00 - 0x279f60
void func_00279F00_0x279f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00279F00_0x279f00");
#endif

    switch (ctx->pc) {
        case 0x279f2cu: goto label_279f2c;
        default: break;
    }

    ctx->pc = 0x279f00u;

    // 0x279f00: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x279f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x279f04: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x279f04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x279f08: 0x8c437a80  lw          $v1, 0x7A80($v0)
    ctx->pc = 0x279f08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A80u));
    // 0x279f0c: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x279f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x279f10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x279f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x279f14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x279f18: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x279f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x279f1c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x279F1Cu;
    {
        const bool branch_taken_0x279f1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x279F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F1Cu;
        // 0x279f20: 0x24507a80  addiu       $s0, $v0, 0x7A80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 31360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279f1c) {
            ctx->pc = 0x279F48u;
            goto label_279f48;
        }
    }
    ctx->pc = 0x279F24u;
    // 0x279f24: 0xc0a9d12  jal         func_2A7448
    ctx->pc = 0x279F24u;
    SET_GPR_U32(ctx, 31, 0x279F2Cu);
    ctx->pc = 0x2A7448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7448u, 0x279F24u, 0x279F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279F2Cu;
label_279f2c:
    // 0x279f2c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x279F2Cu;
    {
        const bool branch_taken_0x279f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x279f2c) {
            ctx->pc = 0x279F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279F2Cu;
            // 0x279f30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279F4Cu;
            goto label_279f4c;
        }
    }
    ctx->pc = 0x279F34u;
    // 0x279f34: 0x8e02ffac  lw          $v0, -0x54($s0)
    ctx->pc = 0x279f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967212)));
    // 0x279f38: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x279f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x279f3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x279f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x279f40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x279F40u;
    {
        const bool branch_taken_0x279f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F40u;
        // 0x279f44: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x279f40) {
            ctx->pc = 0x279F4Cu;
            goto label_279f4c;
        }
    }
    ctx->pc = 0x279F48u;
label_279f48:
    // 0x279f48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x279f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_279f4c:
    // 0x279f4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x279f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279f50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279f54: 0x3e00008  jr          $ra
    ctx->pc = 0x279F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F54u;
        // 0x279f58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279F5Cu;
    // 0x279f5c: 0x0  nop
    ctx->pc = 0x279f5cu;
    // NOP
    ctx->pc = 0x279f60u;
}
