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

// Function: func_00246088
// Address: 0x246088 - 0x2461f0
void func_00246088_0x246088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00246088_0x246088");
#endif

    switch (ctx->pc) {
        case 0x24610cu: goto label_24610c;
        case 0x246128u: goto label_246128;
        case 0x246148u: goto label_246148;
        case 0x246164u: goto label_246164;
        case 0x246184u: goto label_246184;
        case 0x24618cu: goto label_24618c;
        case 0x2461b0u: goto label_2461b0;
        case 0x2461c4u: goto label_2461c4;
        case 0x2461d0u: goto label_2461d0;
        default: break;
    }

    ctx->pc = 0x246088u;

    // 0x246088: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x246088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24608c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x24608cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x246090: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x246090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x246094: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x246094u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246098: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x246098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x24609c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24609cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2460a0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2460a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2460a4: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x2460a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x2460a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2460A8u;
    {
        const bool branch_taken_0x2460a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2460ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460A8u;
        // 0x2460ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2460a8) {
            ctx->pc = 0x2460C0u;
            goto label_2460c0;
        }
    }
    ctx->pc = 0x2460B0u;
    // 0x2460b0: 0x1045002a  beq         $v0, $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2460B0u;
    {
        const bool branch_taken_0x2460b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2460B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460B0u;
        // 0x2460b4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2460b0) {
            ctx->pc = 0x24615Cu;
            goto label_24615c;
        }
    }
    ctx->pc = 0x2460B8u;
    // 0x2460b8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2460B8u;
    {
        const bool branch_taken_0x2460b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2460BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460B8u;
        // 0x2460bc: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2460b8) {
            ctx->pc = 0x2461D8u;
            goto label_2461d8;
        }
    }
    ctx->pc = 0x2460C0u;
label_2460c0:
    // 0x2460c0: 0xa2401864  sb          $zero, 0x1864($s2)
    ctx->pc = 0x2460c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x2460c4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2460c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2460c8: 0x24040303  addiu       $a0, $zero, 0x303
    ctx->pc = 0x2460c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 771));
    // 0x2460cc: 0x94437a50  lhu         $v1, 0x7A50($v0)
    ctx->pc = 0x2460ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x747A50u));
    // 0x2460d0: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2460D0u;
    {
        const bool branch_taken_0x2460d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2460D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460D0u;
        // 0x2460d4: 0x3c040200  lui         $a0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2460d0) {
            ctx->pc = 0x2460FCu;
            goto label_2460fc;
        }
    }
    ctx->pc = 0x2460D8u;
    // 0x2460d8: 0x8e4316d4  lw          $v1, 0x16D4($s2)
    ctx->pc = 0x2460d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x2460dc: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x2460dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2460e0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2460E0u;
    {
        const bool branch_taken_0x2460e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2460E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460E0u;
        // 0x2460e4: 0x641025  or          $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2460e0) {
            ctx->pc = 0x2460FCu;
            goto label_2460fc;
        }
    }
    ctx->pc = 0x2460E8u;
    // 0x2460e8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2460e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2460ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2460ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2460f0: 0xae4216d4  sw          $v0, 0x16D4($s2)
    ctx->pc = 0x2460f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5844), GPR_U32(ctx, 2));
    // 0x2460f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2460f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2460f8: 0xe640054c  swc1        $f0, 0x54C($s2)
    ctx->pc = 0x2460f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
label_2460fc:
    // 0x2460fc: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2460FCu;
    {
        const bool branch_taken_0x2460fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2460fc) {
            ctx->pc = 0x246100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2460FCu;
            // 0x246100: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246110u;
            goto label_246110;
        }
    }
    ctx->pc = 0x246104u;
    // 0x246104: 0xc09810e  jal         func_260438
    ctx->pc = 0x246104u;
    SET_GPR_U32(ctx, 31, 0x24610Cu);
    ctx->pc = 0x246108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246104u;
    // 0x246108: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260438u, 0x246104u, 0x24610Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24610Cu;
label_24610c:
    // 0x24610c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24610cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_246110:
    // 0x246110: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x246110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246114: 0x8c500bcc  lw          $s0, 0xBCC($v0)
    ctx->pc = 0x246114u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3020)));
    // 0x246118: 0x8c510bd4  lw          $s1, 0xBD4($v0)
    ctx->pc = 0x246118u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3028)));
    // 0x24611c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24611cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x246120: 0xc09d91a  jal         func_276468
    ctx->pc = 0x246120u;
    SET_GPR_U32(ctx, 31, 0x246128u);
    ctx->pc = 0x246124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246120u;
    // 0x246124: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x246120u, 0x246128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246128u;
label_246128:
    // 0x246128: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x246128u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24612c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x24612cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x246130: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x246130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246134: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x246134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246138: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x246138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24613c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x24613cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x246140: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x246140u;
    SET_GPR_U32(ctx, 31, 0x246148u);
    ctx->pc = 0x246144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246140u;
    // 0x246144: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x246140u, 0x246148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246148u;
label_246148:
    // 0x246148: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x246148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x24614c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24614cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x246150: 0xa6430568  sh          $v1, 0x568($s2)
    ctx->pc = 0x246150u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1384), (uint16_t)GPR_U32(ctx, 3));
    // 0x246154: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x246154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x246158: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x246158u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_24615c:
    // 0x24615c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x24615Cu;
    SET_GPR_U32(ctx, 31, 0x246164u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x24615Cu, 0x246164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246164u;
label_246164:
    // 0x246164: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x246164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246168: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x246168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24616c: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x24616cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x246170: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x246170u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x246174: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x246174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x246178: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x246178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x24617c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x24617Cu;
    SET_GPR_U32(ctx, 31, 0x246184u);
    ctx->pc = 0x246180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24617Cu;
    // 0x246180: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x24617Cu, 0x246184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246184u;
label_246184:
    // 0x246184: 0xc055f06  jal         func_157C18
    ctx->pc = 0x246184u;
    SET_GPR_U32(ctx, 31, 0x24618Cu);
    ctx->pc = 0x246188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246184u;
    // 0x246188: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x246184u, 0x24618Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24618Cu;
label_24618c:
    // 0x24618c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24618Cu;
    {
        const bool branch_taken_0x24618c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24618c) {
            ctx->pc = 0x2461B0u;
            goto label_2461b0;
        }
    }
    ctx->pc = 0x246194u;
    // 0x246194: 0x96420568  lhu         $v0, 0x568($s2)
    ctx->pc = 0x246194u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1384)));
    // 0x246198: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x246198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24619c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x24619cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2461a0: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2461A0u;
    {
        const bool branch_taken_0x2461a0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x2461A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2461A0u;
        // 0x2461a4: 0xa6420568  sh          $v0, 0x568($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2461a0) {
            ctx->pc = 0x2461B0u;
            goto label_2461b0;
        }
    }
    ctx->pc = 0x2461A8u;
    // 0x2461a8: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2461A8u;
    SET_GPR_U32(ctx, 31, 0x2461B0u);
    ctx->pc = 0x2461ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2461A8u;
    // 0x2461ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2461A8u, 0x2461B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2461B0u;
label_2461b0:
    // 0x2461b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2461b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2461b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2461b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2461b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2461b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2461bc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2461BCu;
    SET_GPR_U32(ctx, 31, 0x2461C4u);
    ctx->pc = 0x2461C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2461BCu;
    // 0x2461c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2461BCu, 0x2461C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2461C4u;
label_2461c4:
    // 0x2461c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2461c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2461c8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2461C8u;
    SET_GPR_U32(ctx, 31, 0x2461D0u);
    ctx->pc = 0x2461CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2461C8u;
    // 0x2461cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2461C8u, 0x2461D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2461D0u;
label_2461d0:
    // 0x2461d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2461d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2461d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2461d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2461d8:
    // 0x2461d8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2461d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2461dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2461dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2461e0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2461e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2461e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2461E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2461E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2461E4u;
        // 0x2461e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2461E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2461ECu;
    // 0x2461ec: 0x0  nop
    ctx->pc = 0x2461ecu;
    // NOP
    ctx->pc = 0x2461f0u;
}
