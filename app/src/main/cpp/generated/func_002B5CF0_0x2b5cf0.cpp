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

// Function: func_002B5CF0
// Address: 0x2b5cf0 - 0x2b5d58
void func_002B5CF0_0x2b5cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B5CF0_0x2b5cf0");
#endif

    switch (ctx->pc) {
        case 0x2b5d18u: goto label_2b5d18;
        case 0x2b5d20u: goto label_2b5d20;
        case 0x2b5d3cu: goto label_2b5d3c;
        default: break;
    }

    ctx->pc = 0x2b5cf0u;

    // 0x2b5cf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b5cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b5cf4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2b5cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2b5cf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b5cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b5cfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b5cfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5d00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b5d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b5d04: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2b5d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2b5d08: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B5D08u;
    {
        const bool branch_taken_0x2b5d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D08u;
        // 0x2b5d0c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5d08) {
            ctx->pc = 0x2B5D30u;
            goto label_2b5d30;
        }
    }
    ctx->pc = 0x2B5D10u;
    // 0x2b5d10: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2b5d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2b5d14: 0x0  nop
    ctx->pc = 0x2b5d14u;
    // NOP
label_2b5d18:
    // 0x2b5d18: 0xc0ad756  jal         func_2B5D58
    ctx->pc = 0x2B5D18u;
    SET_GPR_U32(ctx, 31, 0x2B5D20u);
    ctx->pc = 0x2B5D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5D18u;
    // 0x2b5d1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5D58u, 0x2B5D18u, 0x2B5D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5D20u;
label_2b5d20:
    // 0x2b5d20: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2b5d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2b5d24: 0x0  nop
    ctx->pc = 0x2b5d24u;
    // NOP
    // 0x2b5d28: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2B5D28u;
    {
        const bool branch_taken_0x2b5d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5d28) {
            ctx->pc = 0x2B5D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5D28u;
            // 0x2b5d2c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5d18;
        }
    }
    ctx->pc = 0x2B5D30u;
label_2b5d30:
    // 0x2b5d30: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2b5d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2b5d34: 0xc0ad7b0  jal         func_2B5EC0
    ctx->pc = 0x2B5D34u;
    SET_GPR_U32(ctx, 31, 0x2B5D3Cu);
    ctx->pc = 0x2B5D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5D34u;
    // 0x2b5d38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5EC0u, 0x2B5D34u, 0x2B5D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5D3Cu;
label_2b5d3c:
    // 0x2b5d3c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2b5d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5d40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b5d40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5d44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b5d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5d48: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D48u;
        // 0x2b5d4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5D50u;
    // 0x2b5d50: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b5d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b5d54: 0x0  nop
    ctx->pc = 0x2b5d54u;
    // NOP
    ctx->pc = 0x2b5d58u;
}
