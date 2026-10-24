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

// Function: sceSdRemote
// Address: 0x3a12b8 - 0x3a1648
void sceSdRemote_0x3a12b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSdRemote_0x3a12b8");
#endif

    switch (ctx->pc) {
        case 0x3a1320u: goto label_3a1320;
        case 0x3a14a0u: goto label_3a14a0;
        case 0x3a1538u: goto label_3a1538;
        case 0x3a15ecu: goto label_3a15ec;
        default: break;
    }

    ctx->pc = 0x3a12b8u;

    // 0x3a12b8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x3a12b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x3a12bc: 0x3c0d0078  lui         $t5, 0x78
    ctx->pc = 0x3a12bcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)120 << 16));
    // 0x3a12c0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3a12c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3a12c4: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x3a12c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3a12c8: 0x3c100078  lui         $s0, 0x78
    ctx->pc = 0x3a12c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)120 << 16));
    // 0x3a12cc: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x3a12ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x3a12d0: 0x2602c8c0  addiu       $v0, $s0, -0x3740
    ctx->pc = 0x3a12d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953152));
    // 0x3a12d4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x3a12d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x3a12d8: 0xffa500c8  sd          $a1, 0xC8($sp)
    ctx->pc = 0x3a12d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 5));
    // 0x3a12dc: 0x200602d  daddu       $t4, $s0, $zero
    ctx->pc = 0x3a12dcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a12e0: 0xffa600d0  sd          $a2, 0xD0($sp)
    ctx->pc = 0x3a12e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 6));
    // 0x3a12e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a12e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a12e8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3a12e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3a12ec: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x3a12ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3a12f0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x3a12f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x3a12f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3a12f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a12f8: 0xffa700d8  sd          $a3, 0xD8($sp)
    ctx->pc = 0x3a12f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 7));
    // 0x3a12fc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3a12fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3a1300: 0xffa800e0  sd          $t0, 0xE0($sp)
    ctx->pc = 0x3a1300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 8));
    // 0x3a1304: 0xffa900e8  sd          $t1, 0xE8($sp)
    ctx->pc = 0x3a1304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 9));
    // 0x3a1308: 0xffaa00f0  sd          $t2, 0xF0($sp)
    ctx->pc = 0x3a1308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 10));
    // 0x3a130c: 0xffab00f8  sd          $t3, 0xF8($sp)
    ctx->pc = 0x3a130cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 11));
    // 0x3a1310: 0xae02c8c0  sw          $v0, -0x3740($s0)
    ctx->pc = 0x3a1310u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x77C8C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77C8C0u, _value); } while (0);
    // 0x3a1314: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x3a1314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x3a1318: 0x8c71fff8  lw          $s1, -0x8($v1)
    ctx->pc = 0x3a1318u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x3a131c: 0x0  nop
    ctx->pc = 0x3a131cu;
    // NOP
label_3a1320:
    // 0x3a1320: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x3a1320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x3a1324: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3a1324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3a1328: 0x8c62fff8  lw          $v0, -0x8($v1)
    ctx->pc = 0x3a1328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x3a132c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3a132cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x3a1330: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3a1330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3a1334: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A1334u;
    {
        const bool branch_taken_0x3a1334 = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x3a1334) {
            ctx->pc = 0x3A1320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a1320;
        }
    }
    ctx->pc = 0x3A133Cu;
    // 0x3a133c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A133Cu;
    {
        const bool branch_taken_0x3a133c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A133Cu;
        // 0x3a1340: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a133c) {
            ctx->pc = 0x3A1350u;
            goto label_3a1350;
        }
    }
    ctx->pc = 0x3A1344u;
    // 0x3a1344: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3a1344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3a1348: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x3a1348u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a134c: 0x8c52a300  lw          $s2, -0x5D00($v0)
    ctx->pc = 0x3a134cu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x3FA300u));
label_3a1350:
    // 0x3a1350: 0x34028160  ori         $v0, $zero, 0x8160
    ctx->pc = 0x3a1350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33120);
    // 0x3a1354: 0x16220019  bne         $s1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3A1354u;
    {
        const bool branch_taken_0x3a1354 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A1358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1354u;
        // 0x3a1358: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1354) {
            ctx->pc = 0x3A13BCu;
            goto label_3a13bc;
        }
    }
    ctx->pc = 0x3A135Cu;
    // 0x3a135c: 0x2583c8c0  addiu       $v1, $t4, -0x3740
    ctx->pc = 0x3a135cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 4294953152));
    // 0x3a1360: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3a1360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3a1364: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A1364u;
    {
        const bool branch_taken_0x3a1364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1364u;
        // 0x3a1368: 0x8c65000c  lw          $a1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1364) {
            ctx->pc = 0x3A1394u;
            goto label_3a1394;
        }
    }
    ctx->pc = 0x3A136Cu;
    // 0x3a136c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3a136cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3a1370: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x3a1370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3a1374: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3a1374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3a1378: 0x8c54a318  lw          $s4, -0x5CE8($v0)
    ctx->pc = 0x3a1378u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x3FA318u));
    // 0x3a137c: 0xac43a318  sw          $v1, -0x5CE8($v0)
    ctx->pc = 0x3a137cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3FA318u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA318u, _value); } while (0);
    // 0x3a1380: 0xac85a324  sw          $a1, -0x5CDC($a0)
    ctx->pc = 0x3a1380u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3FA324u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA324u, _value); } while (0);
    // 0x3a1384: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x3a1384u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1388: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3a1388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3a138c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3A138Cu;
    {
        const bool branch_taken_0x3a138c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A138Cu;
        // 0x3a1390: 0xac43a330  sw          $v1, -0x5CD0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294943536), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a138c) {
            ctx->pc = 0x3A13F4u;
            goto label_3a13f4;
        }
    }
    ctx->pc = 0x3A1394u;
label_3a1394:
    // 0x3a1394: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3a1394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3a1398: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x3a1398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3a139c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3a139cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3a13a0: 0x8c54a31c  lw          $s4, -0x5CE4($v0)
    ctx->pc = 0x3a13a0u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x3FA31Cu));
    // 0x3a13a4: 0xac43a31c  sw          $v1, -0x5CE4($v0)
    ctx->pc = 0x3a13a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3FA31Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA31Cu, _value); } while (0);
    // 0x3a13a8: 0xac85a328  sw          $a1, -0x5CD8($a0)
    ctx->pc = 0x3a13a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3FA328u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA328u, _value); } while (0);
    // 0x3a13ac: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x3a13acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a13b0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3a13b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3a13b4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3A13B4u;
    {
        const bool branch_taken_0x3a13b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A13B4u;
        // 0x3a13b8: 0xac43a334  sw          $v1, -0x5CCC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294943540), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a13b4) {
            ctx->pc = 0x3A13F4u;
            goto label_3a13f4;
        }
    }
    ctx->pc = 0x3A13BCu;
label_3a13bc:
    // 0x3a13bc: 0x34028170  ori         $v0, $zero, 0x8170
    ctx->pc = 0x3a13bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33136);
    // 0x3a13c0: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A13C0u;
    {
        const bool branch_taken_0x3a13c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A13C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A13C0u;
        // 0x3a13c4: 0x34028130  ori         $v0, $zero, 0x8130 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33072);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a13c0) {
            ctx->pc = 0x3A13F8u;
            goto label_3a13f8;
        }
    }
    ctx->pc = 0x3A13C8u;
    // 0x3a13c8: 0x2583c8c0  addiu       $v1, $t4, -0x3740
    ctx->pc = 0x3a13c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 4294953152));
    // 0x3a13cc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3a13ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3a13d0: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x3a13d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3a13d4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3a13d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x3a13d8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3a13d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3a13dc: 0x8c94a320  lw          $s4, -0x5CE0($a0)
    ctx->pc = 0x3a13dcu;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x3FA320u));
    // 0x3a13e0: 0xac82a320  sw          $v0, -0x5CE0($a0)
    ctx->pc = 0x3a13e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FA320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA320u, _value); } while (0);
    // 0x3a13e4: 0xaca6a32c  sw          $a2, -0x5CD4($a1)
    ctx->pc = 0x3a13e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3FA32Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA32Cu, _value); } while (0);
    // 0x3a13e8: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x3a13e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a13ec: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3a13ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3a13f0: 0xac43a338  sw          $v1, -0x5CC8($v0)
    ctx->pc = 0x3a13f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3FA338u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA338u, _value); } while (0);
label_3a13f4:
    // 0x3a13f4: 0x34028130  ori         $v0, $zero, 0x8130
    ctx->pc = 0x3a13f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33072);
label_3a13f8:
    // 0x3a13f8: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A13F8u;
    {
        const bool branch_taken_0x3a13f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A13FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A13F8u;
        // 0x3a13fc: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a13f8) {
            ctx->pc = 0x3A1414u;
            goto label_3a1414;
        }
    }
    ctx->pc = 0x3A1400u;
    // 0x3a1400: 0x340281a0  ori         $v0, $zero, 0x81A0
    ctx->pc = 0x3a1400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33184);
    // 0x3a1404: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A1404u;
    {
        const bool branch_taken_0x3a1404 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A1408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1404u;
        // 0x3a1408: 0x340281b0  ori         $v0, $zero, 0x81B0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33200);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1404) {
            ctx->pc = 0x3A1414u;
            goto label_3a1414;
        }
    }
    ctx->pc = 0x3A140Cu;
    // 0x3a140c: 0x16220011  bne         $s1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A140Cu;
    {
        const bool branch_taken_0x3a140c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A1410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A140Cu;
        // 0x3a1410: 0x34028140  ori         $v0, $zero, 0x8140 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33088);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a140c) {
            ctx->pc = 0x3A1454u;
            goto label_3a1454;
        }
    }
    ctx->pc = 0x3A1414u;
label_3a1414:
    // 0x3a1414: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A1414u;
    {
        const bool branch_taken_0x3a1414 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1414u;
        // 0x3a1418: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1414) {
            ctx->pc = 0x3A1428u;
            goto label_3a1428;
        }
    }
    ctx->pc = 0x3A141Cu;
    // 0x3a141c: 0x8c43a304  lw          $v1, -0x5CFC($v0)
    ctx->pc = 0x3a141cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943492)));
    // 0x3a1420: 0x380982d  daddu       $s3, $gp, $zero
    ctx->pc = 0x3a1420u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1424: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x3a1424u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3a1428:
    // 0x3a1428: 0x2589c8c0  addiu       $t1, $t4, -0x3740
    ctx->pc = 0x3a1428u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 4294953152));
    // 0x3a142c: 0x8d82c8c0  lw          $v0, -0x3740($t4)
    ctx->pc = 0x3a142cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294953152)));
    // 0x3a1430: 0x8d250004  lw          $a1, 0x4($t1)
    ctx->pc = 0x3a1430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x3a1434: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x3a1434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1438: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x3a1438u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x3a143c: 0x25a4c900  addiu       $a0, $t5, -0x3700
    ctx->pc = 0x3a143cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 4294953216));
    // 0x3a1440: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3a1440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3a1444: 0x2252825  or          $a1, $s1, $a1
    ctx->pc = 0x3a1444u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
    // 0x3a1448: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x3a1448u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3a144c: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x3A144Cu;
    {
        const bool branch_taken_0x3a144c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A144Cu;
        // 0x3a1450: 0x240a0040  addiu       $t2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a144c) {
            ctx->pc = 0x3A15E4u;
            goto label_3a15e4;
        }
    }
    ctx->pc = 0x3A1454u;
label_3a1454:
    // 0x3a1454: 0x16220018  bne         $s1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3A1454u;
    {
        const bool branch_taken_0x3a1454 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A1458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1454u;
        // 0x3a1458: 0x340281c0  ori         $v0, $zero, 0x81C0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33216);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1454) {
            ctx->pc = 0x3A14B8u;
            goto label_3a14b8;
        }
    }
    ctx->pc = 0x3A145Cu;
    // 0x3a145c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A145Cu;
    {
        const bool branch_taken_0x3a145c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A145Cu;
        // 0x3a1460: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a145c) {
            ctx->pc = 0x3A1470u;
            goto label_3a1470;
        }
    }
    ctx->pc = 0x3A1464u;
    // 0x3a1464: 0x8c43a304  lw          $v1, -0x5CFC($v0)
    ctx->pc = 0x3a1464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943492)));
    // 0x3a1468: 0x380982d  daddu       $s3, $gp, $zero
    ctx->pc = 0x3a1468u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a146c: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x3a146cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3a1470:
    // 0x3a1470: 0x2587c8c0  addiu       $a3, $t4, -0x3740
    ctx->pc = 0x3a1470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 4294953152));
    // 0x3a1474: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x3a1474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1478: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x3a1478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x3a147c: 0x25a4c900  addiu       $a0, $t5, -0x3700
    ctx->pc = 0x3a147cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 4294953216));
    // 0x3a1480: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x3a1480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3a1484: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x3a1484u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3a1488: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3a1488u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a148c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3a148cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3a1490: 0x34a58140  ori         $a1, $a1, 0x8140
    ctx->pc = 0x3a1490u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33088);
    // 0x3a1494: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x3a1494u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3a1498: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x3A1498u;
    SET_GPR_U32(ctx, 31, 0x3A14A0u);
    ctx->pc = 0x3A149Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1498u;
    // 0x3a149c: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x3A1498u, 0x3A14A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A14A0u;
label_3a14a0:
    // 0x3a14a0: 0x12400059  beqz        $s2, . + 4 + (0x59 << 2)
    ctx->pc = 0x3A14A0u;
    {
        const bool branch_taken_0x3a14a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A14A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A14A0u;
        // 0x3a14a4: 0x34028160  ori         $v0, $zero, 0x8160 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33120);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a14a0) {
            ctx->pc = 0x3A1608u;
            goto label_3a1608;
        }
    }
    ctx->pc = 0x3A14A8u;
    // 0x3a14a8: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x3a14a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a14ac: 0x260e02d  daddu       $gp, $s3, $zero
    ctx->pc = 0x3a14acu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a14b0: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x3A14B0u;
    {
        const bool branch_taken_0x3a14b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A14B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A14B0u;
        // 0x3a14b4: 0x34028160  ori         $v0, $zero, 0x8160 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33120);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a14b0) {
            ctx->pc = 0x3A1608u;
            goto label_3a1608;
        }
    }
    ctx->pc = 0x3A14B8u;
label_3a14b8:
    // 0x3a14b8: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A14B8u;
    {
        const bool branch_taken_0x3a14b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A14BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A14B8u;
        // 0x3a14bc: 0x340281d0  ori         $v0, $zero, 0x81D0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33232);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a14b8) {
            ctx->pc = 0x3A14C8u;
            goto label_3a14c8;
        }
    }
    ctx->pc = 0x3A14C0u;
    // 0x3a14c0: 0x16220026  bne         $s1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3A14C0u;
    {
        const bool branch_taken_0x3a14c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a14c0) {
            ctx->pc = 0x3A155Cu;
            goto label_3a155c;
        }
    }
    ctx->pc = 0x3A14C8u;
label_3a14c8:
    // 0x3a14c8: 0x2590c8c0  addiu       $s0, $t4, -0x3740
    ctx->pc = 0x3a14c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), 4294953152));
    // 0x3a14cc: 0x340381d0  ori         $v1, $zero, 0x81D0
    ctx->pc = 0x3a14ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33232);
    // 0x3a14d0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3a14d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3a14d4: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x3a14d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3a14d8: 0x16230003  bne         $s1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A14D8u;
    {
        const bool branch_taken_0x3a14d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A14DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A14D8u;
        // 0x3a14dc: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a14d8) {
            ctx->pc = 0x3A14E8u;
            goto label_3a14e8;
        }
    }
    ctx->pc = 0x3A14E0u;
    // 0x3a14e0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3a14e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3a14e4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3a14e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_3a14e8:
    // 0x3a14e8: 0x8e09000c  lw          $t1, 0xC($s0)
    ctx->pc = 0x3a14e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3a14ec: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A14ECu;
    {
        const bool branch_taken_0x3a14ec = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A14F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A14ECu;
        // 0x3a14f0: 0x8e0a0010  lw          $t2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a14ec) {
            ctx->pc = 0x3A14FCu;
            goto label_3a14fc;
        }
    }
    ctx->pc = 0x3A14F4u;
    // 0x3a14f4: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x3a14f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a14f8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3a14f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a14fc:
    // 0x3a14fc: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A14FCu;
    {
        const bool branch_taken_0x3a14fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A14FCu;
        // 0x3a1500: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a14fc) {
            ctx->pc = 0x3A1510u;
            goto label_3a1510;
        }
    }
    ctx->pc = 0x3A1504u;
    // 0x3a1504: 0x8c43a304  lw          $v1, -0x5CFC($v0)
    ctx->pc = 0x3a1504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943492)));
    // 0x3a1508: 0x380982d  daddu       $s3, $gp, $zero
    ctx->pc = 0x3a1508u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a150c: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x3a150cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3a1510:
    // 0x3a1510: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x3a1510u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3a1514: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x3a1514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1518: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x3a1518u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3a151c: 0x25a4c900  addiu       $a0, $t5, -0x3700
    ctx->pc = 0x3a151cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 4294953216));
    // 0x3a1520: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3a1520u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3a1524: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x3a1524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x3a1528: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3a1528u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3a152c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a152cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1530: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x3A1530u;
    SET_GPR_U32(ctx, 31, 0x3A1538u);
    ctx->pc = 0x3A1534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1530u;
    // 0x3a1534: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x3A1530u, 0x3A1538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1538u;
label_3a1538:
    // 0x3a1538: 0x52400004  beql        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A1538u;
    {
        const bool branch_taken_0x3a1538 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1538) {
            ctx->pc = 0x3A153Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A1538u;
            // 0x3a153c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A154Cu;
            goto label_3a154c;
        }
    }
    ctx->pc = 0x3A1540u;
    // 0x3a1540: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x3a1540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1544: 0x260e02d  daddu       $gp, $s3, $zero
    ctx->pc = 0x3a1544u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1548: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3a1548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3a154c:
    // 0x3a154c: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x3A154Cu;
    {
        const bool branch_taken_0x3a154c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a154c) {
            ctx->pc = 0x3A1550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A154Cu;
            // 0x3a1550: 0x34028160  ori         $v0, $zero, 0x8160 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33120);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A1608u;
            goto label_3a1608;
        }
    }
    ctx->pc = 0x3A1554u;
    // 0x3a1554: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x3A1554u;
    {
        const bool branch_taken_0x3a1554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1554u;
        // 0x3a1558: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1554) {
            ctx->pc = 0x3A1600u;
            goto label_3a1600;
        }
    }
    ctx->pc = 0x3A155Cu;
label_3a155c:
    // 0x3a155c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3a155cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3a1560: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x3a1560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x3a1564: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3a1564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3a1568: 0x2c4200f1  sltiu       $v0, $v0, 0xF1
    ctx->pc = 0x3a1568u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)241) ? 1 : 0);
    // 0x3a156c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3A156Cu;
    {
        const bool branch_taken_0x3a156c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a156c) {
            ctx->pc = 0x3A15ACu;
            goto label_3a15ac;
        }
    }
    ctx->pc = 0x3A1574u;
    // 0x3a1574: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A1574u;
    {
        const bool branch_taken_0x3a1574 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1574u;
        // 0x3a1578: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1574) {
            ctx->pc = 0x3A1588u;
            goto label_3a1588;
        }
    }
    ctx->pc = 0x3A157Cu;
    // 0x3a157c: 0x8c43a304  lw          $v1, -0x5CFC($v0)
    ctx->pc = 0x3a157cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943492)));
    // 0x3a1580: 0x380982d  daddu       $s3, $gp, $zero
    ctx->pc = 0x3a1580u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1584: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x3a1584u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3a1588:
    // 0x3a1588: 0x2582c8c0  addiu       $v0, $t4, -0x3740
    ctx->pc = 0x3a1588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294953152));
    // 0x3a158c: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x3a158cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1590: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x3a1590u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3a1594: 0x25a4c900  addiu       $a0, $t5, -0x3700
    ctx->pc = 0x3a1594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 4294953216));
    // 0x3a1598: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x3a1598u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3a159c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3a159cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a15a0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3a15a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3a15a4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3A15A4u;
    {
        const bool branch_taken_0x3a15a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A15A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A15A4u;
        // 0x3a15a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a15a4) {
            ctx->pc = 0x3A15E0u;
            goto label_3a15e0;
        }
    }
    ctx->pc = 0x3A15ACu;
label_3a15ac:
    // 0x3a15ac: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A15ACu;
    {
        const bool branch_taken_0x3a15ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A15B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A15ACu;
        // 0x3a15b0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a15ac) {
            ctx->pc = 0x3A15C0u;
            goto label_3a15c0;
        }
    }
    ctx->pc = 0x3A15B4u;
    // 0x3a15b4: 0x8c43a304  lw          $v1, -0x5CFC($v0)
    ctx->pc = 0x3a15b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943492)));
    // 0x3a15b8: 0x380982d  daddu       $s3, $gp, $zero
    ctx->pc = 0x3a15b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a15bc: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x3a15bcu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3a15c0:
    // 0x3a15c0: 0x2582c8c0  addiu       $v0, $t4, -0x3740
    ctx->pc = 0x3a15c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294953152));
    // 0x3a15c4: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x3a15c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a15c8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3a15c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a15cc: 0x25a4c900  addiu       $a0, $t5, -0x3700
    ctx->pc = 0x3a15ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 4294953216));
    // 0x3a15d0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3a15d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3a15d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a15d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a15d8: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x3a15d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3a15dc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x3a15dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3a15e0:
    // 0x3a15e0: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x3a15e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3a15e4:
    // 0x3a15e4: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x3A15E4u;
    SET_GPR_U32(ctx, 31, 0x3A15ECu);
    ctx->pc = 0x3A15E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A15E4u;
    // 0x3a15e8: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x3A15E4u, 0x3A15ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A15ECu;
label_3a15ec:
    // 0x3a15ec: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A15ECu;
    {
        const bool branch_taken_0x3a15ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A15F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A15ECu;
        // 0x3a15f0: 0x8e02c8c0  lw          $v0, -0x3740($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a15ec) {
            ctx->pc = 0x3A1600u;
            goto label_3a1600;
        }
    }
    ctx->pc = 0x3A15F4u;
    // 0x3a15f4: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x3a15f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a15f8: 0x260e02d  daddu       $gp, $s3, $zero
    ctx->pc = 0x3a15f8u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a15fc: 0x8e02c8c0  lw          $v0, -0x3740($s0)
    ctx->pc = 0x3a15fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953152)));
label_3a1600:
    // 0x3a1600: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x3a1600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x3a1604: 0x34028160  ori         $v0, $zero, 0x8160
    ctx->pc = 0x3a1604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33120);
label_3a1608:
    // 0x3a1608: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A1608u;
    {
        const bool branch_taken_0x3a1608 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1608u;
        // 0x3a160c: 0x34028170  ori         $v0, $zero, 0x8170 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33136);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1608) {
            ctx->pc = 0x3A1618u;
            goto label_3a1618;
        }
    }
    ctx->pc = 0x3A1610u;
    // 0x3a1610: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A1610u;
    {
        const bool branch_taken_0x3a1610 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A1614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1610u;
        // 0x3a1614: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1610) {
            ctx->pc = 0x3A1620u;
            goto label_3a1620;
        }
    }
    ctx->pc = 0x3A1618u;
label_3a1618:
    // 0x3a1618: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x3a1618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x3a161c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3a161cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3a1620:
    // 0x3a1620: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3a1620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a1624: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x3a1624u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a1628: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x3a1628u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a162c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x3a162cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a1630: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x3a1630u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a1634: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3a1634u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a1638: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1638u;
        // 0x3a163c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1640u;
    // 0x3a1640: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x3a1640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3a1644: 0x0  nop
    ctx->pc = 0x3a1644u;
    // NOP
    ctx->pc = 0x3a1648u;
}
