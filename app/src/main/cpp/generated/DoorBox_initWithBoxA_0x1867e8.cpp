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

// Function: DoorBox_initWithBoxA
// Address: 0x1867e8 - 0x186928
void DoorBox_initWithBoxA_0x1867e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DoorBox_initWithBoxA_0x1867e8");
#endif

    switch (ctx->pc) {
        case 0x186808u: goto label_186808;
        case 0x18688cu: goto label_18688c;
        case 0x1868bcu: goto label_1868bc;
        case 0x1868f0u: goto label_1868f0;
        case 0x186908u: goto label_186908;
        default: break;
    }

    ctx->pc = 0x1867e8u;

    // 0x1867e8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1867e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1867ec: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1867ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1867f0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1867f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1867f4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1867f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1867f8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1867f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1867fc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1867fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x186800: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x186800u;
    SET_GPR_U32(ctx, 31, 0x186808u);
    ctx->pc = 0x186804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186800u;
    // 0x186804: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x186800u, 0x186808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186808u;
label_186808:
    // 0x186808: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x186808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18680c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18680cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x186810: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x186810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x186814: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x186814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x186818: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x186818u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18681c: 0x3c014019  lui         $at, 0x4019
    ctx->pc = 0x18681cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16409 << 16));
    // 0x186820: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x186820u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x186824: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x186824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x186828: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x186828u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18682c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x18682cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x186830: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x186830u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x186834: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x186834u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186838: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x186838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x18683c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x18683cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x186840: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x186840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x186844: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x186844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x186848: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x186848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18684c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x18684cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x186850: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x186850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x186854: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x186854u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x186858: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x186858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x18685c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x18685cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x186860: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x186860u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x186864: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x186864u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x186868: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x186868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x18686c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18686cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x186870: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x186870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186874: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x186874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x186878: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x186878u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18687c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x18687cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x186880: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x186880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x186884: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x186884u;
    SET_GPR_U32(ctx, 31, 0x18688Cu);
    ctx->pc = 0x186888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186884u;
    // 0x186888: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x186884u, 0x18688Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18688Cu;
label_18688c:
    // 0x18688c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18688Cu;
    {
        const bool branch_taken_0x18688c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18688Cu;
        // 0x186890: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18688c) {
            ctx->pc = 0x1868BCu;
            goto label_1868bc;
        }
    }
    ctx->pc = 0x186894u;
    // 0x186894: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x186894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x186898: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x186898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x18689c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x18689cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1868a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1868a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1868a4: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1868a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1868a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1868a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1868ac: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x1868acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x1868b0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1868b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1868b4: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x1868B4u;
    SET_GPR_U32(ctx, 31, 0x1868BCu);
    ctx->pc = 0x1868B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1868B4u;
    // 0x1868b8: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x1868B4u, 0x1868BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1868BCu;
label_1868bc:
    // 0x1868bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1868bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1868c0: 0x26030610  addiu       $v1, $s0, 0x610
    ctx->pc = 0x1868c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x1868c4: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x1868c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x1868c8: 0x107d0007  beq         $v1, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x1868C8u;
    {
        const bool branch_taken_0x1868c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 29));
        ctx->pc = 0x1868CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1868C8u;
        // 0x1868cc: 0xa6020548  sh          $v0, 0x548($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1868c8) {
            ctx->pc = 0x1868E8u;
            goto label_1868e8;
        }
    }
    ctx->pc = 0x1868D0u;
    // 0x1868d0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1868d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1868d4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1868d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1868d8: 0xe6000610  swc1        $f0, 0x610($s0)
    ctx->pc = 0x1868d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1552), bits); }
    // 0x1868dc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1868dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1868e0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1868e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1868e4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1868e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1868e8:
    // 0x1868e8: 0xc06f48a  jal         func_1BD228
    ctx->pc = 0x1868E8u;
    SET_GPR_U32(ctx, 31, 0x1868F0u);
    ctx->pc = 0x1868ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1868E8u;
    // 0x1868ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD228u, 0x1868E8u, 0x1868F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1868F0u;
label_1868f0:
    // 0x1868f0: 0x26020650  addiu       $v0, $s0, 0x650
    ctx->pc = 0x1868f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x1868f4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1868f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1868f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1868f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1868fc: 0xa2030624  sb          $v1, 0x624($s0)
    ctx->pc = 0x1868fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1572), (uint8_t)GPR_U32(ctx, 3));
    // 0x186900: 0xc06efda  jal         func_1BBF68
    ctx->pc = 0x186900u;
    SET_GPR_U32(ctx, 31, 0x186908u);
    ctx->pc = 0x186904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186900u;
    // 0x186904: 0xae020628  sw          $v0, 0x628($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1576), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBF68u, 0x186900u, 0x186908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186908u;
label_186908:
    // 0x186908: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x186908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18690c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18690cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186910: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x186910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x186914: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x186914u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x186918: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x186918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18691c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x18691cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x186920: 0x3e00008  jr          $ra
    ctx->pc = 0x186920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186920u;
        // 0x186924: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186928u;
}
