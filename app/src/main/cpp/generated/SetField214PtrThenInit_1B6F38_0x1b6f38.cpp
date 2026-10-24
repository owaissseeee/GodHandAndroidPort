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

// Function: SetField214PtrThenInit_1B6F38
// Address: 0x1b6f38 - 0x1b6fb8
void SetField214PtrThenInit_1B6F38_0x1b6f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetField214PtrThenInit_1B6F38_0x1b6f38");
#endif

    switch (ctx->pc) {
        case 0x1b6f70u: goto label_1b6f70;
        case 0x1b6f80u: goto label_1b6f80;
        case 0x1b6f88u: goto label_1b6f88;
        case 0x1b6f98u: goto label_1b6f98;
        case 0x1b6fa4u: goto label_1b6fa4;
        default: break;
    }

    ctx->pc = 0x1b6f38u;

    // 0x1b6f38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b6f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b6f3c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1b6f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1b6f40: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b6f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b6f44: 0x24428a20  addiu       $v0, $v0, -0x75E0
    ctx->pc = 0x1b6f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937120));
    // 0x1b6f48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b6f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b6f4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b6f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b6f54: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b6f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f58: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1b6f58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1b6f5c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1b6f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1b6f60: 0xde050540  ld          $a1, 0x540($s0)
    ctx->pc = 0x1b6f60u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 1344)));
    // 0x1b6f64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b6f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f68: 0xc04cc6e  jal         func_1331B8
    ctx->pc = 0x1B6F68u;
    SET_GPR_U32(ctx, 31, 0x1B6F70u);
    ctx->pc = 0x1B6F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F68u;
    // 0x1b6f6c: 0x2484ae50  addiu       $a0, $a0, -0x51B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1331B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1331B8u, 0x1B6F68u, 0x1B6F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F70u;
label_1b6f70:
    // 0x1b6f70: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1b6f70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1b6f74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b6f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f78: 0xc04d1fa  jal         func_1347E8
    ctx->pc = 0x1B6F78u;
    SET_GPR_U32(ctx, 31, 0x1B6F80u);
    ctx->pc = 0x1B6F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F78u;
    // 0x1b6f7c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1347E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1347E8u, 0x1B6F78u, 0x1B6F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F80u;
label_1b6f80:
    // 0x1b6f80: 0xc0c49c2  jal         func_312708
    ctx->pc = 0x1B6F80u;
    SET_GPR_U32(ctx, 31, 0x1B6F88u);
    ctx->pc = 0x1B6F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F80u;
    // 0x1b6f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x1B6F80u, 0x1B6F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F88u;
label_1b6f88:
    // 0x1b6f88: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1b6f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1b6f8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b6f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f90: 0xc07f8dc  jal         func_1FE370
    ctx->pc = 0x1B6F90u;
    SET_GPR_U32(ctx, 31, 0x1B6F98u);
    ctx->pc = 0x1B6F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F90u;
    // 0x1b6f94: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE370u, 0x1B6F90u, 0x1B6F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F98u;
label_1b6f98:
    // 0x1b6f98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b6f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f9c: 0xc0a9cf2  jal         func_2A73C8
    ctx->pc = 0x1B6F9Cu;
    SET_GPR_U32(ctx, 31, 0x1B6FA4u);
    ctx->pc = 0x1B6FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F9Cu;
    // 0x1b6fa0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A73C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A73C8u, 0x1B6F9Cu, 0x1B6FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6FA4u;
label_1b6fa4:
    // 0x1b6fa4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b6fa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6fa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b6fa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6fac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6FB0u;
        // 0x1b6fb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6FB8u;
}
