#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r606_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r606
{
// Function: func_00799D80
// Address: 0x799d80 - 0x799e20
void func_00799D80_0x799d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799D80_0x799d80");
#endif

    switch (ctx->pc) {
        case 0x799da4u: goto label_799da4;
        case 0x799dacu: goto label_799dac;
        case 0x799dc4u: goto label_799dc4;
        case 0x799dd4u: goto label_799dd4;
        case 0x799de8u: goto label_799de8;
        case 0x799dfcu: goto label_799dfc;
        case 0x799e08u: goto label_799e08;
        default: break;
    }

    ctx->pc = 0x799d80u;

    // 0x799d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x799d84: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799d84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799d88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x799d8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x799d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x799d94: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799d98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799d9c: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x799D9Cu;
    SET_GPR_U32(ctx, 31, 0x799DA4u);
    ctx->pc = 0x799DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D9Cu;
    // 0x799da0: 0x3c11003c  lui         $s1, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x799D9Cu, 0x799DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DA4u;
label_799da4:
    // 0x799da4: 0xc1e64d2  jal         func_799348
    ctx->pc = 0x799DA4u;
    SET_GPR_U32(ctx, 31, 0x799DACu);
    ctx->pc = 0x799DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DA4u;
    // 0x799da8: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799348u, 0x799DA4u, 0x799DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DACu;
label_799dac:
    // 0x799dac: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799db0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799db0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799db4: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x799db4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C264Cu));
    // 0x799db8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799db8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799dbc: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x799DBCu;
    SET_GPR_U32(ctx, 31, 0x799DC4u);
    ctx->pc = 0x799DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DBCu;
    // 0x799dc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x799DBCu, 0x799DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DC4u;
label_799dc4:
    // 0x799dc4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x799dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x799dc8: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x799dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x799dcc: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799DCCu;
    SET_GPR_U32(ctx, 31, 0x799DD4u);
    ctx->pc = 0x799DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DCCu;
    // 0x799dd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799DCCu, 0x799DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DD4u;
label_799dd4:
    // 0x799dd4: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799dd8: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799ddc: 0x24a59b20  addiu       $a1, $a1, -0x64E0
    ctx->pc = 0x799ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941472));
    // 0x799de0: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799DE0u;
    SET_GPR_U32(ctx, 31, 0x799DE8u);
    ctx->pc = 0x799DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DE0u;
    // 0x799de4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799DE0u, 0x799DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DE8u;
label_799de8:
    // 0x799de8: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799dec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799df0: 0x8c65a980  lw          $a1, -0x5680($v1)
    ctx->pc = 0x799df0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x79A980u));
    // 0x799df4: 0xc0b0bf6  jal         func_2C2FD8
    ctx->pc = 0x799DF4u;
    SET_GPR_U32(ctx, 31, 0x799DFCu);
    ctx->pc = 0x799DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DF4u;
    // 0x799df8: 0x24a50290  addiu       $a1, $a1, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2FD8u, 0x799DF4u, 0x799DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DFCu;
label_799dfc:
    // 0x799dfc: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799e00: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799E00u;
    SET_GPR_U32(ctx, 31, 0x799E08u);
    ctx->pc = 0x799E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E00u;
    // 0x799e04: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799E00u, 0x799E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E08u;
label_799e08:
    // 0x799e08: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x799e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799e0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x799e0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799e10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799e14: 0x3e00008  jr          $ra
    ctx->pc = 0x799E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E14u;
        // 0x799e18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799E1Cu;
    // 0x799e1c: 0x0  nop
    ctx->pc = 0x799e1cu;
    // NOP
    ctx->pc = 0x799e20u;
}
} // namespace gh_r606
