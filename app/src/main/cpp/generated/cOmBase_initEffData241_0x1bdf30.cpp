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

// Function: cOmBase_initEffData241
// Address: 0x1bdf30 - 0x1bdfa0
void cOmBase_initEffData241_0x1bdf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_initEffData241_0x1bdf30");
#endif

    switch (ctx->pc) {
        case 0x1bdf44u: goto label_1bdf44;
        case 0x1bdf54u: goto label_1bdf54;
        case 0x1bdf64u: goto label_1bdf64;
        case 0x1bdf8cu: goto label_1bdf8c;
        default: break;
    }

    ctx->pc = 0x1bdf30u;

    // 0x1bdf30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bdf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bdf34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bdf34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bdf38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bdf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bdf3c: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1BDF3Cu;
    SET_GPR_U32(ctx, 31, 0x1BDF44u);
    ctx->pc = 0x1BDF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF3Cu;
    // 0x1bdf40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1BDF3Cu, 0x1BDF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF44u;
label_1bdf44:
    // 0x1bdf44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bdf44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bdf48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf4c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1BDF4Cu;
    SET_GPR_U32(ctx, 31, 0x1BDF54u);
    ctx->pc = 0x1BDF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF4Cu;
    // 0x1bdf50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1BDF4Cu, 0x1BDF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF54u;
label_1bdf54:
    // 0x1bdf54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bdf54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bdf58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf5c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1BDF5Cu;
    SET_GPR_U32(ctx, 31, 0x1BDF64u);
    ctx->pc = 0x1BDF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF5Cu;
    // 0x1bdf60: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1BDF5Cu, 0x1BDF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF64u;
label_1bdf64:
    // 0x1bdf64: 0x8e0205b8  lw          $v0, 0x5B8($s0)
    ctx->pc = 0x1bdf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x1bdf68: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x1bdf68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x1bdf6c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x1bdf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1bdf70: 0x248419a0  addiu       $a0, $a0, 0x19A0
    ctx->pc = 0x1bdf70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
    // 0x1bdf74: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1bdf74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1bdf78: 0x24050241  addiu       $a1, $zero, 0x241
    ctx->pc = 0x1bdf78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
    // 0x1bdf7c: 0xae0205b8  sw          $v0, 0x5B8($s0)
    ctx->pc = 0x1bdf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 2));
    // 0x1bdf80: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x1bdf80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1bdf84: 0xc0c15d6  jal         func_305758
    ctx->pc = 0x1BDF84u;
    SET_GPR_U32(ctx, 31, 0x1BDF8Cu);
    ctx->pc = 0x1BDF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF84u;
    // 0x1bdf88: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305758u, 0x1BDF84u, 0x1BDF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF8Cu;
label_1bdf8c:
    // 0x1bdf8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bdf8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bdf90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bdf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdf94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bdf94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdf98: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF98u;
        // 0x1bdf9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDFA0u;
}
