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

// Function: func_001334A8
// Address: 0x1334a8 - 0x133670
void func_001334A8_0x1334a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001334A8_0x1334a8");
#endif

    switch (ctx->pc) {
        case 0x1334e8u: goto label_1334e8;
        case 0x1334f8u: goto label_1334f8;
        case 0x133504u: goto label_133504;
        case 0x133518u: goto label_133518;
        case 0x133528u: goto label_133528;
        case 0x133534u: goto label_133534;
        case 0x133540u: goto label_133540;
        case 0x133558u: goto label_133558;
        case 0x13356cu: goto label_13356c;
        case 0x133624u: goto label_133624;
        case 0x133644u: goto label_133644;
        default: break;
    }

    ctx->pc = 0x1334a8u;

    // 0x1334a8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1334a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1334ac: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1334acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1334b0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1334b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1334b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1334b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1334b8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1334b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1334bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1334bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1334c0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1334c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1334c4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1334c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1334c8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1334c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1334cc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1334ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1334d0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1334d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1334d4: 0x1660000d  bnez        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x1334D4u;
    {
        const bool branch_taken_0x1334d4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1334D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1334D4u;
        // 0x1334d8: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1334d4) {
            ctx->pc = 0x13350Cu;
            goto label_13350c;
        }
    }
    ctx->pc = 0x1334DCu;
    // 0x1334dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1334dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1334e0: 0xc0c294e  jal         func_30A538
    ctx->pc = 0x1334E0u;
    SET_GPR_U32(ctx, 31, 0x1334E8u);
    ctx->pc = 0x1334E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1334E0u;
    // 0x1334e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A538u, 0x1334E0u, 0x1334E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1334E8u;
label_1334e8:
    // 0x1334e8: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1334e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1334ec: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1334ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1334f0: 0xc0c294e  jal         func_30A538
    ctx->pc = 0x1334F0u;
    SET_GPR_U32(ctx, 31, 0x1334F8u);
    ctx->pc = 0x1334F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1334F0u;
    // 0x1334f4: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A538u, 0x1334F0u, 0x1334F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1334F8u;
label_1334f8:
    // 0x1334f8: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1334f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1334fc: 0xc0c294e  jal         func_30A538
    ctx->pc = 0x1334FCu;
    SET_GPR_U32(ctx, 31, 0x133504u);
    ctx->pc = 0x133500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1334FCu;
    // 0x133500: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A538u, 0x1334FCu, 0x133504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133504u;
label_133504:
    // 0x133504: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x133504u;
    {
        const bool branch_taken_0x133504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133504u;
        // 0x133508: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133504) {
            ctx->pc = 0x133544u;
            goto label_133544;
        }
    }
    ctx->pc = 0x13350Cu;
label_13350c:
    // 0x13350c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13350cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133510: 0xc0c294e  jal         func_30A538
    ctx->pc = 0x133510u;
    SET_GPR_U32(ctx, 31, 0x133518u);
    ctx->pc = 0x133514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133510u;
    // 0x133514: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A538u, 0x133510u, 0x133518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133518u;
label_133518:
    // 0x133518: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x133518u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13351c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x13351cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x133520: 0xc0c294e  jal         func_30A538
    ctx->pc = 0x133520u;
    SET_GPR_U32(ctx, 31, 0x133528u);
    ctx->pc = 0x133524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133520u;
    // 0x133524: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A538u, 0x133520u, 0x133528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133528u;
label_133528:
    // 0x133528: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x133528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13352c: 0xc0c294e  jal         func_30A538
    ctx->pc = 0x13352Cu;
    SET_GPR_U32(ctx, 31, 0x133534u);
    ctx->pc = 0x133530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13352Cu;
    // 0x133530: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A538u, 0x13352Cu, 0x133534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133534u;
label_133534:
    // 0x133534: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x133534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x133538: 0xc0c294e  jal         func_30A538
    ctx->pc = 0x133538u;
    SET_GPR_U32(ctx, 31, 0x133540u);
    ctx->pc = 0x13353Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133538u;
    // 0x13353c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A538u, 0x133538u, 0x133540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133540u;
label_133540:
    // 0x133540: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x133540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_133544:
    // 0x133544: 0x12400030  beqz        $s2, . + 4 + (0x30 << 2)
    ctx->pc = 0x133544u;
    {
        const bool branch_taken_0x133544 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x133548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133544u;
        // 0x133548: 0x3c15005d  lui         $s5, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133544) {
            ctx->pc = 0x133608u;
            goto label_133608;
        }
    }
    ctx->pc = 0x13354Cu;
    // 0x13354c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x13354cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x133550: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x133550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133554: 0x0  nop
    ctx->pc = 0x133554u;
    // NOP
label_133558:
    // 0x133558: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x133558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13355c: 0x8ea5aff0  lw          $a1, -0x5010($s5)
    ctx->pc = 0x13355cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946800)));
    // 0x133560: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x133560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x133564: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x133564u;
    SET_GPR_U32(ctx, 31, 0x13356Cu);
    ctx->pc = 0x133568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133564u;
    // 0x133568: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x133564u, 0x13356Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13356Cu;
label_13356c:
    // 0x13356c: 0xc7a2004c  lwc1        $f2, 0x4C($sp)
    ctx->pc = 0x13356cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133570: 0x46141032  c.eq.s      $f2, $f20
    ctx->pc = 0x133570u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x133574: 0x0  nop
    ctx->pc = 0x133574u;
    // NOP
    // 0x133578: 0x45010032  bc1t        . + 4 + (0x32 << 2)
    ctx->pc = 0x133578u;
    {
        const bool branch_taken_0x133578 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133578u;
        // 0x13357c: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x133578) {
            ctx->pc = 0x133644u;
            goto label_133644;
        }
    }
    ctx->pc = 0x133580u;
    // 0x133580: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x133580u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x133584: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x133584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133588: 0x0  nop
    ctx->pc = 0x133588u;
    // NOP
    // 0x13358c: 0x0  nop
    ctx->pc = 0x13358cu;
    // NOP
    // 0x133590: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x133590u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x133594: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x133594u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x133598: 0x0  nop
    ctx->pc = 0x133598u;
    // NOP
    // 0x13359c: 0x0  nop
    ctx->pc = 0x13359cu;
    // NOP
    // 0x1335a0: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1335a0u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x1335a4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1335a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1335a8: 0x45010026  bc1t        . + 4 + (0x26 << 2)
    ctx->pc = 0x1335A8u;
    {
        const bool branch_taken_0x1335a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1335ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1335A8u;
        // 0x1335ac: 0xe7a10044  swc1        $f1, 0x44($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1335a8) {
            ctx->pc = 0x133644u;
            goto label_133644;
        }
    }
    ctx->pc = 0x1335B0u;
    // 0x1335b0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1335b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1335b4: 0x0  nop
    ctx->pc = 0x1335b4u;
    // NOP
    // 0x1335b8: 0x45030023  bc1tl       . + 4 + (0x23 << 2)
    ctx->pc = 0x1335B8u;
    {
        const bool branch_taken_0x1335b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1335b8) {
            ctx->pc = 0x1335BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1335B8u;
            // 0x1335bc: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133648u;
            goto label_133648;
        }
    }
    ctx->pc = 0x1335C0u;
    // 0x1335c0: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x1335c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1335c4: 0x0  nop
    ctx->pc = 0x1335c4u;
    // NOP
    // 0x1335c8: 0x4503001f  bc1tl       . + 4 + (0x1F << 2)
    ctx->pc = 0x1335C8u;
    {
        const bool branch_taken_0x1335c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1335c8) {
            ctx->pc = 0x1335CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1335C8u;
            // 0x1335cc: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133648u;
            goto label_133648;
        }
    }
    ctx->pc = 0x1335D0u;
    // 0x1335d0: 0x3c014580  lui         $at, 0x4580
    ctx->pc = 0x1335d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17792 << 16));
    // 0x1335d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1335d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1335d8: 0x0  nop
    ctx->pc = 0x1335d8u;
    // NOP
    // 0x1335dc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1335dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1335e0: 0x0  nop
    ctx->pc = 0x1335e0u;
    // NOP
    // 0x1335e4: 0x45030018  bc1tl       . + 4 + (0x18 << 2)
    ctx->pc = 0x1335E4u;
    {
        const bool branch_taken_0x1335e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1335e4) {
            ctx->pc = 0x1335E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1335E4u;
            // 0x1335e8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133648u;
            goto label_133648;
        }
    }
    ctx->pc = 0x1335ECu;
    // 0x1335ec: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1335ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1335f0: 0x0  nop
    ctx->pc = 0x1335f0u;
    // NOP
    // 0x1335f4: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x1335F4u;
    {
        const bool branch_taken_0x1335f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1335F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1335F4u;
        // 0x1335f8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1335f4) {
            ctx->pc = 0x133644u;
            goto label_133644;
        }
    }
    ctx->pc = 0x1335FCu;
    // 0x1335fc: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x1335fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x133600: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x133600u;
    {
        const bool branch_taken_0x133600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x133604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133600u;
        // 0x133604: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133600) {
            ctx->pc = 0x133558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133558;
        }
    }
    ctx->pc = 0x133608u;
label_133608:
    // 0x133608: 0x16600008  bnez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x133608u;
    {
        const bool branch_taken_0x133608 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x13360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133608u;
        // 0x13360c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133608) {
            ctx->pc = 0x13362Cu;
            goto label_13362c;
        }
    }
    ctx->pc = 0x133610u;
    // 0x133610: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x133610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133614: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x133614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133618: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x133618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13361c: 0xc056d36  jal         func_15B4D8
    ctx->pc = 0x13361Cu;
    SET_GPR_U32(ctx, 31, 0x133624u);
    ctx->pc = 0x133620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13361Cu;
    // 0x133620: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B4D8u, 0x13361Cu, 0x133624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133624u;
label_133624:
    // 0x133624: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x133624u;
    {
        const bool branch_taken_0x133624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133624u;
        // 0x133628: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133624) {
            ctx->pc = 0x133648u;
            goto label_133648;
        }
    }
    ctx->pc = 0x13362Cu;
label_13362c:
    // 0x13362c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13362cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133630: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x133630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133634: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x133634u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133638: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x133638u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13363c: 0xc056e20  jal         func_15B880
    ctx->pc = 0x13363Cu;
    SET_GPR_U32(ctx, 31, 0x133644u);
    ctx->pc = 0x133640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13363Cu;
    // 0x133640: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B880u, 0x13363Cu, 0x133644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133644u;
label_133644:
    // 0x133644: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x133644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_133648:
    // 0x133648: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x133648u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13364c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x13364cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x133650: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x133650u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x133654: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x133654u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x133658: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x133658u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13365c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x13365cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x133660: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x133660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x133664: 0x3e00008  jr          $ra
    ctx->pc = 0x133664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133664u;
        // 0x133668: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13366Cu;
    // 0x13366c: 0x0  nop
    ctx->pc = 0x13366cu;
    // NOP
    ctx->pc = 0x133670u;
}
