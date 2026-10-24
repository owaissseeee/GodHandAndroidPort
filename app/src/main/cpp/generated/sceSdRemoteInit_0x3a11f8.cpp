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

// Function: sceSdRemoteInit
// Address: 0x3a11f8 - 0x3a12b8
void sceSdRemoteInit_0x3a11f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSdRemoteInit_0x3a11f8");
#endif

    switch (ctx->pc) {
        case 0x3a1220u: goto label_3a1220;
        case 0x3a1234u: goto label_3a1234;
        case 0x3a1244u: goto label_3a1244;
        case 0x3a1250u: goto label_3a1250;
        case 0x3a128cu: goto label_3a128c;
        default: break;
    }

    ctx->pc = 0x3a11f8u;

    // 0x3a11f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a11f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3a11fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a11fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1200: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a1200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a1204: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3a1204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3a1208: 0x3c100078  lui         $s0, 0x78
    ctx->pc = 0x3a1208u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)120 << 16));
    // 0x3a120c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3a120cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3a1210: 0x2612c900  addiu       $s2, $s0, -0x3700
    ctx->pc = 0x3a1210u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953216));
    // 0x3a1214: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3a1214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3a1218: 0xc0eca40  jal         func_3B2900
    ctx->pc = 0x3A1218u;
    SET_GPR_U32(ctx, 31, 0x3A1220u);
    ctx->pc = 0x3A121Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1218u;
    // 0x3a121c: 0x3c110046  lui         $s1, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)70 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2900u, 0x3A1218u, 0x3A1220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1220u;
label_3a1220:
    // 0x3a1220: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3a1220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x3a1224: 0x2604c900  addiu       $a0, $s0, -0x3700
    ctx->pc = 0x3a1224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953216));
    // 0x3a1228: 0x34a50701  ori         $a1, $a1, 0x701
    ctx->pc = 0x3a1228u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1793);
    // 0x3a122c: 0xc0ecbd2  jal         func_3B2F48
    ctx->pc = 0x3A122Cu;
    SET_GPR_U32(ctx, 31, 0x3A1234u);
    ctx->pc = 0x3A1230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A122Cu;
    // 0x3a1230: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2F48u, 0x3A122Cu, 0x3A1234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1234u;
label_3a1234:
    // 0x3a1234: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A1234u;
    {
        const bool branch_taken_0x3a1234 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3A1238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1234u;
        // 0x3a1238: 0x24022710  addiu       $v0, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1234) {
            ctx->pc = 0x3A124Cu;
            goto label_3a124c;
        }
    }
    ctx->pc = 0x3A123Cu;
    // 0x3a123c: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x3A123Cu;
    SET_GPR_U32(ctx, 31, 0x3A1244u);
    ctx->pc = 0x3A1240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A123Cu;
    // 0x3a1240: 0x2624e998  addiu       $a0, $s1, -0x1668 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x3A123Cu, 0x3A1244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1244u;
label_3a1244:
    // 0x3a1244: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3A1244u;
    {
        const bool branch_taken_0x3a1244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1244u;
        // 0x3a1248: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1244) {
            ctx->pc = 0x3A1290u;
            goto label_3a1290;
        }
    }
    ctx->pc = 0x3A124Cu;
label_3a124c:
    // 0x3a124c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a124cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a1250:
    // 0x3a1250: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a1250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3a1254: 0x0  nop
    ctx->pc = 0x3a1254u;
    // NOP
    // 0x3a1258: 0x0  nop
    ctx->pc = 0x3a1258u;
    // NOP
    // 0x3a125c: 0x0  nop
    ctx->pc = 0x3a125cu;
    // NOP
    // 0x3a1260: 0x0  nop
    ctx->pc = 0x3a1260u;
    // NOP
    // 0x3a1264: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A1264u;
    {
        const bool branch_taken_0x3a1264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a1264) {
            ctx->pc = 0x3A1250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a1250;
        }
    }
    ctx->pc = 0x3A126Cu;
    // 0x3a126c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x3a126cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x3a1270: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3A1270u;
    {
        const bool branch_taken_0x3a1270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1270u;
        // 0x3a1274: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1270) {
            ctx->pc = 0x3A1220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a1220;
        }
    }
    ctx->pc = 0x3A1278u;
    // 0x3a1278: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3a1278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3a127c: 0xac40a300  sw          $zero, -0x5D00($v0)
    ctx->pc = 0x3a127cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943488), GPR_U32(ctx, 0));
    // 0x3a1280: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a1280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1284: 0xc0ebfc8  jal         func_3AFF20
    ctx->pc = 0x3A1284u;
    SET_GPR_U32(ctx, 31, 0x3A128Cu);
    ctx->pc = 0x3A1288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1284u;
    // 0x3a1288: 0xac60a304  sw          $zero, -0x5CFC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943492), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFF20u, 0x3A1284u, 0x3A128Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A128Cu;
label_3a128c:
    // 0x3a128c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a128cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a1290:
    // 0x3a1290: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3a1290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a1294: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3a1294u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a1298: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3a1298u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a129c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a129cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a12a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A12A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A12A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A12A0u;
        // 0x3a12a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A12A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A12A8u;
    // 0x3a12a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3a12a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3a12ac: 0x0  nop
    ctx->pc = 0x3a12acu;
    // NOP
    // 0x3a12b0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x3a12b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x3a12b4: 0x0  nop
    ctx->pc = 0x3a12b4u;
    // NOP
    ctx->pc = 0x3a12b8u;
}
