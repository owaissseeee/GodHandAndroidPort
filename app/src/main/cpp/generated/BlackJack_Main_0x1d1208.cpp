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

// Function: BlackJack_Main
// Address: 0x1d1208 - 0x1d1330
void BlackJack_Main_0x1d1208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlackJack_Main_0x1d1208");
#endif

    switch (ctx->pc) {
        case 0x1d1208u: goto label_1d1208;
        case 0x1d120cu: goto label_1d120c;
        case 0x1d1210u: goto label_1d1210;
        case 0x1d1214u: goto label_1d1214;
        case 0x1d1218u: goto label_1d1218;
        case 0x1d121cu: goto label_1d121c;
        case 0x1d1220u: goto label_1d1220;
        case 0x1d1224u: goto label_1d1224;
        case 0x1d1228u: goto label_1d1228;
        case 0x1d122cu: goto label_1d122c;
        case 0x1d1230u: goto label_1d1230;
        case 0x1d1234u: goto label_1d1234;
        case 0x1d1238u: goto label_1d1238;
        case 0x1d123cu: goto label_1d123c;
        case 0x1d1240u: goto label_1d1240;
        case 0x1d1244u: goto label_1d1244;
        case 0x1d1248u: goto label_1d1248;
        case 0x1d124cu: goto label_1d124c;
        case 0x1d1250u: goto label_1d1250;
        case 0x1d1254u: goto label_1d1254;
        case 0x1d1258u: goto label_1d1258;
        case 0x1d125cu: goto label_1d125c;
        case 0x1d1260u: goto label_1d1260;
        case 0x1d1264u: goto label_1d1264;
        case 0x1d1268u: goto label_1d1268;
        case 0x1d126cu: goto label_1d126c;
        case 0x1d1270u: goto label_1d1270;
        case 0x1d1274u: goto label_1d1274;
        case 0x1d1278u: goto label_1d1278;
        case 0x1d127cu: goto label_1d127c;
        case 0x1d1280u: goto label_1d1280;
        case 0x1d1284u: goto label_1d1284;
        case 0x1d1288u: goto label_1d1288;
        case 0x1d128cu: goto label_1d128c;
        case 0x1d1290u: goto label_1d1290;
        case 0x1d1294u: goto label_1d1294;
        case 0x1d1298u: goto label_1d1298;
        case 0x1d129cu: goto label_1d129c;
        case 0x1d12a0u: goto label_1d12a0;
        case 0x1d12a4u: goto label_1d12a4;
        case 0x1d12a8u: goto label_1d12a8;
        case 0x1d12acu: goto label_1d12ac;
        case 0x1d12b0u: goto label_1d12b0;
        case 0x1d12b4u: goto label_1d12b4;
        case 0x1d12b8u: goto label_1d12b8;
        case 0x1d12bcu: goto label_1d12bc;
        case 0x1d12c0u: goto label_1d12c0;
        case 0x1d12c4u: goto label_1d12c4;
        case 0x1d12c8u: goto label_1d12c8;
        case 0x1d12ccu: goto label_1d12cc;
        case 0x1d12d0u: goto label_1d12d0;
        case 0x1d12d4u: goto label_1d12d4;
        case 0x1d12d8u: goto label_1d12d8;
        case 0x1d12dcu: goto label_1d12dc;
        case 0x1d12e0u: goto label_1d12e0;
        case 0x1d12e4u: goto label_1d12e4;
        case 0x1d12e8u: goto label_1d12e8;
        case 0x1d12ecu: goto label_1d12ec;
        case 0x1d12f0u: goto label_1d12f0;
        case 0x1d12f4u: goto label_1d12f4;
        case 0x1d12f8u: goto label_1d12f8;
        case 0x1d12fcu: goto label_1d12fc;
        case 0x1d1300u: goto label_1d1300;
        case 0x1d1304u: goto label_1d1304;
        case 0x1d1308u: goto label_1d1308;
        case 0x1d130cu: goto label_1d130c;
        case 0x1d1310u: goto label_1d1310;
        case 0x1d1314u: goto label_1d1314;
        case 0x1d1318u: goto label_1d1318;
        case 0x1d131cu: goto label_1d131c;
        case 0x1d1320u: goto label_1d1320;
        case 0x1d1324u: goto label_1d1324;
        case 0x1d1328u: goto label_1d1328;
        case 0x1d132cu: goto label_1d132c;
        default: break;
    }

    ctx->pc = 0x1d1208u;

label_1d1208:
    // 0x1d1208: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d1208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1d120c:
    // 0x1d120c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1d120cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_1d1210:
    // 0x1d1210: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d1210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1d1214:
    // 0x1d1214: 0x2463df58  addiu       $v1, $v1, -0x20A8
    ctx->pc = 0x1d1214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958936));
label_1d1218:
    // 0x1d1218: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d1218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1d121c:
    // 0x1d121c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d121cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d1220:
    // 0x1d1220: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x1d1220u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d1224:
    // 0x1d1224: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1d1224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1d1228:
    // 0x1d1228: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d1228u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d122c:
    // 0x1d122c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d122cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d1230:
    // 0x1d1230: 0x265317d4  addiu       $s3, $s2, 0x17D4
    ctx->pc = 0x1d1230u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 6100));
label_1d1234:
    // 0x1d1234: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1d1234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d1238:
    // 0x1d1238: 0x8e421804  lw          $v0, 0x1804($s2)
    ctx->pc = 0x1d1238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6148)));
label_1d123c:
    // 0x1d123c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d123cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1d1240:
    // 0x1d1240: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1d1240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d1244:
    // 0x1d1244: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d1244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d1248:
    // 0x1d1248: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x1d1248u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_1d124c:
    // 0x1d124c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d124cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1d1250:
    // 0x1d1250: 0x40f809  jalr        $v0
label_1d1254:
    if (ctx->pc == 0x1D1254u) {
        ctx->pc = 0x1D1254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1250u;
        // 0x1d1254: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1258u;
        goto label_1d1258;
    }
    ctx->pc = 0x1D1250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1258u);
        ctx->pc = 0x1D1254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1250u;
        // 0x1d1254: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1250u, 0x1D1258u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1258u;
label_1d1258:
    // 0x1d1258: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d1258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d125c:
    // 0x1d125c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1d1260:
    if (ctx->pc == 0x1D1260u) {
        ctx->pc = 0x1D1260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D125Cu;
        // 0x1d1260: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1264u;
        goto label_1d1264;
    }
    ctx->pc = 0x1D125Cu;
    {
        const bool branch_taken_0x1d125c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D125Cu;
        // 0x1d1260: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d125c) {
            ctx->pc = 0x1D126Cu;
            goto label_1d126c;
        }
    }
    ctx->pc = 0x1D1264u;
label_1d1264:
    // 0x1d1264: 0xc07433a  jal         func_1D0CE8
label_1d1268:
    if (ctx->pc == 0x1D1268u) {
        ctx->pc = 0x1D126Cu;
        goto label_1d126c;
    }
    ctx->pc = 0x1D1264u;
    SET_GPR_U32(ctx, 31, 0x1D126Cu);
    ctx->pc = 0x1D0CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0CE8u, 0x1D1264u, 0x1D126Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D126Cu;
label_1d126c:
    // 0x1d126c: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
label_1d1270:
    if (ctx->pc == 0x1D1270u) {
        ctx->pc = 0x1D1270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D126Cu;
        // 0x1d1270: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1274u;
        goto label_1d1274;
    }
    ctx->pc = 0x1D126Cu;
    {
        const bool branch_taken_0x1d126c = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1D1270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D126Cu;
        // 0x1d1270: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d126c) {
            ctx->pc = 0x1D1258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1258;
        }
    }
    ctx->pc = 0x1D1274u;
label_1d1274:
    // 0x1d1274: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1d1274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d1278:
    // 0x1d1278: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x1d1278u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d127c:
    // 0x1d127c: 0x265317e8  addiu       $s3, $s2, 0x17E8
    ctx->pc = 0x1d127cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 6120));
label_1d1280:
    // 0x1d1280: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d1280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d1284:
    // 0x1d1284: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1d1288:
    if (ctx->pc == 0x1D1288u) {
        ctx->pc = 0x1D1288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1284u;
        // 0x1d1288: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D128Cu;
        goto label_1d128c;
    }
    ctx->pc = 0x1D1284u;
    {
        const bool branch_taken_0x1d1284 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1284u;
        // 0x1d1288: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1284) {
            ctx->pc = 0x1D1294u;
            goto label_1d1294;
        }
    }
    ctx->pc = 0x1D128Cu;
label_1d128c:
    // 0x1d128c: 0xc07437e  jal         func_1D0DF8
label_1d1290:
    if (ctx->pc == 0x1D1290u) {
        ctx->pc = 0x1D1294u;
        goto label_1d1294;
    }
    ctx->pc = 0x1D128Cu;
    SET_GPR_U32(ctx, 31, 0x1D1294u);
    ctx->pc = 0x1D0DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DF8u, 0x1D128Cu, 0x1D1294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1294u;
label_1d1294:
    // 0x1d1294: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
label_1d1298:
    if (ctx->pc == 0x1D1298u) {
        ctx->pc = 0x1D1298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1294u;
        // 0x1d1298: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D129Cu;
        goto label_1d129c;
    }
    ctx->pc = 0x1D1294u;
    {
        const bool branch_taken_0x1d1294 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1D1298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1294u;
        // 0x1d1298: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1294) {
            ctx->pc = 0x1D1280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1280;
        }
    }
    ctx->pc = 0x1D129Cu;
label_1d129c:
    // 0x1d129c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1d129cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d12a0:
    // 0x1d12a0: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x1d12a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d12a4:
    // 0x1d12a4: 0x0  nop
    ctx->pc = 0x1d12a4u;
    // NOP
label_1d12a8:
    // 0x1d12a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d12a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d12ac:
    // 0x1d12ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1d12b0:
    if (ctx->pc == 0x1D12B0u) {
        ctx->pc = 0x1D12B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D12ACu;
        // 0x1d12b0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D12B4u;
        goto label_1d12b4;
    }
    ctx->pc = 0x1D12ACu;
    {
        const bool branch_taken_0x1d12ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D12B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D12ACu;
        // 0x1d12b0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d12ac) {
            ctx->pc = 0x1D12BCu;
            goto label_1d12bc;
        }
    }
    ctx->pc = 0x1D12B4u;
label_1d12b4:
    // 0x1d12b4: 0xc07433a  jal         func_1D0CE8
label_1d12b8:
    if (ctx->pc == 0x1D12B8u) {
        ctx->pc = 0x1D12BCu;
        goto label_1d12bc;
    }
    ctx->pc = 0x1D12B4u;
    SET_GPR_U32(ctx, 31, 0x1D12BCu);
    ctx->pc = 0x1D0CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0CE8u, 0x1D12B4u, 0x1D12BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D12BCu;
label_1d12bc:
    // 0x1d12bc: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
label_1d12c0:
    if (ctx->pc == 0x1D12C0u) {
        ctx->pc = 0x1D12C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D12BCu;
        // 0x1d12c0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D12C4u;
        goto label_1d12c4;
    }
    ctx->pc = 0x1D12BCu;
    {
        const bool branch_taken_0x1d12bc = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1D12C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D12BCu;
        // 0x1d12c0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d12bc) {
            ctx->pc = 0x1D12A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d12a8;
        }
    }
    ctx->pc = 0x1D12C4u;
label_1d12c4:
    // 0x1d12c4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1d12c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d12c8:
    // 0x1d12c8: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x1d12c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d12cc:
    // 0x1d12cc: 0x0  nop
    ctx->pc = 0x1d12ccu;
    // NOP
label_1d12d0:
    // 0x1d12d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d12d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d12d4:
    // 0x1d12d4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1d12d8:
    if (ctx->pc == 0x1D12D8u) {
        ctx->pc = 0x1D12D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D12D4u;
        // 0x1d12d8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D12DCu;
        goto label_1d12dc;
    }
    ctx->pc = 0x1D12D4u;
    {
        const bool branch_taken_0x1d12d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D12D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D12D4u;
        // 0x1d12d8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d12d4) {
            ctx->pc = 0x1D12E4u;
            goto label_1d12e4;
        }
    }
    ctx->pc = 0x1D12DCu;
label_1d12dc:
    // 0x1d12dc: 0xc07437e  jal         func_1D0DF8
label_1d12e0:
    if (ctx->pc == 0x1D12E0u) {
        ctx->pc = 0x1D12E4u;
        goto label_1d12e4;
    }
    ctx->pc = 0x1D12DCu;
    SET_GPR_U32(ctx, 31, 0x1D12E4u);
    ctx->pc = 0x1D0DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DF8u, 0x1D12DCu, 0x1D12E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D12E4u;
label_1d12e4:
    // 0x1d12e4: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
label_1d12e8:
    if (ctx->pc == 0x1D12E8u) {
        ctx->pc = 0x1D12E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D12E4u;
        // 0x1d12e8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D12ECu;
        goto label_1d12ec;
    }
    ctx->pc = 0x1D12E4u;
    {
        const bool branch_taken_0x1d12e4 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1D12E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D12E4u;
        // 0x1d12e8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d12e4) {
            ctx->pc = 0x1D12D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d12d0;
        }
    }
    ctx->pc = 0x1D12ECu;
label_1d12ec:
    // 0x1d12ec: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1d12ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_1d12f0:
    // 0x1d12f0: 0xc07e9c4  jal         func_1FA710
label_1d12f4:
    if (ctx->pc == 0x1D12F4u) {
        ctx->pc = 0x1D12F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D12F0u;
        // 0x1d12f4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D12F8u;
        goto label_1d12f8;
    }
    ctx->pc = 0x1D12F0u;
    SET_GPR_U32(ctx, 31, 0x1D12F8u);
    ctx->pc = 0x1D12F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D12F0u;
    // 0x1d12f4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x1D12F0u, 0x1D12F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D12F8u;
label_1d12f8:
    // 0x1d12f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d12f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d12fc:
    // 0x1d12fc: 0xc0755e0  jal         func_1D5780
label_1d1300:
    if (ctx->pc == 0x1D1300u) {
        ctx->pc = 0x1D1300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D12FCu;
        // 0x1d1300: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1304u;
        goto label_1d1304;
    }
    ctx->pc = 0x1D12FCu;
    SET_GPR_U32(ctx, 31, 0x1D1304u);
    ctx->pc = 0x1D1300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D12FCu;
    // 0x1d1300: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5780u, 0x1D12FCu, 0x1D1304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1304u;
label_1d1304:
    // 0x1d1304: 0xc0753de  jal         func_1D4F78
label_1d1308:
    if (ctx->pc == 0x1D1308u) {
        ctx->pc = 0x1D1308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1304u;
        // 0x1d1308: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D130Cu;
        goto label_1d130c;
    }
    ctx->pc = 0x1D1304u;
    SET_GPR_U32(ctx, 31, 0x1D130Cu);
    ctx->pc = 0x1D1308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1304u;
    // 0x1d1308: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4F78u, 0x1D1304u, 0x1D130Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D130Cu;
label_1d130c:
    // 0x1d130c: 0xc0753f4  jal         func_1D4FD0
label_1d1310:
    if (ctx->pc == 0x1D1310u) {
        ctx->pc = 0x1D1310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D130Cu;
        // 0x1d1310: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1314u;
        goto label_1d1314;
    }
    ctx->pc = 0x1D130Cu;
    SET_GPR_U32(ctx, 31, 0x1D1314u);
    ctx->pc = 0x1D1310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D130Cu;
    // 0x1d1310: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4FD0u, 0x1D130Cu, 0x1D1314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1314u;
label_1d1314:
    // 0x1d1314: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d1314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d1318:
    // 0x1d1318: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d1318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d131c:
    // 0x1d131c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d131cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d1320:
    // 0x1d1320: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1d1320u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1324:
    // 0x1d1324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d1328:
    // 0x1d1328: 0x3e00008  jr          $ra
label_1d132c:
    if (ctx->pc == 0x1D132Cu) {
        ctx->pc = 0x1D132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1328u;
        // 0x1d132c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1330u;
        goto label_fallthrough_0x1d1328;
    }
    ctx->pc = 0x1D1328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1328u;
        // 0x1d132c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d1328:
    ctx->pc = 0x1D1330u;
}
