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

// Function: func_00181920
// Address: 0x181920 - 0x181ae8
void func_00181920_0x181920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00181920_0x181920");
#endif

    switch (ctx->pc) {
        case 0x18193cu: goto label_18193c;
        case 0x181998u: goto label_181998;
        case 0x1819d8u: goto label_1819d8;
        case 0x1819f4u: goto label_1819f4;
        case 0x181a04u: goto label_181a04;
        case 0x181a20u: goto label_181a20;
        default: break;
    }

    ctx->pc = 0x181920u;

    // 0x181920: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x181920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x181924: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x181924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x181928: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x181928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x18192c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x18192cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x181930: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x181930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x181934: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x181934u;
    SET_GPR_U32(ctx, 31, 0x18193Cu);
    ctx->pc = 0x181938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181934u;
    // 0x181938: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x181934u, 0x18193Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18193Cu;
label_18193c:
    // 0x18193c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18193cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x181940: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x181940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x181944: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x181944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x181948: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x181948u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x18194c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18194cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181950: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x181950u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x181954: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x181954u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x181958: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x181958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x18195c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x18195cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x181960: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x181960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x181964: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x181964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x181968: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x181968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18196c: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x18196cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x181970: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x181970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x181974: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x181974u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x181978: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x181978u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18197c: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x18197cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x181980: 0xe7b4001c  swc1        $f20, 0x1C($sp)
    ctx->pc = 0x181980u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x181984: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x181984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x181988: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x181988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x18198c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x18198cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x181990: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x181990u;
    SET_GPR_U32(ctx, 31, 0x181998u);
    ctx->pc = 0x181994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181990u;
    // 0x181994: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x181990u, 0x181998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181998u;
label_181998:
    // 0x181998: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x181998u;
    {
        const bool branch_taken_0x181998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181998u;
        // 0x18199c: 0xae020650  sw          $v0, 0x650($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181998) {
            ctx->pc = 0x1819D8u;
            goto label_1819d8;
        }
    }
    ctx->pc = 0x1819A0u;
    // 0x1819a0: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1819a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1819a4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1819a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1819a8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1819a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1819ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1819acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1819b0: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1819b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1819b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1819b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1819b8: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x1819b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x1819bc: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x1819bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1819c0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1819c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1819c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1819c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1819c8: 0xc7ad0010  lwc1        $f13, 0x10($sp)
    ctx->pc = 0x1819c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1819cc: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x1819ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1819d0: 0xc07f700  jal         func_1FDC00
    ctx->pc = 0x1819D0u;
    SET_GPR_U32(ctx, 31, 0x1819D8u);
    ctx->pc = 0x1819D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1819D0u;
    // 0x1819d4: 0x46006b42  mul.s       $f13, $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDC00u, 0x1819D0u, 0x1819D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1819D8u;
label_1819d8:
    // 0x1819d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1819d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1819dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1819dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1819e0: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x1819e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x1819e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1819e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1819e8: 0xa6020548  sh          $v0, 0x548($s0)
    ctx->pc = 0x1819e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
    // 0x1819ec: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1819ECu;
    SET_GPR_U32(ctx, 31, 0x1819F4u);
    ctx->pc = 0x1819F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1819ECu;
    // 0x1819f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1819ECu, 0x1819F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1819F4u;
label_1819f4:
    // 0x1819f4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1819f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1819f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1819f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1819fc: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1819FCu;
    SET_GPR_U32(ctx, 31, 0x181A04u);
    ctx->pc = 0x181A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1819FCu;
    // 0x181a00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1819FCu, 0x181A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181A04u;
label_181a04:
    // 0x181a04: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x181a04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x181a08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x181a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181a0c: 0x5045002f  beql        $v0, $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x181A0Cu;
    {
        const bool branch_taken_0x181a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x181a0c) {
            ctx->pc = 0x181A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181A0Cu;
            // 0x181a10: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181ACCu;
            goto label_181acc;
        }
    }
    ctx->pc = 0x181A14u;
    // 0x181a14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x181a14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x181a18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181a1c: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x181a1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_181a20:
    // 0x181a20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x181a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a24: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x181a24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x181a28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x181A28u;
    {
        const bool branch_taken_0x181a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A28u;
        // 0x181a2c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181a28) {
            ctx->pc = 0x181A38u;
            goto label_181a38;
        }
    }
    ctx->pc = 0x181A30u;
    // 0x181a30: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x181a30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x181a34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x181a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_181a38:
    // 0x181a38: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x181a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x181a3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x181A3Cu;
    {
        const bool branch_taken_0x181a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A3Cu;
        // 0x181a40: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181a3c) {
            ctx->pc = 0x181A54u;
            goto label_181a54;
        }
    }
    ctx->pc = 0x181A44u;
    // 0x181a44: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x181a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x181a48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x181a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x181a4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x181A4Cu;
    {
        const bool branch_taken_0x181a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A4Cu;
        // 0x181a50: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181a4c) {
            ctx->pc = 0x181A58u;
            goto label_181a58;
        }
    }
    ctx->pc = 0x181A54u;
label_181a54:
    // 0x181a54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x181a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181a58:
    // 0x181a58: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x181a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x181a5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x181a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a60: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x181a60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x181a64: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x181a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x181a68: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x181a68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x181a6c: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x181a6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x181a70: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x181A70u;
    {
        const bool branch_taken_0x181a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x181A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A70u;
        // 0x181a74: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181a70) {
            ctx->pc = 0x181A80u;
            goto label_181a80;
        }
    }
    ctx->pc = 0x181A78u;
    // 0x181a78: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x181a78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x181a7c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x181a7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_181a80:
    // 0x181a80: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x181a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x181a84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x181A84u;
    {
        const bool branch_taken_0x181a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A84u;
        // 0x181a88: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181a84) {
            ctx->pc = 0x181A9Cu;
            goto label_181a9c;
        }
    }
    ctx->pc = 0x181A8Cu;
    // 0x181a8c: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x181a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x181a90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x181a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x181a94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x181A94u;
    {
        const bool branch_taken_0x181a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A94u;
        // 0x181a98: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181a94) {
            ctx->pc = 0x181AA0u;
            goto label_181aa0;
        }
    }
    ctx->pc = 0x181A9Cu;
label_181a9c:
    // 0x181a9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x181a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181aa0:
    // 0x181aa0: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x181aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x181aa4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x181aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x181aa8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x181aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x181aac: 0x28a30006  slti        $v1, $a1, 0x6
    ctx->pc = 0x181aacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x181ab0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x181ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x181ab4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x181AB4u;
    {
        const bool branch_taken_0x181ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x181AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181AB4u;
        // 0x181ab8: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181ab4) {
            ctx->pc = 0x181AC8u;
            goto label_181ac8;
        }
    }
    ctx->pc = 0x181ABCu;
    // 0x181abc: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x181abcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x181ac0: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x181AC0u;
    {
        const bool branch_taken_0x181ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x181ac0) {
            ctx->pc = 0x181AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181AC0u;
            // 0x181ac4: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181a20;
        }
    }
    ctx->pc = 0x181AC8u;
label_181ac8:
    // 0x181ac8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x181ac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_181acc:
    // 0x181acc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181ad0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x181ad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x181ad4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x181ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x181ad8: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x181ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x181adc: 0x3e00008  jr          $ra
    ctx->pc = 0x181ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181ADCu;
        // 0x181ae0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181AE4u;
    // 0x181ae4: 0x0  nop
    ctx->pc = 0x181ae4u;
    // NOP
    ctx->pc = 0x181ae8u;
}
