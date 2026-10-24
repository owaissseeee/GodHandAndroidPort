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

// Function: func_0019A328
// Address: 0x19a328 - 0x19a438
void func_0019A328_0x19a328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019A328_0x19a328");
#endif

    switch (ctx->pc) {
        case 0x19a348u: goto label_19a348;
        case 0x19a3a8u: goto label_19a3a8;
        case 0x19a3d8u: goto label_19a3d8;
        case 0x19a418u: goto label_19a418;
        default: break;
    }

    ctx->pc = 0x19a328u;

    // 0x19a328: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19a328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19a32c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19a32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x19a330: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x19a330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19a334: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x19a334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x19a338: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x19a338u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x19a33c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19a33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19a340: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x19A340u;
    SET_GPR_U32(ctx, 31, 0x19A348u);
    ctx->pc = 0x19A344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A340u;
    // 0x19a344: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x19A340u, 0x19A348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A348u;
label_19a348:
    // 0x19a348: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19a348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19a34c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19a34cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19a350: 0x3c014033  lui         $at, 0x4033
    ctx->pc = 0x19a350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16435 << 16));
    // 0x19a354: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x19a354u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x19a358: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19a358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a35c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x19a35cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19a360: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x19a360u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19a364: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x19a364u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19a368: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19a368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19a36c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19a36cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19a370: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19a370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19a374: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x19a374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x19a378: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x19a378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19a37c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19a37cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a380: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19a380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19a384: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19a384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a388: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x19a388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19a38c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x19a38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19a390: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x19a390u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x19a394: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x19a394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x19a398: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x19a398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x19a39c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x19a39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x19a3a0: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x19A3A0u;
    SET_GPR_U32(ctx, 31, 0x19A3A8u);
    ctx->pc = 0x19A3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A3A0u;
    // 0x19a3a4: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x19A3A0u, 0x19A3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A3A8u;
label_19a3a8:
    // 0x19a3a8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19A3A8u;
    {
        const bool branch_taken_0x19a3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A3A8u;
        // 0x19a3ac: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a3a8) {
            ctx->pc = 0x19A3D8u;
            goto label_19a3d8;
        }
    }
    ctx->pc = 0x19A3B0u;
    // 0x19a3b0: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x19a3b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19a3b4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x19a3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x19a3b8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x19a3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x19a3bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19a3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3c0: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x19a3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x19a3c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19a3c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3c8: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x19a3c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x19a3cc: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x19a3ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3d0: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x19A3D0u;
    SET_GPR_U32(ctx, 31, 0x19A3D8u);
    ctx->pc = 0x19A3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A3D0u;
    // 0x19a3d4: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x19A3D0u, 0x19A3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A3D8u;
label_19a3d8:
    // 0x19a3d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19a3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a3dc: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x19a3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19a3e0: 0x26030620  addiu       $v1, $s0, 0x620
    ctx->pc = 0x19a3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x19a3e4: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x19a3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x19a3e8: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x19a3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x19a3ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19a3f0: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x19a3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x19a3f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3f8: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x19a3f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x19a3fc: 0xa605054a  sh          $a1, 0x54A($s0)
    ctx->pc = 0x19a3fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 5));
    // 0x19a400: 0xae030608  sw          $v1, 0x608($s0)
    ctx->pc = 0x19a400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 3));
    // 0x19a404: 0xae0605ec  sw          $a2, 0x5EC($s0)
    ctx->pc = 0x19a404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 6));
    // 0x19a408: 0xa6050548  sh          $a1, 0x548($s0)
    ctx->pc = 0x19a408u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 5));
    // 0x19a40c: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x19a40cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x19a410: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x19A410u;
    SET_GPR_U32(ctx, 31, 0x19A418u);
    ctx->pc = 0x19A414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A410u;
    // 0x19a414: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x19A410u, 0x19A418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A418u;
label_19a418:
    // 0x19a418: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19a418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19a41c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a420: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19a420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19a424: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x19a424u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19a428: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19a428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a42c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x19a42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19a430: 0x3e00008  jr          $ra
    ctx->pc = 0x19A430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A430u;
        // 0x19a434: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A438u;
}
