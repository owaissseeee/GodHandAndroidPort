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

// Function: cCamera_reset
// Address: 0x138240 - 0x138358
void cCamera_reset_0x138240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCamera_reset_0x138240");
#endif

    switch (ctx->pc) {
        case 0x1382d4u: goto label_1382d4;
        case 0x138300u: goto label_138300;
        case 0x138344u: goto label_138344;
        default: break;
    }

    ctx->pc = 0x138240u;

    // 0x138240: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x138240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x138244: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x138244u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x138248: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x138248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x13824c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13824cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x138250: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x138250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x138254: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x138254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138258: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x138258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x13825c: 0x26070200  addiu       $a3, $s0, 0x200
    ctx->pc = 0x13825cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x138260: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x138260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x138264: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x138264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x138268: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x138268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x13826c: 0x10fd0006  beq         $a3, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x13826Cu;
    {
        const bool branch_taken_0x13826c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 29));
        ctx->pc = 0x138270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13826Cu;
        // 0x138270: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13826c) {
            ctx->pc = 0x138288u;
            goto label_138288;
        }
    }
    ctx->pc = 0x138274u;
    // 0x138274: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x138274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138278: 0xe6010200  swc1        $f1, 0x200($s0)
    ctx->pc = 0x138278u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 512), bits); }
    // 0x13827c: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x13827cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x138280: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x138280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138284: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x138284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_138288:
    // 0x138288: 0x3c014033  lui         $at, 0x4033
    ctx->pc = 0x138288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16435 << 16));
    // 0x13828c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x13828cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x138290: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x138290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138294: 0x26060210  addiu       $a2, $s0, 0x210
    ctx->pc = 0x138294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x138298: 0x3c014006  lui         $at, 0x4006
    ctx->pc = 0x138298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16390 << 16));
    // 0x13829c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x13829cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1382a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1382a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1382a4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1382a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1382a8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1382a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1382ac: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1382acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1382b0: 0x10dd0005  beq         $a2, $sp, . + 4 + (0x5 << 2)
    ctx->pc = 0x1382B0u;
    {
        const bool branch_taken_0x1382b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 29));
        ctx->pc = 0x1382B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1382B0u;
        // 0x1382b4: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1382b0) {
            ctx->pc = 0x1382C8u;
            goto label_1382c8;
        }
    }
    ctx->pc = 0x1382B8u;
    // 0x1382b8: 0xe6000210  swc1        $f0, 0x210($s0)
    ctx->pc = 0x1382b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 528), bits); }
    // 0x1382bc: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x1382bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1382c0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1382c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1382c4: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x1382c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_1382c8:
    // 0x1382c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1382c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1382cc: 0xc04e0d6  jal         func_138358
    ctx->pc = 0x1382CCu;
    SET_GPR_U32(ctx, 31, 0x1382D4u);
    ctx->pc = 0x1382D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1382CCu;
    // 0x1382d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138358u, 0x1382CCu, 0x1382D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1382D4u;
label_1382d4:
    // 0x1382d4: 0x26050220  addiu       $a1, $s0, 0x220
    ctx->pc = 0x1382d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x1382d8: 0x10bd0006  beq         $a1, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1382D8u;
    {
        const bool branch_taken_0x1382d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 29));
        ctx->pc = 0x1382DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1382D8u;
        // 0x1382dc: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1382d8) {
            ctx->pc = 0x1382F4u;
            goto label_1382f4;
        }
    }
    ctx->pc = 0x1382E0u;
    // 0x1382e0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1382e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1382e4: 0xe6000220  swc1        $f0, 0x220($s0)
    ctx->pc = 0x1382e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 544), bits); }
    // 0x1382e8: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x1382e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1382ec: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1382ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1382f0: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1382f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1382f4:
    // 0x1382f4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1382f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1382f8: 0xc051dca  jal         func_147728
    ctx->pc = 0x1382F8u;
    SET_GPR_U32(ctx, 31, 0x138300u);
    ctx->pc = 0x1382FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1382F8u;
    // 0x1382fc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x1382F8u, 0x138300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138300u;
label_138300:
    // 0x138300: 0x26020240  addiu       $v0, $s0, 0x240
    ctx->pc = 0x138300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x138304: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x138304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x138308: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x138308u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x13830c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x13830cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x138310: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x138310u;
    {
        const bool branch_taken_0x138310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x138314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138310u;
        // 0x138314: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x138310) {
            ctx->pc = 0x13832Cu;
            goto label_13832c;
        }
    }
    ctx->pc = 0x138318u;
    // 0x138318: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x138318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13831c: 0xe6000240  swc1        $f0, 0x240($s0)
    ctx->pc = 0x13831cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 576), bits); }
    // 0x138320: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x138320u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x138324: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x138324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138328: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x138328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_13832c:
    // 0x13832c: 0x3c0141f8  lui         $at, 0x41F8
    ctx->pc = 0x13832cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16888 << 16));
    // 0x138330: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x138330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x138334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138338: 0xae0001c0  sw          $zero, 0x1C0($s0)
    ctx->pc = 0x138338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 0));
    // 0x13833c: 0xc04e14a  jal         func_138528
    ctx->pc = 0x13833Cu;
    SET_GPR_U32(ctx, 31, 0x138344u);
    ctx->pc = 0x138340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13833Cu;
    // 0x138340: 0xe6000250  swc1        $f0, 0x250($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 592), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x138528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138528u, 0x13833Cu, 0x138344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138344u;
label_138344:
    // 0x138344: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x138344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x138348: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x138348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13834c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x13834cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x138350: 0x3e00008  jr          $ra
    ctx->pc = 0x138350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138350u;
        // 0x138354: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138358u;
}
