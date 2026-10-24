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

// Function: UpdatePhaseWithPostStepB
// Address: 0x180fd0 - 0x1810a0
void UpdatePhaseWithPostStepB_0x180fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdatePhaseWithPostStepB_0x180fd0");
#endif

    switch (ctx->pc) {
        case 0x180fd0u: goto label_180fd0;
        case 0x180fd4u: goto label_180fd4;
        case 0x180fd8u: goto label_180fd8;
        case 0x180fdcu: goto label_180fdc;
        case 0x180fe0u: goto label_180fe0;
        case 0x180fe4u: goto label_180fe4;
        case 0x180fe8u: goto label_180fe8;
        case 0x180fecu: goto label_180fec;
        case 0x180ff0u: goto label_180ff0;
        case 0x180ff4u: goto label_180ff4;
        case 0x180ff8u: goto label_180ff8;
        case 0x180ffcu: goto label_180ffc;
        case 0x181000u: goto label_181000;
        case 0x181004u: goto label_181004;
        case 0x181008u: goto label_181008;
        case 0x18100cu: goto label_18100c;
        case 0x181010u: goto label_181010;
        case 0x181014u: goto label_181014;
        case 0x181018u: goto label_181018;
        case 0x18101cu: goto label_18101c;
        case 0x181020u: goto label_181020;
        case 0x181024u: goto label_181024;
        case 0x181028u: goto label_181028;
        case 0x18102cu: goto label_18102c;
        case 0x181030u: goto label_181030;
        case 0x181034u: goto label_181034;
        case 0x181038u: goto label_181038;
        case 0x18103cu: goto label_18103c;
        case 0x181040u: goto label_181040;
        case 0x181044u: goto label_181044;
        case 0x181048u: goto label_181048;
        case 0x18104cu: goto label_18104c;
        case 0x181050u: goto label_181050;
        case 0x181054u: goto label_181054;
        case 0x181058u: goto label_181058;
        case 0x18105cu: goto label_18105c;
        case 0x181060u: goto label_181060;
        case 0x181064u: goto label_181064;
        case 0x181068u: goto label_181068;
        case 0x18106cu: goto label_18106c;
        case 0x181070u: goto label_181070;
        case 0x181074u: goto label_181074;
        case 0x181078u: goto label_181078;
        case 0x18107cu: goto label_18107c;
        case 0x181080u: goto label_181080;
        case 0x181084u: goto label_181084;
        case 0x181088u: goto label_181088;
        case 0x18108cu: goto label_18108c;
        case 0x181090u: goto label_181090;
        case 0x181094u: goto label_181094;
        case 0x181098u: goto label_181098;
        case 0x18109cu: goto label_18109c;
        default: break;
    }

    ctx->pc = 0x180fd0u;

label_180fd0:
    // 0x180fd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x180fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_180fd4:
    // 0x180fd4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x180fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_180fd8:
    // 0x180fd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x180fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_180fdc:
    // 0x180fdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_180fe0:
    // 0x180fe0: 0xc06ddac  jal         func_1B76B0
label_180fe4:
    if (ctx->pc == 0x180FE4u) {
        ctx->pc = 0x180FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180FE0u;
        // 0x180fe4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180FE8u;
        goto label_180fe8;
    }
    ctx->pc = 0x180FE0u;
    SET_GPR_U32(ctx, 31, 0x180FE8u);
    ctx->pc = 0x180FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180FE0u;
    // 0x180fe4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x180FE0u, 0x180FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180FE8u;
label_180fe8:
    // 0x180fe8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_180fec:
    if (ctx->pc == 0x180FECu) {
        ctx->pc = 0x180FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180FE8u;
        // 0x180fec: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180FF0u;
        goto label_180ff0;
    }
    ctx->pc = 0x180FE8u;
    {
        const bool branch_taken_0x180fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180FE8u;
        // 0x180fec: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180fe8) {
            ctx->pc = 0x18108Cu;
            goto label_18108c;
        }
    }
    ctx->pc = 0x180FF0u;
label_180ff0:
    // 0x180ff0: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x180ff0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_180ff4:
    // 0x180ff4: 0x2446daf8  addiu       $a2, $v0, -0x2508
    ctx->pc = 0x180ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957816));
label_180ff8:
    // 0x180ff8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x180ff8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_180ffc:
    // 0x180ffc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x180ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_181000:
    // 0x181000: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x181000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_181004:
    // 0x181004: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x181004u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_181008:
    // 0x181008: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_18100c:
    if (ctx->pc == 0x18100Cu) {
        ctx->pc = 0x18100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181008u;
        // 0x18100c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181010u;
        goto label_181010;
    }
    ctx->pc = 0x181008u;
    {
        const bool branch_taken_0x181008 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x18100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181008u;
        // 0x18100c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181008) {
            ctx->pc = 0x181034u;
            goto label_181034;
        }
    }
    ctx->pc = 0x181010u;
label_181010:
    // 0x181010: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x181010u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_181014:
    // 0x181014: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x181014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_181018:
    // 0x181018: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x181018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_18101c:
    // 0x18101c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18101cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_181020:
    // 0x181020: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x181020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_181024:
    // 0x181024: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x181024u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_181028:
    // 0x181028: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x181028u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_18102c:
    // 0x18102c: 0x10000004  b           . + 4 + (0x4 << 2)
label_181030:
    if (ctx->pc == 0x181030u) {
        ctx->pc = 0x181030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18102Cu;
        // 0x181030: 0x2503daf8  addiu       $v1, $t0, -0x2508 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181034u;
        goto label_181034;
    }
    ctx->pc = 0x18102Cu;
    {
        const bool branch_taken_0x18102c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18102Cu;
        // 0x181030: 0x2503daf8  addiu       $v1, $t0, -0x2508 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18102c) {
            ctx->pc = 0x181040u;
            goto label_181040;
        }
    }
    ctx->pc = 0x181034u;
label_181034:
    // 0x181034: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x181034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_181038:
    // 0x181038: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x181038u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_18103c:
    // 0x18103c: 0x2503daf8  addiu       $v1, $t0, -0x2508
    ctx->pc = 0x18103cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957816));
label_181040:
    // 0x181040: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x181040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_181044:
    // 0x181044: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x181044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_181048:
    // 0x181048: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_18104c:
    if (ctx->pc == 0x18104Cu) {
        ctx->pc = 0x18104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181048u;
        // 0x18104c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181050u;
        goto label_181050;
    }
    ctx->pc = 0x181048u;
    {
        const bool branch_taken_0x181048 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x18104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181048u;
        // 0x18104c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181048) {
            ctx->pc = 0x181064u;
            goto label_181064;
        }
    }
    ctx->pc = 0x181050u;
label_181050:
    // 0x181050: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x181050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_181054:
    // 0x181054: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x181054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_181058:
    // 0x181058: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x181058u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_18105c:
    // 0x18105c: 0x10000002  b           . + 4 + (0x2 << 2)
label_181060:
    if (ctx->pc == 0x181060u) {
        ctx->pc = 0x181060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18105Cu;
        // 0x181060: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181064u;
        goto label_181064;
    }
    ctx->pc = 0x18105Cu;
    {
        const bool branch_taken_0x18105c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18105Cu;
        // 0x181060: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18105c) {
            ctx->pc = 0x181068u;
            goto label_181068;
        }
    }
    ctx->pc = 0x181064u;
label_181064:
    // 0x181064: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x181064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_181068:
    // 0x181068: 0xc0f809  jalr        $a2
label_18106c:
    if (ctx->pc == 0x18106Cu) {
        ctx->pc = 0x18106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181068u;
        // 0x18106c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181070u;
        goto label_181070;
    }
    ctx->pc = 0x181068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x181070u);
        ctx->pc = 0x18106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181068u;
        // 0x18106c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181068u, 0x181070u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x181070u;
label_181070:
    // 0x181070: 0xc060428  jal         func_1810A0
label_181074:
    if (ctx->pc == 0x181074u) {
        ctx->pc = 0x181074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181070u;
        // 0x181074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181078u;
        goto label_181078;
    }
    ctx->pc = 0x181070u;
    SET_GPR_U32(ctx, 31, 0x181078u);
    ctx->pc = 0x181074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181070u;
    // 0x181074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1810A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1810A0u, 0x181070u, 0x181078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181078u;
label_181078:
    // 0x181078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18107c:
    // 0x18107c: 0xc0aa1fa  jal         func_2A87E8
label_181080:
    if (ctx->pc == 0x181080u) {
        ctx->pc = 0x181080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18107Cu;
        // 0x181080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181084u;
        goto label_181084;
    }
    ctx->pc = 0x18107Cu;
    SET_GPR_U32(ctx, 31, 0x181084u);
    ctx->pc = 0x181080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18107Cu;
    // 0x181080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x18107Cu, 0x181084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181084u;
label_181084:
    // 0x181084: 0xc06ddb6  jal         func_1B76D8
label_181088:
    if (ctx->pc == 0x181088u) {
        ctx->pc = 0x181088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181084u;
        // 0x181088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18108Cu;
        goto label_18108c;
    }
    ctx->pc = 0x181084u;
    SET_GPR_U32(ctx, 31, 0x18108Cu);
    ctx->pc = 0x181088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181084u;
    // 0x181088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x181084u, 0x18108Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18108Cu;
label_18108c:
    // 0x18108c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18108cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_181090:
    // 0x181090: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x181090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_181094:
    // 0x181094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_181098:
    // 0x181098: 0x3e00008  jr          $ra
label_18109c:
    if (ctx->pc == 0x18109Cu) {
        ctx->pc = 0x18109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181098u;
        // 0x18109c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1810A0u;
        goto label_fallthrough_0x181098;
    }
    ctx->pc = 0x181098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181098u;
        // 0x18109c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x181098:
    ctx->pc = 0x1810A0u;
}
