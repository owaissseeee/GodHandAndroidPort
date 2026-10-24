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

// Function: func_00246D18
// Address: 0x246d18 - 0x246f40
void func_00246D18_0x246d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00246D18_0x246d18");
#endif

    switch (ctx->pc) {
        case 0x246d5cu: goto label_246d5c;
        case 0x246d88u: goto label_246d88;
        case 0x246db0u: goto label_246db0;
        case 0x246ddcu: goto label_246ddc;
        case 0x246e08u: goto label_246e08;
        case 0x246e1cu: goto label_246e1c;
        case 0x246e3cu: goto label_246e3c;
        case 0x246e68u: goto label_246e68;
        case 0x246e90u: goto label_246e90;
        case 0x246ebcu: goto label_246ebc;
        case 0x246ee8u: goto label_246ee8;
        case 0x246efcu: goto label_246efc;
        case 0x246f30u: goto label_246f30;
        default: break;
    }

    ctx->pc = 0x246d18u;

    // 0x246d18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x246d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x246d1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x246d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x246d20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x246d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x246d24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x246d24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246d28: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x246d28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x246d2c: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x246d2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x246d30: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x246D30u;
    {
        const bool branch_taken_0x246d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D30u;
        // 0x246d34: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d30) {
            ctx->pc = 0x246F08u;
            goto label_246f08;
        }
    }
    ctx->pc = 0x246D38u;
    // 0x246d38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x246d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x246d3c: 0x2442d730  addiu       $v0, $v0, -0x28D0
    ctx->pc = 0x246d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956848));
    // 0x246d40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x246d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x246d44: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x246d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x246d48: 0x800008  jr          $a0
    ctx->pc = 0x246D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x246D50u: goto label_246d50;
            case 0x246DA8u: goto label_246da8;
            case 0x246DD0u: goto label_246dd0;
            case 0x246E14u: goto label_246e14;
            case 0x246E30u: goto label_246e30;
            case 0x246E88u: goto label_246e88;
            case 0x246EB0u: goto label_246eb0;
            case 0x246EF4u: goto label_246ef4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246D48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x246D50u;
label_246d50:
    // 0x246d50: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x246d50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x246d54: 0xc09d91a  jal         func_276468
    ctx->pc = 0x246D54u;
    SET_GPR_U32(ctx, 31, 0x246D5Cu);
    ctx->pc = 0x246D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246D54u;
    // 0x246d58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x246D54u, 0x246D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246D5Cu;
label_246d5c:
    // 0x246d5c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x246d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x246d60: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x246d60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x246d64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x246d64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x246d68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246d6c: 0x8c650098  lw          $a1, 0x98($v1)
    ctx->pc = 0x246d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
    // 0x246d70: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x246d70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x246d74: 0x8c66009c  lw          $a2, 0x9C($v1)
    ctx->pc = 0x246d74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x246d78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x246d78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246d7c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x246d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x246d80: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x246D80u;
    SET_GPR_U32(ctx, 31, 0x246D88u);
    ctx->pc = 0x246D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246D80u;
    // 0x246d84: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x246D80u, 0x246D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246D88u;
label_246d88:
    // 0x246d88: 0x8e0416d0  lw          $a0, 0x16D0($s0)
    ctx->pc = 0x246d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x246d8c: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x246d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x246d90: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x246d90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x246d94: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x246d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x246d98: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x246d98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x246d9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x246d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x246da0: 0xae0416d0  sw          $a0, 0x16D0($s0)
    ctx->pc = 0x246da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 4));
    // 0x246da4: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x246da4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_246da8:
    // 0x246da8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x246DA8u;
    SET_GPR_U32(ctx, 31, 0x246DB0u);
    ctx->pc = 0x246DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246DA8u;
    // 0x246dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x246DA8u, 0x246DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246DB0u;
label_246db0:
    // 0x246db0: 0x8e0316d0  lw          $v1, 0x16D0($s0)
    ctx->pc = 0x246db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x246db4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x246db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x246db8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x246db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x246dbc: 0x50600053  beql        $v1, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x246DBCu;
    {
        const bool branch_taken_0x246dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x246dbc) {
            ctx->pc = 0x246DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246DBCu;
            // 0x246dc0: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246F0Cu;
            goto label_246f0c;
        }
    }
    ctx->pc = 0x246DC4u;
    // 0x246dc4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x246dc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x246dc8: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x246DC8u;
    {
        const bool branch_taken_0x246dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DC8u;
        // 0x246dcc: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246dc8) {
            ctx->pc = 0x246F04u;
            goto label_246f04;
        }
    }
    ctx->pc = 0x246DD0u;
label_246dd0:
    // 0x246dd0: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x246dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x246dd4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x246DD4u;
    SET_GPR_U32(ctx, 31, 0x246DDCu);
    ctx->pc = 0x246DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246DD4u;
    // 0x246dd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x246DD4u, 0x246DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246DDCu;
label_246ddc:
    // 0x246ddc: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x246ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x246de0: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x246de0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x246de4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x246de4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x246de8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246dec: 0x8c6503cc  lw          $a1, 0x3CC($v1)
    ctx->pc = 0x246decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 972)));
    // 0x246df0: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x246df0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x246df4: 0x8c6603d0  lw          $a2, 0x3D0($v1)
    ctx->pc = 0x246df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 976)));
    // 0x246df8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x246df8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246dfc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x246dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x246e00: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x246E00u;
    SET_GPR_U32(ctx, 31, 0x246E08u);
    ctx->pc = 0x246E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246E00u;
    // 0x246e04: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x246E00u, 0x246E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246E08u;
label_246e08:
    // 0x246e08: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x246e08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x246e0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x246e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x246e10: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x246e10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_246e14:
    // 0x246e14: 0xc055f06  jal         func_157C18
    ctx->pc = 0x246E14u;
    SET_GPR_U32(ctx, 31, 0x246E1Cu);
    ctx->pc = 0x246E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246E14u;
    // 0x246e18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x246E14u, 0x246E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246E1Cu;
label_246e1c:
    // 0x246e1c: 0x5040003b  beql        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x246E1Cu;
    {
        const bool branch_taken_0x246e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246e1c) {
            ctx->pc = 0x246E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246E1Cu;
            // 0x246e20: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246F0Cu;
            goto label_246f0c;
        }
    }
    ctx->pc = 0x246E24u;
    // 0x246e24: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x246e24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x246e28: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x246E28u;
    {
        const bool branch_taken_0x246e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E28u;
        // 0x246e2c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246e28) {
            ctx->pc = 0x246F04u;
            goto label_246f04;
        }
    }
    ctx->pc = 0x246E30u;
label_246e30:
    // 0x246e30: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x246e30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x246e34: 0xc09d91a  jal         func_276468
    ctx->pc = 0x246E34u;
    SET_GPR_U32(ctx, 31, 0x246E3Cu);
    ctx->pc = 0x246E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246E34u;
    // 0x246e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x246E34u, 0x246E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246E3Cu;
label_246e3c:
    // 0x246e3c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x246e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x246e40: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x246e40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x246e44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x246e44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x246e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246e4c: 0x8c650098  lw          $a1, 0x98($v1)
    ctx->pc = 0x246e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
    // 0x246e50: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x246e50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x246e54: 0x8c66009c  lw          $a2, 0x9C($v1)
    ctx->pc = 0x246e54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x246e58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x246e58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246e5c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x246e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x246e60: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x246E60u;
    SET_GPR_U32(ctx, 31, 0x246E68u);
    ctx->pc = 0x246E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246E60u;
    // 0x246e64: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x246E60u, 0x246E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246E68u;
label_246e68:
    // 0x246e68: 0x8e0416d0  lw          $a0, 0x16D0($s0)
    ctx->pc = 0x246e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x246e6c: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x246e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x246e70: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x246e70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x246e74: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x246e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x246e78: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x246e78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x246e7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x246e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x246e80: 0xae0416d0  sw          $a0, 0x16D0($s0)
    ctx->pc = 0x246e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 4));
    // 0x246e84: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x246e84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_246e88:
    // 0x246e88: 0xc055f06  jal         func_157C18
    ctx->pc = 0x246E88u;
    SET_GPR_U32(ctx, 31, 0x246E90u);
    ctx->pc = 0x246E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246E88u;
    // 0x246e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x246E88u, 0x246E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246E90u;
label_246e90:
    // 0x246e90: 0x8e0316d0  lw          $v1, 0x16D0($s0)
    ctx->pc = 0x246e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x246e94: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x246e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x246e98: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x246e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x246e9c: 0x5060001b  beql        $v1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x246E9Cu;
    {
        const bool branch_taken_0x246e9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x246e9c) {
            ctx->pc = 0x246EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246E9Cu;
            // 0x246ea0: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246F0Cu;
            goto label_246f0c;
        }
    }
    ctx->pc = 0x246EA4u;
    // 0x246ea4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x246ea4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x246ea8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x246EA8u;
    {
        const bool branch_taken_0x246ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246EA8u;
        // 0x246eac: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ea8) {
            ctx->pc = 0x246F04u;
            goto label_246f04;
        }
    }
    ctx->pc = 0x246EB0u;
label_246eb0:
    // 0x246eb0: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x246eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x246eb4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x246EB4u;
    SET_GPR_U32(ctx, 31, 0x246EBCu);
    ctx->pc = 0x246EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246EB4u;
    // 0x246eb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x246EB4u, 0x246EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246EBCu;
label_246ebc:
    // 0x246ebc: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x246ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x246ec0: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x246ec0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x246ec4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x246ec4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x246ec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246ecc: 0x8c6503e4  lw          $a1, 0x3E4($v1)
    ctx->pc = 0x246eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 996)));
    // 0x246ed0: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x246ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x246ed4: 0x8c6603e8  lw          $a2, 0x3E8($v1)
    ctx->pc = 0x246ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1000)));
    // 0x246ed8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x246ed8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246edc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x246edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x246ee0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x246EE0u;
    SET_GPR_U32(ctx, 31, 0x246EE8u);
    ctx->pc = 0x246EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246EE0u;
    // 0x246ee4: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x246EE0u, 0x246EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246EE8u;
label_246ee8:
    // 0x246ee8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x246ee8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x246eec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x246eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x246ef0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x246ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_246ef4:
    // 0x246ef4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x246EF4u;
    SET_GPR_U32(ctx, 31, 0x246EFCu);
    ctx->pc = 0x246EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246EF4u;
    // 0x246ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x246EF4u, 0x246EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246EFCu;
label_246efc:
    // 0x246efc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x246EFCu;
    {
        const bool branch_taken_0x246efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246EFCu;
        // 0x246f00: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246efc) {
            ctx->pc = 0x246F08u;
            goto label_246f08;
        }
    }
    ctx->pc = 0x246F04u;
label_246f04:
    // 0x246f04: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x246f04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_246f08:
    // 0x246f08: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x246f08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_246f0c:
    // 0x246f0c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x246f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x246f10: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x246F10u;
    {
        const bool branch_taken_0x246f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246f10) {
            ctx->pc = 0x246F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246F10u;
            // 0x246f14: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246F34u;
            goto label_246f34;
        }
    }
    ctx->pc = 0x246F18u;
    // 0x246f18: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x246f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
    // 0x246f1c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x246F1Cu;
    {
        const bool branch_taken_0x246f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246f1c) {
            ctx->pc = 0x246F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246F1Cu;
            // 0x246f20: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246F34u;
            goto label_246f34;
        }
    }
    ctx->pc = 0x246F24u;
    // 0x246f24: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x246f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x246f28: 0xc09d138  jal         func_2744E0
    ctx->pc = 0x246F28u;
    SET_GPR_U32(ctx, 31, 0x246F30u);
    ctx->pc = 0x246F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246F28u;
    // 0x246f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2744E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744E0u, 0x246F28u, 0x246F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F30u;
label_246f30:
    // 0x246f30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x246f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_246f34:
    // 0x246f34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x246f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246f38: 0x3e00008  jr          $ra
    ctx->pc = 0x246F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F38u;
        // 0x246f3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246F40u;
}
