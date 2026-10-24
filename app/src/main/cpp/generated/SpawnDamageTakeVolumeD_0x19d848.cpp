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

// Function: SpawnDamageTakeVolumeD
// Address: 0x19d848 - 0x19d950
void SpawnDamageTakeVolumeD_0x19d848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SpawnDamageTakeVolumeD_0x19d848");
#endif

    switch (ctx->pc) {
        case 0x19d868u: goto label_19d868;
        case 0x19d8ecu: goto label_19d8ec;
        case 0x19d91cu: goto label_19d91c;
        case 0x19d930u: goto label_19d930;
        default: break;
    }

    ctx->pc = 0x19d848u;

    // 0x19d848: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19d848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19d84c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19d84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x19d850: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x19d850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19d854: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x19d854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x19d858: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x19d858u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x19d85c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19d85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19d860: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x19D860u;
    SET_GPR_U32(ctx, 31, 0x19D868u);
    ctx->pc = 0x19D864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D860u;
    // 0x19d864: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x19D860u, 0x19D868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D868u;
label_19d868:
    // 0x19d868: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19d868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19d86c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19d86cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19d870: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x19d870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x19d874: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19d874u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x19d878: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19d878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19d87c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x19d87cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19d880: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x19d880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x19d884: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19d884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19d888: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x19d888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19d88c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x19d88cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x19d890: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19d890u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x19d894: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19d894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19d898: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19d898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19d89c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x19d89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19d8a0: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x19d8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x19d8a4: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x19d8a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19d8a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19d8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d8ac: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x19d8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19d8b0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19d8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19d8b4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x19d8b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19d8b8: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x19d8b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19d8bc: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x19d8bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19d8c0: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x19d8c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19d8c4: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x19d8c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x19d8c8: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x19d8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x19d8cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19d8ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19d8d0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x19d8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d8d4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x19d8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x19d8d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19d8d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19d8dc: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x19d8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x19d8e0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x19d8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x19d8e4: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x19D8E4u;
    SET_GPR_U32(ctx, 31, 0x19D8ECu);
    ctx->pc = 0x19D8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D8E4u;
    // 0x19d8e8: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x19D8E4u, 0x19D8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D8ECu;
label_19d8ec:
    // 0x19d8ec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19D8ECu;
    {
        const bool branch_taken_0x19d8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D8ECu;
        // 0x19d8f0: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d8ec) {
            ctx->pc = 0x19D91Cu;
            goto label_19d91c;
        }
    }
    ctx->pc = 0x19D8F4u;
    // 0x19d8f4: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x19d8f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19d8f8: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x19d8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x19d8fc: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x19d8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x19d900: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19d900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d904: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x19d904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x19d908: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19d908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d90c: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x19d90cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x19d910: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x19d910u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d914: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x19D914u;
    SET_GPR_U32(ctx, 31, 0x19D91Cu);
    ctx->pc = 0x19D918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D914u;
    // 0x19d918: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x19D914u, 0x19D91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D91Cu;
label_19d91c:
    // 0x19d91c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19d920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d924: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x19d924u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x19d928: 0xc06feca  jal         func_1BFB28
    ctx->pc = 0x19D928u;
    SET_GPR_U32(ctx, 31, 0x19D930u);
    ctx->pc = 0x19D92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D928u;
    // 0x19d92c: 0xa6020548  sh          $v0, 0x548($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFB28u, 0x19D928u, 0x19D930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D930u;
label_19d930:
    // 0x19d930: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19d930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19d934: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d938: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19d938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19d93c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x19d93cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19d940: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19d940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19d944: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x19d944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19d948: 0x3e00008  jr          $ra
    ctx->pc = 0x19D948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D948u;
        // 0x19d94c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D950u;
}
