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

// Function: func_001833E0
// Address: 0x1833e0 - 0x1834f0
void func_001833E0_0x1833e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001833E0_0x1833e0");
#endif

    switch (ctx->pc) {
        case 0x183400u: goto label_183400;
        case 0x183488u: goto label_183488;
        case 0x1834b8u: goto label_1834b8;
        case 0x1834ccu: goto label_1834cc;
        default: break;
    }

    ctx->pc = 0x1833e0u;

    // 0x1833e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1833e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1833e4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1833e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1833e8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1833e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1833ec: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1833ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1833f0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1833f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1833f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1833f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1833f8: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1833F8u;
    SET_GPR_U32(ctx, 31, 0x183400u);
    ctx->pc = 0x1833FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1833F8u;
    // 0x1833fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1833F8u, 0x183400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183400u;
label_183400:
    // 0x183400: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x183400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x183404: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x183404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x183408: 0x3c01402c  lui         $at, 0x402C
    ctx->pc = 0x183408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16428 << 16));
    // 0x18340c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18340cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x183410: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x183410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x183414: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x183414u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183418: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x183418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x18341c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x18341cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x183420: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x183420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x183424: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x183424u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183428: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x183428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x18342c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18342cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x183430: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x183430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183434: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x183434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x183438: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x183438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x18343c: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x18343cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x183440: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x183440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x183444: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x183444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183448: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x183448u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18344c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18344cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x183450: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x183450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x183454: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x183454u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x183458: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x183458u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18345c: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x18345cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x183460: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x183460u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x183464: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x183464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x183468: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x183468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18346c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x18346cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x183470: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x183470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x183474: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x183474u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x183478: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x183478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x18347c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x18347cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x183480: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x183480u;
    SET_GPR_U32(ctx, 31, 0x183488u);
    ctx->pc = 0x183484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183480u;
    // 0x183484: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x183480u, 0x183488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183488u;
label_183488:
    // 0x183488: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x183488u;
    {
        const bool branch_taken_0x183488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183488u;
        // 0x18348c: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183488) {
            ctx->pc = 0x1834B8u;
            goto label_1834b8;
        }
    }
    ctx->pc = 0x183490u;
    // 0x183490: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x183490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x183494: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x183494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x183498: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x183498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x18349c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18349cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1834a0: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1834a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1834a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1834a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1834a8: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x1834a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x1834ac: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1834acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1834b0: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x1834B0u;
    SET_GPR_U32(ctx, 31, 0x1834B8u);
    ctx->pc = 0x1834B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1834B0u;
    // 0x1834b4: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x1834B0u, 0x1834B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1834B8u;
label_1834b8:
    // 0x1834b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1834b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1834bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1834bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1834c0: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x1834c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x1834c4: 0xc06feca  jal         func_1BFB28
    ctx->pc = 0x1834C4u;
    SET_GPR_U32(ctx, 31, 0x1834CCu);
    ctx->pc = 0x1834C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1834C4u;
    // 0x1834c8: 0xa6020548  sh          $v0, 0x548($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFB28u, 0x1834C4u, 0x1834CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1834CCu;
label_1834cc:
    // 0x1834cc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1834ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1834d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1834d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1834d4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1834d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1834d8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1834d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1834dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1834dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1834e0: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1834e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1834e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1834E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1834E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1834E4u;
        // 0x1834e8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1834E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1834ECu;
    // 0x1834ec: 0x0  nop
    ctx->pc = 0x1834ecu;
    // NOP
    ctx->pc = 0x1834f0u;
}
