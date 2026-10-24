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

// Function: AllocZeroedAndForward_316D20
// Address: 0x316d20 - 0x316d90
void AllocZeroedAndForward_316D20_0x316d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndForward_316D20_0x316d20");
#endif

    switch (ctx->pc) {
        case 0x316d54u: goto label_316d54;
        case 0x316d6cu: goto label_316d6c;
        case 0x316d74u: goto label_316d74;
        default: break;
    }

    ctx->pc = 0x316d20u;

    // 0x316d20: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x316d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x316d24: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316d24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x316d28: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x316d28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x316d2c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x316d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x316d30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x316d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x316d34: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x316d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x316d38: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x316D38u;
    {
        const bool branch_taken_0x316d38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x316D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316D38u;
        // 0x316d3c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316d38) {
            ctx->pc = 0x316D7Cu;
            goto label_316d7c;
        }
    }
    ctx->pc = 0x316D40u;
    // 0x316d40: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x316d40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x316d44: 0x24040780  addiu       $a0, $zero, 0x780
    ctx->pc = 0x316d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1920));
    // 0x316d48: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x316d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x316d4c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x316D4Cu;
    SET_GPR_U32(ctx, 31, 0x316D54u);
    ctx->pc = 0x316D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316D4Cu;
    // 0x316d50: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x316D4Cu, 0x316D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316D54u;
label_316d54:
    // 0x316d54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316d58: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x316D58u;
    {
        const bool branch_taken_0x316d58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x316D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316D58u;
        // 0x316d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316d58) {
            ctx->pc = 0x316D7Cu;
            goto label_316d7c;
        }
    }
    ctx->pc = 0x316D60u;
    // 0x316d60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x316d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316d64: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x316D64u;
    SET_GPR_U32(ctx, 31, 0x316D6Cu);
    ctx->pc = 0x316D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316D64u;
    // 0x316d68: 0x24060780  addiu       $a2, $zero, 0x780 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x316D64u, 0x316D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316D6Cu;
label_316d6c:
    // 0x316d6c: 0xc05c3c0  jal         func_170F00
    ctx->pc = 0x316D6Cu;
    SET_GPR_U32(ctx, 31, 0x316D74u);
    ctx->pc = 0x316D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316D6Cu;
    // 0x316d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170F00u, 0x316D6Cu, 0x316D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316D74u;
label_316d74:
    // 0x316d74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x316D74u;
    {
        const bool branch_taken_0x316d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316D74u;
        // 0x316d78: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316d74) {
            ctx->pc = 0x316D84u;
            goto label_316d84;
        }
    }
    ctx->pc = 0x316D7Cu;
label_316d7c:
    // 0x316d7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x316d7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316d80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x316d80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_316d84:
    // 0x316d84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316d88: 0x3e00008  jr          $ra
    ctx->pc = 0x316D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316D88u;
        // 0x316d8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316D90u;
}
