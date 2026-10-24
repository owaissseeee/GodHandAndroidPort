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

// Function: func_0019F190
// Address: 0x19f190 - 0x19f378
void func_0019F190_0x19f190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019F190_0x19f190");
#endif

    switch (ctx->pc) {
        case 0x19f1b0u: goto label_19f1b0;
        case 0x19f21cu: goto label_19f21c;
        case 0x19f24cu: goto label_19f24c;
        case 0x19f264u: goto label_19f264;
        case 0x19f27cu: goto label_19f27c;
        case 0x19f2b0u: goto label_19f2b0;
        default: break;
    }

    ctx->pc = 0x19f190u;

    // 0x19f190: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19f190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19f194: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19f194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x19f198: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x19f198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19f19c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x19f19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x19f1a0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x19f1a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x19f1a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19f1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19f1a8: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x19F1A8u;
    SET_GPR_U32(ctx, 31, 0x19F1B0u);
    ctx->pc = 0x19F1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F1A8u;
    // 0x19f1ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x19F1A8u, 0x19F1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F1B0u;
label_19f1b0:
    // 0x19f1b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19f1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19f1b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19f1b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19f1b8: 0x3c013f87  lui         $at, 0x3F87
    ctx->pc = 0x19f1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16263 << 16));
    // 0x19f1bc: 0x34214539  ori         $at, $at, 0x4539
    ctx->pc = 0x19f1bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17721);
    // 0x19f1c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19f1c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19f1c4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x19f1c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19f1c8: 0x3c014007  lui         $at, 0x4007
    ctx->pc = 0x19f1c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16391 << 16));
    // 0x19f1cc: 0x3421837b  ori         $at, $at, 0x837B
    ctx->pc = 0x19f1ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33659);
    // 0x19f1d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19f1d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19f1d4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x19f1d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19f1d8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19f1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19f1dc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19f1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19f1e0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x19f1e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19f1e4: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x19f1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x19f1e8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19f1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19f1ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19f1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f1f0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x19f1f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19f1f4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19f1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19f1f8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19f1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19f1fc: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x19f1fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19f200: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x19f200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19f204: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x19f204u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x19f208: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x19f208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x19f20c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x19f20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x19f210: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x19f210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x19f214: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x19F214u;
    SET_GPR_U32(ctx, 31, 0x19F21Cu);
    ctx->pc = 0x19F218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F214u;
    // 0x19f218: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x19F214u, 0x19F21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F21Cu;
label_19f21c:
    // 0x19f21c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19F21Cu;
    {
        const bool branch_taken_0x19f21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F21Cu;
        // 0x19f220: 0xae020650  sw          $v0, 0x650($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f21c) {
            ctx->pc = 0x19F24Cu;
            goto label_19f24c;
        }
    }
    ctx->pc = 0x19F224u;
    // 0x19f224: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x19f224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19f228: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x19f228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x19f22c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x19f22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x19f230: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19f230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f234: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x19f234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x19f238: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19f238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f23c: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x19f23cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x19f240: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x19f240u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f244: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x19F244u;
    SET_GPR_U32(ctx, 31, 0x19F24Cu);
    ctx->pc = 0x19F248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F244u;
    // 0x19f248: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x19F244u, 0x19F24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F24Cu;
label_19f24c:
    // 0x19f24c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f254: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19f254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f258: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x19f258u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x19f25c: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x19F25Cu;
    SET_GPR_U32(ctx, 31, 0x19F264u);
    ctx->pc = 0x19F260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F25Cu;
    // 0x19f260: 0xa6020548  sh          $v0, 0x548($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x19F25Cu, 0x19F264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F264u;
label_19f264:
    // 0x19f264: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x19f264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x19f268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f26c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19f26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f270: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x19f270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x19f274: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x19F274u;
    SET_GPR_U32(ctx, 31, 0x19F27Cu);
    ctx->pc = 0x19F278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F274u;
    // 0x19f278: 0xac430380  sw          $v1, 0x380($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x19F274u, 0x19F27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F27Cu;
label_19f27c:
    // 0x19f27c: 0x8c440380  lw          $a0, 0x380($v0)
    ctx->pc = 0x19f27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x19f280: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x19f280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x19f284: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x19f284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x19f288: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19f288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f28c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x19f28cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x19f290: 0xac440380  sw          $a0, 0x380($v0)
    ctx->pc = 0x19f290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 4));
    // 0x19f294: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x19f294u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x19f298: 0x50450030  beql        $v0, $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x19F298u;
    {
        const bool branch_taken_0x19f298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x19f298) {
            ctx->pc = 0x19F29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F298u;
            // 0x19f29c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F35Cu;
            goto label_19f35c;
        }
    }
    ctx->pc = 0x19F2A0u;
    // 0x19f2a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19f2a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f2a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19f2a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f2a8: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x19f2a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x19f2ac: 0x0  nop
    ctx->pc = 0x19f2acu;
    // NOP
label_19f2b0:
    // 0x19f2b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19f2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f2b4: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x19f2b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x19f2b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F2B8u;
    {
        const bool branch_taken_0x19f2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2B8u;
        // 0x19f2bc: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2b8) {
            ctx->pc = 0x19F2C8u;
            goto label_19f2c8;
        }
    }
    ctx->pc = 0x19F2C0u;
    // 0x19f2c0: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x19f2c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19f2c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19f2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19f2c8:
    // 0x19f2c8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x19f2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x19f2cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F2CCu;
    {
        const bool branch_taken_0x19f2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2CCu;
        // 0x19f2d0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2cc) {
            ctx->pc = 0x19F2E4u;
            goto label_19f2e4;
        }
    }
    ctx->pc = 0x19F2D4u;
    // 0x19f2d4: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x19f2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x19f2d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19f2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f2dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19F2DCu;
    {
        const bool branch_taken_0x19f2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2DCu;
        // 0x19f2e0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2dc) {
            ctx->pc = 0x19F2E8u;
            goto label_19f2e8;
        }
    }
    ctx->pc = 0x19F2E4u;
label_19f2e4:
    // 0x19f2e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19f2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f2e8:
    // 0x19f2e8: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x19f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x19f2ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19f2ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f2f0: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x19f2f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x19f2f4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x19f2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x19f2f8: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x19f2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x19f2fc: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x19f2fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x19f300: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F300u;
    {
        const bool branch_taken_0x19f300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F300u;
        // 0x19f304: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f300) {
            ctx->pc = 0x19F310u;
            goto label_19f310;
        }
    }
    ctx->pc = 0x19F308u;
    // 0x19f308: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x19f308u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19f30c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x19f30cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19f310:
    // 0x19f310: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x19f310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x19f314: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F314u;
    {
        const bool branch_taken_0x19f314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F314u;
        // 0x19f318: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f314) {
            ctx->pc = 0x19F32Cu;
            goto label_19f32c;
        }
    }
    ctx->pc = 0x19F31Cu;
    // 0x19f31c: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x19f31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x19f320: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19f320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f324: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19F324u;
    {
        const bool branch_taken_0x19f324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F324u;
        // 0x19f328: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f324) {
            ctx->pc = 0x19F330u;
            goto label_19f330;
        }
    }
    ctx->pc = 0x19F32Cu;
label_19f32c:
    // 0x19f32c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19f32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f330:
    // 0x19f330: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x19f330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x19f334: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19f334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19f338: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x19f338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x19f33c: 0x28a3000d  slti        $v1, $a1, 0xD
    ctx->pc = 0x19f33cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x19f340: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x19f340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x19f344: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F344u;
    {
        const bool branch_taken_0x19f344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F344u;
        // 0x19f348: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f344) {
            ctx->pc = 0x19F358u;
            goto label_19f358;
        }
    }
    ctx->pc = 0x19F34Cu;
    // 0x19f34c: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x19f34cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x19f350: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x19F350u;
    {
        const bool branch_taken_0x19f350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x19f350) {
            ctx->pc = 0x19F354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F350u;
            // 0x19f354: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F2B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f2b0;
        }
    }
    ctx->pc = 0x19F358u;
label_19f358:
    // 0x19f358: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19f358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_19f35c:
    // 0x19f35c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f360: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19f360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19f364: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x19f364u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19f368: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19f368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19f36c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x19f36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19f370: 0x3e00008  jr          $ra
    ctx->pc = 0x19F370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F370u;
        // 0x19f374: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F378u;
}
