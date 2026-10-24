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

// Function: func_00178618
// Address: 0x178618 - 0x1787a0
void func_00178618_0x178618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00178618_0x178618");
#endif

    switch (ctx->pc) {
        case 0x178638u: goto label_178638;
        case 0x178694u: goto label_178694;
        case 0x1786d4u: goto label_1786d4;
        case 0x1786e4u: goto label_1786e4;
        case 0x178718u: goto label_178718;
        case 0x178738u: goto label_178738;
        case 0x17877cu: goto label_17877c;
        default: break;
    }

    ctx->pc = 0x178618u;

    // 0x178618: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x178618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x17861c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x17861cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x178620: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x178620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x178624: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x178624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x178628: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x178628u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x17862c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17862cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x178630: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x178630u;
    SET_GPR_U32(ctx, 31, 0x178638u);
    ctx->pc = 0x178634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178630u;
    // 0x178634: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x178630u, 0x178638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178638u;
label_178638:
    // 0x178638: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x178638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17863c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17863cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x178640: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x178640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x178644: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x178644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178648: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x178648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x17864c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x17864cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x178650: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x178650u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x178654: 0x24524380  addiu       $s2, $v0, 0x4380
    ctx->pc = 0x178654u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 17280));
    // 0x178658: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x178658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x17865c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x17865cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x178660: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x178660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178664: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x178664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x178668: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x178668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17866c: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x17866cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x178670: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x178670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x178674: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x178674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x178678: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x178678u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x17867c: 0xe7b4001c  swc1        $f20, 0x1C($sp)
    ctx->pc = 0x17867cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x178680: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x178680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x178684: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x178684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x178688: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x178688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x17868c: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x17868Cu;
    SET_GPR_U32(ctx, 31, 0x178694u);
    ctx->pc = 0x178690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17868Cu;
    // 0x178690: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x17868Cu, 0x178694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178694u;
label_178694:
    // 0x178694: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x178694u;
    {
        const bool branch_taken_0x178694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178694u;
        // 0x178698: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178694) {
            ctx->pc = 0x1786D4u;
            goto label_1786d4;
        }
    }
    ctx->pc = 0x17869Cu;
    // 0x17869c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x17869cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1786a0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1786a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1786a4: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1786a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1786a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1786a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1786ac: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1786acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1786b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1786b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1786b4: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x1786b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x1786b8: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x1786b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1786bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1786bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1786c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1786c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1786c4: 0xc7ad0010  lwc1        $f13, 0x10($sp)
    ctx->pc = 0x1786c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1786c8: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x1786c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1786cc: 0xc07f700  jal         func_1FDC00
    ctx->pc = 0x1786CCu;
    SET_GPR_U32(ctx, 31, 0x1786D4u);
    ctx->pc = 0x1786D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1786CCu;
    // 0x1786d0: 0x46006b42  mul.s       $f13, $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDC00u, 0x1786CCu, 0x1786D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1786D4u;
label_1786d4:
    // 0x1786d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1786d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1786d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1786d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1786dc: 0xc07f83a  jal         func_1FE0E8
    ctx->pc = 0x1786DCu;
    SET_GPR_U32(ctx, 31, 0x1786E4u);
    ctx->pc = 0x1786E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1786DCu;
    // 0x1786e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x1786DCu, 0x1786E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1786E4u;
label_1786e4:
    // 0x1786e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1786e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1786e8: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1786E8u;
    {
        const bool branch_taken_0x1786e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1786ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1786E8u;
        // 0x1786ec: 0xae040604  sw          $a0, 0x604($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1786e8) {
            ctx->pc = 0x178738u;
            goto label_178738;
        }
    }
    ctx->pc = 0x1786F0u;
    // 0x1786f0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1786f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1786f4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1786f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1786f8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1786f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1786fc: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x1786fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x178700: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x178700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x178704: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x178704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178708: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x178708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x17870c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17870cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x178710: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x178710u;
    SET_GPR_U32(ctx, 31, 0x178718u);
    ctx->pc = 0x178714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178710u;
    // 0x178714: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x178710u, 0x178718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178718u;
label_178718:
    // 0x178718: 0x8e040604  lw          $a0, 0x604($s0)
    ctx->pc = 0x178718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x17871c: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x17871cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x178720: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178724: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x178724u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x178728: 0x8e020604  lw          $v0, 0x604($s0)
    ctx->pc = 0x178728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x17872c: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x17872cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x178730: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x178730u;
    SET_GPR_U32(ctx, 31, 0x178738u);
    ctx->pc = 0x178734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178730u;
    // 0x178734: 0x8e040604  lw          $a0, 0x604($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x178730u, 0x178738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178738u;
label_178738:
    // 0x178738: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x178738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17873c: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x17873cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x178740: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x178740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x178744: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x178744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x178748: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x178748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x17874c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17874cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x178750: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x178750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x178754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178758: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x178758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x17875c: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x17875cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x178760: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x178760u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x178764: 0xae050608  sw          $a1, 0x608($s0)
    ctx->pc = 0x178764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 5));
    // 0x178768: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x178768u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x17876c: 0xae0705ec  sw          $a3, 0x5EC($s0)
    ctx->pc = 0x17876cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 7));
    // 0x178770: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x178770u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x178774: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x178774u;
    SET_GPR_U32(ctx, 31, 0x17877Cu);
    ctx->pc = 0x178778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178774u;
    // 0x178778: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x178774u, 0x17877Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17877Cu;
label_17877c:
    // 0x17877c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x17877cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x178780: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x178780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178784: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x178784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178788: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x178788u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17878c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17878cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178790: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x178790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x178794: 0x3e00008  jr          $ra
    ctx->pc = 0x178794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178794u;
        // 0x178798: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17879Cu;
    // 0x17879c: 0x0  nop
    ctx->pc = 0x17879cu;
    // NOP
    ctx->pc = 0x1787a0u;
}
