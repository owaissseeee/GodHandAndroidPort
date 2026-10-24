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

// Function: func_0013F558
// Address: 0x13f558 - 0x13f5d0
void func_0013F558_0x13f558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013F558_0x13f558");
#endif

    ctx->pc = 0x13f558u;

    // 0x13f558: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x13f558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x13f55c: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x13f55cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x13f560: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x13f560u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x13f564: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x13f564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x13f568: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x13F568u;
    {
        const bool branch_taken_0x13f568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F568u;
        // 0x13f56c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f568) {
            ctx->pc = 0x13F5C8u;
            goto label_13f5c8;
        }
    }
    ctx->pc = 0x13F570u;
    // 0x13f570: 0x8ca202f0  lw          $v0, 0x2F0($a1)
    ctx->pc = 0x13f570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 752)));
    // 0x13f574: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x13f574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x13f578: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x13F578u;
    {
        const bool branch_taken_0x13f578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f578) {
            ctx->pc = 0x13F5C8u;
            goto label_13f5c8;
        }
    }
    ctx->pc = 0x13F580u;
    // 0x13f580: 0x90e60358  lbu         $a2, 0x358($a3)
    ctx->pc = 0x13f580u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 856)));
    // 0x13f584: 0x2cc20005  sltiu       $v0, $a2, 0x5
    ctx->pc = 0x13f584u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x13f588: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x13F588u;
    {
        const bool branch_taken_0x13f588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F588u;
        // 0x13f58c: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f588) {
            ctx->pc = 0x13F5C8u;
            goto label_13f5c8;
        }
    }
    ctx->pc = 0x13F590u;
    // 0x13f590: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x13f590u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x13f594: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x13f594u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x13f598: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x13f598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x13f59c: 0xac450250  sw          $a1, 0x250($v0)
    ctx->pc = 0x13f59cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 592), GPR_U32(ctx, 5));
    // 0x13f5a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13f5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f5a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13f5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f5a8: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x13f5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x13f5ac: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x13f5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x13f5b0: 0xaca3035c  sw          $v1, 0x35C($a1)
    ctx->pc = 0x13f5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 860), GPR_U32(ctx, 3));
    // 0x13f5b4: 0xac8000a8  sw          $zero, 0xA8($a0)
    ctx->pc = 0x13f5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
    // 0x13f5b8: 0x90e20358  lbu         $v0, 0x358($a3)
    ctx->pc = 0x13f5b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 856)));
    // 0x13f5bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13f5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13f5c0: 0xa0e20358  sb          $v0, 0x358($a3)
    ctx->pc = 0x13f5c0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 856), (uint8_t)GPR_U32(ctx, 2));
    // 0x13f5c4: 0x0  nop
    ctx->pc = 0x13f5c4u;
    // NOP
label_13f5c8:
    // 0x13f5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x13F5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F5D0u;
}
