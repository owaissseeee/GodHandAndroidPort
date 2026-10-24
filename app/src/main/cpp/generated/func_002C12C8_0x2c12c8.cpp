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

// Function: func_002C12C8
// Address: 0x2c12c8 - 0x2c14f8
void func_002C12C8_0x2c12c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C12C8_0x2c12c8");
#endif

    switch (ctx->pc) {
        case 0x2c1308u: goto label_2c1308;
        case 0x2c1338u: goto label_2c1338;
        case 0x2c1370u: goto label_2c1370;
        case 0x2c1380u: goto label_2c1380;
        case 0x2c1390u: goto label_2c1390;
        case 0x2c13e0u: goto label_2c13e0;
        case 0x2c1498u: goto label_2c1498;
        case 0x2c14b4u: goto label_2c14b4;
        default: break;
    }

    ctx->pc = 0x2c12c8u;

    // 0x2c12c8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2c12c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2c12cc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2c12ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2c12d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c12d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c12d4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2c12d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2c12d8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2c12d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x2c12dc: 0x26700074  addiu       $s0, $s3, 0x74
    ctx->pc = 0x2c12dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 116));
    // 0x2c12e0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2c12e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2c12e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c12e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c12e8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2c12e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2c12ec: 0x3c160074  lui         $s6, 0x74
    ctx->pc = 0x2c12ecu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)116 << 16));
    // 0x2c12f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c12f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c12f4: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x2c12f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c12f8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2c12f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2c12fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c12fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c1300: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x2c1300u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2c1304: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2c1304u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2c1308:
    // 0x2c1308: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2c1308u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2c130c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2c130cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2c1310: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x2c1310u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2c1314: 0x0  nop
    ctx->pc = 0x2c1314u;
    // NOP
    // 0x2c1318: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C1318u;
    {
        const bool branch_taken_0x2c1318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1318u;
        // 0x2c131c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1318) {
            ctx->pc = 0x2C1308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c1308;
        }
    }
    ctx->pc = 0x2C1320u;
    // 0x2c1320: 0x26c274a0  addiu       $v0, $s6, 0x74A0
    ctx->pc = 0x2c1320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
    // 0x2c1324: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2c1324u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2c1328: 0x8c4405ac  lw          $a0, 0x5AC($v0)
    ctx->pc = 0x2c1328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1452)));
    // 0x2c132c: 0x24a5c230  addiu       $a1, $a1, -0x3DD0
    ctx->pc = 0x2c132cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951472));
    // 0x2c1330: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2C1330u;
    SET_GPR_U32(ctx, 31, 0x2C1338u);
    ctx->pc = 0x2C1334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1330u;
    // 0x2c1334: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2C1330u, 0x2C1338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1338u;
label_2c1338:
    // 0x2c1338: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c1338u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c133c: 0x12800062  beqz        $s4, . + 4 + (0x62 << 2)
    ctx->pc = 0x2C133Cu;
    {
        const bool branch_taken_0x2c133c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C133Cu;
        // 0x2c1340: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c133c) {
            ctx->pc = 0x2C14C8u;
            goto label_2c14c8;
        }
    }
    ctx->pc = 0x2C1344u;
    // 0x2c1344: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2c1344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c1348: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2C1348u;
    {
        const bool branch_taken_0x2c1348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1348u;
        // 0x2c134c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1348) {
            ctx->pc = 0x2C14C8u;
            goto label_2c14c8;
        }
    }
    ctx->pc = 0x2C1350u;
    // 0x2c1350: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2c1350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2c1354: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2c1354u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2c1358: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2c1358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c135c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2c135cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1360: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2c1360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2c1364: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2c1364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2c1368: 0x2ea20008  sltiu       $v0, $s5, 0x8
    ctx->pc = 0x2c1368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2c136c: 0x0  nop
    ctx->pc = 0x2c136cu;
    // NOP
label_2c1370:
    // 0x2c1370: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x2C1370u;
    {
        const bool branch_taken_0x2c1370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1370u;
        // 0x2c1374: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1370) {
            ctx->pc = 0x2C14C8u;
            goto label_2c14c8;
        }
    }
    ctx->pc = 0x2C1378u;
    // 0x2c1378: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x2C1378u;
    SET_GPR_U32(ctx, 31, 0x2C1380u);
    ctx->pc = 0x2C137Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1378u;
    // 0x2c137c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x2C1378u, 0x2C1380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1380u;
label_2c1380:
    // 0x2c1380: 0x5440004d  bnel        $v0, $zero, . + 4 + (0x4D << 2)
    ctx->pc = 0x2C1380u;
    {
        const bool branch_taken_0x2c1380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1380) {
            ctx->pc = 0x2C1384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1380u;
            // 0x2c1384: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C14B8u;
            goto label_2c14b8;
        }
    }
    ctx->pc = 0x2C1388u;
    // 0x2c1388: 0xc0c3d54  jal         func_30F550
    ctx->pc = 0x2C1388u;
    SET_GPR_U32(ctx, 31, 0x2C1390u);
    ctx->pc = 0x2C138Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1388u;
    // 0x2c138c: 0x2404009c  addiu       $a0, $zero, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F550u, 0x2C1388u, 0x2C1390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1390u;
label_2c1390:
    // 0x2c1390: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c1390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1394: 0x10a0004c  beqz        $a1, . + 4 + (0x4C << 2)
    ctx->pc = 0x2C1394u;
    {
        const bool branch_taken_0x2c1394 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1394u;
        // 0x2c1398: 0xae250000  sw          $a1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1394) {
            ctx->pc = 0x2C14C8u;
            goto label_2c14c8;
        }
    }
    ctx->pc = 0x2C139Cu;
    // 0x2c139c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2c139cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c13a0: 0x26c274a0  addiu       $v0, $s6, 0x74A0
    ctx->pc = 0x2c13a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
    // 0x2c13a4: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x2c13a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c13a8: 0x944405b0  lhu         $a0, 0x5B0($v0)
    ctx->pc = 0x2c13a8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1456)));
    // 0x2c13ac: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2c13acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2c13b0: 0x2838021  addu        $s0, $s4, $v1
    ctx->pc = 0x2c13b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2c13b4: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x2c13b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c13b8: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C13B8u;
    {
        const bool branch_taken_0x2c13b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C13BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C13B8u;
        // 0x2c13bc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c13b8) {
            ctx->pc = 0x2C13CCu;
            goto label_2c13cc;
        }
    }
    ctx->pc = 0x2C13C0u;
    // 0x2c13c0: 0x8202000a  lb          $v0, 0xA($s0)
    ctx->pc = 0x2c13c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x2c13c4: 0x5052003c  beql        $v0, $s2, . + 4 + (0x3C << 2)
    ctx->pc = 0x2C13C4u;
    {
        const bool branch_taken_0x2c13c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2c13c4) {
            ctx->pc = 0x2C13C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C13C4u;
            // 0x2c13c8: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C14B8u;
            goto label_2c14b8;
        }
    }
    ctx->pc = 0x2C13CCu;
label_2c13cc:
    // 0x2c13cc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2c13ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c13d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c13d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c13d4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2c13d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c13d8: 0xc0b0346  jal         func_2C0D18
    ctx->pc = 0x2C13D8u;
    SET_GPR_U32(ctx, 31, 0x2C13E0u);
    ctx->pc = 0x2C13DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C13D8u;
    // 0x2c13dc: 0x24080031  addiu       $t0, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D18u, 0x2C13D8u, 0x2C13E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C13E0u;
label_2c13e0:
    // 0x2c13e0: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x2c13e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x2c13e4: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x2c13e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x2c13e8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2c13e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2c13ec: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x2c13ecu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2c13f0: 0x288300b5  slti        $v1, $a0, 0xB5
    ctx->pc = 0x2c13f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)181) ? 1 : 0);
    // 0x2c13f4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C13F4u;
    {
        const bool branch_taken_0x2c13f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C13F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C13F4u;
        // 0x2c13f8: 0x417c2  srl         $v0, $a0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c13f4) {
            ctx->pc = 0x2C140Cu;
            goto label_2c140c;
        }
    }
    ctx->pc = 0x2C13FCu;
    // 0x2c13fc: 0x2482fe98  addiu       $v0, $a0, -0x168
    ctx->pc = 0x2c13fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966936));
    // 0x2c1400: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2c1400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2c1404: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x2c1404u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2c1408: 0x417c2  srl         $v0, $a0, 31
    ctx->pc = 0x2c1408u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_2c140c:
    // 0x2c140c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c140cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c1410: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2c1410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c1414: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c1414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c1418: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2c1418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c141c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2c141cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2c1420: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x2c1420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2c1424: 0xa0620045  sb          $v0, 0x45($v1)
    ctx->pc = 0x2c1424u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 69), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c1428: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c1428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c142c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c142cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1430: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2c1430u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2c1434: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c1434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c1438: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2c1438u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2c143c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2c143cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2c1440: 0xa0440046  sb          $a0, 0x46($v0)
    ctx->pc = 0x2c1440u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 70), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1444: 0x8602000c  lh          $v0, 0xC($s0)
    ctx->pc = 0x2c1444u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2c1448: 0x86030010  lh          $v1, 0x10($s0)
    ctx->pc = 0x2c1448u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2c144c: 0x8607000e  lh          $a3, 0xE($s0)
    ctx->pc = 0x2c144cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2c1450: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c1450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c1454: 0x0  nop
    ctx->pc = 0x2c1454u;
    // NOP
    // 0x2c1458: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c1458u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c145c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c145cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c1460: 0x0  nop
    ctx->pc = 0x2c1460u;
    // NOP
    // 0x2c1464: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c1464u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c1468: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c1468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c146c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2c146cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1470: 0x0  nop
    ctx->pc = 0x2c1470u;
    // NOP
    // 0x2c1474: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c1474u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c1478: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x2c1478u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2c147c: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2c147cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2c1480: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2c1480u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2c1484: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2c1484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2c1488: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2c1488u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c148c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2c148cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c1490: 0xc0b036a  jal         func_2C0DA8
    ctx->pc = 0x2C1490u;
    SET_GPR_U32(ctx, 31, 0x2C1498u);
    ctx->pc = 0x2C1494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1490u;
    // 0x2c1494: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DA8u, 0x2C1490u, 0x2C1498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1498u;
label_2c1498:
    // 0x2c1498: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c1498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c149c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c149cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c14a0: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x2c14a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x2c14a4: 0xa0520079  sb          $s2, 0x79($v0)
    ctx->pc = 0x2c14a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 121), (uint8_t)GPR_U32(ctx, 18));
    // 0x2c14a8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2c14a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c14ac: 0xc0b0c10  jal         func_2C3040
    ctx->pc = 0x2C14ACu;
    SET_GPR_U32(ctx, 31, 0x2C14B4u);
    ctx->pc = 0x2C14B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C14ACu;
    // 0x2c14b0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3040u, 0x2C14ACu, 0x2C14B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C14B4u;
label_2c14b4:
    // 0x2c14b4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2c14b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2c14b8:
    // 0x2c14b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2c14b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2c14bc: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2c14bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c14c0: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x2C14C0u;
    {
        const bool branch_taken_0x2c14c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C14C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C14C0u;
        // 0x2c14c4: 0x2ea20008  sltiu       $v0, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c14c0) {
            ctx->pc = 0x2C1370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c1370;
        }
    }
    ctx->pc = 0x2C14C8u;
label_2c14c8:
    // 0x2c14c8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2c14c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c14cc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2c14ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c14d0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2c14d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c14d4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2c14d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c14d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c14d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c14dc: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2c14dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c14e0: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2c14e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c14e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c14e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c14e8: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x2c14e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c14ec: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2c14ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c14f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C14F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C14F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C14F0u;
        // 0x2c14f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C14F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C14F8u;
}
