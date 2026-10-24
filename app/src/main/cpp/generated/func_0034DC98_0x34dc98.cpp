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

// Function: func_0034DC98
// Address: 0x34dc98 - 0x34dd40
void func_0034DC98_0x34dc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034DC98_0x34dc98");
#endif

    switch (ctx->pc) {
        case 0x34dcc0u: goto label_34dcc0;
        case 0x34dcd4u: goto label_34dcd4;
        case 0x34dcf4u: goto label_34dcf4;
        case 0x34dcfcu: goto label_34dcfc;
        case 0x34dd04u: goto label_34dd04;
        case 0x34dd0cu: goto label_34dd0c;
        case 0x34dd14u: goto label_34dd14;
        case 0x34dd1cu: goto label_34dd1c;
        default: break;
    }

    ctx->pc = 0x34dc98u;

    // 0x34dc98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34dc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34dc9c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x34dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x34dca0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34dca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x34dca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34dca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34dca8: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x34dca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34dcac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34dcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34dcb0: 0x2451e2c4  addiu       $s1, $v0, -0x1D3C
    ctx->pc = 0x34dcb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959812));
    // 0x34dcb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34dcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34dcb8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x34dcb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dcbc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x34dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EE2C4u));
label_34dcc0:
    // 0x34dcc0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x34dcc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x34dcc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34DCC4u;
    {
        const bool branch_taken_0x34dcc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DCC4u;
        // 0x34dcc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dcc4) {
            ctx->pc = 0x34DCD8u;
            goto label_34dcd8;
        }
    }
    ctx->pc = 0x34DCCCu;
    // 0x34dccc: 0xc0d61fa  jal         func_3587E8
    ctx->pc = 0x34DCCCu;
    SET_GPR_U32(ctx, 31, 0x34DCD4u);
    ctx->pc = 0x3587E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3587E8u, 0x34DCCCu, 0x34DCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DCD4u;
label_34dcd4:
    // 0x34dcd4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x34dcd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34dcd8:
    // 0x34dcd8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x34dcd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x34dcdc: 0x603fff8  bgezl       $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x34DCDCu;
    {
        const bool branch_taken_0x34dcdc = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x34dcdc) {
            ctx->pc = 0x34DCE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34DCDCu;
            // 0x34dce0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34DCC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34dcc0;
        }
    }
    ctx->pc = 0x34DCE4u;
    // 0x34dce4: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x34dce4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    // 0x34dce8: 0x2610e270  addiu       $s0, $s0, -0x1D90
    ctx->pc = 0x34dce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959728));
    // 0x34dcec: 0xc0d68aa  jal         func_35A2A8
    ctx->pc = 0x34DCECu;
    SET_GPR_U32(ctx, 31, 0x34DCF4u);
    ctx->pc = 0x34DCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DCECu;
    // 0x34dcf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A2A8u, 0x34DCECu, 0x34DCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DCF4u;
label_34dcf4:
    // 0x34dcf4: 0xc0d2ea0  jal         func_34BA80
    ctx->pc = 0x34DCF4u;
    SET_GPR_U32(ctx, 31, 0x34DCFCu);
    ctx->pc = 0x34DCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DCF4u;
    // 0x34dcf8: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BA80u, 0x34DCF4u, 0x34DCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DCFCu;
label_34dcfc:
    // 0x34dcfc: 0xc0d6f0e  jal         func_35BC38
    ctx->pc = 0x34DCFCu;
    SET_GPR_U32(ctx, 31, 0x34DD04u);
    ctx->pc = 0x34DD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DCFCu;
    // 0x34dd00: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BC38u, 0x34DCFCu, 0x34DD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DD04u;
label_34dd04:
    // 0x34dd04: 0xc0d37d8  jal         func_34DF60
    ctx->pc = 0x34DD04u;
    SET_GPR_U32(ctx, 31, 0x34DD0Cu);
    ctx->pc = 0x34DD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DD04u;
    // 0x34dd08: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF60u, 0x34DD04u, 0x34DD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DD0Cu;
label_34dd0c:
    // 0x34dd0c: 0xc0d37d0  jal         func_34DF40
    ctx->pc = 0x34DD0Cu;
    SET_GPR_U32(ctx, 31, 0x34DD14u);
    ctx->pc = 0x34DF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF40u, 0x34DD0Cu, 0x34DD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DD14u;
label_34dd14:
    // 0x34dd14: 0xc0d37c2  jal         func_34DF08
    ctx->pc = 0x34DD14u;
    SET_GPR_U32(ctx, 31, 0x34DD1Cu);
    ctx->pc = 0x34DF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF08u, 0x34DD14u, 0x34DD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DD1Cu;
label_34dd1c:
    // 0x34dd1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x34dd1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dd20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34dd20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34dd24: 0x250100a  movz        $v0, $s2, $s0
    ctx->pc = 0x34dd24u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 18));
    // 0x34dd28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34dd28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34dd2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34dd2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34dd30: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34dd30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34dd34: 0x3e00008  jr          $ra
    ctx->pc = 0x34DD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DD34u;
        // 0x34dd38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DD34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34DD3Cu;
    // 0x34dd3c: 0x0  nop
    ctx->pc = 0x34dd3cu;
    // NOP
    ctx->pc = 0x34dd40u;
}
