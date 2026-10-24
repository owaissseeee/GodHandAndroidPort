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

// Function: func_001717C0
// Address: 0x1717c0 - 0x171a08
void func_001717C0_0x1717c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001717C0_0x1717c0");
#endif

    switch (ctx->pc) {
        case 0x17184cu: goto label_17184c;
        case 0x171868u: goto label_171868;
        case 0x171870u: goto label_171870;
        case 0x1718b4u: goto label_1718b4;
        case 0x1718c0u: goto label_1718c0;
        case 0x171940u: goto label_171940;
        case 0x171944u: goto label_171944;
        case 0x171978u: goto label_171978;
        case 0x171980u: goto label_171980;
        case 0x1719d4u: goto label_1719d4;
        default: break;
    }

    ctx->pc = 0x1717c0u;

    // 0x1717c0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1717c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1717c4: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1717c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x1717c8: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1717c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x1717cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1717ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1717d0: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1717d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x1717d4: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1717d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x1717d8: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x1717d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x1717dc: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x1717dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x1717e0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1717e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1717e4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1717e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1717e8: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x1717e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x1717ec: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1717ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1717f0: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x1717f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1717f4: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1717f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1717f8: 0x50450008  beql        $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1717F8u;
    {
        const bool branch_taken_0x1717f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1717f8) {
            ctx->pc = 0x1717FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1717F8u;
            // 0x1717fc: 0x26220100  addiu       $v0, $s1, 0x100 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17181Cu;
            goto label_17181c;
        }
    }
    ctx->pc = 0x171800u;
    // 0x171800: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x171800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171804: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x171804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x171808: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x171808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17180c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x17180cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x171810: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x171810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171814: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x171814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x171818: 0x26220100  addiu       $v0, $s1, 0x100
    ctx->pc = 0x171818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_17181c:
    // 0x17181c: 0x10460007  beq         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x17181Cu;
    {
        const bool branch_taken_0x17181c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x17181c) {
            ctx->pc = 0x17183Cu;
            goto label_17183c;
        }
    }
    ctx->pc = 0x171824u;
    // 0x171824: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x171824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171828: 0xe6200100  swc1        $f0, 0x100($s1)
    ctx->pc = 0x171828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
    // 0x17182c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x17182cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171830: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x171830u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x171834: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x171834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171838: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x171838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_17183c:
    // 0x17183c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17183cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x171840: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x171840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x171844: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x171844u;
    SET_GPR_U32(ctx, 31, 0x17184Cu);
    ctx->pc = 0x171848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171844u;
    // 0x171848: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x171844u, 0x17184Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17184Cu;
label_17184c:
    // 0x17184c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x17184cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171850: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x171850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x171854: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x171854u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x171858: 0x245e09e8  addiu       $fp, $v0, 0x9E8
    ctx->pc = 0x171858u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 2536));
    // 0x17185c: 0x26361ae0  addiu       $s6, $s1, 0x1AE0
    ctx->pc = 0x17185cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 6880));
    // 0x171860: 0x24170050  addiu       $s7, $zero, 0x50
    ctx->pc = 0x171860u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x171864: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x171864u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171868:
    // 0x171868: 0x26750001  addiu       $s5, $s3, 0x1
    ctx->pc = 0x171868u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x17186c: 0x25e1021  addu        $v0, $s2, $fp
    ctx->pc = 0x17186cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
label_171870:
    // 0x171870: 0x922502b4  lbu         $a1, 0x2B4($s1)
    ctx->pc = 0x171870u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x171874: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x171874u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171878: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x171878u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17187c: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x17187cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x171880: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x171880u;
    {
        const bool branch_taken_0x171880 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x171884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171880u;
        // 0x171884: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171880) {
            ctx->pc = 0x17188Cu;
            goto label_17188c;
        }
    }
    ctx->pc = 0x171888u;
    // 0x171888: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x171888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_17188c:
    // 0x17188c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17188cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x171890: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x171890u;
    {
        const bool branch_taken_0x171890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171890u;
        // 0x171894: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171890) {
            ctx->pc = 0x1718A8u;
            goto label_1718a8;
        }
    }
    ctx->pc = 0x171898u;
    // 0x171898: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x171898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x17189c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17189cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1718a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1718A0u;
    {
        const bool branch_taken_0x1718a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1718A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1718A0u;
        // 0x1718a4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1718a0) {
            ctx->pc = 0x1718ACu;
            goto label_1718ac;
        }
    }
    ctx->pc = 0x1718A8u;
label_1718a8:
    // 0x1718a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1718a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1718ac:
    // 0x1718ac: 0xc05404e  jal         func_150138
    ctx->pc = 0x1718ACu;
    SET_GPR_U32(ctx, 31, 0x1718B4u);
    ctx->pc = 0x1718B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1718ACu;
    // 0x1718b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150138u, 0x1718ACu, 0x1718B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1718B4u;
label_1718b4:
    // 0x1718b4: 0x8e250250  lw          $a1, 0x250($s1)
    ctx->pc = 0x1718b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x1718b8: 0xc054074  jal         func_1501D0
    ctx->pc = 0x1718B8u;
    SET_GPR_U32(ctx, 31, 0x1718C0u);
    ctx->pc = 0x1718BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1718B8u;
    // 0x1718bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501D0u, 0x1718B8u, 0x1718C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1718C0u;
label_1718c0:
    // 0x1718c0: 0x8e221ae0  lw          $v0, 0x1AE0($s1)
    ctx->pc = 0x1718c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6880)));
    // 0x1718c4: 0xc60200b8  lwc1        $f2, 0xB8($s0)
    ctx->pc = 0x1718c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1718c8: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x1718c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1718cc: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x1718ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1718d0: 0xc60100b4  lwc1        $f1, 0xB4($s0)
    ctx->pc = 0x1718d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1718d4: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x1718d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1718d8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1718d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1718dc: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x1718dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x1718e0: 0x571018  mult        $v0, $v0, $s7
    ctx->pc = 0x1718e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1718e4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1718e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1718e8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1718e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1718ec: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1718ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1718f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1718f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1718f4: 0x10740007  beq         $v1, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1718F4u;
    {
        const bool branch_taken_0x1718f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x1718F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1718F4u;
        // 0x1718f8: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1718f4) {
            ctx->pc = 0x171914u;
            goto label_171914;
        }
    }
    ctx->pc = 0x1718FCu;
    // 0x1718fc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1718fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171900: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x171900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x171904: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x171904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171908: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x171908u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x17190c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x17190cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171910: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x171910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_171914:
    // 0x171914: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x171914u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x171918: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x171918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x17191c: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x17191Cu;
    {
        const bool branch_taken_0x17191c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17191Cu;
        // 0x171920: 0x25e1021  addu        $v0, $s2, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17191c) {
            ctx->pc = 0x171870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171870;
        }
    }
    ctx->pc = 0x171924u;
    // 0x171924: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x171924u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171928: 0x2a620007  slti        $v0, $s3, 0x7
    ctx->pc = 0x171928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x17192c: 0x5440ffce  bnel        $v0, $zero, . + 4 + (-0x32 << 2)
    ctx->pc = 0x17192Cu;
    {
        const bool branch_taken_0x17192c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17192c) {
            ctx->pc = 0x171930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17192Cu;
            // 0x171930: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171868;
        }
    }
    ctx->pc = 0x171934u;
    // 0x171934: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x171934u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171938: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x171938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17193c: 0x0  nop
    ctx->pc = 0x17193cu;
    // NOP
label_171940:
    // 0x171940: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x171940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_171944:
    // 0x171944: 0x0  nop
    ctx->pc = 0x171944u;
    // NOP
    // 0x171948: 0x0  nop
    ctx->pc = 0x171948u;
    // NOP
    // 0x17194c: 0x0  nop
    ctx->pc = 0x17194cu;
    // NOP
    // 0x171950: 0x0  nop
    ctx->pc = 0x171950u;
    // NOP
    // 0x171954: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x171954u;
    {
        const bool branch_taken_0x171954 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x171958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171954u;
        // 0x171958: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171954) {
            ctx->pc = 0x171944u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171944;
        }
    }
    ctx->pc = 0x17195Cu;
    // 0x17195c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17195cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x171960: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x171960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x171964: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x171964u;
    {
        const bool branch_taken_0x171964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171964u;
        // 0x171968: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171964) {
            ctx->pc = 0x171940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171940;
        }
    }
    ctx->pc = 0x17196Cu;
    // 0x17196c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17196cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171970: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x171970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x171974: 0x0  nop
    ctx->pc = 0x171974u;
    // NOP
label_171978:
    // 0x171978: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x171978u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17197c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17197cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_171980:
    // 0x171980: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x171980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x171984: 0x0  nop
    ctx->pc = 0x171984u;
    // NOP
    // 0x171988: 0x0  nop
    ctx->pc = 0x171988u;
    // NOP
    // 0x17198c: 0x0  nop
    ctx->pc = 0x17198cu;
    // NOP
    // 0x171990: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x171990u;
    {
        const bool branch_taken_0x171990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171990u;
        // 0x171994: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171990) {
            ctx->pc = 0x171980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171980;
        }
    }
    ctx->pc = 0x171998u;
    // 0x171998: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x171998u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17199c: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x17199cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1719a0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1719A0u;
    {
        const bool branch_taken_0x1719a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1719A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1719A0u;
        // 0x1719a4: 0x24640001  addiu       $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1719a0) {
            ctx->pc = 0x171978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171978;
        }
    }
    ctx->pc = 0x1719A8u;
    // 0x1719a8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1719a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1719ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1719acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1719b0: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x1719b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
    // 0x1719b4: 0x3c080042  lui         $t0, 0x42
    ctx->pc = 0x1719b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)66 << 16));
    // 0x1719b8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1719b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1719bc: 0x24c609f8  addiu       $a2, $a2, 0x9F8
    ctx->pc = 0x1719bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2552));
    // 0x1719c0: 0x25080a88  addiu       $t0, $t0, 0xA88
    ctx->pc = 0x1719c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2696));
    // 0x1719c4: 0x240500d4  addiu       $a1, $zero, 0xD4
    ctx->pc = 0x1719c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x1719c8: 0x24070023  addiu       $a3, $zero, 0x23
    ctx->pc = 0x1719c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1719cc: 0xc0ab4ae  jal         func_2AD2B8
    ctx->pc = 0x1719CCu;
    SET_GPR_U32(ctx, 31, 0x1719D4u);
    ctx->pc = 0x1719D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1719CCu;
    // 0x1719d0: 0x2409006a  addiu       $t1, $zero, 0x6A (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD2B8u, 0x1719CCu, 0x1719D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1719D4u;
label_1719d4:
    // 0x1719d4: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1719d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1719d8: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1719d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1719dc: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1719dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1719e0: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1719e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1719e4: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x1719e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1719e8: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x1719e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1719ec: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1719ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1719f0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1719f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1719f4: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x1719f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1719f8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1719f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1719fc: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x1719fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x171a00: 0x3e00008  jr          $ra
    ctx->pc = 0x171A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171A00u;
        // 0x171a04: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171A08u;
}
