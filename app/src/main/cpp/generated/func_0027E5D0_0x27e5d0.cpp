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

// Function: func_0027E5D0
// Address: 0x27e5d0 - 0x27e630
void func_0027E5D0_0x27e5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027E5D0_0x27e5d0");
#endif

    switch (ctx->pc) {
        case 0x27e5fcu: goto label_27e5fc;
        default: break;
    }

    ctx->pc = 0x27e5d0u;

    // 0x27e5d0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x27e5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x27e5d4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27e5d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27e5d8: 0x8c437a80  lw          $v1, 0x7A80($v0)
    ctx->pc = 0x27e5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A80u));
    // 0x27e5dc: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x27e5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x27e5e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27e5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27e5e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27e5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27e5e8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x27e5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x27e5ec: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x27E5ECu;
    {
        const bool branch_taken_0x27e5ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E5ECu;
        // 0x27e5f0: 0x24507a80  addiu       $s0, $v0, 0x7A80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 31360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e5ec) {
            ctx->pc = 0x27E618u;
            goto label_27e618;
        }
    }
    ctx->pc = 0x27E5F4u;
    // 0x27e5f4: 0xc0a9d12  jal         func_2A7448
    ctx->pc = 0x27E5F4u;
    SET_GPR_U32(ctx, 31, 0x27E5FCu);
    ctx->pc = 0x2A7448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7448u, 0x27E5F4u, 0x27E5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E5FCu;
label_27e5fc:
    // 0x27e5fc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E5FCu;
    {
        const bool branch_taken_0x27e5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e5fc) {
            ctx->pc = 0x27E600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E5FCu;
            // 0x27e600: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E61Cu;
            goto label_27e61c;
        }
    }
    ctx->pc = 0x27E604u;
    // 0x27e604: 0x8e02ffac  lw          $v0, -0x54($s0)
    ctx->pc = 0x27e604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967212)));
    // 0x27e608: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x27e608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x27e60c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27e60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27e610: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27E610u;
    {
        const bool branch_taken_0x27e610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E610u;
        // 0x27e614: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e610) {
            ctx->pc = 0x27E61Cu;
            goto label_27e61c;
        }
    }
    ctx->pc = 0x27E618u;
label_27e618:
    // 0x27e618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27e618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27e61c:
    // 0x27e61c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27e61cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27e620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e624: 0x3e00008  jr          $ra
    ctx->pc = 0x27E624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E624u;
        // 0x27e628: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E62Cu;
    // 0x27e62c: 0x0  nop
    ctx->pc = 0x27e62cu;
    // NOP
    ctx->pc = 0x27e630u;
}
