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

// Function: func_00174890
// Address: 0x174890 - 0x174a78
void func_00174890_0x174890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00174890_0x174890");
#endif

    switch (ctx->pc) {
        case 0x1748b0u: goto label_1748b0;
        case 0x17491cu: goto label_17491c;
        case 0x17494cu: goto label_17494c;
        case 0x174964u: goto label_174964;
        case 0x17497cu: goto label_17497c;
        case 0x1749b0u: goto label_1749b0;
        default: break;
    }

    ctx->pc = 0x174890u;

    // 0x174890: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x174890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x174894: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x174894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x174898: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x174898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x17489c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x17489cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1748a0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1748a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1748a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1748a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1748a8: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1748A8u;
    SET_GPR_U32(ctx, 31, 0x1748B0u);
    ctx->pc = 0x1748ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1748A8u;
    // 0x1748ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1748A8u, 0x1748B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1748B0u;
label_1748b0:
    // 0x1748b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1748b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1748b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1748b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1748b8: 0x3c013f87  lui         $at, 0x3F87
    ctx->pc = 0x1748b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16263 << 16));
    // 0x1748bc: 0x34214539  ori         $at, $at, 0x4539
    ctx->pc = 0x1748bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17721);
    // 0x1748c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1748c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1748c4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1748c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1748c8: 0x3c013f87  lui         $at, 0x3F87
    ctx->pc = 0x1748c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16263 << 16));
    // 0x1748cc: 0x3421837b  ori         $at, $at, 0x837B
    ctx->pc = 0x1748ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33659);
    // 0x1748d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1748d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1748d4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1748d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1748d8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1748d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1748dc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1748dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1748e0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1748e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1748e4: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x1748e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x1748e8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1748e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1748ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1748ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1748f0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1748f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1748f4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1748f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1748f8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1748f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1748fc: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1748fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x174900: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x174900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x174904: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x174904u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x174908: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x174908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x17490c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x17490cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x174910: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x174910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x174914: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x174914u;
    SET_GPR_U32(ctx, 31, 0x17491Cu);
    ctx->pc = 0x174918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174914u;
    // 0x174918: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x174914u, 0x17491Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17491Cu;
label_17491c:
    // 0x17491c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17491Cu;
    {
        const bool branch_taken_0x17491c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17491Cu;
        // 0x174920: 0xae020650  sw          $v0, 0x650($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17491c) {
            ctx->pc = 0x17494Cu;
            goto label_17494c;
        }
    }
    ctx->pc = 0x174924u;
    // 0x174924: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x174924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x174928: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x174928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x17492c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x17492cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x174930: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174934: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x174934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x174938: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x174938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17493c: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x17493cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x174940: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x174940u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174944: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x174944u;
    SET_GPR_U32(ctx, 31, 0x17494Cu);
    ctx->pc = 0x174948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174944u;
    // 0x174948: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x174944u, 0x17494Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17494Cu;
label_17494c:
    // 0x17494c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17494cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x174950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174954: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174958: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x174958u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x17495c: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x17495Cu;
    SET_GPR_U32(ctx, 31, 0x174964u);
    ctx->pc = 0x174960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17495Cu;
    // 0x174960: 0xa6020548  sh          $v0, 0x548($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x17495Cu, 0x174964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174964u;
label_174964:
    // 0x174964: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x174964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x174968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x174968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17496c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17496cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174970: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x174970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x174974: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x174974u;
    SET_GPR_U32(ctx, 31, 0x17497Cu);
    ctx->pc = 0x174978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174974u;
    // 0x174978: 0xac430380  sw          $v1, 0x380($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x174974u, 0x17497Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17497Cu;
label_17497c:
    // 0x17497c: 0x8c440380  lw          $a0, 0x380($v0)
    ctx->pc = 0x17497cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x174980: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x174980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x174984: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x174984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x174988: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x174988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17498c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x17498cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x174990: 0xac440380  sw          $a0, 0x380($v0)
    ctx->pc = 0x174990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 4));
    // 0x174994: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x174994u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x174998: 0x50450030  beql        $v0, $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x174998u;
    {
        const bool branch_taken_0x174998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x174998) {
            ctx->pc = 0x17499Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174998u;
            // 0x17499c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174A5Cu;
            goto label_174a5c;
        }
    }
    ctx->pc = 0x1749A0u;
    // 0x1749a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1749a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1749a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1749a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1749a8: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1749a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1749ac: 0x0  nop
    ctx->pc = 0x1749acu;
    // NOP
label_1749b0:
    // 0x1749b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1749b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1749b4: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1749b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1749b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1749B8u;
    {
        const bool branch_taken_0x1749b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1749BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1749B8u;
        // 0x1749bc: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1749b8) {
            ctx->pc = 0x1749C8u;
            goto label_1749c8;
        }
    }
    ctx->pc = 0x1749C0u;
    // 0x1749c0: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1749c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1749c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1749c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1749c8:
    // 0x1749c8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1749c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1749cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1749CCu;
    {
        const bool branch_taken_0x1749cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1749D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1749CCu;
        // 0x1749d0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1749cc) {
            ctx->pc = 0x1749E4u;
            goto label_1749e4;
        }
    }
    ctx->pc = 0x1749D4u;
    // 0x1749d4: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x1749d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1749d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1749d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1749dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1749DCu;
    {
        const bool branch_taken_0x1749dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1749E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1749DCu;
        // 0x1749e0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1749dc) {
            ctx->pc = 0x1749E8u;
            goto label_1749e8;
        }
    }
    ctx->pc = 0x1749E4u;
label_1749e4:
    // 0x1749e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1749e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1749e8:
    // 0x1749e8: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1749e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1749ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1749ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1749f0: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x1749f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1749f4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1749f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1749f8: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1749f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1749fc: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1749fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x174a00: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x174A00u;
    {
        const bool branch_taken_0x174a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x174A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A00u;
        // 0x174a04: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a00) {
            ctx->pc = 0x174A10u;
            goto label_174a10;
        }
    }
    ctx->pc = 0x174A08u;
    // 0x174a08: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x174a08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x174a0c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x174a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174a10:
    // 0x174a10: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x174a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x174a14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x174A14u;
    {
        const bool branch_taken_0x174a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A14u;
        // 0x174a18: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a14) {
            ctx->pc = 0x174A2Cu;
            goto label_174a2c;
        }
    }
    ctx->pc = 0x174A1Cu;
    // 0x174a1c: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x174a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x174a20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174a24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x174A24u;
    {
        const bool branch_taken_0x174a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A24u;
        // 0x174a28: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a24) {
            ctx->pc = 0x174A30u;
            goto label_174a30;
        }
    }
    ctx->pc = 0x174A2Cu;
label_174a2c:
    // 0x174a2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x174a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174a30:
    // 0x174a30: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x174a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x174a34: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x174a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x174a38: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x174a38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x174a3c: 0x28a3000d  slti        $v1, $a1, 0xD
    ctx->pc = 0x174a3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x174a40: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x174a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x174a44: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x174A44u;
    {
        const bool branch_taken_0x174a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x174A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A44u;
        // 0x174a48: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a44) {
            ctx->pc = 0x174A58u;
            goto label_174a58;
        }
    }
    ctx->pc = 0x174A4Cu;
    // 0x174a4c: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x174a4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x174a50: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x174A50u;
    {
        const bool branch_taken_0x174a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x174a50) {
            ctx->pc = 0x174A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174A50u;
            // 0x174a54: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1749B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1749b0;
        }
    }
    ctx->pc = 0x174A58u;
label_174a58:
    // 0x174a58: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x174a58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_174a5c:
    // 0x174a5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174a60: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x174a60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x174a64: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x174a64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x174a68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x174a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174a6c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x174a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x174a70: 0x3e00008  jr          $ra
    ctx->pc = 0x174A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A70u;
        // 0x174a74: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174A78u;
}
