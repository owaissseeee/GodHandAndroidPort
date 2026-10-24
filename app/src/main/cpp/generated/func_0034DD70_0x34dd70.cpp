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

// Function: func_0034DD70
// Address: 0x34dd70 - 0x34dde0
void func_0034DD70_0x34dd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034DD70_0x34dd70");
#endif

    switch (ctx->pc) {
        case 0x34dda4u: goto label_34dda4;
        case 0x34ddb8u: goto label_34ddb8;
        default: break;
    }

    ctx->pc = 0x34dd70u;

    // 0x34dd70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34dd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34dd74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34dd74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dd78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34dd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34dd7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34dd7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dd80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34dd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34dd84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34dd84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dd88: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x34DD88u;
    {
        const bool branch_taken_0x34dd88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DD88u;
        // 0x34dd8c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dd88) {
            ctx->pc = 0x34DDCCu;
            goto label_34ddcc;
        }
    }
    ctx->pc = 0x34DD90u;
    // 0x34dd90: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34DD90u;
    {
        const bool branch_taken_0x34dd90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x34dd90) {
            ctx->pc = 0x34DDB0u;
            goto label_34ddb0;
        }
    }
    ctx->pc = 0x34DD98u;
    // 0x34dd98: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x34dd98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x34dd9c: 0xc0d3778  jal         func_34DDE0
    ctx->pc = 0x34DD9Cu;
    SET_GPR_U32(ctx, 31, 0x34DDA4u);
    ctx->pc = 0x34DDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DD9Cu;
    // 0x34dda0: 0x2484e25c  addiu       $a0, $a0, -0x1DA4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959708));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DDE0u, 0x34DD9Cu, 0x34DDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DDA4u;
label_34dda4:
    // 0x34dda4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34DDA4u;
    {
        const bool branch_taken_0x34dda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DDA4u;
        // 0x34dda8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dda4) {
            ctx->pc = 0x34DDCCu;
            goto label_34ddcc;
        }
    }
    ctx->pc = 0x34DDACu;
    // 0x34ddac: 0x0  nop
    ctx->pc = 0x34ddacu;
    // NOP
label_34ddb0:
    // 0x34ddb0: 0xc0d3778  jal         func_34DDE0
    ctx->pc = 0x34DDB0u;
    SET_GPR_U32(ctx, 31, 0x34DDB8u);
    ctx->pc = 0x34DDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DDB0u;
    // 0x34ddb4: 0x260409f8  addiu       $a0, $s0, 0x9F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DDE0u, 0x34DDB0u, 0x34DDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DDB8u;
label_34ddb8:
    // 0x34ddb8: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x34ddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x34ddbc: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x34DDBCu;
    {
        const bool branch_taken_0x34ddbc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x34DDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DDBCu;
        // 0x34ddc0: 0x21823  negu        $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ddbc) {
            ctx->pc = 0x34DDC8u;
            goto label_34ddc8;
        }
    }
    ctx->pc = 0x34DDC4u;
    // 0x34ddc4: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x34ddc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_34ddc8:
    // 0x34ddc8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x34ddc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34ddcc:
    // 0x34ddcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34ddccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34ddd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34ddd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34ddd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34ddd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34ddd8: 0x3e00008  jr          $ra
    ctx->pc = 0x34DDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34DDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DDD8u;
        // 0x34dddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DDD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34DDE0u;
}
