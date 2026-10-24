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

// Function: func_00357DA0
// Address: 0x357da0 - 0x357e58
void func_00357DA0_0x357da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00357DA0_0x357da0");
#endif

    switch (ctx->pc) {
        case 0x357da0u: goto label_357da0;
        case 0x357da4u: goto label_357da4;
        case 0x357da8u: goto label_357da8;
        case 0x357dacu: goto label_357dac;
        case 0x357db0u: goto label_357db0;
        case 0x357db4u: goto label_357db4;
        case 0x357db8u: goto label_357db8;
        case 0x357dbcu: goto label_357dbc;
        case 0x357dc0u: goto label_357dc0;
        case 0x357dc4u: goto label_357dc4;
        case 0x357dc8u: goto label_357dc8;
        case 0x357dccu: goto label_357dcc;
        case 0x357dd0u: goto label_357dd0;
        case 0x357dd4u: goto label_357dd4;
        case 0x357dd8u: goto label_357dd8;
        case 0x357ddcu: goto label_357ddc;
        case 0x357de0u: goto label_357de0;
        case 0x357de4u: goto label_357de4;
        case 0x357de8u: goto label_357de8;
        case 0x357decu: goto label_357dec;
        case 0x357df0u: goto label_357df0;
        case 0x357df4u: goto label_357df4;
        case 0x357df8u: goto label_357df8;
        case 0x357dfcu: goto label_357dfc;
        case 0x357e00u: goto label_357e00;
        case 0x357e04u: goto label_357e04;
        case 0x357e08u: goto label_357e08;
        case 0x357e0cu: goto label_357e0c;
        case 0x357e10u: goto label_357e10;
        case 0x357e14u: goto label_357e14;
        case 0x357e18u: goto label_357e18;
        case 0x357e1cu: goto label_357e1c;
        case 0x357e20u: goto label_357e20;
        case 0x357e24u: goto label_357e24;
        case 0x357e28u: goto label_357e28;
        case 0x357e2cu: goto label_357e2c;
        case 0x357e30u: goto label_357e30;
        case 0x357e34u: goto label_357e34;
        case 0x357e38u: goto label_357e38;
        case 0x357e3cu: goto label_357e3c;
        case 0x357e40u: goto label_357e40;
        case 0x357e44u: goto label_357e44;
        case 0x357e48u: goto label_357e48;
        case 0x357e4cu: goto label_357e4c;
        case 0x357e50u: goto label_357e50;
        case 0x357e54u: goto label_357e54;
        default: break;
    }

    ctx->pc = 0x357da0u;

label_357da0:
    // 0x357da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x357da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_357da4:
    // 0x357da4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x357da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_357da8:
    // 0x357da8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x357da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_357dac:
    // 0x357dac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x357dacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_357db0:
    // 0x357db0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x357db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_357db4:
    // 0x357db4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x357db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_357db8:
    // 0x357db8: 0x8e221fc8  lw          $v0, 0x1FC8($s1)
    ctx->pc = 0x357db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8136)));
label_357dbc:
    // 0x357dbc: 0x280c0  sll         $s0, $v0, 3
    ctx->pc = 0x357dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_357dc0:
    // 0x357dc0: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x357dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_357dc4:
    // 0x357dc4: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x357dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_357dc8:
    // 0x357dc8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x357dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_357dcc:
    // 0x357dcc: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x357dccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_357dd0:
    // 0x357dd0: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x357dd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_357dd4:
    // 0x357dd4: 0x26101320  addiu       $s0, $s0, 0x1320
    ctx->pc = 0x357dd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4896));
label_357dd8:
    // 0x357dd8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x357dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_357ddc:
    // 0x357ddc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x357ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_357de0:
    // 0x357de0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x357de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_357de4:
    // 0x357de4: 0x40f809  jalr        $v0
label_357de8:
    if (ctx->pc == 0x357DE8u) {
        ctx->pc = 0x357DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357DE4u;
        // 0x357de8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357DECu;
        goto label_357dec;
    }
    ctx->pc = 0x357DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x357DECu);
        ctx->pc = 0x357DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357DE4u;
        // 0x357de8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357DE4u, 0x357DECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x357DECu;
label_357dec:
    // 0x357dec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x357decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_357df0:
    // 0x357df0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x357df0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_357df4:
    // 0x357df4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x357df4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_357df8:
    // 0x357df8: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x357df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_357dfc:
    // 0x357dfc: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x357dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_357e00:
    // 0x357e00: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x357e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_357e04:
    // 0x357e04: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_357e08:
    if (ctx->pc == 0x357E08u) {
        ctx->pc = 0x357E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357E04u;
        // 0x357e08: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x357E0Cu;
        goto label_357e0c;
    }
    ctx->pc = 0x357E04u;
    {
        const bool branch_taken_0x357e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x357e04) {
            ctx->pc = 0x357E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357E04u;
            // 0x357e08: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x357E0Cu;
            goto label_357e0c;
        }
    }
    ctx->pc = 0x357E0Cu;
label_357e0c:
    // 0x357e0c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x357e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_357e10:
    // 0x357e10: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x357e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_357e14:
    // 0x357e14: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x357e14u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_357e18:
    // 0x357e18: 0x1012  mflo        $v0
    ctx->pc = 0x357e18u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_357e1c:
    // 0x357e1c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x357e1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_357e20:
    // 0x357e20: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_357e24:
    if (ctx->pc == 0x357E24u) {
        ctx->pc = 0x357E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357E20u;
        // 0x357e24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357E28u;
        goto label_357e28;
    }
    ctx->pc = 0x357E20u;
    {
        const bool branch_taken_0x357e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357e20) {
            ctx->pc = 0x357E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357E20u;
            // 0x357e24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357E40u;
            goto label_357e40;
        }
    }
    ctx->pc = 0x357E28u;
label_357e28:
    // 0x357e28: 0xc0d6872  jal         func_35A1C8
label_357e2c:
    if (ctx->pc == 0x357E2Cu) {
        ctx->pc = 0x357E30u;
        goto label_357e30;
    }
    ctx->pc = 0x357E28u;
    SET_GPR_U32(ctx, 31, 0x357E30u);
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x357E28u, 0x357E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357E30u;
label_357e30:
    // 0x357e30: 0x242182a  slt         $v1, $s2, $v0
    ctx->pc = 0x357e30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_357e34:
    // 0x357e34: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_357e38:
    if (ctx->pc == 0x357E38u) {
        ctx->pc = 0x357E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357E34u;
        // 0x357e38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357E3Cu;
        goto label_357e3c;
    }
    ctx->pc = 0x357E34u;
    {
        const bool branch_taken_0x357e34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x357E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357E34u;
        // 0x357e38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357e34) {
            ctx->pc = 0x357E40u;
            goto label_357e40;
        }
    }
    ctx->pc = 0x357E3Cu;
label_357e3c:
    // 0x357e3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x357e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_357e40:
    // 0x357e40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x357e40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_357e44:
    // 0x357e44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x357e44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_357e48:
    // 0x357e48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x357e48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_357e4c:
    // 0x357e4c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x357e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_357e50:
    // 0x357e50: 0x3e00008  jr          $ra
label_357e54:
    if (ctx->pc == 0x357E54u) {
        ctx->pc = 0x357E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357E50u;
        // 0x357e54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357E58u;
        goto label_fallthrough_0x357e50;
    }
    ctx->pc = 0x357E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357E50u;
        // 0x357e54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x357e50:
    ctx->pc = 0x357E58u;
}
