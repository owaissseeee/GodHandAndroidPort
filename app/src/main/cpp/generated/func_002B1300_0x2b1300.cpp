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

// Function: func_002B1300
// Address: 0x2b1300 - 0x2b16f0
void func_002B1300_0x2b1300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B1300_0x2b1300");
#endif

    switch (ctx->pc) {
        case 0x2b133cu: goto label_2b133c;
        case 0x2b15b0u: goto label_2b15b0;
        case 0x2b16d0u: goto label_2b16d0;
        default: break;
    }

    ctx->pc = 0x2b1300u;

    // 0x2b1300: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2b1300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2b1304: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2b1304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2b1308: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x2b1308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x2b130c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2b130cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2b1310: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b1310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1314: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x2b1314u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2b1318: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x2b1318u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2b131c: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x2b131cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x2b1320: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x2b1320u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2b1324: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2b1324u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2b1328: 0x8c442388  lw          $a0, 0x2388($v0)
    ctx->pc = 0x2b1328u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2388u));
    // 0x2b132c: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x2b132cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x2b1330: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2b1330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2b1334: 0xc0ab38a  jal         func_2ACE28
    ctx->pc = 0x2B1334u;
    SET_GPR_U32(ctx, 31, 0x2B133Cu);
    ctx->pc = 0x2B1338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1334u;
    // 0x2b1338: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACE28u, 0x2B1334u, 0x2B133Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B133Cu;
label_2b133c:
    // 0x2b133c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2b133cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1340: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2b1340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2b1344: 0x8c437a0c  lw          $v1, 0x7A0C($v0)
    ctx->pc = 0x2b1344u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x2b1348: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1348u;
    {
        const bool branch_taken_0x2b1348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1348u;
        // 0x2b134c: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1348) {
            ctx->pc = 0x2B1360u;
            goto label_2b1360;
        }
    }
    ctx->pc = 0x2B1350u;
    // 0x2b1350: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2b1350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2b1354: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b1354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1358: 0x0  nop
    ctx->pc = 0x2b1358u;
    // NOP
    // 0x2b135c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2b135cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2b1360:
    // 0x2b1360: 0x2c62000e  sltiu       $v0, $v1, 0xE
    ctx->pc = 0x2b1360u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x2b1364: 0x104000da  beqz        $v0, . + 4 + (0xDA << 2)
    ctx->pc = 0x2B1364u;
    {
        const bool branch_taken_0x2b1364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1364u;
        // 0x2b1368: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1364) {
            ctx->pc = 0x2B16D0u;
            goto label_2b16d0;
        }
    }
    ctx->pc = 0x2B136Cu;
    // 0x2b136c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b136cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b1370: 0x2442b150  addiu       $v0, $v0, -0x4EB0
    ctx->pc = 0x2b1370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947152));
    // 0x2b1374: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b1374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b1378: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b1378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b137c: 0x800008  jr          $a0
    ctx->pc = 0x2B137Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B1384u: goto label_2b1384;
            case 0x2B13A0u: goto label_2b13a0;
            case 0x2B13C4u: goto label_2b13c4;
            case 0x2B13DCu: goto label_2b13dc;
            case 0x2B1408u: goto label_2b1408;
            case 0x2B1428u: goto label_2b1428;
            case 0x2B144Cu: goto label_2b144c;
            case 0x2B1474u: goto label_2b1474;
            case 0x2B148Cu: goto label_2b148c;
            case 0x2B14B8u: goto label_2b14b8;
            case 0x2B14D8u: goto label_2b14d8;
            case 0x2B1504u: goto label_2b1504;
            case 0x2B1528u: goto label_2b1528;
            case 0x2B155Cu: goto label_2b155c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B137Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B1384u;
label_2b1384:
    // 0x2b1384: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2b1384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2b1388: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b1388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b138c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2b138cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2b1390: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2b1390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b1394: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2b1394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2b1398: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2B1398u;
    {
        const bool branch_taken_0x2b1398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1398u;
        // 0x2b139c: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1398) {
            ctx->pc = 0x2B1584u;
            goto label_2b1584;
        }
    }
    ctx->pc = 0x2B13A0u;
label_2b13a0:
    // 0x2b13a0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2b13a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2b13a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b13a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b13a8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b13a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b13ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b13acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b13b0: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2b13b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b13b4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2b13b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2b13b8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2b13b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2b13bc: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x2B13BCu;
    {
        const bool branch_taken_0x2b13bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B13C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B13BCu;
        // 0x2b13c0: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b13bc) {
            ctx->pc = 0x2B1584u;
            goto label_2b1584;
        }
    }
    ctx->pc = 0x2B13C4u;
label_2b13c4:
    // 0x2b13c4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b13c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b13c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b13c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b13cc: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2b13ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2b13d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b13d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b13d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B13D4u;
    {
        const bool branch_taken_0x2b13d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b13d4) {
            ctx->pc = 0x2B13ECu;
            goto label_2b13ec;
        }
    }
    ctx->pc = 0x2B13DCu;
label_2b13dc:
    // 0x2b13dc: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2b13dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2b13e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b13e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b13e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b13e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b13e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b13e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b13ec:
    // 0x2b13ec: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2b13ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2b13f0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b13f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b13f4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2b13f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2b13f8: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x2b13f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2b13fc: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2b13fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b1400: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x2B1400u;
    {
        const bool branch_taken_0x2b1400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1400u;
        // 0x2b1404: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1400) {
            ctx->pc = 0x2B1584u;
            goto label_2b1584;
        }
    }
    ctx->pc = 0x2B1408u;
label_2b1408:
    // 0x2b1408: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b1408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b140c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b140cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1410: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2b1410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2b1414: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b1414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b1418: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2b1418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2b141c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b141cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b1420: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2B1420u;
    {
        const bool branch_taken_0x2b1420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1420u;
        // 0x2b1424: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1420) {
            ctx->pc = 0x2B14F4u;
            goto label_2b14f4;
        }
    }
    ctx->pc = 0x2B1428u;
label_2b1428:
    // 0x2b1428: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2b1428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2b142c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b142cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b1430: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b1430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b1434: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b1434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1438: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x2b1438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2b143c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2b143cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b1440: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2b1440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2b1444: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2B1444u;
    {
        const bool branch_taken_0x2b1444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1444u;
        // 0x2b1448: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1444) {
            ctx->pc = 0x2B1584u;
            goto label_2b1584;
        }
    }
    ctx->pc = 0x2B144Cu;
label_2b144c:
    // 0x2b144c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2b144cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2b1450: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b1450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1454: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2b1454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2b1458: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b1458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b145c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b145cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b1460: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b1460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b1464: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b1464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b1468: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2b1468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b146c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2B146Cu;
    {
        const bool branch_taken_0x2b146c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B146Cu;
        // 0x2b1470: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b146c) {
            ctx->pc = 0x2B154Cu;
            goto label_2b154c;
        }
    }
    ctx->pc = 0x2B1474u;
label_2b1474:
    // 0x2b1474: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2b1474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2b1478: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b1478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b147c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b147cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b1480: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b1480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b1484: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2B1484u;
    {
        const bool branch_taken_0x2b1484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1484u;
        // 0x2b1488: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1484) {
            ctx->pc = 0x2B1518u;
            goto label_2b1518;
        }
    }
    ctx->pc = 0x2B148Cu;
label_2b148c:
    // 0x2b148c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b148cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b1490: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b1490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1494: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2b1494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2b1498: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b1498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b149c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2b149cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2b14a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b14a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b14a4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2b14a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2b14a8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2b14a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2b14ac: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2b14acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b14b0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2B14B0u;
    {
        const bool branch_taken_0x2b14b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B14B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B14B0u;
        // 0x2b14b4: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b14b0) {
            ctx->pc = 0x2B1584u;
            goto label_2b1584;
        }
    }
    ctx->pc = 0x2B14B8u;
label_2b14b8:
    // 0x2b14b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b14b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b14bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b14bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b14c0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2b14c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2b14c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b14c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b14c8: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2b14c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2b14cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b14ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b14d0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2B14D0u;
    {
        const bool branch_taken_0x2b14d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B14D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B14D0u;
        // 0x2b14d4: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b14d0) {
            ctx->pc = 0x2B1578u;
            goto label_2b1578;
        }
    }
    ctx->pc = 0x2B14D8u;
label_2b14d8:
    // 0x2b14d8: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2b14d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2b14dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b14dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b14e0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b14e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b14e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b14e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b14e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b14e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b14ec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b14ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b14f0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2b14f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2b14f4:
    // 0x2b14f4: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x2b14f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2b14f8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2b14f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b14fc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2B14FCu;
    {
        const bool branch_taken_0x2b14fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B14FCu;
        // 0x2b1500: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b14fc) {
            ctx->pc = 0x2B1584u;
            goto label_2b1584;
        }
    }
    ctx->pc = 0x2B1504u;
label_2b1504:
    // 0x2b1504: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b1504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b1508: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b1508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b150c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2b150cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2b1510: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b1510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b1514: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2b1514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2b1518:
    // 0x2b1518: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2b1518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b151c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2b151cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2b1520: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2B1520u;
    {
        const bool branch_taken_0x2b1520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1520u;
        // 0x2b1524: 0xe7a1001c  swc1        $f1, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1520) {
            ctx->pc = 0x2B1584u;
            goto label_2b1584;
        }
    }
    ctx->pc = 0x2B1528u;
label_2b1528:
    // 0x2b1528: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2b1528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2b152c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b152cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1530: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2b1530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2b1534: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b1534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b1538: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b1538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b153c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b153cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b1540: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b1540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b1544: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2b1544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b1548: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2b1548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2b154c:
    // 0x2b154c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2b154cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2b1550: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x2b1550u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2b1554: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2B1554u;
    {
        const bool branch_taken_0x2b1554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1554u;
        // 0x2b1558: 0xe7a30020  swc1        $f3, 0x20($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1554) {
            ctx->pc = 0x2B1584u;
            goto label_2b1584;
        }
    }
    ctx->pc = 0x2B155Cu;
label_2b155c:
    // 0x2b155c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2b155cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2b1560: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b1560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1564: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2b1564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2b1568: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b1568u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b156c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b156cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b1570: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b1570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b1574: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2b1574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2b1578:
    // 0x2b1578: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x2b1578u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2b157c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2b157cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b1580: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2b1580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_2b1584:
    // 0x2b1584: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b1584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1588: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2b1588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2b158c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2b158cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2b1590: 0x60682d  daddu       $t5, $v1, $zero
    ctx->pc = 0x2b1590u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1594: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b1594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b1598: 0x27ac00c0  addiu       $t4, $sp, 0xC0
    ctx->pc = 0x2b1598u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2b159c: 0x27ae0070  addiu       $t6, $sp, 0x70
    ctx->pc = 0x2b159cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b15a0: 0x27af0080  addiu       $t7, $sp, 0x80
    ctx->pc = 0x2b15a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2b15a4: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x2b15a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2b15a8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2b15a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b15ac: 0x0  nop
    ctx->pc = 0x2b15acu;
    // NOP
label_2b15b0:
    // 0x2b15b0: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x2b15b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2b15b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b15b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b15b8: 0x0  nop
    ctx->pc = 0x2b15b8u;
    // NOP
    // 0x2b15bc: 0x0  nop
    ctx->pc = 0x2b15bcu;
    // NOP
    // 0x2b15c0: 0x1444fffb  bne         $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2B15C0u;
    {
        const bool branch_taken_0x2b15c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B15C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B15C0u;
        // 0x2b15c4: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b15c0) {
            ctx->pc = 0x2B15B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b15b0;
        }
    }
    ctx->pc = 0x2B15C8u;
    // 0x2b15c8: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x2b15c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2b15cc: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x2b15ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2b15d0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b15d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b15d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b15d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b15d8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2b15d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b15dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b15dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b15e0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2b15e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2b15e4: 0x3c058080  lui         $a1, 0x8080
    ctx->pc = 0x2b15e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32896 << 16));
    // 0x2b15e8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2b15e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2b15ec: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x2b15ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b15f0: 0xe5800004  swc1        $f0, 0x4($t4)
    ctx->pc = 0x2b15f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x2b15f4: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x2b15f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x2b15f8: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x2b15f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x2b15fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b15fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1600: 0xe585000c  swc1        $f5, 0xC($t4)
    ctx->pc = 0x2b1600u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 12), bits); }
    // 0x2b1604: 0x24083b00  addiu       $t0, $zero, 0x3B00
    ctx->pc = 0x2b1604u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15104));
    // 0x2b1608: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x2b1608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x2b160c: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x2b160cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x2b1610: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2b1610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2b1614: 0x24091cf0  addiu       $t1, $zero, 0x1CF0
    ctx->pc = 0x2b1614u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7408));
    // 0x2b1618: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x2b1618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b161c: 0x27aa0010  addiu       $t2, $sp, 0x10
    ctx->pc = 0x2b161cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b1620: 0xc7a600c8  lwc1        $f6, 0xC8($sp)
    ctx->pc = 0x2b1620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b1624: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x2b1624u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b1628: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x2b1628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b162c: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x2b162cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
    // 0x2b1630: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b1630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b1634: 0xe7a400c0  swc1        $f4, 0xC0($sp)
    ctx->pc = 0x2b1634u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2b1638: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x2b1638u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2b163c: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x2b163cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2b1640: 0xe7a600a8  swc1        $f6, 0xA8($sp)
    ctx->pc = 0x2b1640u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2b1644: 0xe5820004  swc1        $f2, 0x4($t4)
    ctx->pc = 0x2b1644u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x2b1648: 0x3c0141d0  lui         $at, 0x41D0
    ctx->pc = 0x2b1648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16848 << 16));
    // 0x2b164c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b164cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1650: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x2b1650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x2b1654: 0xe585000c  swc1        $f5, 0xC($t4)
    ctx->pc = 0x2b1654u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 12), bits); }
    // 0x2b1658: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x2b1658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x2b165c: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x2b165cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x2b1660: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x2b1660u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x2b1664: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2b1664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2b1668: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x2b1668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b166c: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x2b166cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b1670: 0x4600a980  add.s       $f6, $f21, $f0
    ctx->pc = 0x2b1670u;
    ctx->f[6] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x2b1674: 0xc7a300c8  lwc1        $f3, 0xC8($sp)
    ctx->pc = 0x2b1674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b1678: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2b1678u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2b167c: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x2b167cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2b1680: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x2b1680u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2b1684: 0xe7a300b8  swc1        $f3, 0xB8($sp)
    ctx->pc = 0x2b1684u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2b1688: 0xe7b50060  swc1        $f21, 0x60($sp)
    ctx->pc = 0x2b1688u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2b168c: 0xe7b40064  swc1        $f20, 0x64($sp)
    ctx->pc = 0x2b168cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2b1690: 0xe5a40008  swc1        $f4, 0x8($t5)
    ctx->pc = 0x2b1690u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
    // 0x2b1694: 0xe5a5000c  swc1        $f5, 0xC($t5)
    ctx->pc = 0x2b1694u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 12), bits); }
    // 0x2b1698: 0xe7a60070  swc1        $f6, 0x70($sp)
    ctx->pc = 0x2b1698u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2b169c: 0xe7b40074  swc1        $f20, 0x74($sp)
    ctx->pc = 0x2b169cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2b16a0: 0xe5c5000c  swc1        $f5, 0xC($t6)
    ctx->pc = 0x2b16a0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 12), bits); }
    // 0x2b16a4: 0xe5c40008  swc1        $f4, 0x8($t6)
    ctx->pc = 0x2b16a4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
    // 0x2b16a8: 0xe7b50080  swc1        $f21, 0x80($sp)
    ctx->pc = 0x2b16a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2b16ac: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2b16acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2b16b0: 0xe5e5000c  swc1        $f5, 0xC($t7)
    ctx->pc = 0x2b16b0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 12), bits); }
    // 0x2b16b4: 0xe5e40008  swc1        $f4, 0x8($t7)
    ctx->pc = 0x2b16b4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
    // 0x2b16b8: 0xe7a60090  swc1        $f6, 0x90($sp)
    ctx->pc = 0x2b16b8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2b16bc: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2b16bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2b16c0: 0xe605000c  swc1        $f5, 0xC($s0)
    ctx->pc = 0x2b16c0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2b16c4: 0xe6040008  swc1        $f4, 0x8($s0)
    ctx->pc = 0x2b16c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2b16c8: 0xc056f3c  jal         func_15BCF0
    ctx->pc = 0x2B16C8u;
    SET_GPR_U32(ctx, 31, 0x2B16D0u);
    ctx->pc = 0x2B16CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B16C8u;
    // 0x2b16cc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BCF0u, 0x2B16C8u, 0x2B16D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B16D0u;
label_2b16d0:
    // 0x2b16d0: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x2b16d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2b16d4: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x2b16d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2b16d8: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x2b16d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b16dc: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x2b16dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b16e0: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x2b16e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b16e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B16E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B16E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B16E4u;
        // 0x2b16e8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B16E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B16ECu;
    // 0x2b16ec: 0x0  nop
    ctx->pc = 0x2b16ecu;
    // NOP
    ctx->pc = 0x2b16f0u;
}
