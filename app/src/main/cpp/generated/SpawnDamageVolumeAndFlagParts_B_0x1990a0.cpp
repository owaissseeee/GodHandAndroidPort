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

// Function: SpawnDamageVolumeAndFlagParts_B
// Address: 0x1990a0 - 0x199290
void SpawnDamageVolumeAndFlagParts_B_0x1990a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SpawnDamageVolumeAndFlagParts_B_0x1990a0");
#endif

    switch (ctx->pc) {
        case 0x1990c0u: goto label_1990c0;
        case 0x199138u: goto label_199138;
        case 0x199168u: goto label_199168;
        case 0x199180u: goto label_199180;
        case 0x199198u: goto label_199198;
        case 0x1991c8u: goto label_1991c8;
        default: break;
    }

    ctx->pc = 0x1990a0u;

    // 0x1990a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1990a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1990a4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1990a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1990a8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1990a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1990ac: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1990acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1990b0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1990b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1990b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1990b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1990b8: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1990B8u;
    SET_GPR_U32(ctx, 31, 0x1990C0u);
    ctx->pc = 0x1990BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1990B8u;
    // 0x1990bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1990B8u, 0x1990C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1990C0u;
label_1990c0:
    // 0x1990c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1990c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1990c4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1990c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1990c8: 0x3c013f87  lui         $at, 0x3F87
    ctx->pc = 0x1990c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16263 << 16));
    // 0x1990cc: 0x34214539  ori         $at, $at, 0x4539
    ctx->pc = 0x1990ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17721);
    // 0x1990d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1990d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1990d4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1990d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1990d8: 0x3c013f87  lui         $at, 0x3F87
    ctx->pc = 0x1990d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16263 << 16));
    // 0x1990dc: 0x3421837b  ori         $at, $at, 0x837B
    ctx->pc = 0x1990dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33659);
    // 0x1990e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1990e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1990e4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1990e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1990e8: 0x3c013fa1  lui         $at, 0x3FA1
    ctx->pc = 0x1990e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16289 << 16));
    // 0x1990ec: 0x34211d15  ori         $at, $at, 0x1D15
    ctx->pc = 0x1990ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7445);
    // 0x1990f0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1990f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1990f4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1990f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1990f8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1990f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1990fc: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x1990fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x199100: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x199100u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x199104: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x199104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199108: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x199108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19910c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19910cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x199110: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x199110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x199114: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x199114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x199118: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x199118u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19911c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x19911cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x199120: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x199120u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x199124: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x199124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x199128: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x199128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x19912c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x19912cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x199130: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x199130u;
    SET_GPR_U32(ctx, 31, 0x199138u);
    ctx->pc = 0x199134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199130u;
    // 0x199134: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x199130u, 0x199138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199138u;
label_199138:
    // 0x199138: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x199138u;
    {
        const bool branch_taken_0x199138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199138u;
        // 0x19913c: 0xae020650  sw          $v0, 0x650($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199138) {
            ctx->pc = 0x199168u;
            goto label_199168;
        }
    }
    ctx->pc = 0x199140u;
    // 0x199140: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x199140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x199144: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x199144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x199148: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x199148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x19914c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19914cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199150: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x199150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x199154: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x199154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199158: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x199158u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x19915c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x19915cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199160: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x199160u;
    SET_GPR_U32(ctx, 31, 0x199168u);
    ctx->pc = 0x199164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199160u;
    // 0x199164: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x199160u, 0x199168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199168u;
label_199168:
    // 0x199168: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19916c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19916cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199170: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x199170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199174: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x199174u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x199178: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x199178u;
    SET_GPR_U32(ctx, 31, 0x199180u);
    ctx->pc = 0x19917Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199178u;
    // 0x19917c: 0xa6020548  sh          $v0, 0x548($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x199178u, 0x199180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199180u;
label_199180:
    // 0x199180: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x199180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x199184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199188: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x199188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19918c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x19918cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x199190: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x199190u;
    SET_GPR_U32(ctx, 31, 0x199198u);
    ctx->pc = 0x199194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199190u;
    // 0x199194: 0xac430380  sw          $v1, 0x380($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x199190u, 0x199198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199198u;
label_199198:
    // 0x199198: 0x8c440380  lw          $a0, 0x380($v0)
    ctx->pc = 0x199198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x19919c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x19919cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1991a0: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x1991a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1991a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1991a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1991a8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1991a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1991ac: 0xac440380  sw          $a0, 0x380($v0)
    ctx->pc = 0x1991acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 4));
    // 0x1991b0: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1991b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1991b4: 0x5045002f  beql        $v0, $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1991B4u;
    {
        const bool branch_taken_0x1991b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1991b4) {
            ctx->pc = 0x1991B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1991B4u;
            // 0x1991b8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199274u;
            goto label_199274;
        }
    }
    ctx->pc = 0x1991BCu;
    // 0x1991bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1991bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1991c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1991c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1991c4: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1991c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_1991c8:
    // 0x1991c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1991c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1991cc: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1991ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1991d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1991D0u;
    {
        const bool branch_taken_0x1991d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1991D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991D0u;
        // 0x1991d4: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1991d0) {
            ctx->pc = 0x1991E0u;
            goto label_1991e0;
        }
    }
    ctx->pc = 0x1991D8u;
    // 0x1991d8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1991d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1991dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1991dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1991e0:
    // 0x1991e0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1991e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1991e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1991E4u;
    {
        const bool branch_taken_0x1991e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1991E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991E4u;
        // 0x1991e8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1991e4) {
            ctx->pc = 0x1991FCu;
            goto label_1991fc;
        }
    }
    ctx->pc = 0x1991ECu;
    // 0x1991ec: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x1991ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1991f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1991f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1991f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1991F4u;
    {
        const bool branch_taken_0x1991f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1991F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991F4u;
        // 0x1991f8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1991f4) {
            ctx->pc = 0x199200u;
            goto label_199200;
        }
    }
    ctx->pc = 0x1991FCu;
label_1991fc:
    // 0x1991fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1991fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199200:
    // 0x199200: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x199200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x199204: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x199204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199208: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x199208u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x19920c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x19920cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x199210: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x199210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x199214: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x199214u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x199218: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x199218u;
    {
        const bool branch_taken_0x199218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199218u;
        // 0x19921c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199218) {
            ctx->pc = 0x199228u;
            goto label_199228;
        }
    }
    ctx->pc = 0x199220u;
    // 0x199220: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x199220u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x199224: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x199224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_199228:
    // 0x199228: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x199228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x19922c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19922Cu;
    {
        const bool branch_taken_0x19922c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19922Cu;
        // 0x199230: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19922c) {
            ctx->pc = 0x199244u;
            goto label_199244;
        }
    }
    ctx->pc = 0x199234u;
    // 0x199234: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x199234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x199238: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x199238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19923c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19923Cu;
    {
        const bool branch_taken_0x19923c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19923Cu;
        // 0x199240: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19923c) {
            ctx->pc = 0x199248u;
            goto label_199248;
        }
    }
    ctx->pc = 0x199244u;
label_199244:
    // 0x199244: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x199244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199248:
    // 0x199248: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x199248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x19924c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19924cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x199250: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x199250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x199254: 0x28a30009  slti        $v1, $a1, 0x9
    ctx->pc = 0x199254u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x199258: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x199258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x19925c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19925Cu;
    {
        const bool branch_taken_0x19925c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19925Cu;
        // 0x199260: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19925c) {
            ctx->pc = 0x199270u;
            goto label_199270;
        }
    }
    ctx->pc = 0x199264u;
    // 0x199264: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x199264u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x199268: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x199268u;
    {
        const bool branch_taken_0x199268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x199268) {
            ctx->pc = 0x19926Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199268u;
            // 0x19926c: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1991C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1991c8;
        }
    }
    ctx->pc = 0x199270u;
label_199270:
    // 0x199270: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x199270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_199274:
    // 0x199274: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199278: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x199278u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19927c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x19927cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x199280: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x199280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x199284: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x199284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x199288: 0x3e00008  jr          $ra
    ctx->pc = 0x199288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199288u;
        // 0x19928c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199290u;
}
