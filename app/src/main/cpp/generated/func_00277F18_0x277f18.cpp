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

// Function: func_00277F18
// Address: 0x277f18 - 0x277f78
void func_00277F18_0x277f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00277F18_0x277f18");
#endif

    switch (ctx->pc) {
        case 0x277f44u: goto label_277f44;
        default: break;
    }

    ctx->pc = 0x277f18u;

    // 0x277f18: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x277f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x277f1c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x277f1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x277f20: 0x8c437a80  lw          $v1, 0x7A80($v0)
    ctx->pc = 0x277f20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A80u));
    // 0x277f24: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x277f24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x277f28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x277f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x277f2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x277f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x277f30: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x277f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x277f34: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x277F34u;
    {
        const bool branch_taken_0x277f34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x277F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277F34u;
        // 0x277f38: 0x24507a80  addiu       $s0, $v0, 0x7A80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 31360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277f34) {
            ctx->pc = 0x277F60u;
            goto label_277f60;
        }
    }
    ctx->pc = 0x277F3Cu;
    // 0x277f3c: 0xc0a9d12  jal         func_2A7448
    ctx->pc = 0x277F3Cu;
    SET_GPR_U32(ctx, 31, 0x277F44u);
    ctx->pc = 0x2A7448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7448u, 0x277F3Cu, 0x277F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277F44u;
label_277f44:
    // 0x277f44: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x277F44u;
    {
        const bool branch_taken_0x277f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x277f44) {
            ctx->pc = 0x277F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277F44u;
            // 0x277f48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x277F64u;
            goto label_277f64;
        }
    }
    ctx->pc = 0x277F4Cu;
    // 0x277f4c: 0x8e02ffac  lw          $v0, -0x54($s0)
    ctx->pc = 0x277f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967212)));
    // 0x277f50: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x277f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x277f54: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x277f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x277f58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x277F58u;
    {
        const bool branch_taken_0x277f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277F58u;
        // 0x277f5c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x277f58) {
            ctx->pc = 0x277F64u;
            goto label_277f64;
        }
    }
    ctx->pc = 0x277F60u;
label_277f60:
    // 0x277f60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_277f64:
    // 0x277f64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x277f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277f68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x277f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x277F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277F6Cu;
        // 0x277f70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277F74u;
    // 0x277f74: 0x0  nop
    ctx->pc = 0x277f74u;
    // NOP
    ctx->pc = 0x277f78u;
}
