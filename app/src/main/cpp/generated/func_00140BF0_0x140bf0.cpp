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

// Function: func_00140BF0
// Address: 0x140bf0 - 0x140c58
void func_00140BF0_0x140bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00140BF0_0x140bf0");
#endif

    switch (ctx->pc) {
        case 0x140c14u: goto label_140c14;
        default: break;
    }

    ctx->pc = 0x140bf0u;

    // 0x140bf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x140bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x140bf4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x140bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x140bf8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x140bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x140bfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x140bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140c00: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x140c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x140c04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x140c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x140c08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x140c08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140c0c: 0xc050316  jal         func_140C58
    ctx->pc = 0x140C0Cu;
    SET_GPR_U32(ctx, 31, 0x140C14u);
    ctx->pc = 0x140C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140C0Cu;
    // 0x140c10: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140C58u, 0x140C0Cu, 0x140C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C14u;
label_140c14:
    // 0x140c14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x140c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140c18: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x140C18u;
    {
        const bool branch_taken_0x140c18 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x140C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C18u;
        // 0x140c1c: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140c18) {
            ctx->pc = 0x140C3Cu;
            goto label_140c3c;
        }
    }
    ctx->pc = 0x140C20u;
    // 0x140c20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x140c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140c24: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x140c24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x140c28: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x140c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x140c2c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x140c2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140c30: 0xac9122f4  sw          $s1, 0x22F4($a0)
    ctx->pc = 0x140c30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8948), GPR_U32(ctx, 17));
    // 0x140c34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x140C34u;
    {
        const bool branch_taken_0x140c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C34u;
        // 0x140c38: 0xac7222f0  sw          $s2, 0x22F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8944), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140c34) {
            ctx->pc = 0x140C40u;
            goto label_140c40;
        }
    }
    ctx->pc = 0x140C3Cu;
label_140c3c:
    // 0x140c3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x140c3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140c40:
    // 0x140c40: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x140c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x140c44: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x140c44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140c48: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x140c48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140c4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x140c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140c50: 0x3e00008  jr          $ra
    ctx->pc = 0x140C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C50u;
        // 0x140c54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140C58u;
}
