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

// Function: func_001F2CF0
// Address: 0x1f2cf0 - 0x1f2d60
void func_001F2CF0_0x1f2cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F2CF0_0x1f2cf0");
#endif

    switch (ctx->pc) {
        case 0x1f2d0cu: goto label_1f2d0c;
        case 0x1f2d1cu: goto label_1f2d1c;
        case 0x1f2d2cu: goto label_1f2d2c;
        case 0x1f2d3cu: goto label_1f2d3c;
        default: break;
    }

    ctx->pc = 0x1f2cf0u;

    // 0x1f2cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f2cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f2cf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2cf8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f2cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f2cfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2cfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2d00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f2d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f2d04: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F2D04u;
    SET_GPR_U32(ctx, 31, 0x1F2D0Cu);
    ctx->pc = 0x1F2D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2D04u;
    // 0x1f2d08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F2D04u, 0x1F2D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2D0Cu;
label_1f2d0c:
    // 0x1f2d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2d10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f2d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2d14: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F2D14u;
    SET_GPR_U32(ctx, 31, 0x1F2D1Cu);
    ctx->pc = 0x1F2D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2D14u;
    // 0x1f2d18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F2D14u, 0x1F2D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2D1Cu;
label_1f2d1c:
    // 0x1f2d1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2d20: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1f2d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1f2d24: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F2D24u;
    SET_GPR_U32(ctx, 31, 0x1F2D2Cu);
    ctx->pc = 0x1F2D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2D24u;
    // 0x1f2d28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F2D24u, 0x1F2D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2D2Cu;
label_1f2d2c:
    // 0x1f2d2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2d30: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1f2d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f2d34: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F2D34u;
    SET_GPR_U32(ctx, 31, 0x1F2D3Cu);
    ctx->pc = 0x1F2D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2D34u;
    // 0x1f2d38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F2D34u, 0x1F2D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2D3Cu;
label_1f2d3c:
    // 0x1f2d3c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f2d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f2d40: 0xae000918  sw          $zero, 0x918($s0)
    ctx->pc = 0x1f2d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2328), GPR_U32(ctx, 0));
    // 0x1f2d44: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1f2d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1f2d48: 0xae00091c  sw          $zero, 0x91C($s0)
    ctx->pc = 0x1f2d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2332), GPR_U32(ctx, 0));
    // 0x1f2d4c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f2d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1f2d50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f2d50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2d54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f2d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2d58: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D58u;
        // 0x1f2d5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2D60u;
}
