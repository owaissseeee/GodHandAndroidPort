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

// Function: func_00182690
// Address: 0x182690 - 0x182818
void func_00182690_0x182690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00182690_0x182690");
#endif

    switch (ctx->pc) {
        case 0x1826b4u: goto label_1826b4;
        case 0x182718u: goto label_182718;
        case 0x18274cu: goto label_18274c;
        case 0x18275cu: goto label_18275c;
        case 0x182790u: goto label_182790;
        case 0x1827b0u: goto label_1827b0;
        case 0x1827f4u: goto label_1827f4;
        default: break;
    }

    ctx->pc = 0x182690u;

    // 0x182690: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x182690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x182694: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x182694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x182698: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x182698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x18269c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x18269cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1826a0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1826a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1826a4: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1826a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1826a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1826a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1826ac: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1826ACu;
    SET_GPR_U32(ctx, 31, 0x1826B4u);
    ctx->pc = 0x1826B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1826ACu;
    // 0x1826b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1826ACu, 0x1826B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1826B4u;
label_1826b4:
    // 0x1826b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1826b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1826b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1826b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1826bc: 0x3c01404f  lui         $at, 0x404F
    ctx->pc = 0x1826bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16463 << 16));
    // 0x1826c0: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1826c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1826c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1826c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1826c8: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1826c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1826cc: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x1826ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1826d0: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1826d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1826d4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1826d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1826d8: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1826d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1826dc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1826dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1826e0: 0x24534380  addiu       $s3, $v0, 0x4380
    ctx->pc = 0x1826e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 17280));
    // 0x1826e4: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x1826e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1826e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1826e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1826ec: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1826ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1826f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1826f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1826f4: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x1826f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1826f8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1826f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1826fc: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x1826fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x182700: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x182700u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x182704: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x182704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x182708: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x182708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x18270c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x18270cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x182710: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x182710u;
    SET_GPR_U32(ctx, 31, 0x182718u);
    ctx->pc = 0x182714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182710u;
    // 0x182714: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x182710u, 0x182718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182718u;
label_182718:
    // 0x182718: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x182718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18271c: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x18271Cu;
    {
        const bool branch_taken_0x18271c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x182720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18271Cu;
        // 0x182720: 0xae040600  sw          $a0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18271c) {
            ctx->pc = 0x18274Cu;
            goto label_18274c;
        }
    }
    ctx->pc = 0x182724u;
    // 0x182724: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x182724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x182728: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x182728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x18272c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x18272cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x182730: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x182730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182734: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x182734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x182738: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x182738u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18273c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x18273cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182740: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x182740u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x182744: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x182744u;
    SET_GPR_U32(ctx, 31, 0x18274Cu);
    ctx->pc = 0x182748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182744u;
    // 0x182748: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x182744u, 0x18274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18274Cu;
label_18274c:
    // 0x18274c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18274cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182750: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x182750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182754: 0xc07f83a  jal         func_1FE0E8
    ctx->pc = 0x182754u;
    SET_GPR_U32(ctx, 31, 0x18275Cu);
    ctx->pc = 0x182758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182754u;
    // 0x182758: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x182754u, 0x18275Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18275Cu;
label_18275c:
    // 0x18275c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18275cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182760: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x182760u;
    {
        const bool branch_taken_0x182760 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x182764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182760u;
        // 0x182764: 0xae040604  sw          $a0, 0x604($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182760) {
            ctx->pc = 0x1827B0u;
            goto label_1827b0;
        }
    }
    ctx->pc = 0x182768u;
    // 0x182768: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x182768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18276c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x18276cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x182770: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x182770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x182774: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x182774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x182778: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x182778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x18277c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18277cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182780: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x182780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x182784: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x182784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x182788: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x182788u;
    SET_GPR_U32(ctx, 31, 0x182790u);
    ctx->pc = 0x18278Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182788u;
    // 0x18278c: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x182788u, 0x182790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182790u;
label_182790:
    // 0x182790: 0x8e040604  lw          $a0, 0x604($s0)
    ctx->pc = 0x182790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x182794: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x182794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x182798: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x182798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18279c: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x18279cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x1827a0: 0x8e020604  lw          $v0, 0x604($s0)
    ctx->pc = 0x1827a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x1827a4: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x1827a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x1827a8: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1827A8u;
    SET_GPR_U32(ctx, 31, 0x1827B0u);
    ctx->pc = 0x1827ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1827A8u;
    // 0x1827ac: 0x8e040604  lw          $a0, 0x604($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1827A8u, 0x1827B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1827B0u;
label_1827b0:
    // 0x1827b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1827b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1827b4: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x1827b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x1827b8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1827b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1827bc: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x1827bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1827c0: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x1827c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x1827c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1827c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1827c8: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x1827c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x1827cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1827ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1827d0: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x1827d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x1827d4: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x1827d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x1827d8: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x1827d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x1827dc: 0xae050608  sw          $a1, 0x608($s0)
    ctx->pc = 0x1827dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 5));
    // 0x1827e0: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x1827e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x1827e4: 0xae0705ec  sw          $a3, 0x5EC($s0)
    ctx->pc = 0x1827e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 7));
    // 0x1827e8: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x1827e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x1827ec: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x1827ECu;
    SET_GPR_U32(ctx, 31, 0x1827F4u);
    ctx->pc = 0x1827F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1827ECu;
    // 0x1827f0: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x1827ECu, 0x1827F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1827F4u;
label_1827f4:
    // 0x1827f4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1827f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1827f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1827f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1827fc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1827fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x182800: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x182800u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x182804: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x182804u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x182808: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x182808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18280c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x18280cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x182810: 0x3e00008  jr          $ra
    ctx->pc = 0x182810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182810u;
        // 0x182814: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182818u;
}
