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

// Function: func_00166B60
// Address: 0x166b60 - 0x166bb8
void func_00166B60_0x166b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00166B60_0x166b60");
#endif

    switch (ctx->pc) {
        case 0x166ba0u: goto label_166ba0;
        case 0x166ba8u: goto label_166ba8;
        default: break;
    }

    ctx->pc = 0x166b60u;

    // 0x166b60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x166b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x166b64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x166b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x166b68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x166b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x166b6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x166b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166b70: 0x8203005a  lb          $v1, 0x5A($s0)
    ctx->pc = 0x166b70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x166b74: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x166b74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x166b78: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x166B78u;
    {
        const bool branch_taken_0x166b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B78u;
        // 0x166b7c: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166b78) {
            ctx->pc = 0x166BA0u;
            goto label_166ba0;
        }
    }
    ctx->pc = 0x166B80u;
    // 0x166b80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x166b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x166b84: 0x2442fac0  addiu       $v0, $v0, -0x540
    ctx->pc = 0x166b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965952));
    // 0x166b88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x166b8c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x166b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x166b90: 0x800008  jr          $a0
    ctx->pc = 0x166B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166B98u: goto label_166b98;
            case 0x166BA0u: goto label_166ba0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166B90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x166B98u;
label_166b98:
    // 0x166b98: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x166B98u;
    SET_GPR_U32(ctx, 31, 0x166BA0u);
    ctx->pc = 0x166B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166B98u;
    // 0x166b9c: 0x260400e0  addiu       $a0, $s0, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x166B98u, 0x166BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166BA0u;
label_166ba0:
    // 0x166ba0: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x166BA0u;
    SET_GPR_U32(ctx, 31, 0x166BA8u);
    ctx->pc = 0x166BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166BA0u;
    // 0x166ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x166BA0u, 0x166BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166BA8u;
label_166ba8:
    // 0x166ba8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x166ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166bac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x166bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x166BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166BB0u;
        // 0x166bb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166BB8u;
}
