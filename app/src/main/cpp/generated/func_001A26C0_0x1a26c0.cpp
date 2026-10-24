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

// Function: func_001A26C0
// Address: 0x1a26c0 - 0x1a2aa8
void func_001A26C0_0x1a26c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A26C0_0x1a26c0");
#endif

    switch (ctx->pc) {
        case 0x1a26f4u: goto label_1a26f4;
        case 0x1a2788u: goto label_1a2788;
        case 0x1a279cu: goto label_1a279c;
        case 0x1a27d0u: goto label_1a27d0;
        case 0x1a27fcu: goto label_1a27fc;
        case 0x1a2818u: goto label_1a2818;
        case 0x1a2828u: goto label_1a2828;
        case 0x1a2838u: goto label_1a2838;
        case 0x1a2848u: goto label_1a2848;
        case 0x1a2858u: goto label_1a2858;
        case 0x1a2868u: goto label_1a2868;
        case 0x1a2880u: goto label_1a2880;
        case 0x1a2898u: goto label_1a2898;
        case 0x1a29bcu: goto label_1a29bc;
        case 0x1a29e0u: goto label_1a29e0;
        case 0x1a2a18u: goto label_1a2a18;
        case 0x1a2a64u: goto label_1a2a64;
        default: break;
    }

    ctx->pc = 0x1a26c0u;

    // 0x1a26c0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1a26c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1a26c4: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1a26c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x1a26c8: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1a26c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1a26cc: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1a26ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x1a26d0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1a26d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x1a26d4: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1a26d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1a26d8: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1a26d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x1a26dc: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1a26dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1a26e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1a26e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1a26e4: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1a26e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x1a26e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a26e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a26ec: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1A26ECu;
    SET_GPR_U32(ctx, 31, 0x1A26F4u);
    ctx->pc = 0x1A26F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A26ECu;
    // 0x1a26f0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1A26ECu, 0x1A26F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A26F4u;
label_1a26f4:
    // 0x1a26f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a26f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a26f8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a26f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a26fc: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x1a26fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
    // 0x1a2700: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a2700u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a2704: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2708: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1a2708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a270c: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x1a270cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x1a2710: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a2710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a2714: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x1a2714u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x1a2718: 0x3c014033  lui         $at, 0x4033
    ctx->pc = 0x1a2718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16435 << 16));
    // 0x1a271c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1a271cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1a2720: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a2720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a2724: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x1a2724u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a2728: 0x3c01bf8d  lui         $at, 0xBF8D
    ctx->pc = 0x1a2728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49037 << 16));
    // 0x1a272c: 0x3421f3b6  ori         $at, $at, 0xF3B6
    ctx->pc = 0x1a272cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62390);
    // 0x1a2730: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a2730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a2734: 0x26104380  addiu       $s0, $s0, 0x4380
    ctx->pc = 0x1a2734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17280));
    // 0x1a2738: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1a2738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a273c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a273cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2740: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1a2740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a2744: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a2744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2748: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1a2748u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1a274c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a274cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2750: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1a2750u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a2754: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a2754u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2758: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1a2758u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1a275c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1a275cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1a2760: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1a2760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1a2764: 0x3c013f8a  lui         $at, 0x3F8A
    ctx->pc = 0x1a2764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16266 << 16));
    // 0x1a2768: 0x34217efa  ori         $at, $at, 0x7EFA
    ctx->pc = 0x1a2768u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32506);
    // 0x1a276c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a276cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2770: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x1a2770u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1a2774: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1a2774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a2778: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1a2778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1a277c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1a277cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1a2780: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x1A2780u;
    SET_GPR_U32(ctx, 31, 0x1A2788u);
    ctx->pc = 0x1A2784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2780u;
    // 0x1a2784: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x1A2780u, 0x1A2788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2788u;
label_1a2788:
    // 0x1a2788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a278c: 0xae220600  sw          $v0, 0x600($s1)
    ctx->pc = 0x1a278cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1536), GPR_U32(ctx, 2));
    // 0x1a2790: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a2790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2794: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x1A2794u;
    SET_GPR_U32(ctx, 31, 0x1A279Cu);
    ctx->pc = 0x1A2798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2794u;
    // 0x1a2798: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x1A2794u, 0x1A279Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A279Cu;
label_1a279c:
    // 0x1a279c: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1a279cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1a27a0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A27A0u;
    {
        const bool branch_taken_0x1a27a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A27A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27A0u;
        // 0x1a27a4: 0xae220604  sw          $v0, 0x604($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a27a0) {
            ctx->pc = 0x1A27D0u;
            goto label_1a27d0;
        }
    }
    ctx->pc = 0x1A27A8u;
    // 0x1a27a8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a27a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a27ac: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1a27acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1a27b0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1a27b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1a27b4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a27b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a27b8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1a27b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1a27bc: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x1a27bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x1a27c0: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x1a27c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1a27c4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1a27c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a27c8: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x1A27C8u;
    SET_GPR_U32(ctx, 31, 0x1A27D0u);
    ctx->pc = 0x1A27CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A27C8u;
    // 0x1a27cc: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x1A27C8u, 0x1A27D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A27D0u;
label_1a27d0:
    // 0x1a27d0: 0x8e240604  lw          $a0, 0x604($s1)
    ctx->pc = 0x1a27d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x1a27d4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A27D4u;
    {
        const bool branch_taken_0x1a27d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A27D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27D4u;
        // 0x1a27d8: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a27d4) {
            ctx->pc = 0x1A27FCu;
            goto label_1a27fc;
        }
    }
    ctx->pc = 0x1A27DCu;
    // 0x1a27dc: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1a27dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1a27e0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1a27e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1a27e4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a27e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a27e8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1a27e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1a27ec: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x1a27ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x1a27f0: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x1a27f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x1a27f4: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x1A27F4u;
    SET_GPR_U32(ctx, 31, 0x1A27FCu);
    ctx->pc = 0x1A27F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A27F4u;
    // 0x1a27f8: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x1A27F4u, 0x1A27FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A27FCu;
label_1a27fc:
    // 0x1a27fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a27fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2800: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2804: 0xa6220d9c  sh          $v0, 0xD9C($s1)
    ctx->pc = 0x1a2804u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 3484), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a2808: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a2808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a280c: 0xa6220d9a  sh          $v0, 0xD9A($s1)
    ctx->pc = 0x1a280cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 3482), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a2810: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1A2810u;
    SET_GPR_U32(ctx, 31, 0x1A2818u);
    ctx->pc = 0x1A2814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2810u;
    // 0x1a2814: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1A2810u, 0x1A2818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2818u;
label_1a2818:
    // 0x1a2818: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a281c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a281cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2820: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1A2820u;
    SET_GPR_U32(ctx, 31, 0x1A2828u);
    ctx->pc = 0x1A2824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2820u;
    // 0x1a2824: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1A2820u, 0x1A2828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2828u;
label_1a2828:
    // 0x1a2828: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a282c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a282cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2830: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1A2830u;
    SET_GPR_U32(ctx, 31, 0x1A2838u);
    ctx->pc = 0x1A2834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2830u;
    // 0x1a2834: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1A2830u, 0x1A2838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2838u;
label_1a2838:
    // 0x1a2838: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a283c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1a283cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a2840: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1A2840u;
    SET_GPR_U32(ctx, 31, 0x1A2848u);
    ctx->pc = 0x1A2844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2840u;
    // 0x1a2844: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1A2840u, 0x1A2848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2848u;
label_1a2848:
    // 0x1a2848: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a284c: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1a284cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1a2850: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1A2850u;
    SET_GPR_U32(ctx, 31, 0x1A2858u);
    ctx->pc = 0x1A2854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2850u;
    // 0x1a2854: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1A2850u, 0x1A2858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2858u;
label_1a2858:
    // 0x1a2858: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a285c: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x1a285cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1a2860: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1A2860u;
    SET_GPR_U32(ctx, 31, 0x1A2868u);
    ctx->pc = 0x1A2864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2860u;
    // 0x1a2864: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1A2860u, 0x1A2868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2868u;
label_1a2868:
    // 0x1a2868: 0x3c0c0042  lui         $t4, 0x42
    ctx->pc = 0x1a2868u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)66 << 16));
    // 0x1a286c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a286cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2870: 0x25897040  addiu       $t1, $t4, 0x7040
    ctx->pc = 0x1a2870u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 28736));
    // 0x1a2874: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a2874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a2878: 0x252b0001  addiu       $t3, $t1, 0x1
    ctx->pc = 0x1a2878u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1a287c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a287cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1a2880:
    // 0x1a2880: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x1a2880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1a2884: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x1a2884u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a2888: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1a2888u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a288c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1A288Cu;
    {
        const bool branch_taken_0x1a288c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A288Cu;
        // 0x1a2890: 0x24880001  addiu       $t0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a288c) {
            ctx->pc = 0x1A2924u;
            goto label_1a2924;
        }
    }
    ctx->pc = 0x1A2894u;
    // 0x1a2894: 0x0  nop
    ctx->pc = 0x1a2894u;
    // NOP
label_1a2898:
    // 0x1a2898: 0xca102a  slt         $v0, $a2, $t2
    ctx->pc = 0x1a2898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1a289c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A289Cu;
    {
        const bool branch_taken_0x1a289c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A28A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A289Cu;
        // 0x1a28a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a289c) {
            ctx->pc = 0x1A28ACu;
            goto label_1a28ac;
        }
    }
    ctx->pc = 0x1A28A4u;
    // 0x1a28a4: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x1a28a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a28a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a28a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a28ac:
    // 0x1a28ac: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1a28acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a28b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A28B0u;
    {
        const bool branch_taken_0x1a28b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A28B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A28B0u;
        // 0x1a28b4: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a28b0) {
            ctx->pc = 0x1A28C8u;
            goto label_1a28c8;
        }
    }
    ctx->pc = 0x1A28B8u;
    // 0x1a28b8: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x1a28b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1a28bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a28bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a28c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A28C0u;
    {
        const bool branch_taken_0x1a28c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A28C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A28C0u;
        // 0x1a28c4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a28c0) {
            ctx->pc = 0x1A28CCu;
            goto label_1a28cc;
        }
    }
    ctx->pc = 0x1A28C8u;
label_1a28c8:
    // 0x1a28c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a28c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a28cc:
    // 0x1a28cc: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1a28ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1a28d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a28d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a28d4: 0xca182a  slt         $v1, $a2, $t2
    ctx->pc = 0x1a28d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1a28d8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1a28d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1a28dc: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1a28dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1a28e0: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1a28e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1a28e4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A28E4u;
    {
        const bool branch_taken_0x1a28e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A28E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A28E4u;
        // 0x1a28e8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a28e4) {
            ctx->pc = 0x1A28F4u;
            goto label_1a28f4;
        }
    }
    ctx->pc = 0x1A28ECu;
    // 0x1a28ec: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1a28ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a28f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a28f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a28f4:
    // 0x1a28f4: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1a28f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a28f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A28F8u;
    {
        const bool branch_taken_0x1a28f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A28FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A28F8u;
        // 0x1a28fc: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a28f8) {
            ctx->pc = 0x1A2910u;
            goto label_1a2910;
        }
    }
    ctx->pc = 0x1A2900u;
    // 0x1a2900: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x1a2900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1a2904: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a2904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a2908: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A2908u;
    {
        const bool branch_taken_0x1a2908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2908u;
        // 0x1a290c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2908) {
            ctx->pc = 0x1A2914u;
            goto label_1a2914;
        }
    }
    ctx->pc = 0x1A2910u;
label_1a2910:
    // 0x1a2910: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a2910u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2914:
    // 0x1a2914: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1a2914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1a2918: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a2918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a291c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1a291cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1a2920: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1a2920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
label_1a2924:
    // 0x1a2924: 0xe92021  addu        $a0, $a3, $t1
    ctx->pc = 0x1a2924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1a2928: 0xeb2821  addu        $a1, $a3, $t3
    ctx->pc = 0x1a2928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x1a292c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1a292cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a2930: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1a2930u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a2934: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a2934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a2938: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1a2938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a293c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A293Cu;
    {
        const bool branch_taken_0x1a293c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a293c) {
            ctx->pc = 0x1A2940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A293Cu;
            // 0x1a2940: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2958u;
            goto label_1a2958;
        }
    }
    ctx->pc = 0x1A2944u;
    // 0x1a2944: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1a2944u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1a2948: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x1a2948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a294c: 0x5440ffd2  bnel        $v0, $zero, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1A294Cu;
    {
        const bool branch_taken_0x1a294c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a294c) {
            ctx->pc = 0x1A2950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A294Cu;
            // 0x1a2950: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2898;
        }
    }
    ctx->pc = 0x1A2954u;
    // 0x1a2954: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1a2954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a2958:
    // 0x1a2958: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x1a2958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1a295c: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1A295Cu;
    {
        const bool branch_taken_0x1a295c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A295Cu;
        // 0x1a2960: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a295c) {
            ctx->pc = 0x1A2880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2880;
        }
    }
    ctx->pc = 0x1A2964u;
    // 0x1a2964: 0x25827040  addiu       $v0, $t4, 0x7040
    ctx->pc = 0x1a2964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 28736));
    // 0x1a2968: 0x9056000b  lbu         $s6, 0xB($v0)
    ctx->pc = 0x1a2968u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x1a296c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1a296cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a2970: 0x90440004  lbu         $a0, 0x4($v0)
    ctx->pc = 0x1a2970u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a2974: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a2974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2978: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1a2978u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1a297c: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x1a297cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1a2980: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2980u;
    {
        const bool branch_taken_0x1a2980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2980u;
        // 0x1a2984: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2980) {
            ctx->pc = 0x1A2990u;
            goto label_1a2990;
        }
    }
    ctx->pc = 0x1A2988u;
    // 0x1a2988: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1a2988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a298c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a298cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2990:
    // 0x1a2990: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1a2990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a2994: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2994u;
    {
        const bool branch_taken_0x1a2994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2994u;
        // 0x1a2998: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2994) {
            ctx->pc = 0x1A29ACu;
            goto label_1a29ac;
        }
    }
    ctx->pc = 0x1A299Cu;
    // 0x1a299c: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x1a299cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1a29a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a29a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a29a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A29A4u;
    {
        const bool branch_taken_0x1a29a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A29A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29A4u;
        // 0x1a29a8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a29a4) {
            ctx->pc = 0x1A29B0u;
            goto label_1a29b0;
        }
    }
    ctx->pc = 0x1A29ACu;
label_1a29ac:
    // 0x1a29ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a29acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a29b0:
    // 0x1a29b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a29b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a29b4: 0xc051f18  jal         func_147C60
    ctx->pc = 0x1A29B4u;
    SET_GPR_U32(ctx, 31, 0x1A29BCu);
    ctx->pc = 0x1A29B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A29B4u;
    // 0x1a29b8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1A29B4u, 0x1A29BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A29BCu;
label_1a29bc:
    // 0x1a29bc: 0x12c0002c  beqz        $s6, . + 4 + (0x2C << 2)
    ctx->pc = 0x1A29BCu;
    {
        const bool branch_taken_0x1a29bc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A29C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29BCu;
        // 0x1a29c0: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a29bc) {
            ctx->pc = 0x1A2A70u;
            goto label_1a2a70;
        }
    }
    ctx->pc = 0x1A29C4u;
    // 0x1a29c4: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x1a29c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a29c8: 0x9043704a  lbu         $v1, 0x704A($v0)
    ctx->pc = 0x1a29c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 28746)));
    // 0x1a29cc: 0x27b70030  addiu       $s7, $sp, 0x30
    ctx->pc = 0x1a29ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a29d0: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x1a29d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a29d4: 0x39880  sll         $s3, $v1, 2
    ctx->pc = 0x1a29d4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a29d8: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1a29d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1a29dc: 0x0  nop
    ctx->pc = 0x1a29dcu;
    // NOP
label_1a29e0:
    // 0x1a29e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a29e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a29e4: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A29E4u;
    {
        const bool branch_taken_0x1a29e4 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1A29E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29E4u;
        // 0x1a29e8: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a29e4) {
            ctx->pc = 0x1A29F0u;
            goto label_1a29f0;
        }
    }
    ctx->pc = 0x1A29ECu;
    // 0x1a29ec: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1a29ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a29f0:
    // 0x1a29f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a29f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a29f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A29F4u;
    {
        const bool branch_taken_0x1a29f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A29F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29F4u;
        // 0x1a29f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a29f4) {
            ctx->pc = 0x1A2A08u;
            goto label_1a2a08;
        }
    }
    ctx->pc = 0x1A29FCu;
    // 0x1a29fc: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1a29fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1a2a00: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1a2a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1a2a04: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1a2a04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a2a08:
    // 0x1a2a08: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1a2a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a2a0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a2a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2a10: 0xc051f18  jal         func_147C60
    ctx->pc = 0x1A2A10u;
    SET_GPR_U32(ctx, 31, 0x1A2A18u);
    ctx->pc = 0x1A2A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2A10u;
    // 0x1a2a14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1A2A10u, 0x1A2A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2A18u;
label_1a2a18:
    // 0x1a2a18: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1a2a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a2a1c: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1a2a1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1a2a20: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1a2a20u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2a24: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1a2a24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1a2a28: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1a2a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a2a2c: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x1a2a2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1a2a30: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1a2a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a2a34: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1a2a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2a3c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1a2a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2a40: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1a2a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2a44: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1a2a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2a48: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1a2a48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1a2a4c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1a2a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a2a50: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1a2a50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1a2a54: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1a2a54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a2a58: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a2a58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a2a5c: 0xc051f10  jal         func_147C40
    ctx->pc = 0x1A2A5Cu;
    SET_GPR_U32(ctx, 31, 0x1A2A64u);
    ctx->pc = 0x1A2A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2A5Cu;
    // 0x1a2a60: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x1A2A5Cu, 0x1A2A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2A64u;
label_1a2a64:
    // 0x1a2a64: 0x2b6102b  sltu        $v0, $s5, $s6
    ctx->pc = 0x1a2a64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1a2a68: 0x5440ffdd  bnel        $v0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1A2A68u;
    {
        const bool branch_taken_0x1a2a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2a68) {
            ctx->pc = 0x1A2A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2A68u;
            // 0x1a2a6c: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A29E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a29e0;
        }
    }
    ctx->pc = 0x1A2A70u;
label_1a2a70:
    // 0x1a2a70: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1a2a70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a2a74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2a78: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1a2a78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a2a7c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1a2a7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a2a80: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1a2a80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a2a84: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1a2a84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a2a88: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1a2a88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a2a8c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1a2a8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a2a90: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x1a2a90u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a2a94: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a2a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a2a98: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1a2a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a2a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2A9Cu;
        // 0x1a2aa0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2AA4u;
    // 0x1a2aa4: 0x0  nop
    ctx->pc = 0x1a2aa4u;
    // NOP
    ctx->pc = 0x1a2aa8u;
}
