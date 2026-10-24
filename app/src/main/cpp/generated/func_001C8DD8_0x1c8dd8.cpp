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

// Function: func_001C8DD8
// Address: 0x1c8dd8 - 0x1c8e50
void func_001C8DD8_0x1c8dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C8DD8_0x1c8dd8");
#endif

    switch (ctx->pc) {
        case 0x1c8dd8u: goto label_1c8dd8;
        case 0x1c8ddcu: goto label_1c8ddc;
        case 0x1c8de0u: goto label_1c8de0;
        case 0x1c8de4u: goto label_1c8de4;
        case 0x1c8de8u: goto label_1c8de8;
        case 0x1c8decu: goto label_1c8dec;
        case 0x1c8df0u: goto label_1c8df0;
        case 0x1c8df4u: goto label_1c8df4;
        case 0x1c8df8u: goto label_1c8df8;
        case 0x1c8dfcu: goto label_1c8dfc;
        case 0x1c8e00u: goto label_1c8e00;
        case 0x1c8e04u: goto label_1c8e04;
        case 0x1c8e08u: goto label_1c8e08;
        case 0x1c8e0cu: goto label_1c8e0c;
        case 0x1c8e10u: goto label_1c8e10;
        case 0x1c8e14u: goto label_1c8e14;
        case 0x1c8e18u: goto label_1c8e18;
        case 0x1c8e1cu: goto label_1c8e1c;
        case 0x1c8e20u: goto label_1c8e20;
        case 0x1c8e24u: goto label_1c8e24;
        case 0x1c8e28u: goto label_1c8e28;
        case 0x1c8e2cu: goto label_1c8e2c;
        case 0x1c8e30u: goto label_1c8e30;
        case 0x1c8e34u: goto label_1c8e34;
        case 0x1c8e38u: goto label_1c8e38;
        case 0x1c8e3cu: goto label_1c8e3c;
        case 0x1c8e40u: goto label_1c8e40;
        case 0x1c8e44u: goto label_1c8e44;
        case 0x1c8e48u: goto label_1c8e48;
        case 0x1c8e4cu: goto label_1c8e4c;
        default: break;
    }

    ctx->pc = 0x1c8dd8u;

label_1c8dd8:
    // 0x1c8dd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c8ddc:
    // 0x1c8ddc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c8ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1c8de0:
    // 0x1c8de0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c8de4:
    // 0x1c8de4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c8de8:
    // 0x1c8de8: 0x8e050600  lw          $a1, 0x600($s0)
    ctx->pc = 0x1c8de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
label_1c8dec:
    // 0x1c8dec: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
label_1c8df0:
    if (ctx->pc == 0x1C8DF0u) {
        ctx->pc = 0x1C8DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DECu;
        // 0x1c8df0: 0x92020640  lbu         $v0, 0x640($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8DF4u;
        goto label_1c8df4;
    }
    ctx->pc = 0x1C8DECu;
    {
        const bool branch_taken_0x1c8dec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8dec) {
            ctx->pc = 0x1C8DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8DECu;
            // 0x1c8df0: 0x92020640  lbu         $v0, 0x640($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8E14u;
            goto label_1c8e14;
        }
    }
    ctx->pc = 0x1C8DF4u;
label_1c8df4:
    // 0x1c8df4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1c8df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_1c8df8:
    // 0x1c8df8: 0xc07f852  jal         func_1FE148
label_1c8dfc:
    if (ctx->pc == 0x1C8DFCu) {
        ctx->pc = 0x1C8DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DF8u;
        // 0x1c8dfc: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8E00u;
        goto label_1c8e00;
    }
    ctx->pc = 0x1C8DF8u;
    SET_GPR_U32(ctx, 31, 0x1C8E00u);
    ctx->pc = 0x1C8DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DF8u;
    // 0x1c8dfc: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x1C8DF8u, 0x1C8E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E00u;
label_1c8e00:
    // 0x1c8e00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1c8e04:
    if (ctx->pc == 0x1C8E04u) {
        ctx->pc = 0x1C8E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E00u;
        // 0x1c8e04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8E08u;
        goto label_1c8e08;
    }
    ctx->pc = 0x1C8E00u;
    {
        const bool branch_taken_0x1c8e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E00u;
        // 0x1c8e04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e00) {
            ctx->pc = 0x1C8E10u;
            goto label_1c8e10;
        }
    }
    ctx->pc = 0x1C8E08u;
label_1c8e08:
    // 0x1c8e08: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x1c8e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_1c8e0c:
    // 0x1c8e0c: 0xae020604  sw          $v0, 0x604($s0)
    ctx->pc = 0x1c8e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 2));
label_1c8e10:
    // 0x1c8e10: 0x92020640  lbu         $v0, 0x640($s0)
    ctx->pc = 0x1c8e10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1600)));
label_1c8e14:
    // 0x1c8e14: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1c8e18:
    if (ctx->pc == 0x1C8E18u) {
        ctx->pc = 0x1C8E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E14u;
        // 0x1c8e18: 0x8e020214  lw          $v0, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8E1Cu;
        goto label_1c8e1c;
    }
    ctx->pc = 0x1C8E14u;
    {
        const bool branch_taken_0x1c8e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8e14) {
            ctx->pc = 0x1C8E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8E14u;
            // 0x1c8e18: 0x8e020214  lw          $v0, 0x214($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8E2Cu;
            goto label_1c8e2c;
        }
    }
    ctx->pc = 0x1C8E1Cu;
label_1c8e1c:
    // 0x1c8e1c: 0xc06de6c  jal         func_1B79B0
label_1c8e20:
    if (ctx->pc == 0x1C8E20u) {
        ctx->pc = 0x1C8E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E1Cu;
        // 0x1c8e20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8E24u;
        goto label_1c8e24;
    }
    ctx->pc = 0x1C8E1Cu;
    SET_GPR_U32(ctx, 31, 0x1C8E24u);
    ctx->pc = 0x1C8E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E1Cu;
    // 0x1c8e20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79B0u, 0x1C8E1Cu, 0x1C8E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E24u;
label_1c8e24:
    // 0x1c8e24: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c8e28:
    if (ctx->pc == 0x1C8E28u) {
        ctx->pc = 0x1C8E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E24u;
        // 0x1c8e28: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8E2Cu;
        goto label_1c8e2c;
    }
    ctx->pc = 0x1C8E24u;
    {
        const bool branch_taken_0x1c8e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E24u;
        // 0x1c8e28: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e24) {
            ctx->pc = 0x1C8E40u;
            goto label_1c8e40;
        }
    }
    ctx->pc = 0x1C8E2Cu;
label_1c8e2c:
    // 0x1c8e2c: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1c8e2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_1c8e30:
    // 0x1c8e30: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x1c8e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1c8e34:
    // 0x1c8e34: 0x60f809  jalr        $v1
label_1c8e38:
    if (ctx->pc == 0x1C8E38u) {
        ctx->pc = 0x1C8E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E34u;
        // 0x1c8e38: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8E3Cu;
        goto label_1c8e3c;
    }
    ctx->pc = 0x1C8E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C8E3Cu);
        ctx->pc = 0x1C8E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E34u;
        // 0x1c8e38: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8E34u, 0x1C8E3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C8E3Cu;
label_1c8e3c:
    // 0x1c8e3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c8e3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c8e40:
    // 0x1c8e40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c8e44:
    // 0x1c8e44: 0x3e00008  jr          $ra
label_1c8e48:
    if (ctx->pc == 0x1C8E48u) {
        ctx->pc = 0x1C8E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E44u;
        // 0x1c8e48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8E4Cu;
        goto label_1c8e4c;
    }
    ctx->pc = 0x1C8E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E44u;
        // 0x1c8e48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8E4Cu;
label_1c8e4c:
    // 0x1c8e4c: 0x0  nop
    ctx->pc = 0x1c8e4cu;
    // NOP
    ctx->pc = 0x1c8e50u;
}
