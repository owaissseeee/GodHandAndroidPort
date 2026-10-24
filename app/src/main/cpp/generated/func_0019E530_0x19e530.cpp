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

// Function: func_0019E530
// Address: 0x19e530 - 0x19e650
void func_0019E530_0x19e530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019E530_0x19e530");
#endif

    switch (ctx->pc) {
        case 0x19e550u: goto label_19e550;
        case 0x19e5b8u: goto label_19e5b8;
        case 0x19e5e8u: goto label_19e5e8;
        case 0x19e62cu: goto label_19e62c;
        default: break;
    }

    ctx->pc = 0x19e530u;

    // 0x19e530: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19e530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19e534: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19e534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x19e538: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x19e538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19e53c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x19e53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x19e540: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x19e540u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x19e544: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19e544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19e548: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x19E548u;
    SET_GPR_U32(ctx, 31, 0x19E550u);
    ctx->pc = 0x19E54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E548u;
    // 0x19e54c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x19E548u, 0x19E550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E550u;
label_19e550:
    // 0x19e550: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19e550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19e554: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19e554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19e558: 0x3c014059  lui         $at, 0x4059
    ctx->pc = 0x19e558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16473 << 16));
    // 0x19e55c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x19e55cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x19e560: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19e560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19e564: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x19e564u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19e568: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x19e568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x19e56c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19e56cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19e570: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x19e570u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19e574: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x19e574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19e578: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19e578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19e57c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x19e57cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19e580: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x19e580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x19e584: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19e584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19e588: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19e588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e58c: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x19e58cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19e590: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19e590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e594: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x19e594u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19e598: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x19e598u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19e59c: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x19e59cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19e5a0: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x19e5a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x19e5a4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x19e5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x19e5a8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x19e5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x19e5ac: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x19e5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x19e5b0: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x19E5B0u;
    SET_GPR_U32(ctx, 31, 0x19E5B8u);
    ctx->pc = 0x19E5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E5B0u;
    // 0x19e5b4: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x19E5B0u, 0x19E5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E5B8u;
label_19e5b8:
    // 0x19e5b8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19E5B8u;
    {
        const bool branch_taken_0x19e5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5B8u;
        // 0x19e5bc: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e5b8) {
            ctx->pc = 0x19E5E8u;
            goto label_19e5e8;
        }
    }
    ctx->pc = 0x19E5C0u;
    // 0x19e5c0: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x19e5c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19e5c4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x19e5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x19e5c8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x19e5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x19e5cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19e5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e5d0: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x19e5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x19e5d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19e5d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e5d8: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x19e5d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x19e5dc: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x19e5dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e5e0: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x19E5E0u;
    SET_GPR_U32(ctx, 31, 0x19E5E8u);
    ctx->pc = 0x19E5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E5E0u;
    // 0x19e5e4: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x19E5E0u, 0x19E5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E5E8u;
label_19e5e8:
    // 0x19e5e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19e5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e5ec: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x19e5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x19e5f0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x19e5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x19e5f4: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x19e5f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19e5f8: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x19e5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x19e5fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19e5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19e600: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x19e600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x19e604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e608: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x19e608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x19e60c: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x19e60cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x19e610: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x19e610u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x19e614: 0xae050608  sw          $a1, 0x608($s0)
    ctx->pc = 0x19e614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 5));
    // 0x19e618: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x19e618u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x19e61c: 0xae0705ec  sw          $a3, 0x5EC($s0)
    ctx->pc = 0x19e61cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 7));
    // 0x19e620: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x19e620u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x19e624: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x19E624u;
    SET_GPR_U32(ctx, 31, 0x19E62Cu);
    ctx->pc = 0x19E628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E624u;
    // 0x19e628: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x19E624u, 0x19E62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E62Cu;
label_19e62c:
    // 0x19e62c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19e62cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19e630: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e634: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19e634u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19e638: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x19e638u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19e63c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19e63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e640: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x19e640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19e644: 0x3e00008  jr          $ra
    ctx->pc = 0x19E644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E644u;
        // 0x19e648: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E64Cu;
    // 0x19e64c: 0x0  nop
    ctx->pc = 0x19e64cu;
    // NOP
    ctx->pc = 0x19e650u;
}
