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

// Function: cEma2_ckLineToPlayer
// Address: 0x289328 - 0x289418
void cEma2_ckLineToPlayer_0x289328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEma2_ckLineToPlayer_0x289328");
#endif

    switch (ctx->pc) {
        case 0x289388u: goto label_289388;
        case 0x2893f4u: goto label_2893f4;
        default: break;
    }

    ctx->pc = 0x289328u;

    // 0x289328: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x289328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x28932c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x28932cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x289330: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x289330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x289334: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x289334u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x289338: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x289338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x28933c: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x28933cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x289340: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x289340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x289344: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x289344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x289348: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x289348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x28934c: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28934Cu;
    {
        const bool branch_taken_0x28934c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x289350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28934Cu;
        // 0x289350: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28934c) {
            ctx->pc = 0x289370u;
            goto label_289370;
        }
    }
    ctx->pc = 0x289354u;
    // 0x289354: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x289354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289358: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x289358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x28935c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x28935cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289360: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x289360u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x289364: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x289364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289368: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x289368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x28936c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x28936cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289370:
    // 0x289370: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x289370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x289374: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x289374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x289378: 0x0  nop
    ctx->pc = 0x289378u;
    // NOP
    // 0x28937c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x28937cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x289380: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x289380u;
    SET_GPR_U32(ctx, 31, 0x289388u);
    ctx->pc = 0x289384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289380u;
    // 0x289384: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x289380u, 0x289388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289388u;
label_289388:
    // 0x289388: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x289388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x28938c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x28938cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x289390: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x289390u;
    {
        const bool branch_taken_0x289390 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x289394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289390u;
        // 0x289394: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x289390) {
            ctx->pc = 0x2893B4u;
            goto label_2893b4;
        }
    }
    ctx->pc = 0x289398u;
    // 0x289398: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x289398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28939c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x28939cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2893a0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2893a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2893a4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2893a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2893a8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2893a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2893ac: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2893acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2893b0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2893b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2893b4:
    // 0x2893b4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2893b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2893b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2893b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2893bc: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x2893bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x2893c0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2893c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2893c4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2893c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2893c8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2893c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2893cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2893ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2893d0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2893d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2893d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2893d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2893d8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2893d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2893dc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2893dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2893e0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2893e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2893e4: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x2893e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2893e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2893e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2893ec: 0xc04c784  jal         func_131E10
    ctx->pc = 0x2893ECu;
    SET_GPR_U32(ctx, 31, 0x2893F4u);
    ctx->pc = 0x2893F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2893ECu;
    // 0x2893f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2893ECu, 0x2893F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2893F4u;
label_2893f4:
    // 0x2893f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2893f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2893f8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2893f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2893fc: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2893fcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x289400: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x289400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x289404: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x289404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289408: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x289408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28940c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x28940cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x289410: 0x3e00008  jr          $ra
    ctx->pc = 0x289410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289410u;
        // 0x289414: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289418u;
}
