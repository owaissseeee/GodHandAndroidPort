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

// Function: DoorBox_initWithBoxC
// Address: 0x19c3d0 - 0x19c518
void DoorBox_initWithBoxC_0x19c3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DoorBox_initWithBoxC_0x19c3d0");
#endif

    switch (ctx->pc) {
        case 0x19c3f0u: goto label_19c3f0;
        case 0x19c478u: goto label_19c478;
        case 0x19c4a8u: goto label_19c4a8;
        case 0x19c4dcu: goto label_19c4dc;
        case 0x19c4f4u: goto label_19c4f4;
        default: break;
    }

    ctx->pc = 0x19c3d0u;

    // 0x19c3d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19c3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19c3d4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19c3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x19c3d8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x19c3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19c3dc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x19c3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x19c3e0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x19c3e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x19c3e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19c3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19c3e8: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x19C3E8u;
    SET_GPR_U32(ctx, 31, 0x19C3F0u);
    ctx->pc = 0x19C3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C3E8u;
    // 0x19c3ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x19C3E8u, 0x19C3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C3F0u;
label_19c3f0:
    // 0x19c3f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19c3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19c3f4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19c3f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19c3f8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x19c3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x19c3fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19c3fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19c400: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x19c400u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19c404: 0x3c014019  lui         $at, 0x4019
    ctx->pc = 0x19c404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16409 << 16));
    // 0x19c408: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x19c408u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x19c40c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19c40cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19c410: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x19c410u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19c414: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x19c414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x19c418: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19c418u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x19c41c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19c41cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c420: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19c420u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19c424: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x19c424u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19c428: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x19c428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x19c42c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19c42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19c430: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19c430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c434: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x19c434u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19c438: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19c438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19c43c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x19c43cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19c440: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19c440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19c444: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x19c444u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19c448: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x19c448u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19c44c: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x19c44cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x19c450: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19c450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x19c454: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19c454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19c458: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x19c458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19c45c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x19c45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x19c460: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19c460u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x19c464: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x19c464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x19c468: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19c468u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19c46c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x19c46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x19c470: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x19C470u;
    SET_GPR_U32(ctx, 31, 0x19C478u);
    ctx->pc = 0x19C474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C470u;
    // 0x19c474: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x19C470u, 0x19C478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C478u;
label_19c478:
    // 0x19c478: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19C478u;
    {
        const bool branch_taken_0x19c478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C478u;
        // 0x19c47c: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c478) {
            ctx->pc = 0x19C4A8u;
            goto label_19c4a8;
        }
    }
    ctx->pc = 0x19C480u;
    // 0x19c480: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x19c480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19c484: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x19c484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x19c488: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x19c488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x19c48c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19c48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c490: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x19c490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x19c494: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19c494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c498: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x19c498u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x19c49c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x19c49cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c4a0: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x19C4A0u;
    SET_GPR_U32(ctx, 31, 0x19C4A8u);
    ctx->pc = 0x19C4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C4A0u;
    // 0x19c4a4: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x19C4A0u, 0x19C4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C4A8u;
label_19c4a8:
    // 0x19c4a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c4ac: 0x26030610  addiu       $v1, $s0, 0x610
    ctx->pc = 0x19c4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x19c4b0: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x19c4b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x19c4b4: 0x107d0007  beq         $v1, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x19C4B4u;
    {
        const bool branch_taken_0x19c4b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 29));
        ctx->pc = 0x19C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4B4u;
        // 0x19c4b8: 0xa6020548  sh          $v0, 0x548($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c4b4) {
            ctx->pc = 0x19C4D4u;
            goto label_19c4d4;
        }
    }
    ctx->pc = 0x19C4BCu;
    // 0x19c4bc: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x19c4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19c4c0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x19c4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19c4c4: 0xe6000610  swc1        $f0, 0x610($s0)
    ctx->pc = 0x19c4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1552), bits); }
    // 0x19c4c8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x19c4c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x19c4cc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x19c4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19c4d0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x19c4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_19c4d4:
    // 0x19c4d4: 0xc06f48a  jal         func_1BD228
    ctx->pc = 0x19C4D4u;
    SET_GPR_U32(ctx, 31, 0x19C4DCu);
    ctx->pc = 0x19C4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C4D4u;
    // 0x19c4d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD228u, 0x19C4D4u, 0x19C4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C4DCu;
label_19c4dc:
    // 0x19c4dc: 0x26020650  addiu       $v0, $s0, 0x650
    ctx->pc = 0x19c4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x19c4e0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x19c4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19c4e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c4e8: 0xa2030624  sb          $v1, 0x624($s0)
    ctx->pc = 0x19c4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1572), (uint8_t)GPR_U32(ctx, 3));
    // 0x19c4ec: 0xc06efda  jal         func_1BBF68
    ctx->pc = 0x19C4ECu;
    SET_GPR_U32(ctx, 31, 0x19C4F4u);
    ctx->pc = 0x19C4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C4ECu;
    // 0x19c4f0: 0xae020628  sw          $v0, 0x628($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1576), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBF68u, 0x19C4ECu, 0x19C4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C4F4u;
label_19c4f4:
    // 0x19c4f4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19c4f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19c4f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c4fc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19c4fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19c500: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x19c500u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19c504: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19c504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19c508: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x19c508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19c50c: 0x3e00008  jr          $ra
    ctx->pc = 0x19C50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C50Cu;
        // 0x19c510: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C514u;
    // 0x19c514: 0x0  nop
    ctx->pc = 0x19c514u;
    // NOP
    ctx->pc = 0x19c518u;
}
