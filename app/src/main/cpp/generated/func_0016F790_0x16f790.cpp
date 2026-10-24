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

// Function: func_0016F790
// Address: 0x16f790 - 0x16f8e0
void func_0016F790_0x16f790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0016F790_0x16f790");
#endif

    switch (ctx->pc) {
        case 0x16f7b0u: goto label_16f7b0;
        case 0x16f824u: goto label_16f824;
        case 0x16f854u: goto label_16f854;
        case 0x16f898u: goto label_16f898;
        case 0x16f8b4u: goto label_16f8b4;
        default: break;
    }

    ctx->pc = 0x16f790u;

    // 0x16f790: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x16f790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x16f794: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x16f794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x16f798: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x16f798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x16f79c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x16f79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x16f7a0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x16f7a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x16f7a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16f7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16f7a8: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x16F7A8u;
    SET_GPR_U32(ctx, 31, 0x16F7B0u);
    ctx->pc = 0x16F7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F7A8u;
    // 0x16f7ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x16F7A8u, 0x16F7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F7B0u;
label_16f7b0:
    // 0x16f7b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16f7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16f7b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x16f7b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16f7b8: 0x3c014026  lui         $at, 0x4026
    ctx->pc = 0x16f7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16422 << 16));
    // 0x16f7bc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x16f7bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x16f7c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x16f7c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16f7c4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x16f7c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16f7c8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x16f7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x16f7cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16f7ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16f7d0: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x16f7d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16f7d4: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x16f7d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x16f7d8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x16f7d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x16f7dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16f7dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f7e0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x16f7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x16f7e4: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x16f7e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x16f7e8: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x16f7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x16f7ec: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x16f7ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x16f7f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16f7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f7f4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x16f7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x16f7f8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x16f7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16f7fc: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x16f7fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x16f800: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x16f800u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x16f804: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x16f804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x16f808: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x16f808u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x16f80c: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x16f80cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x16f810: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x16f810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x16f814: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x16f814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x16f818: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x16f818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x16f81c: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x16F81Cu;
    SET_GPR_U32(ctx, 31, 0x16F824u);
    ctx->pc = 0x16F820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F81Cu;
    // 0x16f820: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x16F81Cu, 0x16F824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F824u;
label_16f824:
    // 0x16f824: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16F824u;
    {
        const bool branch_taken_0x16f824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F824u;
        // 0x16f828: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f824) {
            ctx->pc = 0x16F854u;
            goto label_16f854;
        }
    }
    ctx->pc = 0x16F82Cu;
    // 0x16f82c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x16f82cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16f830: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x16f830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x16f834: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x16f834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x16f838: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16f838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f83c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x16f83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x16f840: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x16f840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f844: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x16f844u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x16f848: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x16f848u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f84c: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x16F84Cu;
    SET_GPR_U32(ctx, 31, 0x16F854u);
    ctx->pc = 0x16F850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F84Cu;
    // 0x16f850: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x16F84Cu, 0x16F854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F854u;
label_16f854:
    // 0x16f854: 0x24070259  addiu       $a3, $zero, 0x259
    ctx->pc = 0x16f854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 601));
    // 0x16f858: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f85c: 0x26030620  addiu       $v1, $s0, 0x620
    ctx->pc = 0x16f85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x16f860: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x16f860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16f864: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x16f864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16f868: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x16f868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x16f86c: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x16f86cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x16f870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f874: 0xae0705f0  sw          $a3, 0x5F0($s0)
    ctx->pc = 0x16f874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 7));
    // 0x16f878: 0xae0705e8  sw          $a3, 0x5E8($s0)
    ctx->pc = 0x16f878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 7));
    // 0x16f87c: 0xae030608  sw          $v1, 0x608($s0)
    ctx->pc = 0x16f87cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 3));
    // 0x16f880: 0xa205060c  sb          $a1, 0x60C($s0)
    ctx->pc = 0x16f880u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 5));
    // 0x16f884: 0xa60605f4  sh          $a2, 0x5F4($s0)
    ctx->pc = 0x16f884u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 6));
    // 0x16f888: 0xae0205ec  sw          $v0, 0x5EC($s0)
    ctx->pc = 0x16f888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 2));
    // 0x16f88c: 0xa6020548  sh          $v0, 0x548($s0)
    ctx->pc = 0x16f88cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f890: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x16F890u;
    SET_GPR_U32(ctx, 31, 0x16F898u);
    ctx->pc = 0x16F894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F890u;
    // 0x16f894: 0xa602054a  sh          $v0, 0x54A($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x16F890u, 0x16F898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F898u;
label_16f898:
    // 0x16f898: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x16f898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x16f89c: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x16f89cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x16f8a0: 0x248419a0  addiu       $a0, $a0, 0x19A0
    ctx->pc = 0x16f8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
    // 0x16f8a4: 0x24050259  addiu       $a1, $zero, 0x259
    ctx->pc = 0x16f8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 601));
    // 0x16f8a8: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x16f8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x16f8ac: 0xc0c15d6  jal         func_305758
    ctx->pc = 0x16F8ACu;
    SET_GPR_U32(ctx, 31, 0x16F8B4u);
    ctx->pc = 0x16F8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F8ACu;
    // 0x16f8b0: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305758u, 0x16F8ACu, 0x16F8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F8B4u;
label_16f8b4:
    // 0x16f8b4: 0x8e0305a0  lw          $v1, 0x5A0($s0)
    ctx->pc = 0x16f8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
    // 0x16f8b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f8bc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x16f8bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16f8c0: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x16f8c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x16f8c4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x16f8c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16f8c8: 0xae0305a0  sw          $v1, 0x5A0($s0)
    ctx->pc = 0x16f8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 3));
    // 0x16f8cc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x16f8ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16f8d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16f8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16f8d4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x16f8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16f8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x16F8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F8D8u;
        // 0x16f8dc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F8E0u;
}
