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

// Function: func_00281D98
// Address: 0x281d98 - 0x281e60
void func_00281D98_0x281d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00281D98_0x281d98");
#endif

    switch (ctx->pc) {
        case 0x281e10u: goto label_281e10;
        case 0x281e3cu: goto label_281e3c;
        case 0x281e50u: goto label_281e50;
        default: break;
    }

    ctx->pc = 0x281d98u;

    // 0x281d98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x281d9c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x281d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x281da0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x281da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x281da4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x281da4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281da8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281dac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x281dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281db0: 0x920215b0  lbu         $v0, 0x15B0($s0)
    ctx->pc = 0x281db0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x281db4: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x281db4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x281db8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x281DB8u;
    {
        const bool branch_taken_0x281db8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x281DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281DB8u;
        // 0x281dbc: 0x62400b  movn        $t0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281db8) {
            ctx->pc = 0x281DD4u;
            goto label_281dd4;
        }
    }
    ctx->pc = 0x281DC0u;
    // 0x281dc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x281dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281dc4: 0x10820020  beq         $a0, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x281DC4u;
    {
        const bool branch_taken_0x281dc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x281dc4) {
            ctx->pc = 0x281E48u;
            goto label_281e48;
        }
    }
    ctx->pc = 0x281DCCu;
    // 0x281dcc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x281DCCu;
    {
        const bool branch_taken_0x281dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281DCCu;
        // 0x281dd0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281dcc) {
            ctx->pc = 0x281E54u;
            goto label_281e54;
        }
    }
    ctx->pc = 0x281DD4u;
label_281dd4:
    // 0x281dd4: 0x920302f7  lbu         $v1, 0x2F7($s0)
    ctx->pc = 0x281dd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x281dd8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x281DD8u;
    {
        const bool branch_taken_0x281dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x281DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281DD8u;
        // 0x281ddc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281dd8) {
            ctx->pc = 0x281DE8u;
            goto label_281de8;
        }
    }
    ctx->pc = 0x281DE0u;
    // 0x281de0: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x281DE0u;
    {
        const bool branch_taken_0x281de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x281de0) {
            ctx->pc = 0x281DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281DE0u;
            // 0x281de4: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281E18u;
            goto label_281e18;
        }
    }
    ctx->pc = 0x281DE8u;
label_281de8:
    // 0x281de8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x281de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x281dec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x281decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281df0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x281df0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x281df4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x281df4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x281df8: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x281df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x281dfc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x281dfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281e00: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x281e00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x281e04: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x281e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x281e08: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x281E08u;
    SET_GPR_U32(ctx, 31, 0x281E10u);
    ctx->pc = 0x281E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281E08u;
    // 0x281e0c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x281E08u, 0x281E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281E10u;
label_281e10:
    // 0x281e10: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x281E10u;
    {
        const bool branch_taken_0x281e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281E10u;
        // 0x281e14: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281e10) {
            ctx->pc = 0x281E40u;
            goto label_281e40;
        }
    }
    ctx->pc = 0x281E18u;
label_281e18:
    // 0x281e18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x281e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281e1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x281e1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x281e20: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x281e20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x281e24: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x281e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x281e28: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x281e28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281e2c: 0x8c460038  lw          $a2, 0x38($v0)
    ctx->pc = 0x281e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x281e30: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x281e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x281e34: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x281E34u;
    SET_GPR_U32(ctx, 31, 0x281E3Cu);
    ctx->pc = 0x281E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281E34u;
    // 0x281e38: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x281E34u, 0x281E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281E3Cu;
label_281e3c:
    // 0x281e3c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x281e3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_281e40:
    // 0x281e40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x281e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x281e44: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x281e44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_281e48:
    // 0x281e48: 0xc055f06  jal         func_157C18
    ctx->pc = 0x281E48u;
    SET_GPR_U32(ctx, 31, 0x281E50u);
    ctx->pc = 0x281E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281E48u;
    // 0x281e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x281E48u, 0x281E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281E50u;
label_281e50:
    // 0x281e50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x281e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_281e54:
    // 0x281e54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281e58: 0x3e00008  jr          $ra
    ctx->pc = 0x281E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281E58u;
        // 0x281e5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281E60u;
}
