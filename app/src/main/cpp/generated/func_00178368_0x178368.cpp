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

// Function: func_00178368
// Address: 0x178368 - 0x1784f8
void func_00178368_0x178368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00178368_0x178368");
#endif

    switch (ctx->pc) {
        case 0x17838cu: goto label_17838c;
        case 0x1783f8u: goto label_1783f8;
        case 0x17842cu: goto label_17842c;
        case 0x17843cu: goto label_17843c;
        case 0x17846cu: goto label_17846c;
        case 0x17848cu: goto label_17848c;
        case 0x1784d0u: goto label_1784d0;
        default: break;
    }

    ctx->pc = 0x178368u;

    // 0x178368: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x178368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x17836c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x17836cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x178370: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x178370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x178374: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x178374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x178378: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x178378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x17837c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x17837cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x178380: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x178380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x178384: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x178384u;
    SET_GPR_U32(ctx, 31, 0x17838Cu);
    ctx->pc = 0x178388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178384u;
    // 0x178388: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x178384u, 0x17838Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17838Cu;
label_17838c:
    // 0x17838c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17838cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x178390: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x178390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x178394: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x178394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x178398: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x178398u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x17839c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17839cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1783a0: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1783a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1783a4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1783a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1783a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1783a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1783ac: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1783acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1783b0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1783b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1783b4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1783b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1783b8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1783b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1783bc: 0x24534380  addiu       $s3, $v0, 0x4380
    ctx->pc = 0x1783bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 17280));
    // 0x1783c0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1783c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1783c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1783c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1783c8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1783c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1783cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1783ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1783d0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1783d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1783d4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1783d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1783d8: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1783d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1783dc: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1783dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1783e0: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x1783e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1783e4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1783e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1783e8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1783e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1783ec: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1783ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1783f0: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x1783F0u;
    SET_GPR_U32(ctx, 31, 0x1783F8u);
    ctx->pc = 0x1783F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1783F0u;
    // 0x1783f4: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x1783F0u, 0x1783F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1783F8u;
label_1783f8:
    // 0x1783f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1783f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1783fc: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1783FCu;
    {
        const bool branch_taken_0x1783fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x178400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1783FCu;
        // 0x178400: 0xae040600  sw          $a0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1783fc) {
            ctx->pc = 0x17842Cu;
            goto label_17842c;
        }
    }
    ctx->pc = 0x178404u;
    // 0x178404: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x178404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x178408: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x178408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x17840c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x17840cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x178410: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x178410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178414: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x178414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x178418: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x178418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17841c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x17841cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178420: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x178420u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x178424: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x178424u;
    SET_GPR_U32(ctx, 31, 0x17842Cu);
    ctx->pc = 0x178428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178424u;
    // 0x178428: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x178424u, 0x17842Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17842Cu;
label_17842c:
    // 0x17842c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17842cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178430: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178434: 0xc07f83a  jal         func_1FE0E8
    ctx->pc = 0x178434u;
    SET_GPR_U32(ctx, 31, 0x17843Cu);
    ctx->pc = 0x178438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178434u;
    // 0x178438: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x178434u, 0x17843Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17843Cu;
label_17843c:
    // 0x17843c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17843cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178440: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x178440u;
    {
        const bool branch_taken_0x178440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x178444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178440u;
        // 0x178444: 0xae040604  sw          $a0, 0x604($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178440) {
            ctx->pc = 0x17848Cu;
            goto label_17848c;
        }
    }
    ctx->pc = 0x178448u;
    // 0x178448: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x178448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17844c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x17844cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x178450: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x178450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x178454: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x178454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x178458: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x178458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x17845c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17845cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178460: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x178460u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x178464: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x178464u;
    SET_GPR_U32(ctx, 31, 0x17846Cu);
    ctx->pc = 0x178468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178464u;
    // 0x178468: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x178464u, 0x17846Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17846Cu;
label_17846c:
    // 0x17846c: 0x8e040604  lw          $a0, 0x604($s0)
    ctx->pc = 0x17846cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x178470: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x178470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x178474: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178478: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x178478u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x17847c: 0x8e020604  lw          $v0, 0x604($s0)
    ctx->pc = 0x17847cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x178480: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x178480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x178484: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x178484u;
    SET_GPR_U32(ctx, 31, 0x17848Cu);
    ctx->pc = 0x178488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178484u;
    // 0x178488: 0x8e040604  lw          $a0, 0x604($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x178484u, 0x17848Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17848Cu;
label_17848c:
    // 0x17848c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17848cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178490: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x178490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x178494: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x178494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x178498: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x178498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x17849c: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x17849cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x1784a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1784a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1784a4: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x1784a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x1784a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1784a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1784ac: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x1784acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x1784b0: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x1784b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x1784b4: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x1784b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x1784b8: 0xae050608  sw          $a1, 0x608($s0)
    ctx->pc = 0x1784b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 5));
    // 0x1784bc: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x1784bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x1784c0: 0xae0705ec  sw          $a3, 0x5EC($s0)
    ctx->pc = 0x1784c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 7));
    // 0x1784c4: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x1784c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x1784c8: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x1784C8u;
    SET_GPR_U32(ctx, 31, 0x1784D0u);
    ctx->pc = 0x1784CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1784C8u;
    // 0x1784cc: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x1784C8u, 0x1784D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1784D0u;
label_1784d0:
    // 0x1784d0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1784d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1784d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1784d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1784d8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1784d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1784dc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1784dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1784e0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1784e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1784e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1784e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1784e8: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1784e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1784ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1784ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1784F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1784ECu;
        // 0x1784f0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1784ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1784F4u;
    // 0x1784f4: 0x0  nop
    ctx->pc = 0x1784f4u;
    // NOP
    ctx->pc = 0x1784f8u;
}
