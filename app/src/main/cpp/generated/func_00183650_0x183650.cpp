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

// Function: func_00183650
// Address: 0x183650 - 0x1837d8
void func_00183650_0x183650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00183650_0x183650");
#endif

    switch (ctx->pc) {
        case 0x18367cu: goto label_18367c;
        case 0x1836ccu: goto label_1836cc;
        case 0x183700u: goto label_183700;
        case 0x183710u: goto label_183710;
        case 0x183744u: goto label_183744;
        case 0x183764u: goto label_183764;
        case 0x1837b0u: goto label_1837b0;
        default: break;
    }

    ctx->pc = 0x183650u;

    // 0x183650: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x183650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x183654: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x183654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x183658: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x183658u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x18365c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18365cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x183660: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x183660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x183664: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x183664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x183668: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x183668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x18366c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x18366cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x183670: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x183670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x183674: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x183674u;
    SET_GPR_U32(ctx, 31, 0x18367Cu);
    ctx->pc = 0x183678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183674u;
    // 0x183678: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x183674u, 0x18367Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18367Cu;
label_18367c:
    // 0x18367c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18367cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x183680: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x183680u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183684: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x183684u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x183688: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x183688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x18368c: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x18368cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x183690: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x183690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183694: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x183694u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x183698: 0x24534380  addiu       $s3, $v0, 0x4380
    ctx->pc = 0x183698u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 17280));
    // 0x18369c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x18369cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1836a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1836a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1836a4: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x1836a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1836a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1836a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1836ac: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x1836acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1836b0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1836b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1836b4: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x1836b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1836b8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1836b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1836bc: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1836bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1836c0: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1836c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1836c4: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x1836C4u;
    SET_GPR_U32(ctx, 31, 0x1836CCu);
    ctx->pc = 0x1836C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1836C4u;
    // 0x1836c8: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x1836C4u, 0x1836CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1836CCu;
label_1836cc:
    // 0x1836cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1836ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1836d0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1836D0u;
    {
        const bool branch_taken_0x1836d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1836D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1836D0u;
        // 0x1836d4: 0xae040600  sw          $a0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1836d0) {
            ctx->pc = 0x183700u;
            goto label_183700;
        }
    }
    ctx->pc = 0x1836D8u;
    // 0x1836d8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1836d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1836dc: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1836dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1836e0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1836e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1836e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1836e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1836e8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1836e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1836ec: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1836ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1836f0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1836f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1836f4: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x1836f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1836f8: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x1836F8u;
    SET_GPR_U32(ctx, 31, 0x183700u);
    ctx->pc = 0x1836FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1836F8u;
    // 0x1836fc: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x1836F8u, 0x183700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183700u;
label_183700:
    // 0x183700: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x183700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183704: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x183704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183708: 0xc07f83a  jal         func_1FE0E8
    ctx->pc = 0x183708u;
    SET_GPR_U32(ctx, 31, 0x183710u);
    ctx->pc = 0x18370Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183708u;
    // 0x18370c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x183708u, 0x183710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183710u;
label_183710:
    // 0x183710: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x183710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183714: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x183714u;
    {
        const bool branch_taken_0x183714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x183718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183714u;
        // 0x183718: 0xae040604  sw          $a0, 0x604($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183714) {
            ctx->pc = 0x183764u;
            goto label_183764;
        }
    }
    ctx->pc = 0x18371Cu;
    // 0x18371c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x18371cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x183720: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x183720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x183724: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x183724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x183728: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x183728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x18372c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x18372cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x183730: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x183730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183734: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x183734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x183738: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x183738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18373c: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x18373Cu;
    SET_GPR_U32(ctx, 31, 0x183744u);
    ctx->pc = 0x183740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18373Cu;
    // 0x183740: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x18373Cu, 0x183744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183744u;
label_183744:
    // 0x183744: 0x8e040604  lw          $a0, 0x604($s0)
    ctx->pc = 0x183744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x183748: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x183748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x18374c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18374cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183750: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x183750u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x183754: 0x8e020604  lw          $v0, 0x604($s0)
    ctx->pc = 0x183754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x183758: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x183758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x18375c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x18375Cu;
    SET_GPR_U32(ctx, 31, 0x183764u);
    ctx->pc = 0x183760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18375Cu;
    // 0x183760: 0x8e040604  lw          $a0, 0x604($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x18375Cu, 0x183764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183764u;
label_183764:
    // 0x183764: 0x8e0205b8  lw          $v0, 0x5B8($s0)
    ctx->pc = 0x183764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x183768: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x183768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18376c: 0x26060620  addiu       $a2, $s0, 0x620
    ctx->pc = 0x18376cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x183770: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x183770u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x183774: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x183774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x183778: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x183778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x18377c: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x18377cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x183780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183784: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x183784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x183788: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x183788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x18378c: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x18378cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x183790: 0xae060608  sw          $a2, 0x608($s0)
    ctx->pc = 0x183790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 6));
    // 0x183794: 0xa203060c  sb          $v1, 0x60C($s0)
    ctx->pc = 0x183794u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 3));
    // 0x183798: 0xae0705ec  sw          $a3, 0x5EC($s0)
    ctx->pc = 0x183798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 7));
    // 0x18379c: 0xa60505f4  sh          $a1, 0x5F4($s0)
    ctx->pc = 0x18379cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 5));
    // 0x1837a0: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x1837a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x1837a4: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x1837a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x1837a8: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x1837A8u;
    SET_GPR_U32(ctx, 31, 0x1837B0u);
    ctx->pc = 0x1837ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1837A8u;
    // 0x1837ac: 0xae0205b8  sw          $v0, 0x5B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x1837A8u, 0x1837B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1837B0u;
label_1837b0:
    // 0x1837b0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1837b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1837b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1837b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1837b8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1837b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1837bc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1837bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1837c0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1837c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1837c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1837c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1837c8: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1837c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1837cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1837CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1837D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1837CCu;
        // 0x1837d0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1837CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1837D4u;
    // 0x1837d4: 0x0  nop
    ctx->pc = 0x1837d4u;
    // NOP
    ctx->pc = 0x1837d8u;
}
