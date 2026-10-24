#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r500_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r500
{
// Function: QuoitsEventFailed__5cR500
// Address: 0x7999d8 - 0x799a38
void QuoitsEventFailed__5cR500_0x7999d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("QuoitsEventFailed__5cR500_0x7999d8");
#endif

    switch (ctx->pc) {
        case 0x7999f0u: goto label_7999f0;
        case 0x799a00u: goto label_799a00;
        case 0x799a0cu: goto label_799a0c;
        case 0x799a18u: goto label_799a18;
        case 0x799a24u: goto label_799a24;
        default: break;
    }

    ctx->pc = 0x7999d8u;

    // 0x7999d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7999d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7999dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7999dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7999e0: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x7999e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x7999e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7999e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7999e8: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x7999E8u;
    SET_GPR_U32(ctx, 31, 0x7999F0u);
    ctx->pc = 0x7999ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999E8u;
    // 0x7999ec: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x7999E8u, 0x7999F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999F0u;
label_7999f0:
    // 0x7999f0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x7999f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x7999f4: 0x2405005f  addiu       $a1, $zero, 0x5F
    ctx->pc = 0x7999f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x7999f8: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x7999F8u;
    SET_GPR_U32(ctx, 31, 0x799A00u);
    ctx->pc = 0x7999FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999F8u;
    // 0x7999fc: 0x24846af0  addiu       $a0, $a0, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x7999F8u, 0x799A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A00u;
label_799a00:
    // 0x799a00: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x799a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x799a04: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799A04u;
    SET_GPR_U32(ctx, 31, 0x799A0Cu);
    ctx->pc = 0x799A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A04u;
    // 0x799a08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799A04u, 0x799A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A0Cu;
label_799a0c:
    // 0x799a0c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x799a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799a10: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799A10u;
    SET_GPR_U32(ctx, 31, 0x799A18u);
    ctx->pc = 0x799A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A10u;
    // 0x799a14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799A10u, 0x799A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A18u;
label_799a18:
    // 0x799a18: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x799a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799a1c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799A1Cu;
    SET_GPR_U32(ctx, 31, 0x799A24u);
    ctx->pc = 0x799A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A1Cu;
    // 0x799a20: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799A1Cu, 0x799A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A24u;
label_799a24:
    // 0x799a24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x799a24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799a28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x799A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A2Cu;
        // 0x799a30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799A34u;
    // 0x799a34: 0x0  nop
    ctx->pc = 0x799a34u;
    // NOP
    ctx->pc = 0x799a38u;
}
} // namespace gh_r500
