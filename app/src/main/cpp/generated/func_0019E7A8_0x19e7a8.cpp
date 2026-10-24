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

// Function: func_0019E7A8
// Address: 0x19e7a8 - 0x19e8c8
void func_0019E7A8_0x19e7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019E7A8_0x19e7a8");
#endif

    switch (ctx->pc) {
        case 0x19e7c8u: goto label_19e7c8;
        case 0x19e834u: goto label_19e834;
        case 0x19e864u: goto label_19e864;
        case 0x19e8a8u: goto label_19e8a8;
        default: break;
    }

    ctx->pc = 0x19e7a8u;

    // 0x19e7a8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19e7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19e7ac: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19e7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x19e7b0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x19e7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19e7b4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x19e7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x19e7b8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x19e7b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x19e7bc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19e7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19e7c0: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x19E7C0u;
    SET_GPR_U32(ctx, 31, 0x19E7C8u);
    ctx->pc = 0x19E7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E7C0u;
    // 0x19e7c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x19E7C0u, 0x19E7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E7C8u;
label_19e7c8:
    // 0x19e7c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19e7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19e7cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19e7ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19e7d0: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x19e7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x19e7d4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19e7d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x19e7d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19e7d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19e7dc: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x19e7dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19e7e0: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x19e7e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
    // 0x19e7e4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x19e7e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x19e7e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19e7e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19e7ec: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x19e7ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19e7f0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19e7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19e7f4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19e7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19e7f8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x19e7f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19e7fc: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x19e7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x19e800: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19e800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19e804: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19e804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e808: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x19e808u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19e80c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19e80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e810: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19e810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19e814: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x19e814u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19e818: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x19e818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19e81c: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x19e81cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x19e820: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x19e820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x19e824: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x19e824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x19e828: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x19e828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x19e82c: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x19E82Cu;
    SET_GPR_U32(ctx, 31, 0x19E834u);
    ctx->pc = 0x19E830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E82Cu;
    // 0x19e830: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x19E82Cu, 0x19E834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E834u;
label_19e834:
    // 0x19e834: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19E834u;
    {
        const bool branch_taken_0x19e834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E834u;
        // 0x19e838: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e834) {
            ctx->pc = 0x19E864u;
            goto label_19e864;
        }
    }
    ctx->pc = 0x19E83Cu;
    // 0x19e83c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x19e83cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19e840: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x19e840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x19e844: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x19e844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x19e848: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19e848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e84c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x19e84cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x19e850: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19e850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e854: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x19e854u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x19e858: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x19e858u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e85c: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x19E85Cu;
    SET_GPR_U32(ctx, 31, 0x19E864u);
    ctx->pc = 0x19E860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E85Cu;
    // 0x19e860: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x19E85Cu, 0x19E864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E864u;
label_19e864:
    // 0x19e864: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19e864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e868: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x19e868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x19e86c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x19e86cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19e870: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x19e870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19e874: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x19e874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x19e878: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19e878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19e87c: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x19e87cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x19e880: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e884: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x19e884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x19e888: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x19e888u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x19e88c: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x19e88cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x19e890: 0xae050608  sw          $a1, 0x608($s0)
    ctx->pc = 0x19e890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 5));
    // 0x19e894: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x19e894u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x19e898: 0xae0705ec  sw          $a3, 0x5EC($s0)
    ctx->pc = 0x19e898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 7));
    // 0x19e89c: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x19e89cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x19e8a0: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x19E8A0u;
    SET_GPR_U32(ctx, 31, 0x19E8A8u);
    ctx->pc = 0x19E8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E8A0u;
    // 0x19e8a4: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x19E8A0u, 0x19E8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E8A8u;
label_19e8a8:
    // 0x19e8a8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19e8a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19e8ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e8b0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19e8b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19e8b4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x19e8b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19e8b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19e8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e8bc: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x19e8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19e8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x19E8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8C0u;
        // 0x19e8c4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E8C8u;
}
