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

// Function: func_001A9210
// Address: 0x1a9210 - 0x1a9588
void func_001A9210_0x1a9210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A9210_0x1a9210");
#endif

    switch (ctx->pc) {
        case 0x1a929cu: goto label_1a929c;
        case 0x1a92b8u: goto label_1a92b8;
        case 0x1a92c0u: goto label_1a92c0;
        case 0x1a931cu: goto label_1a931c;
        case 0x1a9328u: goto label_1a9328;
        case 0x1a93a8u: goto label_1a93a8;
        case 0x1a93acu: goto label_1a93ac;
        case 0x1a93d8u: goto label_1a93d8;
        case 0x1a9408u: goto label_1a9408;
        case 0x1a9550u: goto label_1a9550;
        default: break;
    }

    ctx->pc = 0x1a9210u;

    // 0x1a9210: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1a9210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1a9214: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1a9214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x1a9218: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1a9218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x1a921c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a921cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9220: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1a9220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x1a9224: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1a9224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x1a9228: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x1a9228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x1a922c: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x1a922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x1a9230: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1a9230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1a9234: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1a9234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1a9238: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x1a9238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x1a923c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a923cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1a9240: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x1a9240u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1a9244: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x1a9244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1a9248: 0x50450008  beql        $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A9248u;
    {
        const bool branch_taken_0x1a9248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1a9248) {
            ctx->pc = 0x1A924Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9248u;
            // 0x1a924c: 0x26420100  addiu       $v0, $s2, 0x100 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A926Cu;
            goto label_1a926c;
        }
    }
    ctx->pc = 0x1A9250u;
    // 0x1a9250: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1a9250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9254: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1a9254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1a9258: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1a9258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a925c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1a925cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1a9260: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1a9260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9264: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1a9264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1a9268: 0x26420100  addiu       $v0, $s2, 0x100
    ctx->pc = 0x1a9268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
label_1a926c:
    // 0x1a926c: 0x10460007  beq         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A926Cu;
    {
        const bool branch_taken_0x1a926c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x1a926c) {
            ctx->pc = 0x1A928Cu;
            goto label_1a928c;
        }
    }
    ctx->pc = 0x1A9274u;
    // 0x1a9274: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1a9274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9278: 0xe6400100  swc1        $f0, 0x100($s2)
    ctx->pc = 0x1a9278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
    // 0x1a927c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1a927cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9280: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1a9280u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1a9284: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1a9284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9288: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1a9288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1a928c:
    // 0x1a928c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a928cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a9290: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a9290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a9294: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x1A9294u;
    SET_GPR_U32(ctx, 31, 0x1A929Cu);
    ctx->pc = 0x1A9298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9294u;
    // 0x1a9298: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x1A9294u, 0x1A929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A929Cu;
label_1a929c:
    // 0x1a929c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a929cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a92a0: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a92a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1a92a4: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x1a92a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a92a8: 0x245e7948  addiu       $fp, $v0, 0x7948
    ctx->pc = 0x1a92a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 31048));
    // 0x1a92ac: 0x26560e40  addiu       $s6, $s2, 0xE40
    ctx->pc = 0x1a92acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 3648));
    // 0x1a92b0: 0x24170050  addiu       $s7, $zero, 0x50
    ctx->pc = 0x1a92b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1a92b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a92b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a92b8:
    // 0x1a92b8: 0x26750001  addiu       $s5, $s3, 0x1
    ctx->pc = 0x1a92b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1a92bc: 0x1117c2  srl         $v0, $s1, 31
    ctx->pc = 0x1a92bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_1a92c0:
    // 0x1a92c0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a92c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a92c4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1a92c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1a92c8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1a92c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a92cc: 0x5623002c  bnel        $s1, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1A92CCu;
    {
        const bool branch_taken_0x1a92cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a92cc) {
            ctx->pc = 0x1A92D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A92CCu;
            // 0x1a92d0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9380u;
            goto label_1a9380;
        }
    }
    ctx->pc = 0x1A92D4u;
    // 0x1a92d4: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1a92d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1a92d8: 0x924502b4  lbu         $a1, 0x2B4($s2)
    ctx->pc = 0x1a92d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1a92dc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1a92dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a92e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a92e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a92e4: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x1a92e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1a92e8: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A92E8u;
    {
        const bool branch_taken_0x1a92e8 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1A92ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A92E8u;
        // 0x1a92ec: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a92e8) {
            ctx->pc = 0x1A92F4u;
            goto label_1a92f4;
        }
    }
    ctx->pc = 0x1A92F0u;
    // 0x1a92f0: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x1a92f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1a92f4:
    // 0x1a92f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a92f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a92f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A92F8u;
    {
        const bool branch_taken_0x1a92f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A92FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A92F8u;
        // 0x1a92fc: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a92f8) {
            ctx->pc = 0x1A9310u;
            goto label_1a9310;
        }
    }
    ctx->pc = 0x1A9300u;
    // 0x1a9300: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1a9300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1a9304: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9308: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A9308u;
    {
        const bool branch_taken_0x1a9308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9308u;
        // 0x1a930c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9308) {
            ctx->pc = 0x1A9314u;
            goto label_1a9314;
        }
    }
    ctx->pc = 0x1A9310u;
label_1a9310:
    // 0x1a9310: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a9310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9314:
    // 0x1a9314: 0xc05404e  jal         func_150138
    ctx->pc = 0x1A9314u;
    SET_GPR_U32(ctx, 31, 0x1A931Cu);
    ctx->pc = 0x1A9318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9314u;
    // 0x1a9318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150138u, 0x1A9314u, 0x1A931Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A931Cu;
label_1a931c:
    // 0x1a931c: 0x8e450250  lw          $a1, 0x250($s2)
    ctx->pc = 0x1a931cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x1a9320: 0xc054074  jal         func_1501D0
    ctx->pc = 0x1A9320u;
    SET_GPR_U32(ctx, 31, 0x1A9328u);
    ctx->pc = 0x1A9324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9320u;
    // 0x1a9324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501D0u, 0x1A9320u, 0x1A9328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9328u;
label_1a9328:
    // 0x1a9328: 0x8e420e40  lw          $v0, 0xE40($s2)
    ctx->pc = 0x1a9328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3648)));
    // 0x1a932c: 0xc60200b8  lwc1        $f2, 0xB8($s0)
    ctx->pc = 0x1a932cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a9330: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x1a9330u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a9334: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x1a9334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9338: 0xc60100b4  lwc1        $f1, 0xB4($s0)
    ctx->pc = 0x1a9338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a933c: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x1a933cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1a9340: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a9340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a9344: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x1a9344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x1a9348: 0x571018  mult        $v0, $v0, $s7
    ctx->pc = 0x1a9348u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a934c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1a934cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a9350: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1a9350u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a9354: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1a9354u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1a9358: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a9358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a935c: 0x10740007  beq         $v1, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A935Cu;
    {
        const bool branch_taken_0x1a935c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x1A9360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A935Cu;
        // 0x1a9360: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a935c) {
            ctx->pc = 0x1A937Cu;
            goto label_1a937c;
        }
    }
    ctx->pc = 0x1A9364u;
    // 0x1a9364: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1a9364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9368: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1a9368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1a936c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1a936cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9370: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1a9370u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1a9374: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1a9374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9378: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1a9378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1a937c:
    // 0x1a937c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a937cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a9380:
    // 0x1a9380: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x1a9380u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a9384: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1A9384u;
    {
        const bool branch_taken_0x1a9384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9384u;
        // 0x1a9388: 0x1117c2  srl         $v0, $s1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9384) {
            ctx->pc = 0x1A92C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a92c0;
        }
    }
    ctx->pc = 0x1A938Cu;
    // 0x1a938c: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x1a938cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9390: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x1a9390u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1a9394: 0x5440ffc8  bnel        $v0, $zero, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1A9394u;
    {
        const bool branch_taken_0x1a9394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9394) {
            ctx->pc = 0x1A9398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9394u;
            // 0x1a9398: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A92B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a92b8;
        }
    }
    ctx->pc = 0x1A939Cu;
    // 0x1a939c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a939cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a93a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a93a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a93a4: 0x0  nop
    ctx->pc = 0x1a93a4u;
    // NOP
label_1a93a8:
    // 0x1a93a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a93a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a93ac:
    // 0x1a93ac: 0x0  nop
    ctx->pc = 0x1a93acu;
    // NOP
    // 0x1a93b0: 0x0  nop
    ctx->pc = 0x1a93b0u;
    // NOP
    // 0x1a93b4: 0x0  nop
    ctx->pc = 0x1a93b4u;
    // NOP
    // 0x1a93b8: 0x0  nop
    ctx->pc = 0x1a93b8u;
    // NOP
    // 0x1a93bc: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A93BCu;
    {
        const bool branch_taken_0x1a93bc = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1A93C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93BCu;
        // 0x1a93c0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a93bc) {
            ctx->pc = 0x1A93ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a93ac;
        }
    }
    ctx->pc = 0x1A93C4u;
    // 0x1a93c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a93c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a93c8: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x1a93c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1a93cc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A93CCu;
    {
        const bool branch_taken_0x1a93cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A93D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93CCu;
        // 0x1a93d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a93cc) {
            ctx->pc = 0x1A93A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a93a8;
        }
    }
    ctx->pc = 0x1A93D4u;
    // 0x1a93d4: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1a93d4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a93d8:
    // 0x1a93d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a93d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1a93dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a93dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a93e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a93e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a93e4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a93e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a93e8: 0x25b10001  addiu       $s1, $t5, 0x1
    ctx->pc = 0x1a93e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x1a93ec: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1a93ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a93f0: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x1a93f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a93f4: 0x240c0050  addiu       $t4, $zero, 0x50
    ctx->pc = 0x1a93f4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1a93f8: 0x27af0020  addiu       $t7, $sp, 0x20
    ctx->pc = 0x1a93f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a93fc: 0x27ab0030  addiu       $t3, $sp, 0x30
    ctx->pc = 0x1a93fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a9400: 0x27ae0010  addiu       $t6, $sp, 0x10
    ctx->pc = 0x1a9400u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a9404: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x1a9404u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1a9408:
    // 0x1a9408: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a9408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a940c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1a940cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1a9410: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a9410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a9414: 0x5062003c  beql        $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1A9414u;
    {
        const bool branch_taken_0x1a9414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a9414) {
            ctx->pc = 0x1A9418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9414u;
            // 0x1a9418: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9508u;
            goto label_1a9508;
        }
    }
    ctx->pc = 0x1A941Cu;
    // 0x1a941c: 0x12a001a  div         $zero, $t1, $t2
    ctx->pc = 0x1a941cu;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a9420: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A9420u;
    {
        const bool branch_taken_0x1a9420 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9420) {
            ctx->pc = 0x1A9424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9420u;
            // 0x1a9424: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9428u;
            goto label_1a9428;
        }
    }
    ctx->pc = 0x1A9428u;
label_1a9428:
    // 0x1a9428: 0x8e450e40  lw          $a1, 0xE40($s2)
    ctx->pc = 0x1a9428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3648)));
    // 0x1a942c: 0x1221023  subu        $v0, $t1, $v0
    ctx->pc = 0x1a942cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1a9430: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a9430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9434: 0x0  nop
    ctx->pc = 0x1a9434u;
    // NOP
    // 0x1a9438: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a9438u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a943c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x1a943cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a9440: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a9440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1a9444: 0x2010  mfhi        $a0
    ctx->pc = 0x1a9444u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1a9448: 0xad1018  mult        $v0, $a1, $t5
    ctx->pc = 0x1a9448u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a944c: 0x4d2821  addu        $a1, $v0, $t5
    ctx->pc = 0x1a944cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x1a9450: 0xa91821  addu        $v1, $a1, $t1
    ctx->pc = 0x1a9450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1a9454: 0x6c1018  mult        $v0, $v1, $t4
    ctx->pc = 0x1a9454u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a9458: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x1a9458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a945c: 0x1441023  subu        $v0, $t2, $a0
    ctx->pc = 0x1a945cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1a9460: 0x4a001a  div         $zero, $v0, $t2
    ctx->pc = 0x1a9460u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a9464: 0x1242023  subu        $a0, $t1, $a0
    ctx->pc = 0x1a9464u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1a9468: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1a9468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a946c: 0x1810  mfhi        $v1
    ctx->pc = 0x1a946cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1a9470: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x1a9470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1a9474: 0x8c2018  mult        $a0, $a0, $t4
    ctx->pc = 0x1a9474u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a9478: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1a9478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a947c: 0xac1018  mult        $v0, $a1, $t4
    ctx->pc = 0x1a947cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a9480: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1a9480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1a9484: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x1a9484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a9488: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1a9488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a948c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1a948cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a9490: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x1a9490u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a9494: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1a9494u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1a9498: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1a9498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a949c: 0xd9640000  lqc2        $vf4, 0x0($t3)
    ctx->pc = 0x1a949cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1a94a0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1a94a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a94a4: 0xd9e40000  lqc2        $vf4, 0x0($t7)
    ctx->pc = 0x1a94a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1a94a8: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1a94a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a94ac: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1a94acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a94b0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1a94b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1a94b4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1a94b4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1a94b8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1a94b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1a94bc: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1a94bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a94c0: 0xd9640000  lqc2        $vf4, 0x0($t3)
    ctx->pc = 0x1a94c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1a94c4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1a94c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a94c8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1a94c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a94cc: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1a94ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a94d0: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1a94d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a94d4: 0xd9c50000  lqc2        $vf5, 0x0($t6)
    ctx->pc = 0x1a94d4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1a94d8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1a94d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1a94dc: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1a94dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a94e0: 0xd9640000  lqc2        $vf4, 0x0($t3)
    ctx->pc = 0x1a94e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1a94e4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1a94e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a94e8: 0x10fd0006  beq         $a3, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A94E8u;
    {
        const bool branch_taken_0x1a94e8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 29));
        ctx->pc = 0x1A94ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94E8u;
        // 0x1a94ec: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a94e8) {
            ctx->pc = 0x1A9504u;
            goto label_1a9504;
        }
    }
    ctx->pc = 0x1A94F0u;
    // 0x1a94f0: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x1a94f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1a94f4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1a94f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a94f8: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x1a94f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x1a94fc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a94fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9500: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x1a9500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_1a9504:
    // 0x1a9504: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1a9504u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1a9508:
    // 0x1a9508: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x1a9508u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a950c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1a950cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a9510: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x1A9510u;
    {
        const bool branch_taken_0x1a9510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9510u;
        // 0x1a9514: 0x317c2  srl         $v0, $v1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9510) {
            ctx->pc = 0x1A9408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9408;
        }
    }
    ctx->pc = 0x1A9518u;
    // 0x1a9518: 0x220682d  daddu       $t5, $s1, $zero
    ctx->pc = 0x1a9518u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a951c: 0x29a20005  slti        $v0, $t5, 0x5
    ctx->pc = 0x1a951cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1a9520: 0x1440ffad  bnez        $v0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x1A9520u;
    {
        const bool branch_taken_0x1a9520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9520u;
        // 0x1a9524: 0x3c060042  lui         $a2, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9520) {
            ctx->pc = 0x1A93D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a93d8;
        }
    }
    ctx->pc = 0x1A9528u;
    // 0x1a9528: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1a9528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1a952c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a952cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a9530: 0x3c080042  lui         $t0, 0x42
    ctx->pc = 0x1a9530u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)66 << 16));
    // 0x1a9534: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1a9534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9538: 0x24c67958  addiu       $a2, $a2, 0x7958
    ctx->pc = 0x1a9538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31064));
    // 0x1a953c: 0x25087998  addiu       $t0, $t0, 0x7998
    ctx->pc = 0x1a953cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 31128));
    // 0x1a9540: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x1a9540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1a9544: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x1a9544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a9548: 0xc0ab4ae  jal         func_2AD2B8
    ctx->pc = 0x1A9548u;
    SET_GPR_U32(ctx, 31, 0x1A9550u);
    ctx->pc = 0x1A954Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9548u;
    // 0x1a954c: 0x24090026  addiu       $t1, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD2B8u, 0x1A9548u, 0x1A9550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9550u;
label_1a9550:
    // 0x1a9550: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1a9550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1a9554: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1a9554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1a9558: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1a9558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a955c: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1a955cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a9560: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x1a9560u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a9564: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x1a9564u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a9568: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1a9568u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a956c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1a956cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a9570: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x1a9570u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a9574: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a9574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a9578: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x1a9578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a957c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A957Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A957Cu;
        // 0x1a9580: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A957Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9584u;
    // 0x1a9584: 0x0  nop
    ctx->pc = 0x1a9584u;
    // NOP
    ctx->pc = 0x1a9588u;
}
