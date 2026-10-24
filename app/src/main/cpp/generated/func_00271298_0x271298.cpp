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

// Function: func_00271298
// Address: 0x271298 - 0x271410
void func_00271298_0x271298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00271298_0x271298");
#endif

    switch (ctx->pc) {
        case 0x2712e4u: goto label_2712e4;
        case 0x27131cu: goto label_27131c;
        case 0x271324u: goto label_271324;
        case 0x271340u: goto label_271340;
        case 0x2713c0u: goto label_2713c0;
        case 0x2713ccu: goto label_2713cc;
        case 0x2713f0u: goto label_2713f0;
        default: break;
    }

    ctx->pc = 0x271298u;

    // 0x271298: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x271298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x27129c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27129cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2712a0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2712a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2712a4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2712a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2712a8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2712a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2712ac: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2712acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2712b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2712b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2712b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2712b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2712b8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2712b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2712bc: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x2712bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x2712c0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2712c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2712c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2712C4u;
    {
        const bool branch_taken_0x2712c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2712C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2712C4u;
        // 0x2712c8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2712c4) {
            ctx->pc = 0x2712D8u;
            goto label_2712d8;
        }
    }
    ctx->pc = 0x2712CCu;
    // 0x2712cc: 0x8e620278  lw          $v0, 0x278($s3)
    ctx->pc = 0x2712ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x2712d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2712D0u;
    {
        const bool branch_taken_0x2712d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2712D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2712D0u;
        // 0x2712d4: 0x8c520010  lw          $s2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2712d0) {
            ctx->pc = 0x2712DCu;
            goto label_2712dc;
        }
    }
    ctx->pc = 0x2712D8u;
label_2712d8:
    // 0x2712d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2712d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2712dc:
    // 0x2712dc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2712DCu;
    SET_GPR_U32(ctx, 31, 0x2712E4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2712DCu, 0x2712E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2712E4u;
label_2712e4:
    // 0x2712e4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2712e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2712e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2712e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2712ec: 0xc620054c  lwc1        $f0, 0x54C($s1)
    ctx->pc = 0x2712ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2712f0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2712f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2712f4: 0x0  nop
    ctx->pc = 0x2712f4u;
    // NOP
    // 0x2712f8: 0x4501003e  bc1t        . + 4 + (0x3E << 2)
    ctx->pc = 0x2712F8u;
    {
        const bool branch_taken_0x2712f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2712FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2712F8u;
        // 0x2712fc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2712f8) {
            ctx->pc = 0x2713F4u;
            goto label_2713f4;
        }
    }
    ctx->pc = 0x271300u;
    // 0x271300: 0x8e2206a0  lw          $v0, 0x6A0($s1)
    ctx->pc = 0x271300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
    // 0x271304: 0x5440003c  bnel        $v0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x271304u;
    {
        const bool branch_taken_0x271304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271304) {
            ctx->pc = 0x271308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271304u;
            // 0x271308: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2713F8u;
            goto label_2713f8;
        }
    }
    ctx->pc = 0x27130Cu;
    // 0x27130c: 0x5240003a  beql        $s2, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x27130Cu;
    {
        const bool branch_taken_0x27130c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x27130c) {
            ctx->pc = 0x271310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27130Cu;
            // 0x271310: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2713F8u;
            goto label_2713f8;
        }
    }
    ctx->pc = 0x271314u;
    // 0x271314: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x271314u;
    SET_GPR_U32(ctx, 31, 0x27131Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x271314u, 0x27131Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27131Cu;
label_27131c:
    // 0x27131c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x27131Cu;
    SET_GPR_U32(ctx, 31, 0x271324u);
    ctx->pc = 0x271320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27131Cu;
    // 0x271320: 0x8c5000f0  lw          $s0, 0xF0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x27131Cu, 0x271324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271324u;
label_271324:
    // 0x271324: 0xc44c0104  lwc1        $f12, 0x104($v0)
    ctx->pc = 0x271324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x271328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27132c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x27132cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x271330: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x271330u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x271334: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x271334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x271338: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x271338u;
    SET_GPR_U32(ctx, 31, 0x271340u);
    ctx->pc = 0x27133Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271338u;
    // 0x27133c: 0x8e4500f0  lw          $a1, 0xF0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x271338u, 0x271340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271340u;
label_271340:
    // 0x271340: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x271340u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271344: 0x0  nop
    ctx->pc = 0x271344u;
    // NOP
    // 0x271348: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x271348u;
    {
        const bool branch_taken_0x271348 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271348u;
        // 0x27134c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271348) {
            ctx->pc = 0x271354u;
            goto label_271354;
        }
    }
    ctx->pc = 0x271350u;
    // 0x271350: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x271350u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_271354:
    // 0x271354: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x271354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x271358: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x271358u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x27135c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27135cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271360: 0x0  nop
    ctx->pc = 0x271360u;
    // NOP
    // 0x271364: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x271364u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271368: 0x0  nop
    ctx->pc = 0x271368u;
    // NOP
    // 0x27136c: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x27136Cu;
    {
        const bool branch_taken_0x27136c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x271370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27136Cu;
        // 0x271370: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27136c) {
            ctx->pc = 0x2713F4u;
            goto label_2713f4;
        }
    }
    ctx->pc = 0x271374u;
    // 0x271374: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x271374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x271378: 0x8e6300f0  lw          $v1, 0xF0($s3)
    ctx->pc = 0x271378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x27137c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x27137cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271380: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x271380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271384: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x271384u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x271388: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x271388u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27138c: 0x0  nop
    ctx->pc = 0x27138cu;
    // NOP
    // 0x271390: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x271390u;
    {
        const bool branch_taken_0x271390 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x271394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271390u;
        // 0x271394: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271390) {
            ctx->pc = 0x27139Cu;
            goto label_27139c;
        }
    }
    ctx->pc = 0x271398u;
    // 0x271398: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x271398u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
label_27139c:
    // 0x27139c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27139cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2713a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2713a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2713a4: 0x0  nop
    ctx->pc = 0x2713a4u;
    // NOP
    // 0x2713a8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2713a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2713ac: 0x0  nop
    ctx->pc = 0x2713acu;
    // NOP
    // 0x2713b0: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x2713B0u;
    {
        const bool branch_taken_0x2713b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2713B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2713B0u;
        // 0x2713b4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2713b0) {
            ctx->pc = 0x2713F4u;
            goto label_2713f4;
        }
    }
    ctx->pc = 0x2713B8u;
    // 0x2713b8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2713B8u;
    SET_GPR_U32(ctx, 31, 0x2713C0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2713B8u, 0x2713C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2713C0u;
label_2713c0:
    // 0x2713c0: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x2713c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2713c4: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x2713C4u;
    SET_GPR_U32(ctx, 31, 0x2713CCu);
    ctx->pc = 0x2713C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2713C4u;
    // 0x2713c8: 0x8e4500f0  lw          $a1, 0xF0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x2713C4u, 0x2713CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2713CCu;
label_2713cc:
    // 0x2713cc: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x2713ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x2713d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2713d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2713d4: 0x0  nop
    ctx->pc = 0x2713d4u;
    // NOP
    // 0x2713d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2713d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2713dc: 0x0  nop
    ctx->pc = 0x2713dcu;
    // NOP
    // 0x2713e0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2713E0u;
    {
        const bool branch_taken_0x2713e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2713E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2713E0u;
        // 0x2713e4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2713e0) {
            ctx->pc = 0x2713F4u;
            goto label_2713f4;
        }
    }
    ctx->pc = 0x2713E8u;
    // 0x2713e8: 0xc0b70e4  jal         func_2DC390
    ctx->pc = 0x2713E8u;
    SET_GPR_U32(ctx, 31, 0x2713F0u);
    ctx->pc = 0x2713ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2713E8u;
    // 0x2713ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC390u, 0x2713E8u, 0x2713F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2713F0u;
label_2713f0:
    // 0x2713f0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2713f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2713f4:
    // 0x2713f4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2713f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2713f8:
    // 0x2713f8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2713f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2713fc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2713fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x271400: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x271400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271404: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x271404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x271408: 0x3e00008  jr          $ra
    ctx->pc = 0x271408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271408u;
        // 0x27140c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271410u;
}
