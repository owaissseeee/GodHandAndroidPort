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

// Function: func_00336A40
// Address: 0x336a40 - 0x336ac0
void func_00336A40_0x336a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00336A40_0x336a40");
#endif

    ctx->pc = 0x336a40u;

    // 0x336a40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x336a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x336a44: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x336a44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336a48: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x336A48u;
    {
        const bool branch_taken_0x336a48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x336A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336A48u;
        // 0x336a4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336a48) {
            ctx->pc = 0x336A68u;
            goto label_336a68;
        }
    }
    ctx->pc = 0x336A50u;
    // 0x336a50: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x336a50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x336a54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x336a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336a58: 0x24a551e8  addiu       $a1, $a1, 0x51E8
    ctx->pc = 0x336a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20968));
    // 0x336a5c: 0x80cd8cc  j           func_336330
    ctx->pc = 0x336A5Cu;
    ctx->pc = 0x336A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336A5Cu;
    // 0x336a60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336330u, 0x336A5Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x336A64u;
    // 0x336a64: 0x0  nop
    ctx->pc = 0x336a64u;
    // NOP
label_336a68:
    // 0x336a68: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x336a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x336a6c: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x336a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x336a70: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x336a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x336a74: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x336a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x336a78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x336a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x336a7c: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x336a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x336a80: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x336a80u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x336a84: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x336A84u;
    {
        const bool branch_taken_0x336a84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x336a84) {
            ctx->pc = 0x336A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336A84u;
            // 0x336a88: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x336A8Cu;
            goto label_336a8c;
        }
    }
    ctx->pc = 0x336A8Cu;
label_336a8c:
    // 0x336a8c: 0x1012  mflo        $v0
    ctx->pc = 0x336a8cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x336a90: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x336a90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x336a94: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x336a94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x336a98: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x336a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x336a9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x336a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336aa0: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x336aa0u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x336aa4: 0x1812  mflo        $v1
    ctx->pc = 0x336aa4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x336aa8: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x336aa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x336aac: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x336aacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x336ab0: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x336ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x336ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x336AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336AB4u;
        // 0x336ab8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336ABCu;
    // 0x336abc: 0x0  nop
    ctx->pc = 0x336abcu;
    // NOP
    ctx->pc = 0x336ac0u;
}
