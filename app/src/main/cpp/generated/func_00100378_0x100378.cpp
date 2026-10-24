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

// Function: func_00100378
// Address: 0x100378 - 0x1004c8
void func_00100378_0x100378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00100378_0x100378");
#endif

    switch (ctx->pc) {
        case 0x1003b0u: goto label_1003b0;
        case 0x100484u: goto label_100484;
        case 0x10048cu: goto label_10048c;
        default: break;
    }

    ctx->pc = 0x100378u;

    // 0x100378: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x100378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10037c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10037cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100380: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x100380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x100384: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x100384u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100388: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x100388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x10038c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10038cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100390: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x100394: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x100394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100398: 0x8e060304  lw          $a2, 0x304($s0)
    ctx->pc = 0x100398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x10039c: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x10039cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1003a0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1003a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1003a4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1003a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1003a8: 0xc0525ce  jal         func_149738
    ctx->pc = 0x1003A8u;
    SET_GPR_U32(ctx, 31, 0x1003B0u);
    ctx->pc = 0x1003ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1003A8u;
    // 0x1003ac: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149738u, 0x1003A8u, 0x1003B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1003B0u;
label_1003b0:
    // 0x1003b0: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1003B0u;
    {
        const bool branch_taken_0x1003b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1003B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1003B0u;
        // 0x1003b4: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1003b0) {
            ctx->pc = 0x100494u;
            goto label_100494;
        }
    }
    ctx->pc = 0x1003B8u;
    // 0x1003b8: 0x8e0302f0  lw          $v1, 0x2F0($s0)
    ctx->pc = 0x1003b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x1003bc: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x1003bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1003c0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1003c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1003c4: 0x920402b4  lbu         $a0, 0x2B4($s0)
    ctx->pc = 0x1003c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1003c8: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x1003c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1003cc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1003ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1003d0: 0xae0302f0  sw          $v1, 0x2F0($s0)
    ctx->pc = 0x1003d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 3));
    // 0x1003d4: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x1003d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    // 0x1003d8: 0xae0020d0  sw          $zero, 0x20D0($s0)
    ctx->pc = 0x1003d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8400), GPR_U32(ctx, 0));
    // 0x1003dc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1003DCu;
    {
        const bool branch_taken_0x1003dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1003E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1003DCu;
        // 0x1003e0: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1003dc) {
            ctx->pc = 0x1003F0u;
            goto label_1003f0;
        }
    }
    ctx->pc = 0x1003E4u;
    // 0x1003e4: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1003e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1003e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1003E8u;
    {
        const bool branch_taken_0x1003e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1003ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1003E8u;
        // 0x1003ec: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1003e8) {
            ctx->pc = 0x1003F4u;
            goto label_1003f4;
        }
    }
    ctx->pc = 0x1003F0u;
label_1003f0:
    // 0x1003f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1003f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1003f4:
    // 0x1003f4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1003F4u;
    {
        const bool branch_taken_0x1003f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1003f4) {
            ctx->pc = 0x10047Cu;
            goto label_10047c;
        }
    }
    ctx->pc = 0x1003FCu;
    // 0x1003fc: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1003fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x100400: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x100400u;
    {
        const bool branch_taken_0x100400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100400u;
        // 0x100404: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100400) {
            ctx->pc = 0x100414u;
            goto label_100414;
        }
    }
    ctx->pc = 0x100408u;
    // 0x100408: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x100408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x10040c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10040Cu;
    {
        const bool branch_taken_0x10040c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10040Cu;
        // 0x100410: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10040c) {
            ctx->pc = 0x100418u;
            goto label_100418;
        }
    }
    ctx->pc = 0x100414u;
label_100414:
    // 0x100414: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x100414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100418:
    // 0x100418: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x100418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x10041c: 0x248300e0  addiu       $v1, $a0, 0xE0
    ctx->pc = 0x10041cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x100420: 0xc441d880  lwc1        $f1, -0x2780($v0)
    ctx->pc = 0x100420u;
    { uint32_t bits = FAST_READ32(0x3BD880u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x100424: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x100424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100428: 0x2442d880  addiu       $v0, $v0, -0x2780
    ctx->pc = 0x100428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957184));
    // 0x10042c: 0xe48100e0  swc1        $f1, 0xE0($a0)
    ctx->pc = 0x10042cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
    // 0x100430: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x100430u;
    { uint32_t bits = FAST_READ32(0x3BD884u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x100434: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x100434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x100438: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x100438u;
    { uint32_t bits = FAST_READ32(0x3BD888u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10043c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x10043cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x100440: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x100440u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x100444: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x100444u;
    {
        const bool branch_taken_0x100444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100444u;
        // 0x100448: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100444) {
            ctx->pc = 0x100458u;
            goto label_100458;
        }
    }
    ctx->pc = 0x10044Cu;
    // 0x10044c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x10044cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x100450: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x100450u;
    {
        const bool branch_taken_0x100450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100450u;
        // 0x100454: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100450) {
            ctx->pc = 0x10045Cu;
            goto label_10045c;
        }
    }
    ctx->pc = 0x100458u;
label_100458:
    // 0x100458: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x100458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10045c:
    // 0x10045c: 0xc4a0d880  lwc1        $f0, -0x2780($a1)
    ctx->pc = 0x10045cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x100460: 0x24a3d880  addiu       $v1, $a1, -0x2780
    ctx->pc = 0x100460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957184));
    // 0x100464: 0x8c4200d0  lw          $v0, 0xD0($v0)
    ctx->pc = 0x100464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x100468: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x100468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x10046c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x10046cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x100470: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x100470u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x100474: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x100474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x100478: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x100478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_10047c:
    // 0x10047c: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x10047Cu;
    SET_GPR_U32(ctx, 31, 0x100484u);
    ctx->pc = 0x100480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10047Cu;
    // 0x100480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x10047Cu, 0x100484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100484u;
label_100484:
    // 0x100484: 0xc04021c  jal         func_100870
    ctx->pc = 0x100484u;
    SET_GPR_U32(ctx, 31, 0x10048Cu);
    ctx->pc = 0x100488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100484u;
    // 0x100488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100870u, 0x100484u, 0x10048Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10048Cu;
label_10048c:
    // 0x10048c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x10048cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x100490: 0xac507a98  sw          $s0, 0x7A98($v0)
    ctx->pc = 0x100490u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x747A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A98u, _value); } while (0);
label_100494:
    // 0x100494: 0x8e030254  lw          $v1, 0x254($s0)
    ctx->pc = 0x100494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x100498: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x100498u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x10049c: 0x8e0402f0  lw          $a0, 0x2F0($s0)
    ctx->pc = 0x10049cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x1004a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1004a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004a4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1004a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1004a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1004a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1004ac: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x1004acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x1004b0: 0xae030254  sw          $v1, 0x254($s0)
    ctx->pc = 0x1004b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 3));
    // 0x1004b4: 0xae0402f0  sw          $a0, 0x2F0($s0)
    ctx->pc = 0x1004b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 4));
    // 0x1004b8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1004b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1004bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1004bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1004c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1004C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1004C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1004C0u;
        // 0x1004c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1004C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1004C8u;
}
