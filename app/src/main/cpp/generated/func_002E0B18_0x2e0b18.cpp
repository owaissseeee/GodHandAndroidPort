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

// Function: func_002E0B18
// Address: 0x2e0b18 - 0x2e0b78
void func_002E0B18_0x2e0b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E0B18_0x2e0b18");
#endif

    ctx->pc = 0x2e0b18u;

    // 0x2e0b18: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e0b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2e0b1c: 0x8c461180  lw          $a2, 0x1180($v0)
    ctx->pc = 0x2e0b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2e0b20: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x2e0b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2e0b24: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E0B24u;
    {
        const bool branch_taken_0x2e0b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0B24u;
        // 0x2e0b28: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0b24) {
            ctx->pc = 0x2E0B5Cu;
            goto label_2e0b5c;
        }
    }
    ctx->pc = 0x2E0B2Cu;
    // 0x2e0b2c: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x2e0b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2e0b30: 0x9063b288  lbu         $v1, -0x4D78($v1)
    ctx->pc = 0x2e0b30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947464)));
    // 0x2e0b34: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x2e0b34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e0b38: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2e0b38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e0b3c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E0B3Cu;
    {
        const bool branch_taken_0x2e0b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0b3c) {
            ctx->pc = 0x2E0B70u;
            goto label_2e0b70;
        }
    }
    ctx->pc = 0x2E0B44u;
    // 0x2e0b44: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x2e0b44u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2e0b48: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E0B48u;
    {
        const bool branch_taken_0x2e0b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0b48) {
            ctx->pc = 0x2E0B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0B48u;
            // 0x2e0b4c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0B50u;
            goto label_2e0b50;
        }
    }
    ctx->pc = 0x2E0B50u;
label_2e0b50:
    // 0x2e0b50: 0x2012  mflo        $a0
    ctx->pc = 0x2e0b50u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2e0b54: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0B54u;
    {
        const bool branch_taken_0x2e0b54 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2E0B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0B54u;
        // 0x2e0b58: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0b54) {
            ctx->pc = 0x2E0B64u;
            goto label_2e0b64;
        }
    }
    ctx->pc = 0x2E0B5Cu;
label_2e0b5c:
    // 0x2e0b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0B5Cu;
        // 0x2e0b60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0B64u;
label_2e0b64:
    // 0x2e0b64: 0x2442b298  addiu       $v0, $v0, -0x4D68
    ctx->pc = 0x2e0b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947480));
    // 0x2e0b68: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2e0b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e0b6c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2e0b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_2e0b70:
    // 0x2e0b70: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0B70u;
        // 0x2e0b74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0B78u;
}
