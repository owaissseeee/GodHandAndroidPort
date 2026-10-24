#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r104_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r104
{
// Function: R104Init__Fv
// Address: 0x799268 - 0x7993f8
void R104Init__Fv_0x799268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R104Init__Fv_0x799268");
#endif

    switch (ctx->pc) {
        case 0x79928cu: goto label_79928c;
        case 0x7992b4u: goto label_7992b4;
        case 0x7992c0u: goto label_7992c0;
        case 0x7992ccu: goto label_7992cc;
        case 0x7992d8u: goto label_7992d8;
        case 0x7992ecu: goto label_7992ec;
        case 0x7992fcu: goto label_7992fc;
        case 0x799314u: goto label_799314;
        case 0x799320u: goto label_799320;
        case 0x79932cu: goto label_79932c;
        case 0x799338u: goto label_799338;
        case 0x799358u: goto label_799358;
        case 0x799364u: goto label_799364;
        case 0x799370u: goto label_799370;
        case 0x79937cu: goto label_79937c;
        case 0x79938cu: goto label_79938c;
        case 0x7993c0u: goto label_7993c0;
        case 0x7993e0u: goto label_7993e0;
        default: break;
    }

    ctx->pc = 0x799268u;

    // 0x799268: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x799268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79926c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x79926cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799270: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x799270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x799274: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x799274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x799278: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799278u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79927c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79927cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x799280: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799284: 0xc1e6460  jal         func_799180
    ctx->pc = 0x799284u;
    SET_GPR_U32(ctx, 31, 0x79928Cu);
    ctx->pc = 0x799288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799284u;
    // 0x799288: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799284u, 0x79928Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79928Cu;
label_79928c:
    // 0x79928c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x79928cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x799290: 0xae029b00  sw          $v0, -0x6500($s0)
    ctx->pc = 0x799290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294941440), GPR_U32(ctx, 2));
    // 0x799294: 0x8c627a34  lw          $v0, 0x7A34($v1)
    ctx->pc = 0x799294u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A34u));
    // 0x799298: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x799298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x79929c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x79929Cu;
    {
        const bool branch_taken_0x79929c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7992A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79929Cu;
        // 0x7992a0: 0x3c110060  lui         $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79929c) {
            ctx->pc = 0x799304u;
            goto label_799304;
        }
    }
    ctx->pc = 0x7992A4u;
    // 0x7992a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7992a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992a8: 0x2630ea60  addiu       $s0, $s1, -0x15A0
    ctx->pc = 0x7992a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961760));
    // 0x7992ac: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x7992ACu;
    SET_GPR_U32(ctx, 31, 0x7992B4u);
    ctx->pc = 0x7992B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992ACu;
    // 0x7992b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x7992ACu, 0x7992B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992B4u;
label_7992b4:
    // 0x7992b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7992b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992b8: 0xc0b0a3e  jal         func_2C28F8
    ctx->pc = 0x7992B8u;
    SET_GPR_U32(ctx, 31, 0x7992C0u);
    ctx->pc = 0x7992BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992B8u;
    // 0x7992bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C28F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C28F8u, 0x7992B8u, 0x7992C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992C0u;
label_7992c0:
    // 0x7992c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7992c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992c4: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x7992C4u;
    SET_GPR_U32(ctx, 31, 0x7992CCu);
    ctx->pc = 0x7992C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992C4u;
    // 0x7992c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x7992C4u, 0x7992CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992CCu;
label_7992cc:
    // 0x7992cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7992ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992d0: 0xc0b0a68  jal         func_2C29A0
    ctx->pc = 0x7992D0u;
    SET_GPR_U32(ctx, 31, 0x7992D8u);
    ctx->pc = 0x7992D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992D0u;
    // 0x7992d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29A0u, 0x7992D0u, 0x7992D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992D8u;
label_7992d8:
    // 0x7992d8: 0x8e439b00  lw          $v1, -0x6500($s2)
    ctx->pc = 0x7992d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941440)));
    // 0x7992dc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x7992dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7992e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7992e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992e4: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x7992E4u;
    SET_GPR_U32(ctx, 31, 0x7992ECu);
    ctx->pc = 0x7992E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992E4u;
    // 0x7992e8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x7992E4u, 0x7992ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992ECu;
label_7992ec:
    // 0x7992ec: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7992ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x7992f0: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x7992f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x7992f4: 0xc04f206  jal         func_13C818
    ctx->pc = 0x7992F4u;
    SET_GPR_U32(ctx, 31, 0x7992FCu);
    ctx->pc = 0x7992F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992F4u;
    // 0x7992f8: 0x24841dc0  addiu       $a0, $a0, 0x1DC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C818u, 0x7992F4u, 0x7992FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992FCu;
label_7992fc:
    // 0x7992fc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x7992FCu;
    {
        const bool branch_taken_0x7992fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992FCu;
        // 0x799300: 0x8e429b00  lw          $v0, -0x6500($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992fc) {
            ctx->pc = 0x799348u;
            goto label_799348;
        }
    }
    ctx->pc = 0x799304u;
label_799304:
    // 0x799304: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799308: 0x2630ea60  addiu       $s0, $s1, -0x15A0
    ctx->pc = 0x799308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961760));
    // 0x79930c: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x79930Cu;
    SET_GPR_U32(ctx, 31, 0x799314u);
    ctx->pc = 0x799310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79930Cu;
    // 0x799310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x79930Cu, 0x799314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799314u;
label_799314:
    // 0x799314: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799318: 0xc0b0a68  jal         func_2C29A0
    ctx->pc = 0x799318u;
    SET_GPR_U32(ctx, 31, 0x799320u);
    ctx->pc = 0x79931Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799318u;
    // 0x79931c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29A0u, 0x799318u, 0x799320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799320u;
label_799320:
    // 0x799320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799324: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x799324u;
    SET_GPR_U32(ctx, 31, 0x79932Cu);
    ctx->pc = 0x799328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799324u;
    // 0x799328: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x799324u, 0x79932Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79932Cu;
label_79932c:
    // 0x79932c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79932cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799330: 0xc0b0a3e  jal         func_2C28F8
    ctx->pc = 0x799330u;
    SET_GPR_U32(ctx, 31, 0x799338u);
    ctx->pc = 0x799334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799330u;
    // 0x799334: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C28F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C28F8u, 0x799330u, 0x799338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799338u;
label_799338:
    // 0x799338: 0x8e439b00  lw          $v1, -0x6500($s2)
    ctx->pc = 0x799338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941440)));
    // 0x79933c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79933cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799340: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x799340u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x799344: 0x8e429b00  lw          $v0, -0x6500($s2)
    ctx->pc = 0x799344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941440)));
label_799348:
    // 0x799348: 0x2630ea60  addiu       $s0, $s1, -0x15A0
    ctx->pc = 0x799348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961760));
    // 0x79934c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79934cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799350: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x799350u;
    SET_GPR_U32(ctx, 31, 0x799358u);
    ctx->pc = 0x799354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799350u;
    // 0x799354: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x799350u, 0x799358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799358u;
label_799358:
    // 0x799358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79935c: 0xc0b0a68  jal         func_2C29A0
    ctx->pc = 0x79935Cu;
    SET_GPR_U32(ctx, 31, 0x799364u);
    ctx->pc = 0x799360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79935Cu;
    // 0x799360: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29A0u, 0x79935Cu, 0x799364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799364u;
label_799364:
    // 0x799364: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x799364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799368: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799368u;
    SET_GPR_U32(ctx, 31, 0x799370u);
    ctx->pc = 0x79936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799368u;
    // 0x79936c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799368u, 0x799370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799370u;
label_799370:
    // 0x799370: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x799370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x799374: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799374u;
    SET_GPR_U32(ctx, 31, 0x79937Cu);
    ctx->pc = 0x799378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799374u;
    // 0x799378: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799374u, 0x79937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79937Cu;
label_79937c:
    // 0x79937c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79937cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799380: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799384: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x799384u;
    SET_GPR_U32(ctx, 31, 0x79938Cu);
    ctx->pc = 0x799388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799384u;
    // 0x799388: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x799384u, 0x79938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79938Cu;
label_79938c:
    // 0x79938c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79938cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799390: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x799390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x799394: 0x8c448658  lw          $a0, -0x79A8($v0)
    ctx->pc = 0x799394u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799398: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x799398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79939c: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x79939Cu;
    {
        const bool branch_taken_0x79939c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x7993A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79939Cu;
        // 0x7993a0: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79939c) {
            ctx->pc = 0x7993C8u;
            goto label_7993c8;
        }
    }
    ctx->pc = 0x7993A4u;
    // 0x7993a4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7993a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7993a8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x7993a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x7993ac: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x7993acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x7993b0: 0x24a59400  addiu       $a1, $a1, -0x6C00
    ctx->pc = 0x7993b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939648));
    // 0x7993b4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7993b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7993b8: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7993B8u;
    SET_GPR_U32(ctx, 31, 0x7993C0u);
    ctx->pc = 0x7993BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993B8u;
    // 0x7993bc: 0x8c642f84  lw          $a0, 0x2F84($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7993B8u, 0x7993C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993C0u;
label_7993c0:
    // 0x7993c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x7993C0u;
    {
        const bool branch_taken_0x7993c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993C0u;
        // 0x7993c4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993c0) {
            ctx->pc = 0x7993E4u;
            goto label_7993e4;
        }
    }
    ctx->pc = 0x7993C8u;
label_7993c8:
    // 0x7993c8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7993c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x7993cc: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7993ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7993d0: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x7993d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x7993d4: 0x24a595c0  addiu       $a1, $a1, -0x6A40
    ctx->pc = 0x7993d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940096));
    // 0x7993d8: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7993D8u;
    SET_GPR_U32(ctx, 31, 0x7993E0u);
    ctx->pc = 0x7993DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993D8u;
    // 0x7993dc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7993D8u, 0x7993E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993E0u;
label_7993e0:
    // 0x7993e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7993e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_7993e4:
    // 0x7993e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7993e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7993e8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x7993e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7993ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7993ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7993f0: 0x3e00008  jr          $ra
    ctx->pc = 0x7993F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7993F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993F0u;
        // 0x7993f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7993F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7993F8u;
}
} // namespace gh_r104
