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

// Function: scePadRead
// Address: 0x397d20 - 0x397d98
void scePadRead_0x397d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scePadRead_0x397d20");
#endif

    switch (ctx->pc) {
        case 0x397d70u: goto label_397d70;
        case 0x397d80u: goto label_397d80;
        default: break;
    }

    ctx->pc = 0x397d20u;

    // 0x397d20: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x397d20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397d24: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x397d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x397d28: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x397d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x397d2c: 0x70e31818  mult1       $v1, $a3, $v1
    ctx->pc = 0x397d2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x397d30: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x397d30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x397d34: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x397d34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x397d38: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x397d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x397d3c: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x397d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x397d40: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x397d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x397d44: 0x2442c110  addiu       $v0, $v0, -0x3EF0
    ctx->pc = 0x397d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951184));
    // 0x397d48: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x397d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x397d4c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x397d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x397d50: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x397d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x397d54: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x397D54u;
    {
        const bool branch_taken_0x397d54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x397D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397D54u;
        // 0x397d58: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397d54) {
            ctx->pc = 0x397D64u;
            goto label_397d64;
        }
    }
    ctx->pc = 0x397D5Cu;
    // 0x397d5c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x397D5Cu;
    {
        const bool branch_taken_0x397d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397D5Cu;
        // 0x397d60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397d5c) {
            ctx->pc = 0x397D84u;
            goto label_397d84;
        }
    }
    ctx->pc = 0x397D64u;
label_397d64:
    // 0x397d64: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x397d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397d68: 0xc0e5ef2  jal         func_397BC8
    ctx->pc = 0x397D68u;
    SET_GPR_U32(ctx, 31, 0x397D70u);
    ctx->pc = 0x397D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397D68u;
    // 0x397d6c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397BC8u, 0x397D68u, 0x397D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397D70u;
label_397d70:
    // 0x397d70: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x397d70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x397d74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x397d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397d78: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x397D78u;
    SET_GPR_U32(ctx, 31, 0x397D80u);
    ctx->pc = 0x397D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397D78u;
    // 0x397d7c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x397D78u, 0x397D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397D80u;
label_397d80:
    // 0x397d80: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x397d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_397d84:
    // 0x397d84: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x397d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x397d88: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x397d88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x397d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x397D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397D8Cu;
        // 0x397d90: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397D94u;
    // 0x397d94: 0x0  nop
    ctx->pc = 0x397d94u;
    // NOP
    ctx->pc = 0x397d98u;
}
