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

// Function: func_001ED7E0
// Address: 0x1ed7e0 - 0x1ed848
void func_001ED7E0_0x1ed7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001ED7E0_0x1ed7e0");
#endif

    switch (ctx->pc) {
        case 0x1ed7fcu: goto label_1ed7fc;
        case 0x1ed808u: goto label_1ed808;
        case 0x1ed814u: goto label_1ed814;
        case 0x1ed820u: goto label_1ed820;
        default: break;
    }

    ctx->pc = 0x1ed7e0u;

    // 0x1ed7e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ed7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ed7e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ed7e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed7e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ed7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ed7ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ed7ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed7f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ed7f4: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1ED7F4u;
    SET_GPR_U32(ctx, 31, 0x1ED7FCu);
    ctx->pc = 0x1ED7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED7F4u;
    // 0x1ed7f8: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1ED7F4u, 0x1ED7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED7FCu;
label_1ed7fc:
    // 0x1ed7fc: 0x260400dc  addiu       $a0, $s0, 0xDC
    ctx->pc = 0x1ed7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
    // 0x1ed800: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1ED800u;
    SET_GPR_U32(ctx, 31, 0x1ED808u);
    ctx->pc = 0x1ED804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED800u;
    // 0x1ed804: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1ED800u, 0x1ED808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED808u;
label_1ed808:
    // 0x1ed808: 0x26040158  addiu       $a0, $s0, 0x158
    ctx->pc = 0x1ed808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
    // 0x1ed80c: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1ED80Cu;
    SET_GPR_U32(ctx, 31, 0x1ED814u);
    ctx->pc = 0x1ED810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED80Cu;
    // 0x1ed810: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1ED80Cu, 0x1ED814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED814u;
label_1ed814:
    // 0x1ed814: 0x260401d4  addiu       $a0, $s0, 0x1D4
    ctx->pc = 0x1ed814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 468));
    // 0x1ed818: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1ED818u;
    SET_GPR_U32(ctx, 31, 0x1ED820u);
    ctx->pc = 0x1ED81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED818u;
    // 0x1ed81c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1ED818u, 0x1ED820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED820u;
label_1ed820:
    // 0x1ed820: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ed820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ed824: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1ed824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1ed828: 0xae000348  sw          $zero, 0x348($s0)
    ctx->pc = 0x1ed828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 840), GPR_U32(ctx, 0));
    // 0x1ed82c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ed82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ed830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed834: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ed834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1ed838: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ed838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed83c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED83Cu;
        // 0x1ed840: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED844u;
    // 0x1ed844: 0x0  nop
    ctx->pc = 0x1ed844u;
    // NOP
    ctx->pc = 0x1ed848u;
}
