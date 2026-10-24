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

// Function: ForwardInitBuffer_313D00
// Address: 0x313d00 - 0x313d70
void ForwardInitBuffer_313D00_0x313d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_313D00_0x313d00");
#endif

    switch (ctx->pc) {
        case 0x313d34u: goto label_313d34;
        case 0x313d4cu: goto label_313d4c;
        case 0x313d54u: goto label_313d54;
        default: break;
    }

    ctx->pc = 0x313d00u;

    // 0x313d00: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x313d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x313d04: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x313d04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x313d08: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x313d08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x313d0c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x313d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x313d10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x313d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x313d14: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x313d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x313d18: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x313D18u;
    {
        const bool branch_taken_0x313d18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x313D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D18u;
        // 0x313d1c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313d18) {
            ctx->pc = 0x313D5Cu;
            goto label_313d5c;
        }
    }
    ctx->pc = 0x313D20u;
    // 0x313d20: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x313d20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x313d24: 0x24040920  addiu       $a0, $zero, 0x920
    ctx->pc = 0x313d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2336));
    // 0x313d28: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x313d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x313d2c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x313D2Cu;
    SET_GPR_U32(ctx, 31, 0x313D34u);
    ctx->pc = 0x313D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313D2Cu;
    // 0x313d30: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x313D2Cu, 0x313D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313D34u;
label_313d34:
    // 0x313d34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x313d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313d38: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x313D38u;
    {
        const bool branch_taken_0x313d38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x313D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D38u;
        // 0x313d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313d38) {
            ctx->pc = 0x313D5Cu;
            goto label_313d5c;
        }
    }
    ctx->pc = 0x313D40u;
    // 0x313d40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x313d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313d44: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x313D44u;
    SET_GPR_U32(ctx, 31, 0x313D4Cu);
    ctx->pc = 0x313D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313D44u;
    // 0x313d48: 0x24060920  addiu       $a2, $zero, 0x920 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x313D44u, 0x313D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313D4Cu;
label_313d4c:
    // 0x313d4c: 0xc06233e  jal         func_188CF8
    ctx->pc = 0x313D4Cu;
    SET_GPR_U32(ctx, 31, 0x313D54u);
    ctx->pc = 0x313D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313D4Cu;
    // 0x313d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188CF8u, 0x313D4Cu, 0x313D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313D54u;
label_313d54:
    // 0x313d54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x313D54u;
    {
        const bool branch_taken_0x313d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D54u;
        // 0x313d58: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313d54) {
            ctx->pc = 0x313D64u;
            goto label_313d64;
        }
    }
    ctx->pc = 0x313D5Cu;
label_313d5c:
    // 0x313d5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x313d5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313d60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x313d60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_313d64:
    // 0x313d64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313d68: 0x3e00008  jr          $ra
    ctx->pc = 0x313D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D68u;
        // 0x313d6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313D70u;
}
