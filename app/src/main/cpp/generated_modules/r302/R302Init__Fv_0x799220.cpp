#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r302_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r302
{
// Function: R302Init__Fv
// Address: 0x799220 - 0x7993f0
void R302Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R302Init__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799250u: goto label_799250;
        case 0x799260u: goto label_799260;
        case 0x79926cu: goto label_79926c;
        case 0x799278u: goto label_799278;
        case 0x799288u: goto label_799288;
        case 0x7992a0u: goto label_7992a0;
        case 0x7992b0u: goto label_7992b0;
        case 0x7992d8u: goto label_7992d8;
        case 0x799308u: goto label_799308;
        case 0x799330u: goto label_799330;
        case 0x799360u: goto label_799360;
        case 0x799370u: goto label_799370;
        case 0x799390u: goto label_799390;
        case 0x7993c0u: goto label_7993c0;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x799224: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x799228: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79922c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x799230: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799230u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x799234: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x799234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x799238: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x799238u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x79923c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x79923cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x799240: 0x3c12007a  lui         $s2, 0x7A
    ctx->pc = 0x799240u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
    // 0x799244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799248: 0xc1e6460  jal         func_799180
    ctx->pc = 0x799248u;
    SET_GPR_U32(ctx, 31, 0x799250u);
    ctx->pc = 0x79924Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799248u;
    // 0x79924c: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799248u, 0x799250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799250u;
label_799250:
    // 0x799250: 0xae029f80  sw          $v0, -0x6080($s0)
    ctx->pc = 0x799250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294942592), GPR_U32(ctx, 2));
    // 0x799254: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x799254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799258: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799258u;
    SET_GPR_U32(ctx, 31, 0x799260u);
    ctx->pc = 0x79925Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799258u;
    // 0x79925c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799258u, 0x799260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799260u;
label_799260:
    // 0x799260: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x799260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799264: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799264u;
    SET_GPR_U32(ctx, 31, 0x79926Cu);
    ctx->pc = 0x799268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799264u;
    // 0x799268: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799264u, 0x79926Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79926Cu;
label_79926c:
    // 0x79926c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x79926cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799270: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799270u;
    SET_GPR_U32(ctx, 31, 0x799278u);
    ctx->pc = 0x799274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799270u;
    // 0x799274: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799270u, 0x799278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799278u;
label_799278:
    // 0x799278: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79927c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79927cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799280: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x799280u;
    SET_GPR_U32(ctx, 31, 0x799288u);
    ctx->pc = 0x799284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799280u;
    // 0x799284: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x799280u, 0x799288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799288u;
label_799288:
    // 0x799288: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79928c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79928cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799290: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x799290u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799294: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799298: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799298u;
    SET_GPR_U32(ctx, 31, 0x7992A0u);
    ctx->pc = 0x79929Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799298u;
    // 0x79929c: 0x24a59510  addiu       $a1, $a1, -0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799298u, 0x7992A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992A0u;
label_7992a0:
    // 0x7992a0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x7992a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x7992a4: 0x8c64d6e8  lw          $a0, -0x2918($v1)
    ctx->pc = 0x7992a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x7992a8: 0xc04f206  jal         func_13C818
    ctx->pc = 0x7992A8u;
    SET_GPR_U32(ctx, 31, 0x7992B0u);
    ctx->pc = 0x7992ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992A8u;
    // 0x7992ac: 0x24841dc0  addiu       $a0, $a0, 0x1DC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C818u, 0x7992A8u, 0x7992B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992B0u;
label_7992b0:
    // 0x7992b0: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7992b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x7992b4: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x7992b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x7992b8: 0x80449ea0  lb          $a0, -0x6160($v0)
    ctx->pc = 0x7992b8u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x799EA0u));
    // 0x7992bc: 0x24469ea0  addiu       $a2, $v0, -0x6160
    ctx->pc = 0x7992bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942368));
    // 0x7992c0: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x7992c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992c4: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x7992c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x7992c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7992c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992cc: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x7992CCu;
    {
        const bool branch_taken_0x7992cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992CCu;
        // 0x7992d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992cc) {
            ctx->pc = 0x799300u;
            goto label_799300;
        }
    }
    ctx->pc = 0x7992D4u;
    // 0x7992d4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7992d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7992d8:
    // 0x7992d8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7992d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x7992dc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7992dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x7992e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7992e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7992e4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7992e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x7992e8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7992e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x7992ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7992ECu;
    {
        const bool branch_taken_0x7992ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992ECu;
        // 0x7992f0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992ec) {
            ctx->pc = 0x799300u;
            goto label_799300;
        }
    }
    ctx->pc = 0x7992F4u;
    // 0x7992f4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7992f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7992f8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7992F8u;
    {
        const bool branch_taken_0x7992f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7992f8) {
            ctx->pc = 0x7992FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7992F8u;
            // 0x7992fc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7992D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7992d8;
        }
    }
    ctx->pc = 0x799300u;
label_799300:
    // 0x799300: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799300u;
    SET_GPR_U32(ctx, 31, 0x799308u);
    ctx->pc = 0x799304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799300u;
    // 0x799304: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799300u, 0x799308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799308u;
label_799308:
    // 0x799308: 0x8e639f80  lw          $v1, -0x6080($s3)
    ctx->pc = 0x799308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294942592)));
    // 0x79930c: 0x26084c58  addiu       $t0, $s0, 0x4C58
    ctx->pc = 0x79930cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 19544));
    // 0x799310: 0x26249ea8  addiu       $a0, $s1, -0x6158
    ctx->pc = 0x799310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942376));
    // 0x799314: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799318: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x799318u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x79931c: 0x82229ea8  lb          $v0, -0x6158($s1)
    ctx->pc = 0x79931cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294942376)));
    // 0x799320: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799320u;
    {
        const bool branch_taken_0x799320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799320u;
        // 0x799324: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799320) {
            ctx->pc = 0x799358u;
            goto label_799358;
        }
    }
    ctx->pc = 0x799328u;
    // 0x799328: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x799328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79932c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79932cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799330:
    // 0x799330: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799330u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799334: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799338: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79933c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79933cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799340: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799340u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799344: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799344u;
    {
        const bool branch_taken_0x799344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799344u;
        // 0x799348: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799344) {
            ctx->pc = 0x799358u;
            goto label_799358;
        }
    }
    ctx->pc = 0x79934Cu;
    // 0x79934c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79934cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799350: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799350u;
    {
        const bool branch_taken_0x799350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799350) {
            ctx->pc = 0x799354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799350u;
            // 0x799354: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799330;
        }
    }
    ctx->pc = 0x799358u;
label_799358:
    // 0x799358: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799358u;
    SET_GPR_U32(ctx, 31, 0x799360u);
    ctx->pc = 0x79935Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799358u;
    // 0x79935c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799358u, 0x799360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799360u;
label_799360:
    // 0x799360: 0x8e639f80  lw          $v1, -0x6080($s3)
    ctx->pc = 0x799360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294942592)));
    // 0x799364: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x799364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799368: 0xc1e668c  jal         func_799A30
    ctx->pc = 0x799368u;
    SET_GPR_U32(ctx, 31, 0x799370u);
    ctx->pc = 0x79936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799368u;
    // 0x79936c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799A30u, 0x799368u, 0x799370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799370u;
label_799370:
    // 0x799370: 0x82429eb0  lb          $v0, -0x6150($s2)
    ctx->pc = 0x799370u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294942384)));
    // 0x799374: 0x26084c58  addiu       $t0, $s0, 0x4C58
    ctx->pc = 0x799374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 19544));
    // 0x799378: 0x26439eb0  addiu       $v1, $s2, -0x6150
    ctx->pc = 0x799378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942384));
    // 0x79937c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79937cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799380: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799380u;
    {
        const bool branch_taken_0x799380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799380u;
        // 0x799384: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799380) {
            ctx->pc = 0x7993B8u;
            goto label_7993b8;
        }
    }
    ctx->pc = 0x799388u;
    // 0x799388: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79938c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79938cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799390:
    // 0x799390: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799390u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799394: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799398: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79939c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79939cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x7993a0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7993a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x7993a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7993A4u;
    {
        const bool branch_taken_0x7993a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993A4u;
        // 0x7993a8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993a4) {
            ctx->pc = 0x7993B8u;
            goto label_7993b8;
        }
    }
    ctx->pc = 0x7993ACu;
    // 0x7993ac: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7993acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7993b0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7993B0u;
    {
        const bool branch_taken_0x7993b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7993b0) {
            ctx->pc = 0x7993B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7993B0u;
            // 0x7993b4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799390;
        }
    }
    ctx->pc = 0x7993B8u;
label_7993b8:
    // 0x7993b8: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x7993B8u;
    SET_GPR_U32(ctx, 31, 0x7993C0u);
    ctx->pc = 0x7993BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993B8u;
    // 0x7993bc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x7993B8u, 0x7993C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993C0u;
label_7993c0:
    // 0x7993c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7993c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993c4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x7993C4u;
    {
        const bool branch_taken_0x7993c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993C4u;
        // 0x7993c8: 0x24020a2a  addiu       $v0, $zero, 0xA2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2602));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993c4) {
            ctx->pc = 0x7993D0u;
            goto label_7993d0;
        }
    }
    ctx->pc = 0x7993CCu;
    // 0x7993cc: 0xac620560  sw          $v0, 0x560($v1)
    ctx->pc = 0x7993ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1376), GPR_U32(ctx, 2));
label_7993d0:
    // 0x7993d0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x7993d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7993d4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x7993d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7993d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x7993d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7993dc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x7993dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7993e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7993e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7993e4: 0x3e00008  jr          $ra
    ctx->pc = 0x7993E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7993E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993E4u;
        // 0x7993e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7993E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7993ECu;
    // 0x7993ec: 0x0  nop
    ctx->pc = 0x7993ecu;
    // NOP
    ctx->pc = 0x7993f0u;
}
} // namespace gh_r302
