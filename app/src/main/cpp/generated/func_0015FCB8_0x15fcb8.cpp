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

// Function: func_0015FCB8
// Address: 0x15fcb8 - 0x15fd18
void func_0015FCB8_0x15fcb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0015FCB8_0x15fcb8");
#endif

    switch (ctx->pc) {
        case 0x15fcdcu: goto label_15fcdc;
        default: break;
    }

    ctx->pc = 0x15fcb8u;

    // 0x15fcb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15fcb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15fcbc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15fcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x15fcc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15fcc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fcc4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15fcc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x15fcc8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x15fcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x15fccc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x15fcccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fcd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15fcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15fcd4: 0xc057f5a  jal         func_15FD68
    ctx->pc = 0x15FCD4u;
    SET_GPR_U32(ctx, 31, 0x15FCDCu);
    ctx->pc = 0x15FCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FCD4u;
    // 0x15fcd8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FD68u, 0x15FCD4u, 0x15FCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FCDCu;
label_15fcdc:
    // 0x15fcdc: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15FCDCu;
    {
        const bool branch_taken_0x15fcdc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x15FCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FCDCu;
        // 0x15fce0: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fcdc) {
            ctx->pc = 0x15FCFCu;
            goto label_15fcfc;
        }
    }
    ctx->pc = 0x15FCE4u;
    // 0x15fce4: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x15fce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15fce8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15fcec: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x15fcecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fcf0: 0xac910004  sw          $s1, 0x4($a0)
    ctx->pc = 0x15fcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
    // 0x15fcf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15FCF4u;
    {
        const bool branch_taken_0x15fcf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FCF4u;
        // 0x15fcf8: 0xac720000  sw          $s2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fcf4) {
            ctx->pc = 0x15FD00u;
            goto label_15fd00;
        }
    }
    ctx->pc = 0x15FCFCu;
label_15fcfc:
    // 0x15fcfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15fcfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15fd00:
    // 0x15fd00: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x15fd00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15fd04: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15fd04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15fd08: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x15fd08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15fd0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15fd0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fd10: 0x3e00008  jr          $ra
    ctx->pc = 0x15FD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FD10u;
        // 0x15fd14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15FD18u;
}
