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

// Function: func_001A0478
// Address: 0x1a0478 - 0x1a0598
void func_001A0478_0x1a0478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A0478_0x1a0478");
#endif

    switch (ctx->pc) {
        case 0x1a0498u: goto label_1a0498;
        case 0x1a0500u: goto label_1a0500;
        case 0x1a0530u: goto label_1a0530;
        case 0x1a0578u: goto label_1a0578;
        default: break;
    }

    ctx->pc = 0x1a0478u;

    // 0x1a0478: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a0478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1a047c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1a047cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1a0480: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1a0480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1a0484: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1a0484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1a0488: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1a0488u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1a048c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a048cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a0490: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1A0490u;
    SET_GPR_U32(ctx, 31, 0x1A0498u);
    ctx->pc = 0x1A0494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0490u;
    // 0x1a0494: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1A0490u, 0x1A0498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0498u;
label_1a0498:
    // 0x1a0498: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a0498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a049c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a049cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a04a0: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x1a04a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x1a04a4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1a04a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1a04a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a04a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a04ac: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1a04acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a04b0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1a04b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1a04b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a04b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a04b8: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1a04b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a04bc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1a04bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1a04c0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1a04c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1a04c4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1a04c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a04c8: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x1a04c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x1a04cc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1a04ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a04d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a04d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a04d4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1a04d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a04d8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a04d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a04dc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1a04dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1a04e0: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1a04e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1a04e4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1a04e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a04e8: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x1a04e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1a04ec: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1a04ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1a04f0: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1a04f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1a04f4: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1a04f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1a04f8: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x1A04F8u;
    SET_GPR_U32(ctx, 31, 0x1A0500u);
    ctx->pc = 0x1A04FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A04F8u;
    // 0x1a04fc: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x1A04F8u, 0x1A0500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0500u;
label_1a0500:
    // 0x1a0500: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A0500u;
    {
        const bool branch_taken_0x1a0500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0500u;
        // 0x1a0504: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0500) {
            ctx->pc = 0x1A0530u;
            goto label_1a0530;
        }
    }
    ctx->pc = 0x1A0508u;
    // 0x1a0508: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1a0508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a050c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1a050cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1a0510: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1a0510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1a0514: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a0514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0518: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1a0518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1a051c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a051cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0520: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x1a0520u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x1a0524: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1a0524u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0528: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x1A0528u;
    SET_GPR_U32(ctx, 31, 0x1A0530u);
    ctx->pc = 0x1A052Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0528u;
    // 0x1a052c: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x1A0528u, 0x1A0530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0530u;
label_1a0530:
    // 0x1a0530: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a0530u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0534: 0x26030620  addiu       $v1, $s0, 0x620
    ctx->pc = 0x1a0534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x1a0538: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1a0538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a053c: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x1a053cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1a0540: 0x2407002e  addiu       $a3, $zero, 0x2E
    ctx->pc = 0x1a0540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1a0544: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x1a0544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x1a0548: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x1a0548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x1a054c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a054cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a0550: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x1a0550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x1a0554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0558: 0xa608054a  sh          $t0, 0x54A($s0)
    ctx->pc = 0x1a0558u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 8));
    // 0x1a055c: 0xae030608  sw          $v1, 0x608($s0)
    ctx->pc = 0x1a055cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 3));
    // 0x1a0560: 0xa205060c  sb          $a1, 0x60C($s0)
    ctx->pc = 0x1a0560u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a0564: 0xae0605ec  sw          $a2, 0x5EC($s0)
    ctx->pc = 0x1a0564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 6));
    // 0x1a0568: 0xa60705f6  sh          $a3, 0x5F6($s0)
    ctx->pc = 0x1a0568u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 7));
    // 0x1a056c: 0xa6080548  sh          $t0, 0x548($s0)
    ctx->pc = 0x1a056cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 8));
    // 0x1a0570: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x1A0570u;
    SET_GPR_U32(ctx, 31, 0x1A0578u);
    ctx->pc = 0x1A0574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0570u;
    // 0x1a0574: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x1A0570u, 0x1A0578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0578u;
label_1a0578:
    // 0x1a0578: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1a0578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a057c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a057cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0580: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1a0580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a0584: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1a0584u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a0588: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a0588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a058c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1a058cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a0590: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0590u;
        // 0x1a0594: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0598u;
}
