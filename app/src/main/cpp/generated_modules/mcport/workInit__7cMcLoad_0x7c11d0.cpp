#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: workInit__7cMcLoad
// Address: 0x7c11d0 - 0x7c1330
void workInit__7cMcLoad_0x7c11d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("workInit__7cMcLoad_0x7c11d0");
#endif

    switch (ctx->pc) {
        case 0x7c1220u: goto label_7c1220;
        case 0x7c1250u: goto label_7c1250;
        case 0x7c1258u: goto label_7c1258;
        case 0x7c1268u: goto label_7c1268;
        case 0x7c1280u: goto label_7c1280;
        case 0x7c1288u: goto label_7c1288;
        case 0x7c129cu: goto label_7c129c;
        case 0x7c12c0u: goto label_7c12c0;
        case 0x7c12c8u: goto label_7c12c8;
        case 0x7c12d8u: goto label_7c12d8;
        case 0x7c12f4u: goto label_7c12f4;
        default: break;
    }

    ctx->pc = 0x7c11d0u;

    // 0x7c11d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7c11d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7c11d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7c11d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c11d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7c11d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7c11dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x7c11dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c11e0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x7c11e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x7c11e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c11e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c11e8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7c11e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7c11ec: 0x3c120075  lui         $s2, 0x75
    ctx->pc = 0x7c11ecu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)117 << 16));
    // 0x7c11f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c11f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c11f4: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x7c11f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
    // 0x7c11f8: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x7c11f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x7c11fc: 0x26220088  addiu       $v0, $s1, 0x88
    ctx->pc = 0x7c11fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x7c1200: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x7c1200u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x7c1204: 0xa220000d  sb          $zero, 0xD($s1)
    ctx->pc = 0x7c1204u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x7c1208: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x7c1208u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
    // 0x7c120c: 0xae2000f8  sw          $zero, 0xF8($s1)
    ctx->pc = 0x7c120cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 0));
    // 0x7c1210: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c1210u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c1214: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x7c1214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x7c1218: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x7c1218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x7c121c: 0x0  nop
    ctx->pc = 0x7c121cu;
    // NOP
label_7c1220:
    // 0x7c1220: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x7c1220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x7c1224: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x7c1224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x7c1228: 0x0  nop
    ctx->pc = 0x7c1228u;
    // NOP
    // 0x7c122c: 0x0  nop
    ctx->pc = 0x7c122cu;
    // NOP
    // 0x7c1230: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7C1230u;
    {
        const bool branch_taken_0x7c1230 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x7C1234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1230u;
        // 0x7c1234: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1230) {
            ctx->pc = 0x7C1220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c1220;
        }
    }
    ctx->pc = 0x7C1238u;
    // 0x7c1238: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x7c1238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x7c123c: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x7C123Cu;
    {
        const bool branch_taken_0x7c123c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C123Cu;
        // 0x7c1240: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c123c) {
            ctx->pc = 0x7C1274u;
            goto label_7c1274;
        }
    }
    ctx->pc = 0x7C1244u;
    // 0x7c1244: 0x24065000  addiu       $a2, $zero, 0x5000
    ctx->pc = 0x7c1244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    // 0x7c1248: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x7C1248u;
    SET_GPR_U32(ctx, 31, 0x7C1250u);
    ctx->pc = 0x7C124Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1248u;
    // 0x7c124c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x7C1248u, 0x7C1250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1250u;
label_7c1250:
    // 0x7c1250: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7c1250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1254: 0x0  nop
    ctx->pc = 0x7c1254u;
    // NOP
label_7c1258:
    // 0x7c1258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c1258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c125c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7c125cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c1260: 0xc1f23de  jal         func_7C8F78
    ctx->pc = 0x7C1260u;
    SET_GPR_U32(ctx, 31, 0x7C1268u);
    ctx->pc = 0x7C1264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1260u;
    // 0x7c1264: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F78u, 0x7C1260u, 0x7C1268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1268u;
label_7c1268:
    // 0x7c1268: 0x2a020014  slti        $v0, $s0, 0x14
    ctx->pc = 0x7c1268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x7c126c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7C126Cu;
    {
        const bool branch_taken_0x7c126c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C1270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C126Cu;
        // 0x7c1270: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c126c) {
            ctx->pc = 0x7C1258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c1258;
        }
    }
    ctx->pc = 0x7C1274u;
label_7c1274:
    // 0x7c1274: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c1274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1278: 0xc1f2336  jal         func_7C8CD8
    ctx->pc = 0x7C1278u;
    SET_GPR_U32(ctx, 31, 0x7C1280u);
    ctx->pc = 0x7C127Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1278u;
    // 0x7c127c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8CD8u, 0x7C1278u, 0x7C1280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1280u;
label_7c1280:
    // 0x7c1280: 0xc1f1eb8  jal         func_7C7AE0
    ctx->pc = 0x7C1280u;
    SET_GPR_U32(ctx, 31, 0x7C1288u);
    ctx->pc = 0x7C1284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1280u;
    // 0x7c1284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7AE0u, 0x7C1280u, 0x7C1288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1288u;
label_7c1288:
    // 0x7c1288: 0xae300078  sw          $s0, 0x78($s1)
    ctx->pc = 0x7c1288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 16));
    // 0x7c128c: 0x24045000  addiu       $a0, $zero, 0x5000
    ctx->pc = 0x7c128cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    // 0x7c1290: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x7c1290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x7c1294: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x7C1294u;
    SET_GPR_U32(ctx, 31, 0x7C129Cu);
    ctx->pc = 0x7C1298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1294u;
    // 0x7c1298: 0x26464220  addiu       $a2, $s2, 0x4220 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x7C1294u, 0x7C129Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C129Cu;
label_7c129c:
    // 0x7c129c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C129Cu;
    {
        const bool branch_taken_0x7c129c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C12A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C129Cu;
        // 0x7c12a0: 0xae220080  sw          $v0, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c129c) {
            ctx->pc = 0x7C12ACu;
            goto label_7c12ac;
        }
    }
    ctx->pc = 0x7C12A4u;
    // 0x7c12a4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x7C12A4u;
    {
        const bool branch_taken_0x7c12a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C12A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C12A4u;
        // 0x7c12a8: 0xa2300000  sb          $s0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c12a4) {
            ctx->pc = 0x7C1314u;
            goto label_7c1314;
        }
    }
    ctx->pc = 0x7C12ACu;
label_7c12ac:
    // 0x7c12ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7c12acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c12b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c12b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c12b4: 0x24065000  addiu       $a2, $zero, 0x5000
    ctx->pc = 0x7c12b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    // 0x7c12b8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x7C12B8u;
    SET_GPR_U32(ctx, 31, 0x7C12C0u);
    ctx->pc = 0x7C12BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C12B8u;
    // 0x7c12bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x7C12B8u, 0x7C12C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C12C0u;
label_7c12c0:
    // 0x7c12c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7c12c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c12c4: 0x0  nop
    ctx->pc = 0x7c12c4u;
    // NOP
label_7c12c8:
    // 0x7c12c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c12c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c12cc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7c12ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c12d0: 0xc1f23de  jal         func_7C8F78
    ctx->pc = 0x7C12D0u;
    SET_GPR_U32(ctx, 31, 0x7C12D8u);
    ctx->pc = 0x7C12D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C12D0u;
    // 0x7c12d4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F78u, 0x7C12D0u, 0x7C12D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C12D8u;
label_7c12d8:
    // 0x7c12d8: 0x2a020014  slti        $v0, $s0, 0x14
    ctx->pc = 0x7c12d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x7c12dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7C12DCu;
    {
        const bool branch_taken_0x7c12dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C12E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C12DCu;
        // 0x7c12e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c12dc) {
            ctx->pc = 0x7C12C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c12c8;
        }
    }
    ctx->pc = 0x7C12E4u;
    // 0x7c12e4: 0x26464220  addiu       $a2, $s2, 0x4220
    ctx->pc = 0x7c12e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16928));
    // 0x7c12e8: 0x3404b400  ori         $a0, $zero, 0xB400
    ctx->pc = 0x7c12e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46080);
    // 0x7c12ec: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x7C12ECu;
    SET_GPR_U32(ctx, 31, 0x7C12F4u);
    ctx->pc = 0x7C12F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C12ECu;
    // 0x7c12f0: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x7C12ECu, 0x7C12F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C12F4u;
label_7c12f4:
    // 0x7c12f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7C12F4u;
    {
        const bool branch_taken_0x7c12f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C12F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C12F4u;
        // 0x7c12f8: 0xae2200f8  sw          $v0, 0xF8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c12f4) {
            ctx->pc = 0x7C1308u;
            goto label_7c1308;
        }
    }
    ctx->pc = 0x7C12FCu;
    // 0x7c12fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c12fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c1300: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7C1300u;
    {
        const bool branch_taken_0x7c1300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1300u;
        // 0x7c1304: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1300) {
            ctx->pc = 0x7C1314u;
            goto label_7c1314;
        }
    }
    ctx->pc = 0x7C1308u;
label_7c1308:
    // 0x7c1308: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c1308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c130c: 0xae2000f0  sw          $zero, 0xF0($s1)
    ctx->pc = 0x7c130cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
    // 0x7c1310: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x7c1310u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
label_7c1314:
    // 0x7c1314: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7c1314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c1318: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7c1318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c131c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x7c131cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c1320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c1320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c1324: 0x3e00008  jr          $ra
    ctx->pc = 0x7C1324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C1328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1324u;
        // 0x7c1328: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C1324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C132Cu;
    // 0x7c132c: 0x0  nop
    ctx->pc = 0x7c132cu;
    // NOP
    ctx->pc = 0x7c1330u;
}
} // namespace gh_mcport
