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

// Function: LoadEntryByValue_1FFD00
// Address: 0x1ffd00 - 0x1ffd98
void LoadEntryByValue_1FFD00_0x1ffd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadEntryByValue_1FFD00_0x1ffd00");
#endif

    switch (ctx->pc) {
        case 0x1ffd2cu: goto label_1ffd2c;
        case 0x1ffd3cu: goto label_1ffd3c;
        case 0x1ffd54u: goto label_1ffd54;
        case 0x1ffd60u: goto label_1ffd60;
        case 0x1ffd68u: goto label_1ffd68;
        case 0x1ffd70u: goto label_1ffd70;
        case 0x1ffd80u: goto label_1ffd80;
        default: break;
    }

    ctx->pc = 0x1ffd00u;

    // 0x1ffd00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ffd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ffd04: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1ffd04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1ffd08: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ffd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1ffd0c: 0x24840d40  addiu       $a0, $a0, 0xD40
    ctx->pc = 0x1ffd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3392));
    // 0x1ffd10: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ffd10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffd14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ffd14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffd18: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ffd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1ffd1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ffd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ffd20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ffd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ffd24: 0xc07fe70  jal         func_1FF9C0
    ctx->pc = 0x1FFD24u;
    SET_GPR_U32(ctx, 31, 0x1FFD2Cu);
    ctx->pc = 0x1FFD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFD24u;
    // 0x1ffd28: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9C0u, 0x1FFD24u, 0x1FFD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFD2Cu;
label_1ffd2c:
    // 0x1ffd2c: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FFD2Cu;
    {
        const bool branch_taken_0x1ffd2c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1FFD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD2Cu;
        // 0x1ffd30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd2c) {
            ctx->pc = 0x1FFD80u;
            goto label_1ffd80;
        }
    }
    ctx->pc = 0x1FFD34u;
    // 0x1ffd34: 0xc0c8e46  jal         func_323918
    ctx->pc = 0x1FFD34u;
    SET_GPR_U32(ctx, 31, 0x1FFD3Cu);
    ctx->pc = 0x1FFD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFD34u;
    // 0x1ffd38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323918u, 0x1FFD34u, 0x1FFD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFD3Cu;
label_1ffd3c:
    // 0x1ffd3c: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1ffd3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ffd40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ffd40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffd44: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1ffd44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffd48: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ffd48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffd4c: 0xc0c8fa0  jal         func_323E80
    ctx->pc = 0x1FFD4Cu;
    SET_GPR_U32(ctx, 31, 0x1FFD54u);
    ctx->pc = 0x1FFD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFD4Cu;
    // 0x1ffd50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323E80u, 0x1FFD4Cu, 0x1FFD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFD54u;
label_1ffd54:
    // 0x1ffd54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFD54u;
    {
        const bool branch_taken_0x1ffd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffd54) {
            ctx->pc = 0x1FFD68u;
            goto label_1ffd68;
        }
    }
    ctx->pc = 0x1FFD5Cu;
    // 0x1ffd5c: 0x0  nop
    ctx->pc = 0x1ffd5cu;
    // NOP
label_1ffd60:
    // 0x1ffd60: 0xc0e54e6  jal         func_395398
    ctx->pc = 0x1FFD60u;
    SET_GPR_U32(ctx, 31, 0x1FFD68u);
    ctx->pc = 0x1FFD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFD60u;
    // 0x1ffd64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395398u, 0x1FFD60u, 0x1FFD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFD68u;
label_1ffd68:
    // 0x1ffd68: 0xc0c9132  jal         func_3244C8
    ctx->pc = 0x1FFD68u;
    SET_GPR_U32(ctx, 31, 0x1FFD70u);
    ctx->pc = 0x1FFD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFD68u;
    // 0x1ffd6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3244C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3244C8u, 0x1FFD68u, 0x1FFD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFD70u;
label_1ffd70:
    // 0x1ffd70: 0x1452fffb  bne         $v0, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FFD70u;
    {
        const bool branch_taken_0x1ffd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1ffd70) {
            ctx->pc = 0x1FFD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ffd60;
        }
    }
    ctx->pc = 0x1FFD78u;
    // 0x1ffd78: 0xc0c8e9c  jal         func_323A70
    ctx->pc = 0x1FFD78u;
    SET_GPR_U32(ctx, 31, 0x1FFD80u);
    ctx->pc = 0x1FFD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFD78u;
    // 0x1ffd7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323A70u, 0x1FFD78u, 0x1FFD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFD80u;
label_1ffd80:
    // 0x1ffd80: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1ffd80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ffd84: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ffd84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ffd88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ffd88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ffd8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ffd8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffd90: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFD90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD90u;
        // 0x1ffd94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFD90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFD98u;
}
