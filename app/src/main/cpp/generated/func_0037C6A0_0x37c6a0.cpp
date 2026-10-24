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

// Function: func_0037C6A0
// Address: 0x37c6a0 - 0x37c720
void func_0037C6A0_0x37c6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037C6A0_0x37c6a0");
#endif

    ctx->pc = 0x37c6a0u;

    // 0x37c6a0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x37c6a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c6a4: 0x3c030077  lui         $v1, 0x77
    ctx->pc = 0x37c6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)119 << 16));
    // 0x37c6a8: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x37c6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x37c6ac: 0x24633250  addiu       $v1, $v1, 0x3250
    ctx->pc = 0x37c6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12880));
    // 0x37c6b0: 0x8482001a  lh          $v0, 0x1A($a0)
    ctx->pc = 0x37c6b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x37c6b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37c6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37c6b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37c6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37c6bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37c6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37c6c0: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x37C6C0u;
    {
        const bool branch_taken_0x37c6c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C6C0u;
        // 0x37c6c4: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c6c0) {
            ctx->pc = 0x37C714u;
            goto label_37c714;
        }
    }
    ctx->pc = 0x37C6C8u;
    // 0x37c6c8: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x37c6c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x37c6cc: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x37c6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x37c6d0: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x37c6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x37c6d4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x37c6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x37c6d8: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x37C6D8u;
    {
        const bool branch_taken_0x37c6d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c6d8) {
            ctx->pc = 0x37C6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37C6D8u;
            // 0x37c6dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x37C6E0u;
            goto label_37c6e0;
        }
    }
    ctx->pc = 0x37C6E0u;
label_37c6e0:
    // 0x37c6e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x37c6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37c6e4: 0x85060038  lh          $a2, 0x38($t0)
    ctx->pc = 0x37c6e4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x37c6e8: 0x9062000c  lbu         $v0, 0xC($v1)
    ctx->pc = 0x37c6e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x37c6ec: 0x8507003a  lh          $a3, 0x3A($t0)
    ctx->pc = 0x37c6ecu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 58)));
    // 0x37c6f0: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x37c6f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x37c6f4: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x37c6f4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x37c6f8: 0x1012  mflo        $v0
    ctx->pc = 0x37c6f8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x37c6fc: 0xa5020038  sh          $v0, 0x38($t0)
    ctx->pc = 0x37c6fcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 56), (uint16_t)GPR_U32(ctx, 2));
    // 0x37c700: 0x9062000c  lbu         $v0, 0xC($v1)
    ctx->pc = 0x37c700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x37c704: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x37c704u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x37c708: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x37c708u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x37c70c: 0x1012  mflo        $v0
    ctx->pc = 0x37c70cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x37c710: 0xa502003a  sh          $v0, 0x3A($t0)
    ctx->pc = 0x37c710u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 58), (uint16_t)GPR_U32(ctx, 2));
label_37c714:
    // 0x37c714: 0x3e00008  jr          $ra
    ctx->pc = 0x37C714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C71Cu;
    // 0x37c71c: 0x0  nop
    ctx->pc = 0x37c71cu;
    // NOP
    ctx->pc = 0x37c720u;
}
