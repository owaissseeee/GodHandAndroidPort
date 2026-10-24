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

// Function: cMessage_deleteWorkId
// Address: 0x2aebf8 - 0x2aec40
void cMessage_deleteWorkId_0x2aebf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMessage_deleteWorkId_0x2aebf8");
#endif

    switch (ctx->pc) {
        case 0x2aec10u: goto label_2aec10;
        case 0x2aec20u: goto label_2aec20;
        default: break;
    }

    ctx->pc = 0x2aebf8u;

    // 0x2aebf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aebf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aebfc: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x2aebfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2aec00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2aec00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2aec04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aec04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aec08: 0xc0abb44  jal         func_2AED10
    ctx->pc = 0x2AEC08u;
    SET_GPR_U32(ctx, 31, 0x2AEC10u);
    ctx->pc = 0x2AEC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEC08u;
    // 0x2aec0c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AED10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AED10u, 0x2AEC08u, 0x2AEC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEC10u;
label_2aec10:
    // 0x2aec10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AEC10u;
    {
        const bool branch_taken_0x2aec10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEC10u;
        // 0x2aec14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aec10) {
            ctx->pc = 0x2AEC28u;
            goto label_2aec28;
        }
    }
    ctx->pc = 0x2AEC18u;
    // 0x2aec18: 0xc0abbc4  jal         func_2AEF10
    ctx->pc = 0x2AEC18u;
    SET_GPR_U32(ctx, 31, 0x2AEC20u);
    ctx->pc = 0x2AEC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEC18u;
    // 0x2aec1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEF10u, 0x2AEC18u, 0x2AEC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEC20u;
label_2aec20:
    // 0x2aec20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AEC20u;
    {
        const bool branch_taken_0x2aec20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEC20u;
        // 0x2aec24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aec20) {
            ctx->pc = 0x2AEC2Cu;
            goto label_2aec2c;
        }
    }
    ctx->pc = 0x2AEC28u;
label_2aec28:
    // 0x2aec28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2aec28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aec2c:
    // 0x2aec2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2aec2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aec30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aec30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aec34: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEC34u;
        // 0x2aec38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEC34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEC3Cu;
    // 0x2aec3c: 0x0  nop
    ctx->pc = 0x2aec3cu;
    // NOP
    ctx->pc = 0x2aec40u;
}
