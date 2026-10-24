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

// Function: func_0019A808
// Address: 0x19a808 - 0x19a928
void func_0019A808_0x19a808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019A808_0x19a808");
#endif

    switch (ctx->pc) {
        case 0x19a828u: goto label_19a828;
        case 0x19a890u: goto label_19a890;
        case 0x19a8c0u: goto label_19a8c0;
        case 0x19a904u: goto label_19a904;
        default: break;
    }

    ctx->pc = 0x19a808u;

    // 0x19a808: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19a808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19a80c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19a80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x19a810: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x19a810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19a814: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x19a814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x19a818: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x19a818u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x19a81c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19a81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19a820: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x19A820u;
    SET_GPR_U32(ctx, 31, 0x19A828u);
    ctx->pc = 0x19A824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A820u;
    // 0x19a824: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x19A820u, 0x19A828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A828u;
label_19a828:
    // 0x19a828: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19a828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19a82c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19a82cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19a830: 0x3c014019  lui         $at, 0x4019
    ctx->pc = 0x19a830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16409 << 16));
    // 0x19a834: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x19a834u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x19a838: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19a838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a83c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x19a83cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19a840: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x19a840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x19a844: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19a844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19a848: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x19a848u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19a84c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x19a84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19a850: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19a850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19a854: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x19a854u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19a858: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x19a858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x19a85c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19a85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19a860: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19a860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a864: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x19a864u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19a868: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19a868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a86c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x19a86cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19a870: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x19a870u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19a874: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x19a874u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19a878: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x19a878u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x19a87c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x19a87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x19a880: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x19a880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x19a884: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x19a884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x19a888: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x19A888u;
    SET_GPR_U32(ctx, 31, 0x19A890u);
    ctx->pc = 0x19A88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A888u;
    // 0x19a88c: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x19A888u, 0x19A890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A890u;
label_19a890:
    // 0x19a890: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19A890u;
    {
        const bool branch_taken_0x19a890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A890u;
        // 0x19a894: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a890) {
            ctx->pc = 0x19A8C0u;
            goto label_19a8c0;
        }
    }
    ctx->pc = 0x19A898u;
    // 0x19a898: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x19a898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19a89c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x19a89cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x19a8a0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x19a8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x19a8a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19a8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a8a8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x19a8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x19a8ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19a8acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a8b0: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x19a8b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x19a8b4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x19a8b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a8b8: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x19A8B8u;
    SET_GPR_U32(ctx, 31, 0x19A8C0u);
    ctx->pc = 0x19A8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A8B8u;
    // 0x19a8bc: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x19A8B8u, 0x19A8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A8C0u;
label_19a8c0:
    // 0x19a8c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a8c4: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x19a8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x19a8c8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x19a8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19a8cc: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x19a8ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19a8d0: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x19a8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x19a8d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19a8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19a8d8: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x19a8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x19a8dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a8e0: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x19a8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x19a8e4: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x19a8e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x19a8e8: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x19a8e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x19a8ec: 0xae050608  sw          $a1, 0x608($s0)
    ctx->pc = 0x19a8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 5));
    // 0x19a8f0: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x19a8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x19a8f4: 0xae0705ec  sw          $a3, 0x5EC($s0)
    ctx->pc = 0x19a8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 7));
    // 0x19a8f8: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x19a8f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x19a8fc: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x19A8FCu;
    SET_GPR_U32(ctx, 31, 0x19A904u);
    ctx->pc = 0x19A900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A8FCu;
    // 0x19a900: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x19A8FCu, 0x19A904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A904u;
label_19a904:
    // 0x19a904: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19a904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19a908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19a908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a90c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19a90cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19a910: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x19a910u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19a914: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19a914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a918: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x19a918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19a91c: 0x3e00008  jr          $ra
    ctx->pc = 0x19A91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A91Cu;
        // 0x19a920: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A91Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A924u;
    // 0x19a924: 0x0  nop
    ctx->pc = 0x19a924u;
    // NOP
    ctx->pc = 0x19a928u;
}
