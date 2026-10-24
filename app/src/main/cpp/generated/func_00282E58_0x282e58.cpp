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

// Function: func_00282E58
// Address: 0x282e58 - 0x282eb8
void func_00282E58_0x282e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00282E58_0x282e58");
#endif

    switch (ctx->pc) {
        case 0x282e84u: goto label_282e84;
        default: break;
    }

    ctx->pc = 0x282e58u;

    // 0x282e58: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x282e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x282e5c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x282e5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x282e60: 0x8c437a80  lw          $v1, 0x7A80($v0)
    ctx->pc = 0x282e60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A80u));
    // 0x282e64: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x282e64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x282e68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x282e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x282e6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x282e70: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x282e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x282e74: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x282E74u;
    {
        const bool branch_taken_0x282e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x282E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282E74u;
        // 0x282e78: 0x24507a80  addiu       $s0, $v0, 0x7A80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 31360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282e74) {
            ctx->pc = 0x282EA0u;
            goto label_282ea0;
        }
    }
    ctx->pc = 0x282E7Cu;
    // 0x282e7c: 0xc0a9d12  jal         func_2A7448
    ctx->pc = 0x282E7Cu;
    SET_GPR_U32(ctx, 31, 0x282E84u);
    ctx->pc = 0x2A7448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7448u, 0x282E7Cu, 0x282E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282E84u;
label_282e84:
    // 0x282e84: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x282E84u;
    {
        const bool branch_taken_0x282e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282e84) {
            ctx->pc = 0x282E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282E84u;
            // 0x282e88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282EA4u;
            goto label_282ea4;
        }
    }
    ctx->pc = 0x282E8Cu;
    // 0x282e8c: 0x8e02ffac  lw          $v0, -0x54($s0)
    ctx->pc = 0x282e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967212)));
    // 0x282e90: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x282e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x282e94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x282e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x282e98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x282E98u;
    {
        const bool branch_taken_0x282e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282E98u;
        // 0x282e9c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282e98) {
            ctx->pc = 0x282EA4u;
            goto label_282ea4;
        }
    }
    ctx->pc = 0x282EA0u;
label_282ea0:
    // 0x282ea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x282ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_282ea4:
    // 0x282ea4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x282ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282ea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x282ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282eac: 0x3e00008  jr          $ra
    ctx->pc = 0x282EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282EACu;
        // 0x282eb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282EB4u;
    // 0x282eb4: 0x0  nop
    ctx->pc = 0x282eb4u;
    // NOP
    ctx->pc = 0x282eb8u;
}
