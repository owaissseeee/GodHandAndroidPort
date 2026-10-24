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

// Function: func_00187838
// Address: 0x187838 - 0x187958
void func_00187838_0x187838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00187838_0x187838");
#endif

    switch (ctx->pc) {
        case 0x187858u: goto label_187858;
        case 0x1878c0u: goto label_1878c0;
        case 0x1878f0u: goto label_1878f0;
        case 0x187938u: goto label_187938;
        default: break;
    }

    ctx->pc = 0x187838u;

    // 0x187838: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x187838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x18783c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x18783cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x187840: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x187840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x187844: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x187844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x187848: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x187848u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x18784c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18784cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x187850: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x187850u;
    SET_GPR_U32(ctx, 31, 0x187858u);
    ctx->pc = 0x187854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187850u;
    // 0x187854: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x187850u, 0x187858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187858u;
label_187858:
    // 0x187858: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x187858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18785c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18785cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x187860: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x187860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x187864: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x187864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x187868: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x187868u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18786c: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x18786cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x187870: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x187870u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x187874: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x187874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x187878: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x187878u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18787c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x18787cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x187880: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x187880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x187884: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x187884u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x187888: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x187888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x18788c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x18788cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x187890: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187894: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x187894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x187898: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x187898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18789c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x18789cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1878a0: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1878a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1878a4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1878a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1878a8: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x1878a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1878ac: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1878acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1878b0: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1878b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1878b4: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1878b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1878b8: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x1878B8u;
    SET_GPR_U32(ctx, 31, 0x1878C0u);
    ctx->pc = 0x1878BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1878B8u;
    // 0x1878bc: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x1878B8u, 0x1878C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1878C0u;
label_1878c0:
    // 0x1878c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1878C0u;
    {
        const bool branch_taken_0x1878c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1878C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878C0u;
        // 0x1878c4: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1878c0) {
            ctx->pc = 0x1878F0u;
            goto label_1878f0;
        }
    }
    ctx->pc = 0x1878C8u;
    // 0x1878c8: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1878c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1878cc: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1878ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1878d0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1878d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1878d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1878d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1878d8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1878d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1878dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1878dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1878e0: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x1878e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x1878e4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1878e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1878e8: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x1878E8u;
    SET_GPR_U32(ctx, 31, 0x1878F0u);
    ctx->pc = 0x1878ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1878E8u;
    // 0x1878ec: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x1878E8u, 0x1878F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1878F0u;
label_1878f0:
    // 0x1878f0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1878f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1878f4: 0x26030620  addiu       $v1, $s0, 0x620
    ctx->pc = 0x1878f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x1878f8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1878f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1878fc: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x1878fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x187900: 0x24070089  addiu       $a3, $zero, 0x89
    ctx->pc = 0x187900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x187904: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x187904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x187908: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x187908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x18790c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18790cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x187910: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x187910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x187914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187918: 0xa608054a  sh          $t0, 0x54A($s0)
    ctx->pc = 0x187918u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 8));
    // 0x18791c: 0xae030608  sw          $v1, 0x608($s0)
    ctx->pc = 0x18791cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 3));
    // 0x187920: 0xa205060c  sb          $a1, 0x60C($s0)
    ctx->pc = 0x187920u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 5));
    // 0x187924: 0xae0605ec  sw          $a2, 0x5EC($s0)
    ctx->pc = 0x187924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 6));
    // 0x187928: 0xa60705f6  sh          $a3, 0x5F6($s0)
    ctx->pc = 0x187928u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 7));
    // 0x18792c: 0xa6080548  sh          $t0, 0x548($s0)
    ctx->pc = 0x18792cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 8));
    // 0x187930: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x187930u;
    SET_GPR_U32(ctx, 31, 0x187938u);
    ctx->pc = 0x187934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187930u;
    // 0x187934: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x187930u, 0x187938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187938u;
label_187938:
    // 0x187938: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x187938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18793c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18793cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187940: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x187940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x187944: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x187944u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x187948: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x187948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18794c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x18794cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x187950: 0x3e00008  jr          $ra
    ctx->pc = 0x187950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187950u;
        // 0x187954: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187958u;
}
