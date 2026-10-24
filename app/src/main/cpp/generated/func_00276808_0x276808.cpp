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

// Function: func_00276808
// Address: 0x276808 - 0x276940
void func_00276808_0x276808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00276808_0x276808");
#endif

    switch (ctx->pc) {
        case 0x276840u: goto label_276840;
        case 0x27691cu: goto label_27691c;
        case 0x276924u: goto label_276924;
        default: break;
    }

    ctx->pc = 0x276808u;

    // 0x276808: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x276808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27680c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27680cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276810: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x276810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x276814: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x276814u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276818: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x276818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x27681c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27681cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276820: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x276820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x276824: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x276824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276828: 0x8e060304  lw          $a2, 0x304($s0)
    ctx->pc = 0x276828u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27682c: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x27682cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x276830: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x276830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x276834: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x276834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x276838: 0xc0525ce  jal         func_149738
    ctx->pc = 0x276838u;
    SET_GPR_U32(ctx, 31, 0x276840u);
    ctx->pc = 0x27683Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276838u;
    // 0x27683c: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149738u, 0x276838u, 0x276840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276840u;
label_276840:
    // 0x276840: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x276840u;
    {
        const bool branch_taken_0x276840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276840u;
        // 0x276844: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276840) {
            ctx->pc = 0x276924u;
            goto label_276924;
        }
    }
    ctx->pc = 0x276848u;
    // 0x276848: 0x8e0202f0  lw          $v0, 0x2F0($s0)
    ctx->pc = 0x276848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x27684c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x27684cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x276850: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x276850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x276854: 0x920602b4  lbu         $a2, 0x2B4($s0)
    ctx->pc = 0x276854u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x276858: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x276858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x27685c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x27685cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x276860: 0xae0202f0  sw          $v0, 0x2F0($s0)
    ctx->pc = 0x276860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 2));
    // 0x276864: 0xa2050531  sb          $a1, 0x531($s0)
    ctx->pc = 0x276864u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1329), (uint8_t)GPR_U32(ctx, 5));
    // 0x276868: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x276868u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27686c: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x27686cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x276870: 0xae0021b0  sw          $zero, 0x21B0($s0)
    ctx->pc = 0x276870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8624), GPR_U32(ctx, 0));
    // 0x276874: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x276874u;
    {
        const bool branch_taken_0x276874 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x276878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276874u;
        // 0x276878: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276874) {
            ctx->pc = 0x276888u;
            goto label_276888;
        }
    }
    ctx->pc = 0x27687Cu;
    // 0x27687c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x27687cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x276880: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x276880u;
    {
        const bool branch_taken_0x276880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276880u;
        // 0x276884: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276880) {
            ctx->pc = 0x27688Cu;
            goto label_27688c;
        }
    }
    ctx->pc = 0x276888u;
label_276888:
    // 0x276888: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x276888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27688c:
    // 0x27688c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x27688Cu;
    {
        const bool branch_taken_0x27688c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27688c) {
            ctx->pc = 0x276914u;
            goto label_276914;
        }
    }
    ctx->pc = 0x276894u;
    // 0x276894: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x276894u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x276898: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x276898u;
    {
        const bool branch_taken_0x276898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276898u;
        // 0x27689c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276898) {
            ctx->pc = 0x2768ACu;
            goto label_2768ac;
        }
    }
    ctx->pc = 0x2768A0u;
    // 0x2768a0: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2768a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2768a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2768A4u;
    {
        const bool branch_taken_0x2768a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2768A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2768A4u;
        // 0x2768a8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2768a4) {
            ctx->pc = 0x2768B0u;
            goto label_2768b0;
        }
    }
    ctx->pc = 0x2768ACu;
label_2768ac:
    // 0x2768ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2768acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2768b0:
    // 0x2768b0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2768b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2768b4: 0x248300e0  addiu       $v1, $a0, 0xE0
    ctx->pc = 0x2768b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x2768b8: 0xc441d880  lwc1        $f1, -0x2780($v0)
    ctx->pc = 0x2768b8u;
    { uint32_t bits = FAST_READ32(0x3BD880u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2768bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2768bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2768c0: 0x2442d880  addiu       $v0, $v0, -0x2780
    ctx->pc = 0x2768c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957184));
    // 0x2768c4: 0xe48100e0  swc1        $f1, 0xE0($a0)
    ctx->pc = 0x2768c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
    // 0x2768c8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2768c8u;
    { uint32_t bits = FAST_READ32(0x3BD884u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2768cc: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2768ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2768d0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2768d0u;
    { uint32_t bits = FAST_READ32(0x3BD888u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2768d4: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2768d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2768d8: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2768d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2768dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2768DCu;
    {
        const bool branch_taken_0x2768dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2768E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2768DCu;
        // 0x2768e0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2768dc) {
            ctx->pc = 0x2768F0u;
            goto label_2768f0;
        }
    }
    ctx->pc = 0x2768E4u;
    // 0x2768e4: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2768e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2768e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2768E8u;
    {
        const bool branch_taken_0x2768e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2768ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2768E8u;
        // 0x2768ec: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2768e8) {
            ctx->pc = 0x2768F4u;
            goto label_2768f4;
        }
    }
    ctx->pc = 0x2768F0u;
label_2768f0:
    // 0x2768f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2768f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2768f4:
    // 0x2768f4: 0xc4a0d880  lwc1        $f0, -0x2780($a1)
    ctx->pc = 0x2768f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2768f8: 0x24a3d880  addiu       $v1, $a1, -0x2780
    ctx->pc = 0x2768f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957184));
    // 0x2768fc: 0x8c4200d0  lw          $v0, 0xD0($v0)
    ctx->pc = 0x2768fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x276900: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x276900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x276904: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x276904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276908: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x276908u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x27690c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x27690cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276910: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x276910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_276914:
    // 0x276914: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x276914u;
    SET_GPR_U32(ctx, 31, 0x27691Cu);
    ctx->pc = 0x276918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276914u;
    // 0x276918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x276914u, 0x27691Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27691Cu;
label_27691c:
    // 0x27691c: 0xc09db22  jal         func_276C88
    ctx->pc = 0x27691Cu;
    SET_GPR_U32(ctx, 31, 0x276924u);
    ctx->pc = 0x276920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27691Cu;
    // 0x276920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276C88u, 0x27691Cu, 0x276924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276924u;
label_276924:
    // 0x276924: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x276924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276928: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x276928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27692c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27692cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276930: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x276930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276934: 0x3e00008  jr          $ra
    ctx->pc = 0x276934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276934u;
        // 0x276938: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27693Cu;
    // 0x27693c: 0x0  nop
    ctx->pc = 0x27693cu;
    // NOP
    ctx->pc = 0x276940u;
}
