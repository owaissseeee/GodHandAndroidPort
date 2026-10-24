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

// Function: func_003579F0
// Address: 0x3579f0 - 0x357aa0
void func_003579F0_0x3579f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003579F0_0x3579f0");
#endif

    switch (ctx->pc) {
        case 0x357a14u: goto label_357a14;
        case 0x357a2cu: goto label_357a2c;
        case 0x357a50u: goto label_357a50;
        case 0x357a60u: goto label_357a60;
        case 0x357a74u: goto label_357a74;
        case 0x357a80u: goto label_357a80;
        default: break;
    }

    ctx->pc = 0x3579f0u;

    // 0x3579f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3579f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3579f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3579f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3579f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3579f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3579fc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3579fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x357a00: 0x26110950  addiu       $s1, $s0, 0x950
    ctx->pc = 0x357a00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2384));
    // 0x357a04: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x357a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x357a08: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x357a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x357a0c: 0xc0d37da  jal         func_34DF68
    ctx->pc = 0x357A0Cu;
    SET_GPR_U32(ctx, 31, 0x357A14u);
    ctx->pc = 0x357A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357A0Cu;
    // 0x357a10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF68u, 0x357A0Cu, 0x357A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357A14u;
label_357a14:
    // 0x357a14: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x357a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x357a18: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x357a18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357a1c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x357A1Cu;
    {
        const bool branch_taken_0x357a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x357A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357A1Cu;
        // 0x357a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357a1c) {
            ctx->pc = 0x357A58u;
            goto label_357a58;
        }
    }
    ctx->pc = 0x357A24u;
    // 0x357a24: 0xc0d5ea8  jal         func_357AA0
    ctx->pc = 0x357A24u;
    SET_GPR_U32(ctx, 31, 0x357A2Cu);
    ctx->pc = 0x357AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357AA0u, 0x357A24u, 0x357A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357A2Cu;
label_357a2c:
    // 0x357a2c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x357A2Cu;
    {
        const bool branch_taken_0x357a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x357A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357A2Cu;
        // 0x357a30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357a2c) {
            ctx->pc = 0x357A78u;
            goto label_357a78;
        }
    }
    ctx->pc = 0x357A34u;
    // 0x357a34: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x357a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x357a38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x357a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357a3c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x357a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x357a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357a44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x357a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x357a48: 0xc0d5bf6  jal         func_356FD8
    ctx->pc = 0x357A48u;
    SET_GPR_U32(ctx, 31, 0x357A50u);
    ctx->pc = 0x357A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357A48u;
    // 0x357a4c: 0xae230024  sw          $v1, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356FD8u, 0x357A48u, 0x357A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357A50u;
label_357a50:
    // 0x357a50: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x357A50u;
    {
        const bool branch_taken_0x357a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357A50u;
        // 0x357a54: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357a50) {
            ctx->pc = 0x357A78u;
            goto label_357a78;
        }
    }
    ctx->pc = 0x357A58u;
label_357a58:
    // 0x357a58: 0xc0d5f08  jal         func_357C20
    ctx->pc = 0x357A58u;
    SET_GPR_U32(ctx, 31, 0x357A60u);
    ctx->pc = 0x357A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357A58u;
    // 0x357a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357C20u, 0x357A58u, 0x357A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357A60u;
label_357a60:
    // 0x357a60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357a64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x357A64u;
    {
        const bool branch_taken_0x357a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x357A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357A64u;
        // 0x357a68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357a64) {
            ctx->pc = 0x357A78u;
            goto label_357a78;
        }
    }
    ctx->pc = 0x357A6Cu;
    // 0x357a6c: 0xc0d5bf6  jal         func_356FD8
    ctx->pc = 0x357A6Cu;
    SET_GPR_U32(ctx, 31, 0x357A74u);
    ctx->pc = 0x357A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357A6Cu;
    // 0x357a70: 0xae200020  sw          $zero, 0x20($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356FD8u, 0x357A6Cu, 0x357A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357A74u;
label_357a74:
    // 0x357a74: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x357a74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_357a78:
    // 0x357a78: 0xc0d37e0  jal         func_34DF80
    ctx->pc = 0x357A78u;
    SET_GPR_U32(ctx, 31, 0x357A80u);
    ctx->pc = 0x357A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357A78u;
    // 0x357a7c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF80u, 0x357A78u, 0x357A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357A80u;
label_357a80:
    // 0x357a80: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x357a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357a84: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x357a84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357a88: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x357a88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x357a8c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x357a8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x357a90: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x357a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x357a94: 0x3e00008  jr          $ra
    ctx->pc = 0x357A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357A94u;
        // 0x357a98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357A9Cu;
    // 0x357a9c: 0x0  nop
    ctx->pc = 0x357a9cu;
    // NOP
    ctx->pc = 0x357aa0u;
}
