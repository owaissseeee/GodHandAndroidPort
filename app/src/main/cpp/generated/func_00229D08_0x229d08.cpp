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

// Function: func_00229D08
// Address: 0x229d08 - 0x22a258
void func_00229D08_0x229d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00229D08_0x229d08");
#endif

    switch (ctx->pc) {
        case 0x229d60u: goto label_229d60;
        case 0x229d8cu: goto label_229d8c;
        case 0x229dacu: goto label_229dac;
        case 0x229dccu: goto label_229dcc;
        case 0x229decu: goto label_229dec;
        case 0x229dfcu: goto label_229dfc;
        case 0x229e18u: goto label_229e18;
        case 0x229e3cu: goto label_229e3c;
        case 0x229e5cu: goto label_229e5c;
        case 0x229e7cu: goto label_229e7c;
        case 0x229e98u: goto label_229e98;
        case 0x229f08u: goto label_229f08;
        case 0x229f28u: goto label_229f28;
        case 0x229f3cu: goto label_229f3c;
        case 0x229f74u: goto label_229f74;
        case 0x229f80u: goto label_229f80;
        case 0x229f88u: goto label_229f88;
        case 0x229f98u: goto label_229f98;
        case 0x229fb0u: goto label_229fb0;
        case 0x229fdcu: goto label_229fdc;
        case 0x229ffcu: goto label_229ffc;
        case 0x22a008u: goto label_22a008;
        case 0x22a088u: goto label_22a088;
        case 0x22a0b4u: goto label_22a0b4;
        case 0x22a0d4u: goto label_22a0d4;
        case 0x22a0e8u: goto label_22a0e8;
        case 0x22a108u: goto label_22a108;
        case 0x22a134u: goto label_22a134;
        case 0x22a154u: goto label_22a154;
        case 0x22a168u: goto label_22a168;
        case 0x22a178u: goto label_22a178;
        case 0x22a18cu: goto label_22a18c;
        case 0x22a198u: goto label_22a198;
        case 0x22a1a8u: goto label_22a1a8;
        case 0x22a1d4u: goto label_22a1d4;
        case 0x22a1f4u: goto label_22a1f4;
        case 0x22a208u: goto label_22a208;
        case 0x22a218u: goto label_22a218;
        case 0x22a22cu: goto label_22a22c;
        case 0x22a238u: goto label_22a238;
        default: break;
    }

    ctx->pc = 0x229d08u;

    // 0x229d08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x229d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x229d0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x229d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229d10: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x229d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x229d14: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x229d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x229d18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x229d18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229d1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x229d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x229d20: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x229d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x229d24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x229d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x229d28: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x229d28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x229d2c: 0xa203186a  sb          $v1, 0x186A($s0)
    ctx->pc = 0x229d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6250), (uint8_t)GPR_U32(ctx, 3));
    // 0x229d30: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x229d30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x229d34: 0x2c82000c  sltiu       $v0, $a0, 0xC
    ctx->pc = 0x229d34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x229d38: 0x1040013f  beqz        $v0, . + 4 + (0x13F << 2)
    ctx->pc = 0x229D38u;
    {
        const bool branch_taken_0x229d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D38u;
        // 0x229d3c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229d38) {
            ctx->pc = 0x22A238u;
            goto label_22a238;
        }
    }
    ctx->pc = 0x229D40u;
    // 0x229d40: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x229d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x229d44: 0x244287f0  addiu       $v0, $v0, -0x7810
    ctx->pc = 0x229d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936560));
    // 0x229d48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x229d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229d4c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x229d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x229d50: 0x800008  jr          $a0
    ctx->pc = 0x229D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x229D58u: goto label_229d58;
            case 0x229DC4u: goto label_229dc4;
            case 0x229DF4u: goto label_229df4;
            case 0x229ED0u: goto label_229ed0;
            case 0x229FA8u: goto label_229fa8;
            case 0x22A080u: goto label_22a080;
            case 0x22A0E0u: goto label_22a0e0;
            case 0x22A100u: goto label_22a100;
            case 0x22A160u: goto label_22a160;
            case 0x22A1A0u: goto label_22a1a0;
            case 0x22A200u: goto label_22a200;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229D50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x229D58u;
label_229d58:
    // 0x229d58: 0xc09d91a  jal         func_276468
    ctx->pc = 0x229D58u;
    SET_GPR_U32(ctx, 31, 0x229D60u);
    ctx->pc = 0x229D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229D58u;
    // 0x229d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x229D58u, 0x229D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229D60u;
label_229d60:
    // 0x229d60: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x229d60u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x229d64: 0x8e050744  lw          $a1, 0x744($s0)
    ctx->pc = 0x229d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1860)));
    // 0x229d68: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x229d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x229d6c: 0x8c433758  lw          $v1, 0x3758($v0)
    ctx->pc = 0x229d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14168)));
    // 0x229d70: 0x8c44375c  lw          $a0, 0x375C($v0)
    ctx->pc = 0x229d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14172)));
    // 0x229d74: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x229d74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229d78: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x229D78u;
    {
        const bool branch_taken_0x229d78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x229D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D78u;
        // 0x229d7c: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229d78) {
            ctx->pc = 0x229D8Cu;
            goto label_229d8c;
        }
    }
    ctx->pc = 0x229D80u;
    // 0x229d80: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x229d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229d84: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x229D84u;
    SET_GPR_U32(ctx, 31, 0x229D8Cu);
    ctx->pc = 0x229D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229D84u;
    // 0x229d88: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x229D84u, 0x229D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229D8Cu;
label_229d8c:
    // 0x229d8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x229d8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x229d90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x229d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229d94: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x229d94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229d98: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x229d98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229d9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229da0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x229da0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x229da4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x229DA4u;
    SET_GPR_U32(ctx, 31, 0x229DACu);
    ctx->pc = 0x229DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229DA4u;
    // 0x229da8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x229DA4u, 0x229DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229DACu;
label_229dac:
    // 0x229dac: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x229dacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x229db0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x229db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229db4: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x229db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    // 0x229db8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x229db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x229dbc: 0xa6000568  sh          $zero, 0x568($s0)
    ctx->pc = 0x229dbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 0));
    // 0x229dc0: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x229dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_229dc4:
    // 0x229dc4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x229DC4u;
    SET_GPR_U32(ctx, 31, 0x229DCCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x229DC4u, 0x229DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229DCCu;
label_229dcc:
    // 0x229dcc: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x229dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229dd4: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x229dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x229dd8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x229dd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x229ddc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x229ddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x229de0: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x229de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x229de4: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x229DE4u;
    SET_GPR_U32(ctx, 31, 0x229DECu);
    ctx->pc = 0x229DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229DE4u;
    // 0x229de8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x229DE4u, 0x229DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229DECu;
label_229dec:
    // 0x229dec: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x229DECu;
    {
        const bool branch_taken_0x229dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229dec) {
            ctx->pc = 0x22A0E0u;
            goto label_22a0e0;
        }
    }
    ctx->pc = 0x229DF4u;
label_229df4:
    // 0x229df4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x229DF4u;
    SET_GPR_U32(ctx, 31, 0x229DFCu);
    ctx->pc = 0x229DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229DF4u;
    // 0x229df8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x229DF4u, 0x229DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229DFCu;
label_229dfc:
    // 0x229dfc: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x229dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x229e00: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x229e00u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x229e04: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x229e04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x229e08: 0x8c6237ac  lw          $v0, 0x37AC($v1)
    ctx->pc = 0x229e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14252)));
    // 0x229e0c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x229e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x229e10: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x229E10u;
    SET_GPR_U32(ctx, 31, 0x229E18u);
    ctx->pc = 0x229E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E10u;
    // 0x229e14: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x229E10u, 0x229E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E18u;
label_229e18:
    // 0x229e18: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x229e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x229e1c: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x229E1Cu;
    {
        const bool branch_taken_0x229e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x229E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E1Cu;
        // 0x229e20: 0x8e030304  lw          $v1, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229e1c) {
            ctx->pc = 0x229E44u;
            goto label_229e44;
        }
    }
    ctx->pc = 0x229E24u;
    // 0x229e24: 0x8e040744  lw          $a0, 0x744($s0)
    ctx->pc = 0x229e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1860)));
    // 0x229e28: 0x8c6237b0  lw          $v0, 0x37B0($v1)
    ctx->pc = 0x229e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14256)));
    // 0x229e2c: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x229E2Cu;
    {
        const bool branch_taken_0x229e2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x229E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E2Cu;
        // 0x229e30: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229e2c) {
            ctx->pc = 0x229E5Cu;
            goto label_229e5c;
        }
    }
    ctx->pc = 0x229E34u;
    // 0x229e34: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x229E34u;
    SET_GPR_U32(ctx, 31, 0x229E3Cu);
    ctx->pc = 0x229E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E34u;
    // 0x229e38: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x229E34u, 0x229E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E3Cu;
label_229e3c:
    // 0x229e3c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x229E3Cu;
    {
        const bool branch_taken_0x229e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229e3c) {
            ctx->pc = 0x229E5Cu;
            goto label_229e5c;
        }
    }
    ctx->pc = 0x229E44u;
label_229e44:
    // 0x229e44: 0x8e040744  lw          $a0, 0x744($s0)
    ctx->pc = 0x229e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1860)));
    // 0x229e48: 0x8c6237b4  lw          $v0, 0x37B4($v1)
    ctx->pc = 0x229e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14260)));
    // 0x229e4c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x229E4Cu;
    {
        const bool branch_taken_0x229e4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x229E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E4Cu;
        // 0x229e50: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229e4c) {
            ctx->pc = 0x229E5Cu;
            goto label_229e5c;
        }
    }
    ctx->pc = 0x229E54u;
    // 0x229e54: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x229E54u;
    SET_GPR_U32(ctx, 31, 0x229E5Cu);
    ctx->pc = 0x229E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E54u;
    // 0x229e58: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x229E54u, 0x229E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E5Cu;
label_229e5c:
    // 0x229e5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x229e5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x229e60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x229e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229e64: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x229e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229e68: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x229e68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229e6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229e70: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x229e70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x229e74: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x229E74u;
    SET_GPR_U32(ctx, 31, 0x229E7Cu);
    ctx->pc = 0x229E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E74u;
    // 0x229e78: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x229E74u, 0x229E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E7Cu;
label_229e7c:
    // 0x229e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229e80: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x229e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x229e84: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x229e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x229e88: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x229e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x229e8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x229e8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229e90: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x229E90u;
    SET_GPR_U32(ctx, 31, 0x229E98u);
    ctx->pc = 0x229E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E90u;
    // 0x229e94: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x229E90u, 0x229E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E98u;
label_229e98:
    // 0x229e98: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x229e98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x229e9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x229e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229ea0: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x229ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
    // 0x229ea4: 0x34214ff3  ori         $at, $at, 0x4FF3
    ctx->pc = 0x229ea4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20467);
    // 0x229ea8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x229ea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229eac: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x229eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x229eb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x229eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x229eb4: 0xa6030568  sh          $v1, 0x568($s0)
    ctx->pc = 0x229eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 3));
    // 0x229eb8: 0xe60005d8  swc1        $f0, 0x5D8($s0)
    ctx->pc = 0x229eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1496), bits); }
    // 0x229ebc: 0xa604056a  sh          $a0, 0x56A($s0)
    ctx->pc = 0x229ebcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 4));
    // 0x229ec0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x229ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x229ec4: 0xe60005d0  swc1        $f0, 0x5D0($s0)
    ctx->pc = 0x229ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1488), bits); }
    // 0x229ec8: 0xe60005d4  swc1        $f0, 0x5D4($s0)
    ctx->pc = 0x229ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1492), bits); }
    // 0x229ecc: 0xae0005f4  sw          $zero, 0x5F4($s0)
    ctx->pc = 0x229eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 0));
label_229ed0:
    // 0x229ed0: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x229ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229ed4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x229ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x229ed8: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x229ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x229edc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x229edcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229ee0: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x229ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x229ee4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x229ee4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229ee8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x229ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x229eec: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x229EECu;
    {
        const bool branch_taken_0x229eec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x229EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229EECu;
        // 0x229ef0: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229eec) {
            ctx->pc = 0x229F30u;
            goto label_229f30;
        }
    }
    ctx->pc = 0x229EF4u;
    // 0x229ef4: 0x86020568  lh          $v0, 0x568($s0)
    ctx->pc = 0x229ef4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x229ef8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x229EF8u;
    {
        const bool branch_taken_0x229ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229ef8) {
            ctx->pc = 0x229EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229EF8u;
            // 0x229efc: 0xa6000568  sh          $zero, 0x568($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229F34u;
            goto label_229f34;
        }
    }
    ctx->pc = 0x229F00u;
    // 0x229f00: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x229F00u;
    SET_GPR_U32(ctx, 31, 0x229F08u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x229F00u, 0x229F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F08u;
label_229f08:
    // 0x229f08: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x229f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229f0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229f10: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x229f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x229f14: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x229f14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x229f18: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x229f18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x229f1c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x229f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x229f20: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x229F20u;
    SET_GPR_U32(ctx, 31, 0x229F28u);
    ctx->pc = 0x229F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F20u;
    // 0x229f24: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x229F20u, 0x229F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F28u;
label_229f28:
    // 0x229f28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x229F28u;
    {
        const bool branch_taken_0x229f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229f28) {
            ctx->pc = 0x229F34u;
            goto label_229f34;
        }
    }
    ctx->pc = 0x229F30u;
label_229f30:
    // 0x229f30: 0xa6000568  sh          $zero, 0x568($s0)
    ctx->pc = 0x229f30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 0));
label_229f34:
    // 0x229f34: 0xc055f06  jal         func_157C18
    ctx->pc = 0x229F34u;
    SET_GPR_U32(ctx, 31, 0x229F3Cu);
    ctx->pc = 0x229F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F34u;
    // 0x229f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x229F34u, 0x229F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F3Cu;
label_229f3c:
    // 0x229f3c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x229F3Cu;
    {
        const bool branch_taken_0x229f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229f3c) {
            ctx->pc = 0x229F60u;
            goto label_229f60;
        }
    }
    ctx->pc = 0x229F44u;
    // 0x229f44: 0x9602056a  lhu         $v0, 0x56A($s0)
    ctx->pc = 0x229f44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
    // 0x229f48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x229f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x229f4c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x229f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x229f50: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x229F50u;
    {
        const bool branch_taken_0x229f50 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x229F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F50u;
        // 0x229f54: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229f50) {
            ctx->pc = 0x229F60u;
            goto label_229f60;
        }
    }
    ctx->pc = 0x229F58u;
    // 0x229f58: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x229f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x229f5c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x229f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_229f60:
    // 0x229f60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x229f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x229f64: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x229f64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x229f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229f6c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x229F6Cu;
    SET_GPR_U32(ctx, 31, 0x229F74u);
    ctx->pc = 0x229F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F6Cu;
    // 0x229f70: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x229F6Cu, 0x229F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F74u;
label_229f74:
    // 0x229f74: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x229f74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x229f78: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x229F78u;
    SET_GPR_U32(ctx, 31, 0x229F80u);
    ctx->pc = 0x229F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F78u;
    // 0x229f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x229F78u, 0x229F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F80u;
label_229f80:
    // 0x229f80: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x229F80u;
    SET_GPR_U32(ctx, 31, 0x229F88u);
    ctx->pc = 0x229F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F80u;
    // 0x229f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x229F80u, 0x229F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F88u;
label_229f88:
    // 0x229f88: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x229f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x229f8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x229f8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x229f90: 0xc09d622  jal         func_275888
    ctx->pc = 0x229F90u;
    SET_GPR_U32(ctx, 31, 0x229F98u);
    ctx->pc = 0x229F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F90u;
    // 0x229f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275888u, 0x229F90u, 0x229F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F98u;
label_229f98:
    // 0x229f98: 0x104000a7  beqz        $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x229F98u;
    {
        const bool branch_taken_0x229f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F98u;
        // 0x229f9c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229f98) {
            ctx->pc = 0x22A238u;
            goto label_22a238;
        }
    }
    ctx->pc = 0x229FA0u;
    // 0x229fa0: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x229FA0u;
    {
        const bool branch_taken_0x229fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229FA0u;
        // 0x229fa4: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229fa0) {
            ctx->pc = 0x22A238u;
            goto label_22a238;
        }
    }
    ctx->pc = 0x229FA8u;
label_229fa8:
    // 0x229fa8: 0xc09d91a  jal         func_276468
    ctx->pc = 0x229FA8u;
    SET_GPR_U32(ctx, 31, 0x229FB0u);
    ctx->pc = 0x229FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229FA8u;
    // 0x229fac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x229FA8u, 0x229FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229FB0u;
label_229fb0:
    // 0x229fb0: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x229fb0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x229fb4: 0x8e050744  lw          $a1, 0x744($s0)
    ctx->pc = 0x229fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1860)));
    // 0x229fb8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x229fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x229fbc: 0x8c4337b8  lw          $v1, 0x37B8($v0)
    ctx->pc = 0x229fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14264)));
    // 0x229fc0: 0x8c4437bc  lw          $a0, 0x37BC($v0)
    ctx->pc = 0x229fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14268)));
    // 0x229fc4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x229fc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229fc8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x229FC8u;
    {
        const bool branch_taken_0x229fc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x229FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229FC8u;
        // 0x229fcc: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229fc8) {
            ctx->pc = 0x229FDCu;
            goto label_229fdc;
        }
    }
    ctx->pc = 0x229FD0u;
    // 0x229fd0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x229fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229fd4: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x229FD4u;
    SET_GPR_U32(ctx, 31, 0x229FDCu);
    ctx->pc = 0x229FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229FD4u;
    // 0x229fd8: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x229FD4u, 0x229FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229FDCu;
label_229fdc:
    // 0x229fdc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x229fdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x229fe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229fe4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x229fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229fe8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x229fe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229fec: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x229fecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229ff0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x229ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x229ff4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x229FF4u;
    SET_GPR_U32(ctx, 31, 0x229FFCu);
    ctx->pc = 0x229FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229FF4u;
    // 0x229ff8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x229FF4u, 0x229FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229FFCu;
label_229ffc:
    // 0x229ffc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x229ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x22a000: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22A000u;
    SET_GPR_U32(ctx, 31, 0x22A008u);
    ctx->pc = 0x22A004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A000u;
    // 0x22a004: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22A000u, 0x22A008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A008u;
label_22a008:
    // 0x22a008: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x22a008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22a00c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x22a00cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x22a010: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22A010u;
    {
        const bool branch_taken_0x22a010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A010u;
        // 0x22a014: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a010) {
            ctx->pc = 0x22A030u;
            goto label_22a030;
        }
    }
    ctx->pc = 0x22A018u;
    // 0x22a018: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22a018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22a01c: 0x24428820  addiu       $v0, $v0, -0x77E0
    ctx->pc = 0x22a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936608));
    // 0x22a020: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22a020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22a024: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22a024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22a028: 0x800008  jr          $a0
    ctx->pc = 0x22A028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22A030u: goto label_22a030;
            case 0x22A040u: goto label_22a040;
            case 0x22A050u: goto label_22a050;
            case 0x22A060u: goto label_22a060;
            case 0x22A070u: goto label_22a070;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A028u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22A030u;
label_22a030:
    // 0x22a030: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x22a030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x22a034: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22a034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a038: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x22A038u;
    {
        const bool branch_taken_0x22a038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A038u;
        // 0x22a03c: 0xe60016e4  swc1        $f0, 0x16E4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5860), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a038) {
            ctx->pc = 0x22A0D4u;
            goto label_22a0d4;
        }
    }
    ctx->pc = 0x22A040u;
label_22a040:
    // 0x22a040: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x22a040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x22a044: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22a044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a048: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x22A048u;
    {
        const bool branch_taken_0x22a048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A048u;
        // 0x22a04c: 0xe60016e4  swc1        $f0, 0x16E4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5860), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a048) {
            ctx->pc = 0x22A0D4u;
            goto label_22a0d4;
        }
    }
    ctx->pc = 0x22A050u;
label_22a050:
    // 0x22a050: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x22a050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
    // 0x22a054: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22a054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a058: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x22A058u;
    {
        const bool branch_taken_0x22a058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A058u;
        // 0x22a05c: 0xe60016e4  swc1        $f0, 0x16E4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5860), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a058) {
            ctx->pc = 0x22A0D4u;
            goto label_22a0d4;
        }
    }
    ctx->pc = 0x22A060u;
label_22a060:
    // 0x22a060: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x22a060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
    // 0x22a064: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22a064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a068: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x22A068u;
    {
        const bool branch_taken_0x22a068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A068u;
        // 0x22a06c: 0xe60016e4  swc1        $f0, 0x16E4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5860), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a068) {
            ctx->pc = 0x22A0D4u;
            goto label_22a0d4;
        }
    }
    ctx->pc = 0x22A070u;
label_22a070:
    // 0x22a070: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x22a070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x22a074: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22a074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a078: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x22A078u;
    {
        const bool branch_taken_0x22a078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A078u;
        // 0x22a07c: 0xe60016e4  swc1        $f0, 0x16E4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5860), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a078) {
            ctx->pc = 0x22A0D4u;
            goto label_22a0d4;
        }
    }
    ctx->pc = 0x22A080u;
label_22a080:
    // 0x22a080: 0xc09d91a  jal         func_276468
    ctx->pc = 0x22A080u;
    SET_GPR_U32(ctx, 31, 0x22A088u);
    ctx->pc = 0x22A084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A080u;
    // 0x22a084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x22A080u, 0x22A088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A088u;
label_22a088:
    // 0x22a088: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x22a088u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22a08c: 0x8e050744  lw          $a1, 0x744($s0)
    ctx->pc = 0x22a08cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1860)));
    // 0x22a090: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x22a090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x22a094: 0x8c4337c0  lw          $v1, 0x37C0($v0)
    ctx->pc = 0x22a094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14272)));
    // 0x22a098: 0x8c4437c4  lw          $a0, 0x37C4($v0)
    ctx->pc = 0x22a098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14276)));
    // 0x22a09c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x22a09cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22a0a0: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22A0A0u;
    {
        const bool branch_taken_0x22a0a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A0A0u;
        // 0x22a0a4: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a0a0) {
            ctx->pc = 0x22A0B4u;
            goto label_22a0b4;
        }
    }
    ctx->pc = 0x22A0A8u;
    // 0x22a0a8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x22a0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a0ac: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x22A0ACu;
    SET_GPR_U32(ctx, 31, 0x22A0B4u);
    ctx->pc = 0x22A0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A0ACu;
    // 0x22a0b0: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x22A0ACu, 0x22A0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A0B4u;
label_22a0b4:
    // 0x22a0b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22a0b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22a0b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22a0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a0bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22a0bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a0c0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x22a0c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a0c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a0c8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22a0c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22a0cc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22A0CCu;
    SET_GPR_U32(ctx, 31, 0x22A0D4u);
    ctx->pc = 0x22A0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A0CCu;
    // 0x22a0d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22A0CCu, 0x22A0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A0D4u;
label_22a0d4:
    // 0x22a0d4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x22a0d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22a0d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22a0dc: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x22a0dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_22a0e0:
    // 0x22a0e0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22A0E0u;
    SET_GPR_U32(ctx, 31, 0x22A0E8u);
    ctx->pc = 0x22A0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A0E0u;
    // 0x22a0e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22A0E0u, 0x22A0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A0E8u;
label_22a0e8:
    // 0x22a0e8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x22A0E8u;
    {
        const bool branch_taken_0x22a0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a0e8) {
            ctx->pc = 0x22A178u;
            goto label_22a178;
        }
    }
    ctx->pc = 0x22A0F0u;
    // 0x22a0f0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x22a0f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22a0f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22a0f8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x22A0F8u;
    {
        const bool branch_taken_0x22a0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A0F8u;
        // 0x22a0fc: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a0f8) {
            ctx->pc = 0x22A178u;
            goto label_22a178;
        }
    }
    ctx->pc = 0x22A100u;
label_22a100:
    // 0x22a100: 0xc09d91a  jal         func_276468
    ctx->pc = 0x22A100u;
    SET_GPR_U32(ctx, 31, 0x22A108u);
    ctx->pc = 0x22A104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A100u;
    // 0x22a104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x22A100u, 0x22A108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A108u;
label_22a108:
    // 0x22a108: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x22a108u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22a10c: 0x8e050744  lw          $a1, 0x744($s0)
    ctx->pc = 0x22a10cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1860)));
    // 0x22a110: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x22a110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x22a114: 0x8c4337c8  lw          $v1, 0x37C8($v0)
    ctx->pc = 0x22a114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14280)));
    // 0x22a118: 0x8c4437cc  lw          $a0, 0x37CC($v0)
    ctx->pc = 0x22a118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14284)));
    // 0x22a11c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x22a11cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22a120: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22A120u;
    {
        const bool branch_taken_0x22a120 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A120u;
        // 0x22a124: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a120) {
            ctx->pc = 0x22A134u;
            goto label_22a134;
        }
    }
    ctx->pc = 0x22A128u;
    // 0x22a128: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x22a128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a12c: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x22A12Cu;
    SET_GPR_U32(ctx, 31, 0x22A134u);
    ctx->pc = 0x22A130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A12Cu;
    // 0x22a130: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x22A12Cu, 0x22A134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A134u;
label_22a134:
    // 0x22a134: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22a134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22a138: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22a138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a13c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22a13cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a140: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x22a140u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a144: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a148: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22a148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22a14c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22A14Cu;
    SET_GPR_U32(ctx, 31, 0x22A154u);
    ctx->pc = 0x22A150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A14Cu;
    // 0x22a150: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22A14Cu, 0x22A154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A154u;
label_22a154:
    // 0x22a154: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x22a154u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22a158: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22a158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22a15c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x22a15cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_22a160:
    // 0x22a160: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22A160u;
    SET_GPR_U32(ctx, 31, 0x22A168u);
    ctx->pc = 0x22A164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A160u;
    // 0x22a164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22A160u, 0x22A168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A168u;
label_22a168:
    // 0x22a168: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22A168u;
    {
        const bool branch_taken_0x22a168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a168) {
            ctx->pc = 0x22A178u;
            goto label_22a178;
        }
    }
    ctx->pc = 0x22A170u;
    // 0x22a170: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x22A170u;
    SET_GPR_U32(ctx, 31, 0x22A178u);
    ctx->pc = 0x22A174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A170u;
    // 0x22a174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x22A170u, 0x22A178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A178u;
label_22a178:
    // 0x22a178: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22a178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22a17c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22a17cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22a180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a184: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22A184u;
    SET_GPR_U32(ctx, 31, 0x22A18Cu);
    ctx->pc = 0x22A188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A184u;
    // 0x22a188: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22A184u, 0x22A18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A18Cu;
label_22a18c:
    // 0x22a18c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a190: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22A190u;
    SET_GPR_U32(ctx, 31, 0x22A198u);
    ctx->pc = 0x22A194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A190u;
    // 0x22a194: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22A190u, 0x22A198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A198u;
label_22a198:
    // 0x22a198: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x22A198u;
    {
        const bool branch_taken_0x22a198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A198u;
        // 0x22a19c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a198) {
            ctx->pc = 0x22A23Cu;
            goto label_22a23c;
        }
    }
    ctx->pc = 0x22A1A0u;
label_22a1a0:
    // 0x22a1a0: 0xc09d91a  jal         func_276468
    ctx->pc = 0x22A1A0u;
    SET_GPR_U32(ctx, 31, 0x22A1A8u);
    ctx->pc = 0x22A1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A1A0u;
    // 0x22a1a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x22A1A0u, 0x22A1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A1A8u;
label_22a1a8:
    // 0x22a1a8: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x22a1a8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22a1ac: 0x8e050744  lw          $a1, 0x744($s0)
    ctx->pc = 0x22a1acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1860)));
    // 0x22a1b0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x22a1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x22a1b4: 0x8c433760  lw          $v1, 0x3760($v0)
    ctx->pc = 0x22a1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14176)));
    // 0x22a1b8: 0x8c443764  lw          $a0, 0x3764($v0)
    ctx->pc = 0x22a1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14180)));
    // 0x22a1bc: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x22a1bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22a1c0: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22A1C0u;
    {
        const bool branch_taken_0x22a1c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A1C0u;
        // 0x22a1c4: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a1c0) {
            ctx->pc = 0x22A1D4u;
            goto label_22a1d4;
        }
    }
    ctx->pc = 0x22A1C8u;
    // 0x22a1c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x22a1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a1cc: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x22A1CCu;
    SET_GPR_U32(ctx, 31, 0x22A1D4u);
    ctx->pc = 0x22A1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A1CCu;
    // 0x22a1d0: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x22A1CCu, 0x22A1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A1D4u;
label_22a1d4:
    // 0x22a1d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22a1d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22a1d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22a1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a1dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22a1dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a1e0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x22a1e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a1e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a1e8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22a1e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22a1ec: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22A1ECu;
    SET_GPR_U32(ctx, 31, 0x22A1F4u);
    ctx->pc = 0x22A1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A1ECu;
    // 0x22a1f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22A1ECu, 0x22A1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A1F4u;
label_22a1f4:
    // 0x22a1f4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x22a1f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22a1f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22a1fc: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x22a1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_22a200:
    // 0x22a200: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22A200u;
    SET_GPR_U32(ctx, 31, 0x22A208u);
    ctx->pc = 0x22A204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A200u;
    // 0x22a204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22A200u, 0x22A208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A208u;
label_22a208:
    // 0x22a208: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22A208u;
    {
        const bool branch_taken_0x22a208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a208) {
            ctx->pc = 0x22A218u;
            goto label_22a218;
        }
    }
    ctx->pc = 0x22A210u;
    // 0x22a210: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x22A210u;
    SET_GPR_U32(ctx, 31, 0x22A218u);
    ctx->pc = 0x22A214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A210u;
    // 0x22a214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x22A210u, 0x22A218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A218u;
label_22a218:
    // 0x22a218: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22a218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22a21c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22a21cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22a220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a224: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22A224u;
    SET_GPR_U32(ctx, 31, 0x22A22Cu);
    ctx->pc = 0x22A228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A224u;
    // 0x22a228: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22A224u, 0x22A22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A22Cu;
label_22a22c:
    // 0x22a22c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a230: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22A230u;
    SET_GPR_U32(ctx, 31, 0x22A238u);
    ctx->pc = 0x22A234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A230u;
    // 0x22a234: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22A230u, 0x22A238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A238u;
label_22a238:
    // 0x22a238: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x22a238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22a23c:
    // 0x22a23c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22a23cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a240: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22a240u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a244: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x22a244u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a24c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x22a24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22a250: 0x3e00008  jr          $ra
    ctx->pc = 0x22A250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A250u;
        // 0x22a254: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A258u;
}
