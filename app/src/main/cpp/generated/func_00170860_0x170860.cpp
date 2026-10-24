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

// Function: func_00170860
// Address: 0x170860 - 0x170970
void func_00170860_0x170860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00170860_0x170860");
#endif

    switch (ctx->pc) {
        case 0x170880u: goto label_170880;
        case 0x170908u: goto label_170908;
        case 0x170938u: goto label_170938;
        case 0x17094cu: goto label_17094c;
        default: break;
    }

    ctx->pc = 0x170860u;

    // 0x170860: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x170860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x170864: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x170864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x170868: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x170868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x17086c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x17086cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x170870: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x170870u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x170874: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x170874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x170878: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x170878u;
    SET_GPR_U32(ctx, 31, 0x170880u);
    ctx->pc = 0x17087Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170878u;
    // 0x17087c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x170878u, 0x170880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170880u;
label_170880:
    // 0x170880: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x170880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x170884: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x170884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x170888: 0x3c014044  lui         $at, 0x4044
    ctx->pc = 0x170888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16452 << 16));
    // 0x17088c: 0x3421dd2f  ori         $at, $at, 0xDD2F
    ctx->pc = 0x17088cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56623);
    // 0x170890: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x170890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x170894: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x170894u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x170898: 0x3c013f46  lui         $at, 0x3F46
    ctx->pc = 0x170898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16198 << 16));
    // 0x17089c: 0x342124dd  ori         $at, $at, 0x24DD
    ctx->pc = 0x17089cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9437);
    // 0x1708a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1708a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1708a4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1708a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1708a8: 0x3c013f43  lui         $at, 0x3F43
    ctx->pc = 0x1708a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16195 << 16));
    // 0x1708ac: 0x34219581  ori         $at, $at, 0x9581
    ctx->pc = 0x1708acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38273);
    // 0x1708b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1708b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1708b4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1708b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1708b8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1708b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1708bc: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x1708bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x1708c0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1708c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1708c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1708c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1708c8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1708c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1708cc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1708ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1708d0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1708d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1708d4: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x1708d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1708d8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1708d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1708dc: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1708dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1708e0: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x1708e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1708e4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1708e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x1708e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1708e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1708ec: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1708ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1708f0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1708f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1708f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1708f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1708f8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1708f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1708fc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1708fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x170900: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x170900u;
    SET_GPR_U32(ctx, 31, 0x170908u);
    ctx->pc = 0x170904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170900u;
    // 0x170904: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x170900u, 0x170908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170908u;
label_170908:
    // 0x170908: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x170908u;
    {
        const bool branch_taken_0x170908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170908u;
        // 0x17090c: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170908) {
            ctx->pc = 0x170938u;
            goto label_170938;
        }
    }
    ctx->pc = 0x170910u;
    // 0x170910: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x170910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x170914: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x170914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x170918: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x170918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x17091c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17091cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170920: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x170920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x170924: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x170924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170928: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x170928u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x17092c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x17092cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170930: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x170930u;
    SET_GPR_U32(ctx, 31, 0x170938u);
    ctx->pc = 0x170934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170930u;
    // 0x170934: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x170930u, 0x170938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170938u;
label_170938:
    // 0x170938: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17093c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17093cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170940: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x170940u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x170944: 0xc06feca  jal         func_1BFB28
    ctx->pc = 0x170944u;
    SET_GPR_U32(ctx, 31, 0x17094Cu);
    ctx->pc = 0x170948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170944u;
    // 0x170948: 0xa6020548  sh          $v0, 0x548($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFB28u, 0x170944u, 0x17094Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17094Cu;
label_17094c:
    // 0x17094c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x17094cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x170950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170954: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x170954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x170958: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x170958u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17095c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17095cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x170960: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x170960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x170964: 0x3e00008  jr          $ra
    ctx->pc = 0x170964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170964u;
        // 0x170968: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17096Cu;
    // 0x17096c: 0x0  nop
    ctx->pc = 0x17096cu;
    // NOP
    ctx->pc = 0x170970u;
}
