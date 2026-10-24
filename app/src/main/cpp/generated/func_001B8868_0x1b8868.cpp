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

// Function: func_001B8868
// Address: 0x1b8868 - 0x1b8990
void func_001B8868_0x1b8868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B8868_0x1b8868");
#endif

    switch (ctx->pc) {
        case 0x1b8880u: goto label_1b8880;
        case 0x1b8898u: goto label_1b8898;
        case 0x1b88d4u: goto label_1b88d4;
        case 0x1b88f8u: goto label_1b88f8;
        case 0x1b8918u: goto label_1b8918;
        case 0x1b8958u: goto label_1b8958;
        case 0x1b8964u: goto label_1b8964;
        default: break;
    }

    ctx->pc = 0x1b8868u;

    // 0x1b8868: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b8868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b886c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b886cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b8870: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b8870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b8874: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b8874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b8878: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1B8878u;
    SET_GPR_U32(ctx, 31, 0x1B8880u);
    ctx->pc = 0x1B887Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8878u;
    // 0x1b887c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1B8878u, 0x1B8880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8880u;
label_1b8880:
    // 0x1b8880: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x1b8880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x1b8884: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b8884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b8888: 0x24714380  addiu       $s1, $v1, 0x4380
    ctx->pc = 0x1b8888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 17280));
    // 0x1b888c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b888cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8890: 0xc07f83a  jal         func_1FE0E8
    ctx->pc = 0x1B8890u;
    SET_GPR_U32(ctx, 31, 0x1B8898u);
    ctx->pc = 0x1B8894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8890u;
    // 0x1b8894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x1B8890u, 0x1B8898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8898u;
label_1b8898:
    // 0x1b8898: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B8898u;
    {
        const bool branch_taken_0x1b8898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8898u;
        // 0x1b889c: 0xae020620  sw          $v0, 0x620($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8898) {
            ctx->pc = 0x1B8908u;
            goto label_1b8908;
        }
    }
    ctx->pc = 0x1B88A0u;
    // 0x1b88a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b88a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b88a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b88a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b88a8: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x1b88a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x1b88ac: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1b88acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x1b88b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b88b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b88b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b88b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b88b8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b88b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b88bc: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1b88bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b88c0: 0x24a57ac0  addiu       $a1, $a1, 0x7AC0
    ctx->pc = 0x1b88c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31424));
    // 0x1b88c4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b88c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b88c8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1b88c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1b88cc: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x1B88CCu;
    SET_GPR_U32(ctx, 31, 0x1B88D4u);
    ctx->pc = 0x1B88D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B88CCu;
    // 0x1b88d0: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x1B88CCu, 0x1B88D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B88D4u;
label_1b88d4:
    // 0x1b88d4: 0x8e040620  lw          $a0, 0x620($s0)
    ctx->pc = 0x1b88d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1568)));
    // 0x1b88d8: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x1b88d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1b88dc: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1b88dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1b88e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b88e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b88e4: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x1b88e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b88e8: 0x8e020620  lw          $v0, 0x620($s0)
    ctx->pc = 0x1b88e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1568)));
    // 0x1b88ec: 0xac46004c  sw          $a2, 0x4C($v0)
    ctx->pc = 0x1b88ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 6));
    // 0x1b88f0: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1B88F0u;
    SET_GPR_U32(ctx, 31, 0x1B88F8u);
    ctx->pc = 0x1B88F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B88F0u;
    // 0x1b88f4: 0x8e040620  lw          $a0, 0x620($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1568)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B88F0u, 0x1B88F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B88F8u;
label_1b88f8:
    // 0x1b88f8: 0x8e030620  lw          $v1, 0x620($s0)
    ctx->pc = 0x1b88f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1568)));
    // 0x1b88fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b88fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b8900: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1b8900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1b8904: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b8904u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1b8908:
    // 0x1b8908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b890c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b890cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8910: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x1B8910u;
    SET_GPR_U32(ctx, 31, 0x1B8918u);
    ctx->pc = 0x1B8914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8910u;
    // 0x1b8914: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x1B8910u, 0x1B8918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8918u;
label_1b8918:
    // 0x1b8918: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B8918u;
    {
        const bool branch_taken_0x1b8918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8918u;
        // 0x1b891c: 0xae020624  sw          $v0, 0x624($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8918) {
            ctx->pc = 0x1B8964u;
            goto label_1b8964;
        }
    }
    ctx->pc = 0x1B8920u;
    // 0x1b8920: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1b8920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1b8924: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b8924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b8928: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b8928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b892c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b892cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b8930: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b8930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8934: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x1b8934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1b8938: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1b8938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1b893c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b893cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b8940: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b8940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8944: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1b8944u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b8948: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1b8948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b894c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b894cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b8950: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x1B8950u;
    SET_GPR_U32(ctx, 31, 0x1B8958u);
    ctx->pc = 0x1B8954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8950u;
    // 0x1b8954: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x1B8950u, 0x1B8958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8958u;
label_1b8958:
    // 0x1b8958: 0x8e040624  lw          $a0, 0x624($s0)
    ctx->pc = 0x1b8958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1572)));
    // 0x1b895c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1B895Cu;
    SET_GPR_U32(ctx, 31, 0x1B8964u);
    ctx->pc = 0x1B8960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B895Cu;
    // 0x1b8960: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B895Cu, 0x1B8964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8964u;
label_1b8964:
    // 0x1b8964: 0x8e0305b8  lw          $v1, 0x5B8($s0)
    ctx->pc = 0x1b8964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x1b8968: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x1b8968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1b896c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b896cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8970: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8974: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1b8974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1b8978: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b8978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b897c: 0xae0305b8  sw          $v1, 0x5B8($s0)
    ctx->pc = 0x1b897cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 3));
    // 0x1b8980: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b8980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b8984: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8984u;
        // 0x1b8988: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B898Cu;
    // 0x1b898c: 0x0  nop
    ctx->pc = 0x1b898cu;
    // NOP
    ctx->pc = 0x1b8990u;
}
