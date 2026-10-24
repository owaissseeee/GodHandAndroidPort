#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r100_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r100
{
// Function: R100Init__Fv
// Address: 0x799288 - 0x7997c0
void R100Init__Fv_0x799288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R100Init__Fv_0x799288");
#endif

    switch (ctx->pc) {
        case 0x7992c0u: goto label_7992c0;
        case 0x7992ecu: goto label_7992ec;
        case 0x7992f8u: goto label_7992f8;
        case 0x799304u: goto label_799304;
        case 0x799310u: goto label_799310;
        case 0x79931cu: goto label_79931c;
        case 0x799334u: goto label_799334;
        case 0x799340u: goto label_799340;
        case 0x79934cu: goto label_79934c;
        case 0x799358u: goto label_799358;
        case 0x799364u: goto label_799364;
        case 0x799390u: goto label_799390;
        case 0x7993b0u: goto label_7993b0;
        case 0x7993f8u: goto label_7993f8;
        case 0x799428u: goto label_799428;
        case 0x799450u: goto label_799450;
        case 0x799480u: goto label_799480;
        case 0x7994a0u: goto label_7994a0;
        case 0x7994bcu: goto label_7994bc;
        case 0x7994dcu: goto label_7994dc;
        case 0x799500u: goto label_799500;
        case 0x799530u: goto label_799530;
        case 0x799568u: goto label_799568;
        case 0x799598u: goto label_799598;
        case 0x7995d0u: goto label_7995d0;
        case 0x799600u: goto label_799600;
        case 0x799638u: goto label_799638;
        case 0x799668u: goto label_799668;
        case 0x7996a0u: goto label_7996a0;
        case 0x7996d0u: goto label_7996d0;
        case 0x799734u: goto label_799734;
        case 0x799744u: goto label_799744;
        case 0x799758u: goto label_799758;
        case 0x799768u: goto label_799768;
        case 0x799778u: goto label_799778;
        case 0x79978cu: goto label_79978c;
        default: break;
    }

    ctx->pc = 0x799288u;

    // 0x799288: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x799288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x79928c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x79928cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x799290: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x799290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x799294: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x799294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x799298: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x799298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x79929c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x79929cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x7992a0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x7992a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x7992a4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x7992a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x7992a8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x7992a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x7992ac: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x7992acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x7992b0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x7992b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x7992b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7992b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7992b8: 0xc1e6460  jal         func_799180
    ctx->pc = 0x7992B8u;
    SET_GPR_U32(ctx, 31, 0x7992C0u);
    ctx->pc = 0x7992BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992B8u;
    // 0x7992bc: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x7992B8u, 0x7992C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992C0u;
label_7992c0:
    // 0x7992c0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x7992c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x7992c4: 0xae02c500  sw          $v0, -0x3B00($s0)
    ctx->pc = 0x7992c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952192), GPR_U32(ctx, 2));
    // 0x7992c8: 0x24637a2c  addiu       $v1, $v1, 0x7A2C
    ctx->pc = 0x7992c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31276));
    // 0x7992cc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x7992ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A34u));
    // 0x7992d0: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x7992d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x7992d4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x7992D4u;
    {
        const bool branch_taken_0x7992d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7992D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992D4u;
        // 0x7992d8: 0x3c110060  lui         $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992d4) {
            ctx->pc = 0x799324u;
            goto label_799324;
        }
    }
    ctx->pc = 0x7992DCu;
    // 0x7992dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7992dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992e0: 0x2630ea60  addiu       $s0, $s1, -0x15A0
    ctx->pc = 0x7992e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961760));
    // 0x7992e4: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x7992E4u;
    SET_GPR_U32(ctx, 31, 0x7992ECu);
    ctx->pc = 0x7992E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992E4u;
    // 0x7992e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x7992E4u, 0x7992ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992ECu;
label_7992ec:
    // 0x7992ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7992ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992f0: 0xc0b0a3e  jal         func_2C28F8
    ctx->pc = 0x7992F0u;
    SET_GPR_U32(ctx, 31, 0x7992F8u);
    ctx->pc = 0x7992F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992F0u;
    // 0x7992f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C28F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C28F8u, 0x7992F0u, 0x7992F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992F8u;
label_7992f8:
    // 0x7992f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7992f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992fc: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x7992FCu;
    SET_GPR_U32(ctx, 31, 0x799304u);
    ctx->pc = 0x799300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992FCu;
    // 0x799300: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x7992FCu, 0x799304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799304u;
label_799304:
    // 0x799304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799308: 0xc0b0a68  jal         func_2C29A0
    ctx->pc = 0x799308u;
    SET_GPR_U32(ctx, 31, 0x799310u);
    ctx->pc = 0x79930Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799308u;
    // 0x79930c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29A0u, 0x799308u, 0x799310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799310u;
label_799310:
    // 0x799310: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799314: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799314u;
    SET_GPR_U32(ctx, 31, 0x79931Cu);
    ctx->pc = 0x799318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799314u;
    // 0x799318: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799314u, 0x79931Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79931Cu;
label_79931c:
    // 0x79931c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x79931Cu;
    {
        const bool branch_taken_0x79931c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79931Cu;
        // 0x799320: 0x3c04005f  lui         $a0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79931c) {
            ctx->pc = 0x799368u;
            goto label_799368;
        }
    }
    ctx->pc = 0x799324u;
label_799324:
    // 0x799324: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799328: 0x2630ea60  addiu       $s0, $s1, -0x15A0
    ctx->pc = 0x799328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961760));
    // 0x79932c: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x79932Cu;
    SET_GPR_U32(ctx, 31, 0x799334u);
    ctx->pc = 0x799330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79932Cu;
    // 0x799330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x79932Cu, 0x799334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799334u;
label_799334:
    // 0x799334: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799338: 0xc0b0a68  jal         func_2C29A0
    ctx->pc = 0x799338u;
    SET_GPR_U32(ctx, 31, 0x799340u);
    ctx->pc = 0x79933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799338u;
    // 0x79933c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29A0u, 0x799338u, 0x799340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799340u;
label_799340:
    // 0x799340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799344: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x799344u;
    SET_GPR_U32(ctx, 31, 0x79934Cu);
    ctx->pc = 0x799348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799344u;
    // 0x799348: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x799344u, 0x79934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79934Cu;
label_79934c:
    // 0x79934c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79934cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799350: 0xc0b0a3e  jal         func_2C28F8
    ctx->pc = 0x799350u;
    SET_GPR_U32(ctx, 31, 0x799358u);
    ctx->pc = 0x799354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799350u;
    // 0x799354: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C28F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C28F8u, 0x799350u, 0x799358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799358u;
label_799358:
    // 0x799358: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79935c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79935Cu;
    SET_GPR_U32(ctx, 31, 0x799364u);
    ctx->pc = 0x799360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79935Cu;
    // 0x799360: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79935Cu, 0x799364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799364u;
label_799364:
    // 0x799364: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x799364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_799368:
    // 0x799368: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x799368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x79936c: 0x8c838658  lw          $v1, -0x79A8($a0)
    ctx->pc = 0x79936cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936152)));
    // 0x799370: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799374: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x799374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x799378: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x799378u;
    {
        const bool branch_taken_0x799378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799378u;
        // 0x79937c: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799378) {
            ctx->pc = 0x7993B4u;
            goto label_7993b4;
        }
    }
    ctx->pc = 0x799380u;
    // 0x799380: 0x2630ea60  addiu       $s0, $s1, -0x15A0
    ctx->pc = 0x799380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961760));
    // 0x799384: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799388: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x799388u;
    SET_GPR_U32(ctx, 31, 0x799390u);
    ctx->pc = 0x79938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799388u;
    // 0x79938c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x799388u, 0x799390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799390u;
label_799390:
    // 0x799390: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799390u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x799394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799398: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79939c: 0x24e79ab8  addiu       $a3, $a3, -0x6548
    ctx->pc = 0x79939cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941368));
    // 0x7993a0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7993a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7993a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7993a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993a8: 0xc0b09d4  jal         func_2C2750
    ctx->pc = 0x7993A8u;
    SET_GPR_U32(ctx, 31, 0x7993B0u);
    ctx->pc = 0x7993ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993A8u;
    // 0x7993ac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2750u, 0x7993A8u, 0x7993B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993B0u;
label_7993b0:
    // 0x7993b0: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7993b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_7993b4:
    // 0x7993b4: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x7993b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x7993b8: 0x8044c3a0  lb          $a0, -0x3C60($v0)
    ctx->pc = 0x7993b8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294951840)));
    // 0x7993bc: 0x2446c3a0  addiu       $a2, $v0, -0x3C60
    ctx->pc = 0x7993bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951840));
    // 0x7993c0: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x7993c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993c4: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x7993c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x7993c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7993c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7993ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993d0: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x7993d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x7993d4: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x7993d4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x7993d8: 0x3c13007a  lui         $s3, 0x7A
    ctx->pc = 0x7993d8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
    // 0x7993dc: 0x3c15007a  lui         $s5, 0x7A
    ctx->pc = 0x7993dcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)122 << 16));
    // 0x7993e0: 0x3c16007a  lui         $s6, 0x7A
    ctx->pc = 0x7993e0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)122 << 16));
    // 0x7993e4: 0x3c17007a  lui         $s7, 0x7A
    ctx->pc = 0x7993e4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
    // 0x7993e8: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x7993E8u;
    {
        const bool branch_taken_0x7993e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993E8u;
        // 0x7993ec: 0x3c1e007a  lui         $fp, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993e8) {
            ctx->pc = 0x799420u;
            goto label_799420;
        }
    }
    ctx->pc = 0x7993F0u;
    // 0x7993f0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7993f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7993f4: 0x0  nop
    ctx->pc = 0x7993f4u;
    // NOP
label_7993f8:
    // 0x7993f8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7993f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x7993fc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7993fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799400: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799404: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799408: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799408u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79940c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79940Cu;
    {
        const bool branch_taken_0x79940c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79940Cu;
        // 0x799410: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79940c) {
            ctx->pc = 0x799420u;
            goto label_799420;
        }
    }
    ctx->pc = 0x799414u;
    // 0x799414: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799414u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799418: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799418u;
    {
        const bool branch_taken_0x799418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799418) {
            ctx->pc = 0x79941Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799418u;
            // 0x79941c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7993F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7993f8;
        }
    }
    ctx->pc = 0x799420u;
label_799420:
    // 0x799420: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799420u;
    SET_GPR_U32(ctx, 31, 0x799428u);
    ctx->pc = 0x799424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799420u;
    // 0x799424: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799420u, 0x799428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799428u;
label_799428:
    // 0x799428: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x799428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79942c: 0x26484c58  addiu       $t0, $s2, 0x4C58
    ctx->pc = 0x79942cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 19544));
    // 0x799430: 0x8202c3a8  lb          $v0, -0x3C58($s0)
    ctx->pc = 0x799430u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294951848)));
    // 0x799434: 0x2603c3a8  addiu       $v1, $s0, -0x3C58
    ctx->pc = 0x799434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951848));
    // 0x799438: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79943c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79943Cu;
    {
        const bool branch_taken_0x79943c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79943Cu;
        // 0x799440: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79943c) {
            ctx->pc = 0x799478u;
            goto label_799478;
        }
    }
    ctx->pc = 0x799444u;
    // 0x799444: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799448: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799448u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79944c: 0x0  nop
    ctx->pc = 0x79944cu;
    // NOP
label_799450:
    // 0x799450: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799450u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799454: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799458: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79945c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79945cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799460: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799460u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799464: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799464u;
    {
        const bool branch_taken_0x799464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799464u;
        // 0x799468: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799464) {
            ctx->pc = 0x799478u;
            goto label_799478;
        }
    }
    ctx->pc = 0x79946Cu;
    // 0x79946c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79946cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799470: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799470u;
    {
        const bool branch_taken_0x799470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799470) {
            ctx->pc = 0x799474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799470u;
            // 0x799474: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799450;
        }
    }
    ctx->pc = 0x799478u;
label_799478:
    // 0x799478: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799478u;
    SET_GPR_U32(ctx, 31, 0x799480u);
    ctx->pc = 0x79947Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799478u;
    // 0x79947c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799478u, 0x799480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799480u;
label_799480:
    // 0x799480: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x799480u;
    {
        const bool branch_taken_0x799480 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x799484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799480u;
        // 0x799484: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799480) {
            ctx->pc = 0x7994A0u;
            goto label_7994a0;
        }
    }
    ctx->pc = 0x799488u;
    // 0x799488: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x799488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x79948c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79948cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799490: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x799490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x799494: 0x24a5c3b0  addiu       $a1, $a1, -0x3C50
    ctx->pc = 0x799494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951856));
    // 0x799498: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x799498u;
    SET_GPR_U32(ctx, 31, 0x7994A0u);
    ctx->pc = 0x79949Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799498u;
    // 0x79949c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799498u, 0x7994A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994A0u;
label_7994a0:
    // 0x7994a0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7994A0u;
    {
        const bool branch_taken_0x7994a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994A0u;
        // 0x7994a4: 0x3c04005d  lui         $a0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994a0) {
            ctx->pc = 0x7994BCu;
            goto label_7994bc;
        }
    }
    ctx->pc = 0x7994A8u;
    // 0x7994a8: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7994a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7994ac: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x7994acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x7994b0: 0x24a5c3c0  addiu       $a1, $a1, -0x3C40
    ctx->pc = 0x7994b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951872));
    // 0x7994b4: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x7994B4u;
    SET_GPR_U32(ctx, 31, 0x7994BCu);
    ctx->pc = 0x7994B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994B4u;
    // 0x7994b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x7994B4u, 0x7994BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994BCu;
label_7994bc:
    // 0x7994bc: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7994BCu;
    {
        const bool branch_taken_0x7994bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x7994C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994BCu;
        // 0x7994c0: 0x3c05007a  lui         $a1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994bc) {
            ctx->pc = 0x7994CCu;
            goto label_7994cc;
        }
    }
    ctx->pc = 0x7994C4u;
    // 0x7994c4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7994C4u;
    {
        const bool branch_taken_0x7994c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994C4u;
        // 0x7994c8: 0x8262c3d0  lb          $v0, -0x3C30($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294951888)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994c4) {
            ctx->pc = 0x7994E0u;
            goto label_7994e0;
        }
    }
    ctx->pc = 0x7994CCu;
label_7994cc:
    // 0x7994cc: 0x8e842f84  lw          $a0, 0x2F84($s4)
    ctx->pc = 0x7994ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x7994d0: 0x24a5bfb0  addiu       $a1, $a1, -0x4050
    ctx->pc = 0x7994d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950832));
    // 0x7994d4: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7994D4u;
    SET_GPR_U32(ctx, 31, 0x7994DCu);
    ctx->pc = 0x7994D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994D4u;
    // 0x7994d8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7994D4u, 0x7994DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994DCu;
label_7994dc:
    // 0x7994dc: 0x8262c3d0  lb          $v0, -0x3C30($s3)
    ctx->pc = 0x7994dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294951888)));
label_7994e0:
    // 0x7994e0: 0x26484c58  addiu       $t0, $s2, 0x4C58
    ctx->pc = 0x7994e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 19544));
    // 0x7994e4: 0x2663c3d0  addiu       $v1, $s3, -0x3C30
    ctx->pc = 0x7994e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951888));
    // 0x7994e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7994e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994ec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x7994ECu;
    {
        const bool branch_taken_0x7994ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994ECu;
        // 0x7994f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994ec) {
            ctx->pc = 0x799528u;
            goto label_799528;
        }
    }
    ctx->pc = 0x7994F4u;
    // 0x7994f4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7994f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994f8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7994f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7994fc: 0x0  nop
    ctx->pc = 0x7994fcu;
    // NOP
label_799500:
    // 0x799500: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799500u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799504: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799508: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79950c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79950cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799510: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799510u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799514: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799514u;
    {
        const bool branch_taken_0x799514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799514u;
        // 0x799518: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799514) {
            ctx->pc = 0x799528u;
            goto label_799528;
        }
    }
    ctx->pc = 0x79951Cu;
    // 0x79951c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79951cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799520: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799520u;
    {
        const bool branch_taken_0x799520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799520) {
            ctx->pc = 0x799524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799520u;
            // 0x799524: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799500;
        }
    }
    ctx->pc = 0x799528u;
label_799528:
    // 0x799528: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799528u;
    SET_GPR_U32(ctx, 31, 0x799530u);
    ctx->pc = 0x79952Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799528u;
    // 0x79952c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799528u, 0x799530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799530u;
label_799530:
    // 0x799530: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x799530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799534: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799534u;
    {
        const bool branch_taken_0x799534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799534u;
        // 0x799538: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799534) {
            ctx->pc = 0x799544u;
            goto label_799544;
        }
    }
    ctx->pc = 0x79953Cu;
    // 0x79953c: 0xac8205ec  sw          $v0, 0x5EC($a0)
    ctx->pc = 0x79953cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1516), GPR_U32(ctx, 2));
    // 0x799540: 0xac8205f0  sw          $v0, 0x5F0($a0)
    ctx->pc = 0x799540u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1520), GPR_U32(ctx, 2));
label_799544:
    // 0x799544: 0x82a2c3d8  lb          $v0, -0x3C28($s5)
    ctx->pc = 0x799544u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 4294951896)));
    // 0x799548: 0x26484c58  addiu       $t0, $s2, 0x4C58
    ctx->pc = 0x799548u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 19544));
    // 0x79954c: 0x26a3c3d8  addiu       $v1, $s5, -0x3C28
    ctx->pc = 0x79954cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951896));
    // 0x799550: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799554: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x799554u;
    {
        const bool branch_taken_0x799554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799554u;
        // 0x799558: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799554) {
            ctx->pc = 0x799590u;
            goto label_799590;
        }
    }
    ctx->pc = 0x79955Cu;
    // 0x79955c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79955cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799560: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799560u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799564: 0x0  nop
    ctx->pc = 0x799564u;
    // NOP
label_799568:
    // 0x799568: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799568u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79956c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79956cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799570: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799574: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799578: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799578u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79957c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79957Cu;
    {
        const bool branch_taken_0x79957c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79957Cu;
        // 0x799580: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79957c) {
            ctx->pc = 0x799590u;
            goto label_799590;
        }
    }
    ctx->pc = 0x799584u;
    // 0x799584: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799584u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799588: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799588u;
    {
        const bool branch_taken_0x799588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799588) {
            ctx->pc = 0x79958Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799588u;
            // 0x79958c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799568;
        }
    }
    ctx->pc = 0x799590u;
label_799590:
    // 0x799590: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799590u;
    SET_GPR_U32(ctx, 31, 0x799598u);
    ctx->pc = 0x799594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799590u;
    // 0x799594: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799590u, 0x799598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799598u;
label_799598:
    // 0x799598: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x799598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79959c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79959Cu;
    {
        const bool branch_taken_0x79959c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79959Cu;
        // 0x7995a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79959c) {
            ctx->pc = 0x7995B0u;
            goto label_7995b0;
        }
    }
    ctx->pc = 0x7995A4u;
    // 0x7995a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x7995a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7995a8: 0xac8205ec  sw          $v0, 0x5EC($a0)
    ctx->pc = 0x7995a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1516), GPR_U32(ctx, 2));
    // 0x7995ac: 0xac8305f0  sw          $v1, 0x5F0($a0)
    ctx->pc = 0x7995acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1520), GPR_U32(ctx, 3));
label_7995b0:
    // 0x7995b0: 0x82c2c3e0  lb          $v0, -0x3C20($s6)
    ctx->pc = 0x7995b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 4294951904)));
    // 0x7995b4: 0x26484c58  addiu       $t0, $s2, 0x4C58
    ctx->pc = 0x7995b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 19544));
    // 0x7995b8: 0x26c3c3e0  addiu       $v1, $s6, -0x3C20
    ctx->pc = 0x7995b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294951904));
    // 0x7995bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7995bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995c0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7995C0u;
    {
        const bool branch_taken_0x7995c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995C0u;
        // 0x7995c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995c0) {
            ctx->pc = 0x7995F8u;
            goto label_7995f8;
        }
    }
    ctx->pc = 0x7995C8u;
    // 0x7995c8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7995c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995cc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7995ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7995d0:
    // 0x7995d0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7995d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x7995d4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7995d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x7995d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7995d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7995dc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7995dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x7995e0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7995e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x7995e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7995E4u;
    {
        const bool branch_taken_0x7995e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995E4u;
        // 0x7995e8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995e4) {
            ctx->pc = 0x7995F8u;
            goto label_7995f8;
        }
    }
    ctx->pc = 0x7995ECu;
    // 0x7995ec: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7995ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7995f0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7995F0u;
    {
        const bool branch_taken_0x7995f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7995f0) {
            ctx->pc = 0x7995F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7995F0u;
            // 0x7995f4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7995D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7995d0;
        }
    }
    ctx->pc = 0x7995F8u;
label_7995f8:
    // 0x7995f8: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x7995F8u;
    SET_GPR_U32(ctx, 31, 0x799600u);
    ctx->pc = 0x7995FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995F8u;
    // 0x7995fc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x7995F8u, 0x799600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799600u;
label_799600:
    // 0x799600: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x799600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799604: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799604u;
    {
        const bool branch_taken_0x799604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799604u;
        // 0x799608: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799604) {
            ctx->pc = 0x799618u;
            goto label_799618;
        }
    }
    ctx->pc = 0x79960Cu;
    // 0x79960c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79960cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799610: 0xac8205ec  sw          $v0, 0x5EC($a0)
    ctx->pc = 0x799610u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1516), GPR_U32(ctx, 2));
    // 0x799614: 0xac8305f0  sw          $v1, 0x5F0($a0)
    ctx->pc = 0x799614u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1520), GPR_U32(ctx, 3));
label_799618:
    // 0x799618: 0x82e2c3e8  lb          $v0, -0x3C18($s7)
    ctx->pc = 0x799618u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 4294951912)));
    // 0x79961c: 0x26484c58  addiu       $t0, $s2, 0x4C58
    ctx->pc = 0x79961cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 19544));
    // 0x799620: 0x26e3c3e8  addiu       $v1, $s7, -0x3C18
    ctx->pc = 0x799620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951912));
    // 0x799624: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799628: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799628u;
    {
        const bool branch_taken_0x799628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799628u;
        // 0x79962c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799628) {
            ctx->pc = 0x799660u;
            goto label_799660;
        }
    }
    ctx->pc = 0x799630u;
    // 0x799630: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799634: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799634u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799638:
    // 0x799638: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799638u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79963c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79963cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799640: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799644: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799648: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799648u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79964c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79964Cu;
    {
        const bool branch_taken_0x79964c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79964Cu;
        // 0x799650: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79964c) {
            ctx->pc = 0x799660u;
            goto label_799660;
        }
    }
    ctx->pc = 0x799654u;
    // 0x799654: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799654u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799658: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799658u;
    {
        const bool branch_taken_0x799658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799658) {
            ctx->pc = 0x79965Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799658u;
            // 0x79965c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799638;
        }
    }
    ctx->pc = 0x799660u;
label_799660:
    // 0x799660: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799660u;
    SET_GPR_U32(ctx, 31, 0x799668u);
    ctx->pc = 0x799664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799660u;
    // 0x799664: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799660u, 0x799668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799668u;
label_799668:
    // 0x799668: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x799668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79966c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79966Cu;
    {
        const bool branch_taken_0x79966c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79966Cu;
        // 0x799670: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79966c) {
            ctx->pc = 0x799680u;
            goto label_799680;
        }
    }
    ctx->pc = 0x799674u;
    // 0x799674: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x799674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799678: 0xac8205ec  sw          $v0, 0x5EC($a0)
    ctx->pc = 0x799678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1516), GPR_U32(ctx, 2));
    // 0x79967c: 0xac8305f0  sw          $v1, 0x5F0($a0)
    ctx->pc = 0x79967cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1520), GPR_U32(ctx, 3));
label_799680:
    // 0x799680: 0x83c2c3f0  lb          $v0, -0x3C10($fp)
    ctx->pc = 0x799680u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294951920)));
    // 0x799684: 0x26484c58  addiu       $t0, $s2, 0x4C58
    ctx->pc = 0x799684u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 19544));
    // 0x799688: 0x27c3c3f0  addiu       $v1, $fp, -0x3C10
    ctx->pc = 0x799688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294951920));
    // 0x79968c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79968cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799690: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799690u;
    {
        const bool branch_taken_0x799690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799690u;
        // 0x799694: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799690) {
            ctx->pc = 0x7996C8u;
            goto label_7996c8;
        }
    }
    ctx->pc = 0x799698u;
    // 0x799698: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79969c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79969cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7996a0:
    // 0x7996a0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7996a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x7996a4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7996a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x7996a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7996a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7996ac: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7996acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x7996b0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7996b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x7996b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7996B4u;
    {
        const bool branch_taken_0x7996b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996B4u;
        // 0x7996b8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996b4) {
            ctx->pc = 0x7996C8u;
            goto label_7996c8;
        }
    }
    ctx->pc = 0x7996BCu;
    // 0x7996bc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7996bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7996c0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7996C0u;
    {
        const bool branch_taken_0x7996c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7996c0) {
            ctx->pc = 0x7996C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7996C0u;
            // 0x7996c4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7996A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7996a0;
        }
    }
    ctx->pc = 0x7996C8u;
label_7996c8:
    // 0x7996c8: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x7996C8u;
    SET_GPR_U32(ctx, 31, 0x7996D0u);
    ctx->pc = 0x7996CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996C8u;
    // 0x7996cc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x7996C8u, 0x7996D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996D0u;
label_7996d0:
    // 0x7996d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7996d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996d4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7996D4u;
    {
        const bool branch_taken_0x7996d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996D4u;
        // 0x7996d8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996d4) {
            ctx->pc = 0x7996E8u;
            goto label_7996e8;
        }
    }
    ctx->pc = 0x7996DCu;
    // 0x7996dc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x7996dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x7996e0: 0xac8205ec  sw          $v0, 0x5EC($a0)
    ctx->pc = 0x7996e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1516), GPR_U32(ctx, 2));
    // 0x7996e4: 0xac8305f0  sw          $v1, 0x5F0($a0)
    ctx->pc = 0x7996e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1520), GPR_U32(ctx, 3));
label_7996e8:
    // 0x7996e8: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x7996e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x7996ec: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x7996ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x7996f0: 0x8c62c500  lw          $v0, -0x3B00($v1)
    ctx->pc = 0x7996f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79C500u));
    // 0x7996f4: 0xa0400004  sb          $zero, 0x4($v0)
    ctx->pc = 0x7996f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x7996f8: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x7996f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x7996fc: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x7996fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799700: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799704: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x799704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x799708: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x799708u;
    {
        const bool branch_taken_0x799708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799708u;
        // 0x79970c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799708) {
            ctx->pc = 0x79973Cu;
            goto label_79973c;
        }
    }
    ctx->pc = 0x799710u;
    // 0x799710: 0x24437a2c  addiu       $v1, $v0, 0x7A2C
    ctx->pc = 0x799710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 31276));
    // 0x799714: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x799714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x799718: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x799718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x79971c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79971Cu;
    {
        const bool branch_taken_0x79971c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79971Cu;
        // 0x799720: 0x3c05007a  lui         $a1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79971c) {
            ctx->pc = 0x79973Cu;
            goto label_79973c;
        }
    }
    ctx->pc = 0x799724u;
    // 0x799724: 0x8e842f84  lw          $a0, 0x2F84($s4)
    ctx->pc = 0x799724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x799728: 0x24a59a30  addiu       $a1, $a1, -0x65D0
    ctx->pc = 0x799728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941232));
    // 0x79972c: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79972Cu;
    SET_GPR_U32(ctx, 31, 0x799734u);
    ctx->pc = 0x799730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79972Cu;
    // 0x799730: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79972Cu, 0x799734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799734u;
label_799734:
    // 0x799734: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x799734u;
    {
        const bool branch_taken_0x799734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799734u;
        // 0x799738: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799734) {
            ctx->pc = 0x79975Cu;
            goto label_79975c;
        }
    }
    ctx->pc = 0x79973Cu;
label_79973c:
    // 0x79973c: 0xc1e6710  jal         func_799C40
    ctx->pc = 0x79973Cu;
    SET_GPR_U32(ctx, 31, 0x799744u);
    ctx->pc = 0x799C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799C40u, 0x79973Cu, 0x799744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799744u;
label_799744:
    // 0x799744: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799748: 0x8e842f84  lw          $a0, 0x2F84($s4)
    ctx->pc = 0x799748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x79974c: 0x24a5a178  addiu       $a1, $a1, -0x5E88
    ctx->pc = 0x79974cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943096));
    // 0x799750: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799750u;
    SET_GPR_U32(ctx, 31, 0x799758u);
    ctx->pc = 0x799754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799750u;
    // 0x799754: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799750u, 0x799758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799758u;
label_799758:
    // 0x799758: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x799758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_79975c:
    // 0x79975c: 0x24509b70  addiu       $s0, $v0, -0x6490
    ctx->pc = 0x79975cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x799760: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x799760u;
    SET_GPR_U32(ctx, 31, 0x799768u);
    ctx->pc = 0x799764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799760u;
    // 0x799764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x799760u, 0x799768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799768u;
label_799768:
    // 0x799768: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x799768u;
    {
        const bool branch_taken_0x799768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799768) {
            ctx->pc = 0x79976Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799768u;
            // 0x79976c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799790u;
            goto label_799790;
        }
    }
    ctx->pc = 0x799770u;
    // 0x799770: 0xc07e99e  jal         func_1FA678
    ctx->pc = 0x799770u;
    SET_GPR_U32(ctx, 31, 0x799778u);
    ctx->pc = 0x799774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799770u;
    // 0x799774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA678u, 0x799770u, 0x799778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799778u;
label_799778:
    // 0x799778: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x799778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x79977c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79977Cu;
    {
        const bool branch_taken_0x79977c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79977Cu;
        // 0x799780: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79977c) {
            ctx->pc = 0x799790u;
            goto label_799790;
        }
    }
    ctx->pc = 0x799784u;
    // 0x799784: 0xc1e65f2  jal         func_7997C8
    ctx->pc = 0x799784u;
    SET_GPR_U32(ctx, 31, 0x79978Cu);
    ctx->pc = 0x7997C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7997C8u, 0x799784u, 0x79978Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79978Cu;
label_79978c:
    // 0x79978c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x79978cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_799790:
    // 0x799790: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x799790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799794: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x799794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799798: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x799798u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79979c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x79979cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7997a0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x7997a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7997a4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x7997a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7997a8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x7997a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7997ac: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x7997acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7997b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7997b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7997b4: 0x3e00008  jr          $ra
    ctx->pc = 0x7997B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7997B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997B4u;
        // 0x7997b8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7997B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7997BCu;
    // 0x7997bc: 0x0  nop
    ctx->pc = 0x7997bcu;
    // NOP
    ctx->pc = 0x7997c0u;
}
} // namespace gh_r100
