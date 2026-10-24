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

// Function: func_002CA220
// Address: 0x2ca220 - 0x2ca390
void func_002CA220_0x2ca220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002CA220_0x2ca220");
#endif

    switch (ctx->pc) {
        case 0x2ca234u: goto label_2ca234;
        case 0x2ca240u: goto label_2ca240;
        case 0x2ca250u: goto label_2ca250;
        case 0x2ca268u: goto label_2ca268;
        case 0x2ca27cu: goto label_2ca27c;
        case 0x2ca298u: goto label_2ca298;
        case 0x2ca2acu: goto label_2ca2ac;
        case 0x2ca2dcu: goto label_2ca2dc;
        case 0x2ca2f0u: goto label_2ca2f0;
        case 0x2ca328u: goto label_2ca328;
        case 0x2ca334u: goto label_2ca334;
        case 0x2ca33cu: goto label_2ca33c;
        case 0x2ca344u: goto label_2ca344;
        case 0x2ca34cu: goto label_2ca34c;
        case 0x2ca358u: goto label_2ca358;
        case 0x2ca360u: goto label_2ca360;
        case 0x2ca368u: goto label_2ca368;
        case 0x2ca378u: goto label_2ca378;
        default: break;
    }

    ctx->pc = 0x2ca220u;

    // 0x2ca220: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ca220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2ca224: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2ca224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2ca228: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2ca228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2ca22c: 0xc0c9808  jal         func_326020
    ctx->pc = 0x2CA22Cu;
    SET_GPR_U32(ctx, 31, 0x2CA234u);
    ctx->pc = 0x2CA230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA22Cu;
    // 0x2ca230: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326020u, 0x2CA22Cu, 0x2CA234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA234u;
label_2ca234:
    // 0x2ca234: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x2ca234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x2ca238: 0xc0e9a88  jal         func_3A6A20
    ctx->pc = 0x2CA238u;
    SET_GPR_U32(ctx, 31, 0x2CA240u);
    ctx->pc = 0x2CA23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA238u;
    // 0x2ca23c: 0x2484cde0  addiu       $a0, $a0, -0x3220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6A20u, 0x2CA238u, 0x2CA240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA240u;
label_2ca240:
    // 0x2ca240: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ca240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca244: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ca244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca248: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2CA248u;
    SET_GPR_U32(ctx, 31, 0x2CA250u);
    ctx->pc = 0x2CA24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA248u;
    // 0x2ca24c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2CA248u, 0x2CA250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA250u;
label_2ca250:
    // 0x2ca250: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2ca250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2ca254: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ca254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca258: 0x2463ce00  addiu       $v1, $v1, -0x3200
    ctx->pc = 0x2ca258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954496));
    // 0x2ca25c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2ca25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2ca260: 0xc0ca4b6  jal         func_3292D8
    ctx->pc = 0x2CA260u;
    SET_GPR_U32(ctx, 31, 0x2CA268u);
    ctx->pc = 0x2CA264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA260u;
    // 0x2ca264: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3292D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3292D8u, 0x2CA260u, 0x2CA268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA268u;
label_2ca268:
    // 0x2ca268: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2ca268u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ca26c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ca26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca270: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2ca270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ca274: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2CA274u;
    SET_GPR_U32(ctx, 31, 0x2CA27Cu);
    ctx->pc = 0x2CA278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA274u;
    // 0x2ca278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2CA274u, 0x2CA27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA27Cu;
label_2ca27c:
    // 0x2ca27c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2ca27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2ca280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ca280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca284: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2ca284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2ca288: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2ca288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2ca28c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x2ca28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x2ca290: 0xc0ca42e  jal         func_3290B8
    ctx->pc = 0x2CA290u;
    SET_GPR_U32(ctx, 31, 0x2CA298u);
    ctx->pc = 0x2CA294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA290u;
    // 0x2ca294: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3290B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3290B8u, 0x2CA290u, 0x2CA298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA298u;
label_2ca298:
    // 0x2ca298: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2ca298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ca29c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ca29cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca2a0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2ca2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ca2a4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2CA2A4u;
    SET_GPR_U32(ctx, 31, 0x2CA2ACu);
    ctx->pc = 0x2CA2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA2A4u;
    // 0x2ca2a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2CA2A4u, 0x2CA2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA2ACu;
label_2ca2ac:
    // 0x2ca2ac: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2ca2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2ca2b0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2ca2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2ca2b4: 0x2463ce10  addiu       $v1, $v1, -0x31F0
    ctx->pc = 0x2ca2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954512));
    // 0x2ca2b8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2ca2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2ca2bc: 0x24060668  addiu       $a2, $zero, 0x668
    ctx->pc = 0x2ca2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1640));
    // 0x2ca2c0: 0x24421f80  addiu       $v0, $v0, 0x1F80
    ctx->pc = 0x2ca2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8064));
    // 0x2ca2c4: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x2ca2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x2ca2c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ca2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca2cc: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x2ca2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x2ca2d0: 0xafa6003c  sw          $a2, 0x3C($sp)
    ctx->pc = 0x2ca2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 6));
    // 0x2ca2d4: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x2CA2D4u;
    SET_GPR_U32(ctx, 31, 0x2CA2DCu);
    ctx->pc = 0x2CA2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA2D4u;
    // 0x2ca2d8: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x2CA2D4u, 0x2CA2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA2DCu;
label_2ca2dc:
    // 0x2ca2dc: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2ca2dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ca2e0: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x2ca2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2ca2e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ca2e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca2e8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2CA2E8u;
    SET_GPR_U32(ctx, 31, 0x2CA2F0u);
    ctx->pc = 0x2CA2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA2E8u;
    // 0x2ca2ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2CA2E8u, 0x2CA2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA2F0u;
label_2ca2f0:
    // 0x2ca2f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ca2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca2f4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2ca2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ca2f8: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x2ca2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2ca2fc: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x2ca2fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2ca300: 0x24080060  addiu       $t0, $zero, 0x60
    ctx->pc = 0x2ca300u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2ca304: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2ca304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ca308: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x2ca308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x2ca30c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ca30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca310: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x2ca310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x2ca314: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x2ca314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x2ca318: 0xafa6004c  sw          $a2, 0x4C($sp)
    ctx->pc = 0x2ca318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 6));
    // 0x2ca31c: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x2ca31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x2ca320: 0xc0c958e  jal         func_325638
    ctx->pc = 0x2CA320u;
    SET_GPR_U32(ctx, 31, 0x2CA328u);
    ctx->pc = 0x2CA324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA320u;
    // 0x2ca324: 0xafa80054  sw          $t0, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325638u, 0x2CA320u, 0x2CA328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA328u;
label_2ca328:
    // 0x2ca328: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ca328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca32c: 0xc0c9852  jal         func_326148
    ctx->pc = 0x2CA32Cu;
    SET_GPR_U32(ctx, 31, 0x2CA334u);
    ctx->pc = 0x2CA330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA32Cu;
    // 0x2ca330: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326148u, 0x2CA32Cu, 0x2CA334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA334u;
label_2ca334:
    // 0x2ca334: 0xc0c9254  jal         func_324950
    ctx->pc = 0x2CA334u;
    SET_GPR_U32(ctx, 31, 0x2CA33Cu);
    ctx->pc = 0x324950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324950u, 0x2CA334u, 0x2CA33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA33Cu;
label_2ca33c:
    // 0x2ca33c: 0xc0cb468  jal         func_32D1A0
    ctx->pc = 0x2CA33Cu;
    SET_GPR_U32(ctx, 31, 0x2CA344u);
    ctx->pc = 0x32D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D1A0u, 0x2CA33Cu, 0x2CA344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA344u;
label_2ca344:
    // 0x2ca344: 0xc0ca498  jal         func_329260
    ctx->pc = 0x2CA344u;
    SET_GPR_U32(ctx, 31, 0x2CA34Cu);
    ctx->pc = 0x2CA348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA344u;
    // 0x2ca348: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329260u, 0x2CA344u, 0x2CA34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA34Cu;
label_2ca34c:
    // 0x2ca34c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x2ca34cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x2ca350: 0xc0caebc  jal         func_32BAF0
    ctx->pc = 0x2CA350u;
    SET_GPR_U32(ctx, 31, 0x2CA358u);
    ctx->pc = 0x2CA354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA350u;
    // 0x2ca354: 0x2484ce20  addiu       $a0, $a0, -0x31E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BAF0u, 0x2CA350u, 0x2CA358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA358u;
label_2ca358:
    // 0x2ca358: 0xc0ca49e  jal         func_329278
    ctx->pc = 0x2CA358u;
    SET_GPR_U32(ctx, 31, 0x2CA360u);
    ctx->pc = 0x2CA35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA358u;
    // 0x2ca35c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329278u, 0x2CA358u, 0x2CA360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA360u;
label_2ca360:
    // 0x2ca360: 0xc0dd5bc  jal         func_3756F0
    ctx->pc = 0x2CA360u;
    SET_GPR_U32(ctx, 31, 0x2CA368u);
    ctx->pc = 0x3756F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3756F0u, 0x2CA360u, 0x2CA368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA368u;
label_2ca368:
    // 0x2ca368: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA368u;
    {
        const bool branch_taken_0x2ca368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA368u;
        // 0x2ca36c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca368) {
            ctx->pc = 0x2CA37Cu;
            goto label_2ca37c;
        }
    }
    ctx->pc = 0x2CA370u;
    // 0x2ca370: 0xc0cae8c  jal         func_32BA30
    ctx->pc = 0x2CA370u;
    SET_GPR_U32(ctx, 31, 0x2CA378u);
    ctx->pc = 0x2CA374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA370u;
    // 0x2ca374: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BA30u, 0x2CA370u, 0x2CA378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA378u;
label_2ca378:
    // 0x2ca378: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2ca378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2ca37c:
    // 0x2ca37c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2ca37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ca380: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA380u;
        // 0x2ca384: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA388u;
    // 0x2ca388: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2ca388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ca38c: 0x0  nop
    ctx->pc = 0x2ca38cu;
    // NOP
    ctx->pc = 0x2ca390u;
}
