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

// Function: SpawnDamageVolumeAndFlagParts_A
// Address: 0x18c180 - 0x18c370
void SpawnDamageVolumeAndFlagParts_A_0x18c180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SpawnDamageVolumeAndFlagParts_A_0x18c180");
#endif

    switch (ctx->pc) {
        case 0x18c1a0u: goto label_18c1a0;
        case 0x18c218u: goto label_18c218;
        case 0x18c248u: goto label_18c248;
        case 0x18c260u: goto label_18c260;
        case 0x18c278u: goto label_18c278;
        case 0x18c2a8u: goto label_18c2a8;
        default: break;
    }

    ctx->pc = 0x18c180u;

    // 0x18c180: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x18c180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x18c184: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x18c184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x18c188: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x18c188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x18c18c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x18c18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x18c190: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x18c190u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x18c194: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18c194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18c198: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x18C198u;
    SET_GPR_U32(ctx, 31, 0x18C1A0u);
    ctx->pc = 0x18C19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C198u;
    // 0x18c19c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x18C198u, 0x18C1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C1A0u;
label_18c1a0:
    // 0x18c1a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18c1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18c1a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18c1a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18c1a8: 0x3c013f87  lui         $at, 0x3F87
    ctx->pc = 0x18c1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16263 << 16));
    // 0x18c1ac: 0x34214539  ori         $at, $at, 0x4539
    ctx->pc = 0x18c1acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17721);
    // 0x18c1b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18c1b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c1b4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x18c1b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18c1b8: 0x3c013f87  lui         $at, 0x3F87
    ctx->pc = 0x18c1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16263 << 16));
    // 0x18c1bc: 0x3421837b  ori         $at, $at, 0x837B
    ctx->pc = 0x18c1bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33659);
    // 0x18c1c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18c1c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18c1c4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x18c1c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18c1c8: 0x3c013fa1  lui         $at, 0x3FA1
    ctx->pc = 0x18c1c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16289 << 16));
    // 0x18c1cc: 0x34211d15  ori         $at, $at, 0x1D15
    ctx->pc = 0x18c1ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7445);
    // 0x18c1d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18c1d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18c1d4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x18c1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x18c1d8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x18c1d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18c1dc: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x18c1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x18c1e0: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x18c1e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x18c1e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18c1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c1e8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x18c1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x18c1ec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18c1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18c1f0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x18c1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18c1f4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x18c1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x18c1f8: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x18c1f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x18c1fc: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x18c1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18c200: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x18c200u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x18c204: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x18c204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x18c208: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x18c208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x18c20c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x18c20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x18c210: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x18C210u;
    SET_GPR_U32(ctx, 31, 0x18C218u);
    ctx->pc = 0x18C214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C210u;
    // 0x18c214: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x18C210u, 0x18C218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C218u;
label_18c218:
    // 0x18c218: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18C218u;
    {
        const bool branch_taken_0x18c218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C218u;
        // 0x18c21c: 0xae020650  sw          $v0, 0x650($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c218) {
            ctx->pc = 0x18C248u;
            goto label_18c248;
        }
    }
    ctx->pc = 0x18C220u;
    // 0x18c220: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x18c220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18c224: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x18c224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x18c228: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x18c228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x18c22c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18c22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c230: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x18c230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x18c234: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18c234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c238: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x18c238u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x18c23c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x18c23cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c240: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x18C240u;
    SET_GPR_U32(ctx, 31, 0x18C248u);
    ctx->pc = 0x18C244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C240u;
    // 0x18c244: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x18C240u, 0x18C248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C248u;
label_18c248:
    // 0x18c248: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18c248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c24c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c250: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18c250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c254: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x18c254u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x18c258: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x18C258u;
    SET_GPR_U32(ctx, 31, 0x18C260u);
    ctx->pc = 0x18C25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C258u;
    // 0x18c25c: 0xa6020548  sh          $v0, 0x548($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x18C258u, 0x18C260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C260u;
label_18c260:
    // 0x18c260: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x18c260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x18c264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c268: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18c268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c26c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x18c26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x18c270: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x18C270u;
    SET_GPR_U32(ctx, 31, 0x18C278u);
    ctx->pc = 0x18C274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C270u;
    // 0x18c274: 0xac430380  sw          $v1, 0x380($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x18C270u, 0x18C278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C278u;
label_18c278:
    // 0x18c278: 0x8c440380  lw          $a0, 0x380($v0)
    ctx->pc = 0x18c278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x18c27c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x18c27cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x18c280: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x18c280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x18c284: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18c284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c288: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x18c288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x18c28c: 0xac440380  sw          $a0, 0x380($v0)
    ctx->pc = 0x18c28cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 4));
    // 0x18c290: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x18c290u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x18c294: 0x5045002f  beql        $v0, $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x18C294u;
    {
        const bool branch_taken_0x18c294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x18c294) {
            ctx->pc = 0x18C298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C294u;
            // 0x18c298: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C354u;
            goto label_18c354;
        }
    }
    ctx->pc = 0x18C29Cu;
    // 0x18c29c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18c29cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c2a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18c2a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c2a4: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x18c2a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_18c2a8:
    // 0x18c2a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18c2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c2ac: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x18c2acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x18c2b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C2B0u;
    {
        const bool branch_taken_0x18c2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2B0u;
        // 0x18c2b4: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c2b0) {
            ctx->pc = 0x18C2C0u;
            goto label_18c2c0;
        }
    }
    ctx->pc = 0x18C2B8u;
    // 0x18c2b8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x18c2b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18c2bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18c2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18c2c0:
    // 0x18c2c0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x18c2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18c2c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18C2C4u;
    {
        const bool branch_taken_0x18c2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2C4u;
        // 0x18c2c8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c2c4) {
            ctx->pc = 0x18C2DCu;
            goto label_18c2dc;
        }
    }
    ctx->pc = 0x18C2CCu;
    // 0x18c2cc: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x18c2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x18c2d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18c2d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18C2D4u;
    {
        const bool branch_taken_0x18c2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2D4u;
        // 0x18c2d8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c2d4) {
            ctx->pc = 0x18C2E0u;
            goto label_18c2e0;
        }
    }
    ctx->pc = 0x18C2DCu;
label_18c2dc:
    // 0x18c2dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18c2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18c2e0:
    // 0x18c2e0: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x18c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x18c2e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18c2e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c2e8: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x18c2e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x18c2ec: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x18c2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x18c2f0: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x18c2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x18c2f4: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x18c2f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x18c2f8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C2F8u;
    {
        const bool branch_taken_0x18c2f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2F8u;
        // 0x18c2fc: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c2f8) {
            ctx->pc = 0x18C308u;
            goto label_18c308;
        }
    }
    ctx->pc = 0x18C300u;
    // 0x18c300: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x18c300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18c304: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18c304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18c308:
    // 0x18c308: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x18c308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x18c30c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18C30Cu;
    {
        const bool branch_taken_0x18c30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C30Cu;
        // 0x18c310: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c30c) {
            ctx->pc = 0x18C324u;
            goto label_18c324;
        }
    }
    ctx->pc = 0x18C314u;
    // 0x18c314: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x18c314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x18c318: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18c31c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18C31Cu;
    {
        const bool branch_taken_0x18c31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C31Cu;
        // 0x18c320: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c31c) {
            ctx->pc = 0x18C328u;
            goto label_18c328;
        }
    }
    ctx->pc = 0x18C324u;
label_18c324:
    // 0x18c324: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18c324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18c328:
    // 0x18c328: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x18c328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x18c32c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18c32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18c330: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x18c330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x18c334: 0x28a30009  slti        $v1, $a1, 0x9
    ctx->pc = 0x18c334u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x18c338: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x18c338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x18c33c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C33Cu;
    {
        const bool branch_taken_0x18c33c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C33Cu;
        // 0x18c340: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c33c) {
            ctx->pc = 0x18C350u;
            goto label_18c350;
        }
    }
    ctx->pc = 0x18C344u;
    // 0x18c344: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x18c344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x18c348: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x18C348u;
    {
        const bool branch_taken_0x18c348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x18c348) {
            ctx->pc = 0x18C34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C348u;
            // 0x18c34c: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C2A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18c2a8;
        }
    }
    ctx->pc = 0x18C350u;
label_18c350:
    // 0x18c350: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x18c350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_18c354:
    // 0x18c354: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18c354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c358: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x18c358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18c35c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x18c35cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18c360: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18c360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18c364: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x18c364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18c368: 0x3e00008  jr          $ra
    ctx->pc = 0x18C368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C368u;
        // 0x18c36c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C370u;
}
