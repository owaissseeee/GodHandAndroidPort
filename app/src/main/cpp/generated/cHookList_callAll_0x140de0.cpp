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

// Function: cHookList_callAll
// Address: 0x140de0 - 0x140e58
void cHookList_callAll_0x140de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cHookList_callAll_0x140de0");
#endif

    switch (ctx->pc) {
        case 0x140de0u: goto label_140de0;
        case 0x140de4u: goto label_140de4;
        case 0x140de8u: goto label_140de8;
        case 0x140decu: goto label_140dec;
        case 0x140df0u: goto label_140df0;
        case 0x140df4u: goto label_140df4;
        case 0x140df8u: goto label_140df8;
        case 0x140dfcu: goto label_140dfc;
        case 0x140e00u: goto label_140e00;
        case 0x140e04u: goto label_140e04;
        case 0x140e08u: goto label_140e08;
        case 0x140e0cu: goto label_140e0c;
        case 0x140e10u: goto label_140e10;
        case 0x140e14u: goto label_140e14;
        case 0x140e18u: goto label_140e18;
        case 0x140e1cu: goto label_140e1c;
        case 0x140e20u: goto label_140e20;
        case 0x140e24u: goto label_140e24;
        case 0x140e28u: goto label_140e28;
        case 0x140e2cu: goto label_140e2c;
        case 0x140e30u: goto label_140e30;
        case 0x140e34u: goto label_140e34;
        case 0x140e38u: goto label_140e38;
        case 0x140e3cu: goto label_140e3c;
        case 0x140e40u: goto label_140e40;
        case 0x140e44u: goto label_140e44;
        case 0x140e48u: goto label_140e48;
        case 0x140e4cu: goto label_140e4c;
        case 0x140e50u: goto label_140e50;
        case 0x140e54u: goto label_140e54;
        default: break;
    }

    ctx->pc = 0x140de0u;

label_140de0:
    // 0x140de0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x140de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_140de4:
    // 0x140de4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x140de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_140de8:
    // 0x140de8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x140de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_140dec:
    // 0x140dec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x140decu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_140df0:
    // 0x140df0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x140df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_140df4:
    // 0x140df4: 0x265022f4  addiu       $s0, $s2, 0x22F4
    ctx->pc = 0x140df4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8948));
label_140df8:
    // 0x140df8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x140df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_140dfc:
    // 0x140dfc: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x140dfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_140e00:
    // 0x140e00: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x140e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_140e04:
    // 0x140e04: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_140e08:
    if (ctx->pc == 0x140E08u) {
        ctx->pc = 0x140E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E04u;
        // 0x140e08: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140E0Cu;
        goto label_140e0c;
    }
    ctx->pc = 0x140E04u;
    {
        const bool branch_taken_0x140e04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x140e04) {
            ctx->pc = 0x140E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140E04u;
            // 0x140e08: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140E24u;
            goto label_140e24;
        }
    }
    ctx->pc = 0x140E0Cu;
label_140e0c:
    // 0x140e0c: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x140e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
label_140e10:
    // 0x140e10: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x140e10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_140e14:
    // 0x140e14: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x140e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_140e18:
    // 0x140e18: 0x60f809  jalr        $v1
label_140e1c:
    if (ctx->pc == 0x140E1Cu) {
        ctx->pc = 0x140E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E18u;
        // 0x140e1c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140E20u;
        goto label_140e20;
    }
    ctx->pc = 0x140E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x140E20u);
        ctx->pc = 0x140E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E18u;
        // 0x140e1c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140E18u, 0x140E20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x140E20u;
label_140e20:
    // 0x140e20: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x140e20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_140e24:
    // 0x140e24: 0x621fff6  bgez        $s1, . + 4 + (-0xA << 2)
label_140e28:
    if (ctx->pc == 0x140E28u) {
        ctx->pc = 0x140E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E24u;
        // 0x140e28: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140E2Cu;
        goto label_140e2c;
    }
    ctx->pc = 0x140E24u;
    {
        const bool branch_taken_0x140e24 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x140E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E24u;
        // 0x140e28: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140e24) {
            ctx->pc = 0x140E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140e00;
        }
    }
    ctx->pc = 0x140E2Cu;
label_140e2c:
    // 0x140e2c: 0xa24023bc  sb          $zero, 0x23BC($s2)
    ctx->pc = 0x140e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 9148), (uint8_t)GPR_U32(ctx, 0));
label_140e30:
    // 0x140e30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x140e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_140e34:
    // 0x140e34: 0xc05057a  jal         func_1415E8
label_140e38:
    if (ctx->pc == 0x140E38u) {
        ctx->pc = 0x140E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E34u;
        // 0x140e38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140E3Cu;
        goto label_140e3c;
    }
    ctx->pc = 0x140E34u;
    SET_GPR_U32(ctx, 31, 0x140E3Cu);
    ctx->pc = 0x140E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140E34u;
    // 0x140e38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1415E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1415E8u, 0x140E34u, 0x140E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140E3Cu;
label_140e3c:
    // 0x140e3c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x140e3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_140e40:
    // 0x140e40: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x140e40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_140e44:
    // 0x140e44: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x140e44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_140e48:
    // 0x140e48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x140e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_140e4c:
    // 0x140e4c: 0x3e00008  jr          $ra
label_140e50:
    if (ctx->pc == 0x140E50u) {
        ctx->pc = 0x140E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E4Cu;
        // 0x140e50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140E54u;
        goto label_140e54;
    }
    ctx->pc = 0x140E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E4Cu;
        // 0x140e50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140E54u;
label_140e54:
    // 0x140e54: 0x0  nop
    ctx->pc = 0x140e54u;
    // NOP
    ctx->pc = 0x140e58u;
}
