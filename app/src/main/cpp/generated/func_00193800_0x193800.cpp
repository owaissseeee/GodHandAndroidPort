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

// Function: func_00193800
// Address: 0x193800 - 0x193928
void func_00193800_0x193800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00193800_0x193800");
#endif

    switch (ctx->pc) {
        case 0x193820u: goto label_193820;
        case 0x193894u: goto label_193894;
        case 0x1938c4u: goto label_1938c4;
        case 0x193908u: goto label_193908;
        default: break;
    }

    ctx->pc = 0x193800u;

    // 0x193800: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x193800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x193804: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x193804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x193808: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x193808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19380c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x19380cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x193810: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x193810u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x193814: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x193814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x193818: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x193818u;
    SET_GPR_U32(ctx, 31, 0x193820u);
    ctx->pc = 0x19381Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193818u;
    // 0x19381c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x193818u, 0x193820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193820u;
label_193820:
    // 0x193820: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x193820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x193824: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x193824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x193828: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x193828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x19382c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19382cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x193830: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x193830u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x193834: 0x3c013f6d  lui         $at, 0x3F6D
    ctx->pc = 0x193834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16237 << 16));
    // 0x193838: 0x3421d97f  ori         $at, $at, 0xD97F
    ctx->pc = 0x193838u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55679);
    // 0x19383c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19383cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193840: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x193840u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x193844: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x193844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x193848: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x193848u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x19384c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19384cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193850: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x193850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x193854: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x193854u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x193858: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x193858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x19385c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x19385cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x193860: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193864: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x193864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x193868: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x193868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19386c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x19386cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x193870: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x193870u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x193874: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x193874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x193878: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x193878u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19387c: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x19387cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x193880: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x193880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x193884: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x193884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x193888: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x193888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x19388c: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x19388Cu;
    SET_GPR_U32(ctx, 31, 0x193894u);
    ctx->pc = 0x193890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19388Cu;
    // 0x193890: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x19388Cu, 0x193894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193894u;
label_193894:
    // 0x193894: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x193894u;
    {
        const bool branch_taken_0x193894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193894u;
        // 0x193898: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193894) {
            ctx->pc = 0x1938C4u;
            goto label_1938c4;
        }
    }
    ctx->pc = 0x19389Cu;
    // 0x19389c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x19389cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1938a0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1938a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1938a4: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1938a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1938a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1938a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1938ac: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1938acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1938b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1938b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1938b4: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x1938b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x1938b8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1938b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1938bc: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x1938BCu;
    SET_GPR_U32(ctx, 31, 0x1938C4u);
    ctx->pc = 0x1938C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1938BCu;
    // 0x1938c0: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x1938BCu, 0x1938C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1938C4u;
label_1938c4:
    // 0x1938c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1938c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1938c8: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x1938c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x1938cc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1938ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1938d0: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x1938d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1938d4: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x1938d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x1938d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1938d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1938dc: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x1938dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x1938e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1938e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1938e4: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x1938e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x1938e8: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x1938e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x1938ec: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x1938ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x1938f0: 0xae050608  sw          $a1, 0x608($s0)
    ctx->pc = 0x1938f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 5));
    // 0x1938f4: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x1938f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x1938f8: 0xae0705ec  sw          $a3, 0x5EC($s0)
    ctx->pc = 0x1938f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 7));
    // 0x1938fc: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x1938fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x193900: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x193900u;
    SET_GPR_U32(ctx, 31, 0x193908u);
    ctx->pc = 0x193904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193900u;
    // 0x193904: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x193900u, 0x193908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193908u;
label_193908:
    // 0x193908: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x193908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19390c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19390cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193910: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x193910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x193914: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x193914u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x193918: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x193918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19391c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x19391cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x193920: 0x3e00008  jr          $ra
    ctx->pc = 0x193920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193920u;
        // 0x193924: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193928u;
}
