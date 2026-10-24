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

// Function: func_0022AF90
// Address: 0x22af90 - 0x22b358
void func_0022AF90_0x22af90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0022AF90_0x22af90");
#endif

    switch (ctx->pc) {
        case 0x22b018u: goto label_22b018;
        case 0x22b044u: goto label_22b044;
        case 0x22b05cu: goto label_22b05c;
        case 0x22b080u: goto label_22b080;
        case 0x22b08cu: goto label_22b08c;
        case 0x22b0acu: goto label_22b0ac;
        case 0x22b0c0u: goto label_22b0c0;
        case 0x22b0ccu: goto label_22b0cc;
        case 0x22b0d8u: goto label_22b0d8;
        case 0x22b0e0u: goto label_22b0e0;
        case 0x22b0f4u: goto label_22b0f4;
        case 0x22b15cu: goto label_22b15c;
        case 0x22b178u: goto label_22b178;
        case 0x22b1e0u: goto label_22b1e0;
        case 0x22b230u: goto label_22b230;
        case 0x22b240u: goto label_22b240;
        case 0x22b26cu: goto label_22b26c;
        case 0x22b288u: goto label_22b288;
        case 0x22b2a4u: goto label_22b2a4;
        case 0x22b2b0u: goto label_22b2b0;
        case 0x22b2d4u: goto label_22b2d4;
        case 0x22b2e4u: goto label_22b2e4;
        case 0x22b2fcu: goto label_22b2fc;
        case 0x22b308u: goto label_22b308;
        default: break;
    }

    ctx->pc = 0x22af90u;

    // 0x22af90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22af90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22af94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22af94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22af98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22af98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22af9c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22af9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x22afa0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22afa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22afa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22afa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22afa8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22afa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22afac: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x22afacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x22afb0: 0xa222186a  sb          $v0, 0x186A($s1)
    ctx->pc = 0x22afb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6250), (uint8_t)GPR_U32(ctx, 2));
    // 0x22afb4: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x22afb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x22afb8: 0x922502f6  lbu         $a1, 0x2F6($s1)
    ctx->pc = 0x22afb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22afbc: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x22afbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x22afc0: 0x10a40024  beq         $a1, $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x22AFC0u;
    {
        const bool branch_taken_0x22afc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x22AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AFC0u;
        // 0x22afc4: 0xae2316d4  sw          $v1, 0x16D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22afc0) {
            ctx->pc = 0x22B054u;
            goto label_22b054;
        }
    }
    ctx->pc = 0x22AFC8u;
    // 0x22afc8: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x22afc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22afcc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22AFCCu;
    {
        const bool branch_taken_0x22afcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AFCCu;
        // 0x22afd0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22afcc) {
            ctx->pc = 0x22AFE4u;
            goto label_22afe4;
        }
    }
    ctx->pc = 0x22AFD4u;
    // 0x22afd4: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x22AFD4u;
    {
        const bool branch_taken_0x22afd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22afd4) {
            ctx->pc = 0x22AFD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22AFD4u;
            // 0x22afd8: 0x8e2216d0  lw          $v0, 0x16D0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22AFFCu;
            goto label_22affc;
        }
    }
    ctx->pc = 0x22AFDCu;
    // 0x22afdc: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x22AFDCu;
    {
        const bool branch_taken_0x22afdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AFDCu;
        // 0x22afe0: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22afdc) {
            ctx->pc = 0x22B30Cu;
            goto label_22b30c;
        }
    }
    ctx->pc = 0x22AFE4u;
label_22afe4:
    // 0x22afe4: 0x10a20094  beq         $a1, $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x22AFE4u;
    {
        const bool branch_taken_0x22afe4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x22AFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AFE4u;
        // 0x22afe8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22afe4) {
            ctx->pc = 0x22B238u;
            goto label_22b238;
        }
    }
    ctx->pc = 0x22AFECu;
    // 0x22afec: 0x10a200a4  beq         $a1, $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x22AFECu;
    {
        const bool branch_taken_0x22afec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x22afec) {
            ctx->pc = 0x22B280u;
            goto label_22b280;
        }
    }
    ctx->pc = 0x22AFF4u;
    // 0x22aff4: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x22AFF4u;
    {
        const bool branch_taken_0x22aff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AFF4u;
        // 0x22aff8: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aff4) {
            ctx->pc = 0x22B30Cu;
            goto label_22b30c;
        }
    }
    ctx->pc = 0x22AFFCu;
label_22affc:
    // 0x22affc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x22affcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x22b000: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x22b000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x22b004: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b008: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x22b008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x22b00c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x22b00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x22b010: 0xc09d91a  jal         func_276468
    ctx->pc = 0x22B010u;
    SET_GPR_U32(ctx, 31, 0x22B018u);
    ctx->pc = 0x22B014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B010u;
    // 0x22b014: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x22B010u, 0x22B018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B018u;
label_22b018:
    // 0x22b018: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x22b018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22b01c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x22b01cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22b020: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22b020u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22b024: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b028: 0x8c650cf8  lw          $a1, 0xCF8($v1)
    ctx->pc = 0x22b028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3320)));
    // 0x22b02c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x22b02cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22b030: 0x8c660cfc  lw          $a2, 0xCFC($v1)
    ctx->pc = 0x22b030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3324)));
    // 0x22b034: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22b034u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b038: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x22b038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22b03c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22B03Cu;
    SET_GPR_U32(ctx, 31, 0x22B044u);
    ctx->pc = 0x22B040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B03Cu;
    // 0x22b040: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22B03Cu, 0x22B044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B044u;
label_22b044:
    // 0x22b044: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22b044u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22b048: 0xae2005fc  sw          $zero, 0x5FC($s1)
    ctx->pc = 0x22b048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
    // 0x22b04c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22b04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22b050: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22b050u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22b054:
    // 0x22b054: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22B054u;
    SET_GPR_U32(ctx, 31, 0x22B05Cu);
    ctx->pc = 0x22B058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B054u;
    // 0x22b058: 0x8e3000f0  lw          $s0, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22B054u, 0x22B05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B05Cu;
label_22b05c:
    // 0x22b05c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22b05cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22b060: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22b060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22b064: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x22b064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22b068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b06c: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x22b06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x22b070: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x22b070u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x22b074: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x22b074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x22b078: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x22B078u;
    SET_GPR_U32(ctx, 31, 0x22B080u);
    ctx->pc = 0x22B07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B078u;
    // 0x22b07c: 0xc62c1670  lwc1        $f12, 0x1670($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x22B078u, 0x22B080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B080u;
label_22b080:
    // 0x22b080: 0xc62c1670  lwc1        $f12, 0x1670($s1)
    ctx->pc = 0x22b080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22b084: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x22B084u;
    SET_GPR_U32(ctx, 31, 0x22B08Cu);
    ctx->pc = 0x22B088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B084u;
    // 0x22b088: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x22B084u, 0x22B08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B08Cu;
label_22b08c:
    // 0x22b08c: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x22b08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b090: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x22b090u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x22b094: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x22b094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x22b098: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22b098u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22b09c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x22b09cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x22b0a0: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x22b0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22b0a4: 0xc0b687e  jal         func_2DA1F8
    ctx->pc = 0x22B0A4u;
    SET_GPR_U32(ctx, 31, 0x22B0ACu);
    ctx->pc = 0x22B0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B0A4u;
    // 0x22b0a8: 0x460e0b82  mul.s       $f14, $f1, $f14 (Delay Slot)
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x22B0A4u, 0x22B0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B0ACu;
label_22b0ac:
    // 0x22b0ac: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x22b0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b0b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b0b4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22b0b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22b0b8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22B0B8u;
    SET_GPR_U32(ctx, 31, 0x22B0C0u);
    ctx->pc = 0x22B0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B0B8u;
    // 0x22b0bc: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22B0B8u, 0x22B0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B0C0u;
label_22b0c0:
    // 0x22b0c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b0c4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22B0C4u;
    SET_GPR_U32(ctx, 31, 0x22B0CCu);
    ctx->pc = 0x22B0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B0C4u;
    // 0x22b0c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22B0C4u, 0x22B0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B0CCu;
label_22b0cc:
    // 0x22b0cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22b0ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22b0d0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22B0D0u;
    SET_GPR_U32(ctx, 31, 0x22B0D8u);
    ctx->pc = 0x22B0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B0D0u;
    // 0x22b0d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22B0D0u, 0x22B0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B0D8u;
label_22b0d8:
    // 0x22b0d8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22B0D8u;
    SET_GPR_U32(ctx, 31, 0x22B0E0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22B0D8u, 0x22B0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B0E0u;
label_22b0e0:
    // 0x22b0e0: 0x8443054a  lh          $v1, 0x54A($v0)
    ctx->pc = 0x22b0e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
    // 0x22b0e4: 0x18600095  blez        $v1, . + 4 + (0x95 << 2)
    ctx->pc = 0x22B0E4u;
    {
        const bool branch_taken_0x22b0e4 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x22B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B0E4u;
        // 0x22b0e8: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b0e4) {
            ctx->pc = 0x22B33Cu;
            goto label_22b33c;
        }
    }
    ctx->pc = 0x22B0ECu;
    // 0x22b0ec: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x22B0ECu;
    SET_GPR_U32(ctx, 31, 0x22B0F4u);
    ctx->pc = 0x22B0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B0ECu;
    // 0x22b0f0: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x22B0ECu, 0x22B0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B0F4u;
label_22b0f4:
    // 0x22b0f4: 0x54400092  bnel        $v0, $zero, . + 4 + (0x92 << 2)
    ctx->pc = 0x22B0F4u;
    {
        const bool branch_taken_0x22b0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b0f4) {
            ctx->pc = 0x22B0F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B0F4u;
            // 0x22b0f8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B340u;
            goto label_22b340;
        }
    }
    ctx->pc = 0x22B0FCu;
    // 0x22b0fc: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x22b0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b100: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x22b100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x22b104: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22b104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b108: 0x0  nop
    ctx->pc = 0x22b108u;
    // NOP
    // 0x22b10c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22b10cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b110: 0x0  nop
    ctx->pc = 0x22b110u;
    // NOP
    // 0x22b114: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x22B114u;
    {
        const bool branch_taken_0x22b114 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22b114) {
            ctx->pc = 0x22B1BCu;
            goto label_22b1bc;
        }
    }
    ctx->pc = 0x22B11Cu;
    // 0x22b11c: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x22b11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x22b120: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22b120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b124: 0x0  nop
    ctx->pc = 0x22b124u;
    // NOP
    // 0x22b128: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22b128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b12c: 0x0  nop
    ctx->pc = 0x22b12cu;
    // NOP
    // 0x22b130: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x22B130u;
    {
        const bool branch_taken_0x22b130 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22b130) {
            ctx->pc = 0x22B1BCu;
            goto label_22b1bc;
        }
    }
    ctx->pc = 0x22B138u;
    // 0x22b138: 0xc6201714  lwc1        $f0, 0x1714($s1)
    ctx->pc = 0x22b138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b13c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x22b13cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22b140: 0x0  nop
    ctx->pc = 0x22b140u;
    // NOP
    // 0x22b144: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x22b144u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b148: 0x0  nop
    ctx->pc = 0x22b148u;
    // NOP
    // 0x22b14c: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x22B14Cu;
    {
        const bool branch_taken_0x22b14c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22b14c) {
            ctx->pc = 0x22B1BCu;
            goto label_22b1bc;
        }
    }
    ctx->pc = 0x22B154u;
    // 0x22b154: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22B154u;
    SET_GPR_U32(ctx, 31, 0x22B15Cu);
    ctx->pc = 0x22B158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B154u;
    // 0x22b158: 0x8e3000f0  lw          $s0, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22B154u, 0x22B15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B15Cu;
label_22b15c:
    // 0x22b15c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x22b15cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22b160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b164: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x22b164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x22b168: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22b168u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22b16c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x22b16cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x22b170: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x22B170u;
    SET_GPR_U32(ctx, 31, 0x22B178u);
    ctx->pc = 0x22B174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B170u;
    // 0x22b174: 0xc62c0104  lwc1        $f12, 0x104($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x22B170u, 0x22B178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B178u;
label_22b178:
    // 0x22b178: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x22b178u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b17c: 0x0  nop
    ctx->pc = 0x22b17cu;
    // NOP
    // 0x22b180: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x22B180u;
    {
        const bool branch_taken_0x22b180 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B180u;
        // 0x22b184: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b180) {
            ctx->pc = 0x22B18Cu;
            goto label_22b18c;
        }
    }
    ctx->pc = 0x22B188u;
    // 0x22b188: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x22b188u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_22b18c:
    // 0x22b18c: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x22b18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
    // 0x22b190: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x22b190u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x22b194: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22b194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b198: 0x0  nop
    ctx->pc = 0x22b198u;
    // NOP
    // 0x22b19c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22b19cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b1a0: 0x0  nop
    ctx->pc = 0x22b1a0u;
    // NOP
    // 0x22b1a4: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x22B1A4u;
    {
        const bool branch_taken_0x22b1a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22b1a4) {
            ctx->pc = 0x22B1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B1A4u;
            // 0x22b1a8: 0xc6210618  lwc1        $f1, 0x618($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B1BCu;
            goto label_22b1bc;
        }
    }
    ctx->pc = 0x22B1ACu;
    // 0x22b1ac: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22b1acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22b1b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22b1b4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22b1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x22b1b8: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x22b1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22b1bc:
    // 0x22b1bc: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x22b1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x22b1c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22b1c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b1c4: 0x0  nop
    ctx->pc = 0x22b1c4u;
    // NOP
    // 0x22b1c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22b1c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b1cc: 0x0  nop
    ctx->pc = 0x22b1ccu;
    // NOP
    // 0x22b1d0: 0x4502004e  bc1fl       . + 4 + (0x4E << 2)
    ctx->pc = 0x22B1D0u;
    {
        const bool branch_taken_0x22b1d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22b1d0) {
            ctx->pc = 0x22B1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B1D0u;
            // 0x22b1d4: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B30Cu;
            goto label_22b30c;
        }
    }
    ctx->pc = 0x22B1D8u;
    // 0x22b1d8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22B1D8u;
    SET_GPR_U32(ctx, 31, 0x22B1E0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22B1D8u, 0x22B1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1E0u;
label_22b1e0:
    // 0x22b1e0: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x22b1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22b1e4: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x22b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x22b1e8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x22b1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22b1ec: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x22b1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b1f0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x22b1f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22b1f4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x22b1f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x22b1f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22b1f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b1fc: 0x0  nop
    ctx->pc = 0x22b1fcu;
    // NOP
    // 0x22b200: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x22B200u;
    {
        const bool branch_taken_0x22b200 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22B204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B200u;
        // 0x22b204: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b200) {
            ctx->pc = 0x22B20Cu;
            goto label_22b20c;
        }
    }
    ctx->pc = 0x22B208u;
    // 0x22b208: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x22b208u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_22b20c:
    // 0x22b20c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x22b20cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x22b210: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22b210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b214: 0x0  nop
    ctx->pc = 0x22b214u;
    // NOP
    // 0x22b218: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22b218u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b21c: 0x0  nop
    ctx->pc = 0x22b21cu;
    // NOP
    // 0x22b220: 0x4502003a  bc1fl       . + 4 + (0x3A << 2)
    ctx->pc = 0x22B220u;
    {
        const bool branch_taken_0x22b220 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22b220) {
            ctx->pc = 0x22B224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B220u;
            // 0x22b224: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B30Cu;
            goto label_22b30c;
        }
    }
    ctx->pc = 0x22B228u;
    // 0x22b228: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x22B228u;
    SET_GPR_U32(ctx, 31, 0x22B230u);
    ctx->pc = 0x22B22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B228u;
    // 0x22b22c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x22B228u, 0x22B230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B230u;
label_22b230:
    // 0x22b230: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x22B230u;
    {
        const bool branch_taken_0x22b230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B230u;
        // 0x22b234: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b230) {
            ctx->pc = 0x22B30Cu;
            goto label_22b30c;
        }
    }
    ctx->pc = 0x22B238u;
label_22b238:
    // 0x22b238: 0xc09d91a  jal         func_276468
    ctx->pc = 0x22B238u;
    SET_GPR_U32(ctx, 31, 0x22B240u);
    ctx->pc = 0x22B23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B238u;
    // 0x22b23c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x22B238u, 0x22B240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B240u;
label_22b240:
    // 0x22b240: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x22b240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22b244: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x22b244u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22b248: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22b248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22b24c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b250: 0x8c650dbc  lw          $a1, 0xDBC($v1)
    ctx->pc = 0x22b250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3516)));
    // 0x22b254: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x22b254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22b258: 0x8c660dc0  lw          $a2, 0xDC0($v1)
    ctx->pc = 0x22b258u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3520)));
    // 0x22b25c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22b25cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b260: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x22b260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22b264: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22B264u;
    SET_GPR_U32(ctx, 31, 0x22B26Cu);
    ctx->pc = 0x22B268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B264u;
    // 0x22b268: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22B264u, 0x22B26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B26Cu;
label_22b26c:
    // 0x22b26c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22b26cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22b270: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x22b270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x22b274: 0xae2305f0  sw          $v1, 0x5F0($s1)
    ctx->pc = 0x22b274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 3));
    // 0x22b278: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22b278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22b27c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22b27cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22b280:
    // 0x22b280: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22B280u;
    SET_GPR_U32(ctx, 31, 0x22B288u);
    ctx->pc = 0x22B284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B280u;
    // 0x22b284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22B280u, 0x22B288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B288u;
label_22b288:
    // 0x22b288: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22B288u;
    {
        const bool branch_taken_0x22b288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b288) {
            ctx->pc = 0x22B28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B288u;
            // 0x22b28c: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B290u;
            goto label_22b290;
        }
    }
    ctx->pc = 0x22B290u;
label_22b290:
    // 0x22b290: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22b290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22b294: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22b294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22b298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b29c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22B29Cu;
    SET_GPR_U32(ctx, 31, 0x22B2A4u);
    ctx->pc = 0x22B2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B29Cu;
    // 0x22b2a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22B29Cu, 0x22B2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B2A4u;
label_22b2a4:
    // 0x22b2a4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22b2a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22b2a8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22B2A8u;
    SET_GPR_U32(ctx, 31, 0x22B2B0u);
    ctx->pc = 0x22B2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B2A8u;
    // 0x22b2ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22B2A8u, 0x22B2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B2B0u;
label_22b2b0:
    // 0x22b2b0: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x22b2b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x22b2b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22b2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22b2b8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x22B2B8u;
    {
        const bool branch_taken_0x22b2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b2b8) {
            ctx->pc = 0x22B2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B2B8u;
            // 0x22b2bc: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B2E8u;
            goto label_22b2e8;
        }
    }
    ctx->pc = 0x22B2C0u;
    // 0x22b2c0: 0x922217c3  lbu         $v0, 0x17C3($s1)
    ctx->pc = 0x22b2c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6083)));
    // 0x22b2c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22B2C4u;
    {
        const bool branch_taken_0x22b2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2C4u;
        // 0x22b2c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b2c4) {
            ctx->pc = 0x22B2DCu;
            goto label_22b2dc;
        }
    }
    ctx->pc = 0x22B2CCu;
    // 0x22b2cc: 0xc09a98e  jal         func_26A638
    ctx->pc = 0x22B2CCu;
    SET_GPR_U32(ctx, 31, 0x22B2D4u);
    ctx->pc = 0x22B2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B2CCu;
    // 0x22b2d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A638u, 0x22B2CCu, 0x22B2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B2D4u;
label_22b2d4:
    // 0x22b2d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22B2D4u;
    {
        const bool branch_taken_0x22b2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2D4u;
        // 0x22b2d8: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b2d4) {
            ctx->pc = 0x22B2E8u;
            goto label_22b2e8;
        }
    }
    ctx->pc = 0x22B2DCu;
label_22b2dc:
    // 0x22b2dc: 0xc09a98e  jal         func_26A638
    ctx->pc = 0x22B2DCu;
    SET_GPR_U32(ctx, 31, 0x22B2E4u);
    ctx->pc = 0x22B2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B2DCu;
    // 0x22b2e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A638u, 0x22B2DCu, 0x22B2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B2E4u;
label_22b2e4:
    // 0x22b2e4: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x22b2e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_22b2e8:
    // 0x22b2e8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x22b2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x22b2ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22B2ECu;
    {
        const bool branch_taken_0x22b2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2ECu;
        // 0x22b2f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b2ec) {
            ctx->pc = 0x22B308u;
            goto label_22b308;
        }
    }
    ctx->pc = 0x22B2F4u;
    // 0x22b2f4: 0xc09aa0e  jal         func_26A838
    ctx->pc = 0x22B2F4u;
    SET_GPR_U32(ctx, 31, 0x22B2FCu);
    ctx->pc = 0x22B2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B2F4u;
    // 0x22b2f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A838u, 0x22B2F4u, 0x22B2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B2FCu;
label_22b2fc:
    // 0x22b2fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b300: 0xc09aa0e  jal         func_26A838
    ctx->pc = 0x22B300u;
    SET_GPR_U32(ctx, 31, 0x22B308u);
    ctx->pc = 0x22B304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B300u;
    // 0x22b304: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A838u, 0x22B300u, 0x22B308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B308u;
label_22b308:
    // 0x22b308: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x22b308u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_22b30c:
    // 0x22b30c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22b30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x22b310: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22B310u;
    {
        const bool branch_taken_0x22b310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B310u;
        // 0x22b314: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b310) {
            ctx->pc = 0x22B31Cu;
            goto label_22b31c;
        }
    }
    ctx->pc = 0x22B318u;
    // 0x22b318: 0xae2205fc  sw          $v0, 0x5FC($s1)
    ctx->pc = 0x22b318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 2));
label_22b31c:
    // 0x22b31c: 0x8e2205fc  lw          $v0, 0x5FC($s1)
    ctx->pc = 0x22b31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
    // 0x22b320: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22B320u;
    {
        const bool branch_taken_0x22b320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B320u;
        // 0x22b324: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b320) {
            ctx->pc = 0x22B340u;
            goto label_22b340;
        }
    }
    ctx->pc = 0x22B328u;
    // 0x22b328: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x22b328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x22b32c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22b32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22b330: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x22b330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x22b334: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x22b334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22b338: 0xae2316d4  sw          $v1, 0x16D4($s1)
    ctx->pc = 0x22b338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
label_22b33c:
    // 0x22b33c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22b33cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22b340:
    // 0x22b340: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22b340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b344: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b348: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x22b348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22b34c: 0x3e00008  jr          $ra
    ctx->pc = 0x22B34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B34Cu;
        // 0x22b350: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B354u;
    // 0x22b354: 0x0  nop
    ctx->pc = 0x22b354u;
    // NOP
    ctx->pc = 0x22b358u;
}
