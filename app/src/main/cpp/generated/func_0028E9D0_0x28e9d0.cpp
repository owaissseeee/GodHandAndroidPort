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

// Function: func_0028E9D0
// Address: 0x28e9d0 - 0x28ea30
void func_0028E9D0_0x28e9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028E9D0_0x28e9d0");
#endif

    switch (ctx->pc) {
        case 0x28e9fcu: goto label_28e9fc;
        default: break;
    }

    ctx->pc = 0x28e9d0u;

    // 0x28e9d0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x28e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x28e9d4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28e9d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28e9d8: 0x8c437a80  lw          $v1, 0x7A80($v0)
    ctx->pc = 0x28e9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A80u));
    // 0x28e9dc: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x28e9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x28e9e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28e9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28e9e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28e9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28e9e8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x28e9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x28e9ec: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x28E9ECu;
    {
        const bool branch_taken_0x28e9ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E9ECu;
        // 0x28e9f0: 0x24507a80  addiu       $s0, $v0, 0x7A80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 31360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e9ec) {
            ctx->pc = 0x28EA18u;
            goto label_28ea18;
        }
    }
    ctx->pc = 0x28E9F4u;
    // 0x28e9f4: 0xc0a9d12  jal         func_2A7448
    ctx->pc = 0x28E9F4u;
    SET_GPR_U32(ctx, 31, 0x28E9FCu);
    ctx->pc = 0x2A7448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7448u, 0x28E9F4u, 0x28E9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E9FCu;
label_28e9fc:
    // 0x28e9fc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x28E9FCu;
    {
        const bool branch_taken_0x28e9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e9fc) {
            ctx->pc = 0x28EA00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E9FCu;
            // 0x28ea00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28EA1Cu;
            goto label_28ea1c;
        }
    }
    ctx->pc = 0x28EA04u;
    // 0x28ea04: 0x8e02ffac  lw          $v0, -0x54($s0)
    ctx->pc = 0x28ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967212)));
    // 0x28ea08: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28ea08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x28ea0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28ea0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28ea10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28EA10u;
    {
        const bool branch_taken_0x28ea10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA10u;
        // 0x28ea14: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ea10) {
            ctx->pc = 0x28EA1Cu;
            goto label_28ea1c;
        }
    }
    ctx->pc = 0x28EA18u;
label_28ea18:
    // 0x28ea18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28ea1c:
    // 0x28ea1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28ea1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ea20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ea20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ea24: 0x3e00008  jr          $ra
    ctx->pc = 0x28EA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA24u;
        // 0x28ea28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EA2Cu;
    // 0x28ea2c: 0x0  nop
    ctx->pc = 0x28ea2cu;
    // NOP
    ctx->pc = 0x28ea30u;
}
