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

// Function: func_00278690
// Address: 0x278690 - 0x278878
void func_00278690_0x278690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00278690_0x278690");
#endif

    switch (ctx->pc) {
        case 0x2786fcu: goto label_2786fc;
        case 0x278748u: goto label_278748;
        case 0x27875cu: goto label_27875c;
        case 0x27876cu: goto label_27876c;
        case 0x278790u: goto label_278790;
        case 0x27879cu: goto label_27879c;
        case 0x2787d0u: goto label_2787d0;
        case 0x2787e4u: goto label_2787e4;
        case 0x2787f4u: goto label_2787f4;
        case 0x278814u: goto label_278814;
        case 0x278820u: goto label_278820;
        default: break;
    }

    ctx->pc = 0x278690u;

    // 0x278690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x278690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x278694: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x278694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x278698: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x278698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27869c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27869cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2786a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2786a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2786a4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2786a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2786a8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2786a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2786ac: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x2786acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2786b0: 0x10710028  beq         $v1, $s1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2786B0u;
    {
        const bool branch_taken_0x2786b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x2786B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2786B0u;
        // 0x2786b4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2786b0) {
            ctx->pc = 0x278754u;
            goto label_278754;
        }
    }
    ctx->pc = 0x2786B8u;
    // 0x2786b8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2786B8u;
    {
        const bool branch_taken_0x2786b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2786b8) {
            ctx->pc = 0x2786BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2786B8u;
            // 0x2786bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2786D0u;
            goto label_2786d0;
        }
    }
    ctx->pc = 0x2786C0u;
    // 0x2786c0: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2786C0u;
    {
        const bool branch_taken_0x2786c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2786c0) {
            ctx->pc = 0x2786C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2786C0u;
            // 0x2786c4: 0x920202f7  lbu         $v0, 0x2F7($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2786E8u;
            goto label_2786e8;
        }
    }
    ctx->pc = 0x2786C8u;
    // 0x2786c8: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2786C8u;
    {
        const bool branch_taken_0x2786c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2786CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2786C8u;
        // 0x2786cc: 0xc6010618  lwc1        $f1, 0x618($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2786c8) {
            ctx->pc = 0x278824u;
            goto label_278824;
        }
    }
    ctx->pc = 0x2786D0u;
label_2786d0:
    // 0x2786d0: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2786D0u;
    {
        const bool branch_taken_0x2786d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2786D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2786D0u;
        // 0x2786d4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2786d0) {
            ctx->pc = 0x2787A4u;
            goto label_2787a4;
        }
    }
    ctx->pc = 0x2786D8u;
    // 0x2786d8: 0x10620040  beq         $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2786D8u;
    {
        const bool branch_taken_0x2786d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2786d8) {
            ctx->pc = 0x2787DCu;
            goto label_2787dc;
        }
    }
    ctx->pc = 0x2786E0u;
    // 0x2786e0: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2786E0u;
    {
        const bool branch_taken_0x2786e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2786E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2786E0u;
        // 0x2786e4: 0xc6010618  lwc1        $f1, 0x618($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2786e0) {
            ctx->pc = 0x278824u;
            goto label_278824;
        }
    }
    ctx->pc = 0x2786E8u;
label_2786e8:
    // 0x2786e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2786e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2786ec: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2786ECu;
    {
        const bool branch_taken_0x2786ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2786ec) {
            ctx->pc = 0x2786F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2786ECu;
            // 0x2786f0: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278720u;
            goto label_278720;
        }
    }
    ctx->pc = 0x2786F4u;
    // 0x2786f4: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x2786F4u;
    SET_GPR_U32(ctx, 31, 0x2786FCu);
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x2786F4u, 0x2786FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2786FCu;
label_2786fc:
    // 0x2786fc: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x2786fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x278700: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x278700u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x278704: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x278704u;
    {
        const bool branch_taken_0x278704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x278704) {
            ctx->pc = 0x278708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278704u;
            // 0x278708: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27870Cu;
            goto label_27870c;
        }
    }
    ctx->pc = 0x27870Cu;
label_27870c:
    // 0x27870c: 0x2010  mfhi        $a0
    ctx->pc = 0x27870cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x278710: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x278710u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x278714: 0x0  nop
    ctx->pc = 0x278714u;
    // NOP
    // 0x278718: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x278718u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x27871c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27871cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_278720:
    // 0x278720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278724: 0xa21102f7  sb          $s1, 0x2F7($s0)
    ctx->pc = 0x278724u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 17));
    // 0x278728: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x278728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27872c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27872cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278730: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x278730u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278734: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x278734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x278738: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x278738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x27873c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27873cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x278740: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x278740u;
    SET_GPR_U32(ctx, 31, 0x278748u);
    ctx->pc = 0x278744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278740u;
    // 0x278744: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x278740u, 0x278748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278748u;
label_278748:
    // 0x278748: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x278748u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27874c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27874cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x278750: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x278750u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_278754:
    // 0x278754: 0xc055f06  jal         func_157C18
    ctx->pc = 0x278754u;
    SET_GPR_U32(ctx, 31, 0x27875Cu);
    ctx->pc = 0x278758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278754u;
    // 0x278758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x278754u, 0x27875Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27875Cu;
label_27875c:
    // 0x27875c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27875Cu;
    {
        const bool branch_taken_0x27875c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27875c) {
            ctx->pc = 0x27877Cu;
            goto label_27877c;
        }
    }
    ctx->pc = 0x278764u;
    // 0x278764: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x278764u;
    SET_GPR_U32(ctx, 31, 0x27876Cu);
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x278764u, 0x27876Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27876Cu;
label_27876c:
    // 0x27876c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27876cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x278770: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x278770u;
    {
        const bool branch_taken_0x278770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278770u;
        // 0x278774: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278770) {
            ctx->pc = 0x27877Cu;
            goto label_27877c;
        }
    }
    ctx->pc = 0x278778u;
    // 0x278778: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x278778u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_27877c:
    // 0x27877c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27877cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x278780: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x278780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x278784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278788: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x278788u;
    SET_GPR_U32(ctx, 31, 0x278790u);
    ctx->pc = 0x27878Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278788u;
    // 0x27878c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x278788u, 0x278790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278790u;
label_278790:
    // 0x278790: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x278790u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x278794: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x278794u;
    SET_GPR_U32(ctx, 31, 0x27879Cu);
    ctx->pc = 0x278798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278794u;
    // 0x278798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x278794u, 0x27879Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27879Cu;
label_27879c:
    // 0x27879c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x27879Cu;
    {
        const bool branch_taken_0x27879c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2787A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27879Cu;
        // 0x2787a0: 0xc6010618  lwc1        $f1, 0x618($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27879c) {
            ctx->pc = 0x278824u;
            goto label_278824;
        }
    }
    ctx->pc = 0x2787A4u;
label_2787a4:
    // 0x2787a4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2787a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2787a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2787a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2787ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2787acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2787b0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2787b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2787b4: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x2787b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2787b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2787b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2787bc: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x2787bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2787c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2787c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2787c4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2787c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2787c8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2787C8u;
    SET_GPR_U32(ctx, 31, 0x2787D0u);
    ctx->pc = 0x2787CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2787C8u;
    // 0x2787cc: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2787C8u, 0x2787D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2787D0u;
label_2787d0:
    // 0x2787d0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2787d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2787d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2787d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2787d8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2787d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2787dc:
    // 0x2787dc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2787DCu;
    SET_GPR_U32(ctx, 31, 0x2787E4u);
    ctx->pc = 0x2787E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2787DCu;
    // 0x2787e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2787DCu, 0x2787E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2787E4u;
label_2787e4:
    // 0x2787e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2787E4u;
    {
        const bool branch_taken_0x2787e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2787e4) {
            ctx->pc = 0x278800u;
            goto label_278800;
        }
    }
    ctx->pc = 0x2787ECu;
    // 0x2787ec: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x2787ECu;
    SET_GPR_U32(ctx, 31, 0x2787F4u);
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x2787ECu, 0x2787F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2787F4u;
label_2787f4:
    // 0x2787f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2787f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2787f8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2787F8u;
    {
        const bool branch_taken_0x2787f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2787f8) {
            ctx->pc = 0x2787FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2787F8u;
            // 0x2787fc: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278800u;
            goto label_278800;
        }
    }
    ctx->pc = 0x278800u;
label_278800:
    // 0x278800: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x278800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x278804: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x278804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x278808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27880c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x27880Cu;
    SET_GPR_U32(ctx, 31, 0x278814u);
    ctx->pc = 0x278810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27880Cu;
    // 0x278810: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x27880Cu, 0x278814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278814u;
label_278814:
    // 0x278814: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x278814u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x278818: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x278818u;
    SET_GPR_U32(ctx, 31, 0x278820u);
    ctx->pc = 0x27881Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278818u;
    // 0x27881c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x278818u, 0x278820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278820u;
label_278820:
    // 0x278820: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x278820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_278824:
    // 0x278824: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x278824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
    // 0x278828: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x278828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27882c: 0x0  nop
    ctx->pc = 0x27882cu;
    // NOP
    // 0x278830: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x278830u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x278834: 0x0  nop
    ctx->pc = 0x278834u;
    // NOP
    // 0x278838: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x278838u;
    {
        const bool branch_taken_0x278838 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278838u;
        // 0x27883c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278838) {
            ctx->pc = 0x278850u;
            goto label_278850;
        }
    }
    ctx->pc = 0x278840u;
    // 0x278840: 0x8e021560  lw          $v0, 0x1560($s0)
    ctx->pc = 0x278840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5472)));
    // 0x278844: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x278844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x278848: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x278848u;
    {
        const bool branch_taken_0x278848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278848u;
        // 0x27884c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278848) {
            ctx->pc = 0x278860u;
            goto label_278860;
        }
    }
    ctx->pc = 0x278850u;
label_278850:
    // 0x278850: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x278850u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x278854: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x278854u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x278858: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x278858u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x27885c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x27885cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_278860:
    // 0x278860: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x278860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278864: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x278864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x278868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27886c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x27886cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x278870: 0x3e00008  jr          $ra
    ctx->pc = 0x278870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278870u;
        // 0x278874: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278878u;
}
