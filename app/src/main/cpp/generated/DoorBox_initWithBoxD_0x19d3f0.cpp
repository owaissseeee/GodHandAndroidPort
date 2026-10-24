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

// Function: DoorBox_initWithBoxD
// Address: 0x19d3f0 - 0x19d538
void DoorBox_initWithBoxD_0x19d3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DoorBox_initWithBoxD_0x19d3f0");
#endif

    switch (ctx->pc) {
        case 0x19d410u: goto label_19d410;
        case 0x19d498u: goto label_19d498;
        case 0x19d4c8u: goto label_19d4c8;
        case 0x19d4fcu: goto label_19d4fc;
        case 0x19d514u: goto label_19d514;
        default: break;
    }

    ctx->pc = 0x19d3f0u;

    // 0x19d3f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19d3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19d3f4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19d3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x19d3f8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x19d3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19d3fc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x19d3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x19d400: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x19d400u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x19d404: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19d404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19d408: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x19D408u;
    SET_GPR_U32(ctx, 31, 0x19D410u);
    ctx->pc = 0x19D40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D408u;
    // 0x19d40c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x19D408u, 0x19D410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D410u;
label_19d410:
    // 0x19d410: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19d410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19d414: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19d414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19d418: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x19d418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x19d41c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19d41cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19d420: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x19d420u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19d424: 0x3c014046  lui         $at, 0x4046
    ctx->pc = 0x19d424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16454 << 16));
    // 0x19d428: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x19d428u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x19d42c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19d42cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19d430: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x19d430u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19d434: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x19d434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x19d438: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19d438u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x19d43c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19d43cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19d440: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19d440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19d444: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x19d444u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19d448: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x19d448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x19d44c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19d44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19d450: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19d450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d454: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x19d454u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19d458: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19d458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19d45c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x19d45cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19d460: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19d460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19d464: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x19d464u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19d468: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x19d468u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19d46c: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x19d46cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x19d470: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19d470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x19d474: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19d474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19d478: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x19d478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d47c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x19d47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x19d480: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19d480u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x19d484: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x19d484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x19d488: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19d488u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19d48c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x19d48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x19d490: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x19D490u;
    SET_GPR_U32(ctx, 31, 0x19D498u);
    ctx->pc = 0x19D494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D490u;
    // 0x19d494: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x19D490u, 0x19D498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D498u;
label_19d498:
    // 0x19d498: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19D498u;
    {
        const bool branch_taken_0x19d498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D498u;
        // 0x19d49c: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d498) {
            ctx->pc = 0x19D4C8u;
            goto label_19d4c8;
        }
    }
    ctx->pc = 0x19D4A0u;
    // 0x19d4a0: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x19d4a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19d4a4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x19d4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x19d4a8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x19d4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x19d4ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19d4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d4b0: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x19d4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x19d4b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19d4b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d4b8: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x19d4b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x19d4bc: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x19d4bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d4c0: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x19D4C0u;
    SET_GPR_U32(ctx, 31, 0x19D4C8u);
    ctx->pc = 0x19D4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D4C0u;
    // 0x19d4c4: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x19D4C0u, 0x19D4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D4C8u;
label_19d4c8:
    // 0x19d4c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d4cc: 0x26030610  addiu       $v1, $s0, 0x610
    ctx->pc = 0x19d4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x19d4d0: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x19d4d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x19d4d4: 0x107d0007  beq         $v1, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x19D4D4u;
    {
        const bool branch_taken_0x19d4d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 29));
        ctx->pc = 0x19D4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4D4u;
        // 0x19d4d8: 0xa6020548  sh          $v0, 0x548($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d4d4) {
            ctx->pc = 0x19D4F4u;
            goto label_19d4f4;
        }
    }
    ctx->pc = 0x19D4DCu;
    // 0x19d4dc: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x19d4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d4e0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x19d4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19d4e4: 0xe6000610  swc1        $f0, 0x610($s0)
    ctx->pc = 0x19d4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1552), bits); }
    // 0x19d4e8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x19d4e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x19d4ec: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x19d4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d4f0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x19d4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_19d4f4:
    // 0x19d4f4: 0xc06f48a  jal         func_1BD228
    ctx->pc = 0x19D4F4u;
    SET_GPR_U32(ctx, 31, 0x19D4FCu);
    ctx->pc = 0x19D4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D4F4u;
    // 0x19d4f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD228u, 0x19D4F4u, 0x19D4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D4FCu;
label_19d4fc:
    // 0x19d4fc: 0x26020650  addiu       $v0, $s0, 0x650
    ctx->pc = 0x19d4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x19d500: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x19d500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19d504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19d504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d508: 0xa2030624  sb          $v1, 0x624($s0)
    ctx->pc = 0x19d508u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1572), (uint8_t)GPR_U32(ctx, 3));
    // 0x19d50c: 0xc06efda  jal         func_1BBF68
    ctx->pc = 0x19D50Cu;
    SET_GPR_U32(ctx, 31, 0x19D514u);
    ctx->pc = 0x19D510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D50Cu;
    // 0x19d510: 0xae020628  sw          $v0, 0x628($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1576), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBF68u, 0x19D50Cu, 0x19D514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D514u;
label_19d514:
    // 0x19d514: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19d514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19d518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d51c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19d51cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19d520: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x19d520u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19d524: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19d524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19d528: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x19d528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19d52c: 0x3e00008  jr          $ra
    ctx->pc = 0x19D52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D52Cu;
        // 0x19d530: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D534u;
    // 0x19d534: 0x0  nop
    ctx->pc = 0x19d534u;
    // NOP
    ctx->pc = 0x19d538u;
}
