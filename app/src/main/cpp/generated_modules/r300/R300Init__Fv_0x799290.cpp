#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r300_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r300
{
// Function: R300Init__Fv
// Address: 0x799290 - 0x799778
void R300Init__Fv_0x799290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R300Init__Fv_0x799290");
#endif

    switch (ctx->pc) {
        case 0x7992e8u: goto label_7992e8;
        case 0x7992f8u: goto label_7992f8;
        case 0x799328u: goto label_799328;
        case 0x799350u: goto label_799350;
        case 0x799378u: goto label_799378;
        case 0x7993a8u: goto label_7993a8;
        case 0x7993b4u: goto label_7993b4;
        case 0x7993d8u: goto label_7993d8;
        case 0x7993f8u: goto label_7993f8;
        case 0x799414u: goto label_799414;
        case 0x799428u: goto label_799428;
        case 0x799438u: goto label_799438;
        case 0x79947cu: goto label_79947c;
        case 0x7994a0u: goto label_7994a0;
        case 0x7994c8u: goto label_7994c8;
        case 0x7994e4u: goto label_7994e4;
        case 0x7994ecu: goto label_7994ec;
        case 0x7994f4u: goto label_7994f4;
        case 0x799504u: goto label_799504;
        case 0x799518u: goto label_799518;
        case 0x799524u: goto label_799524;
        case 0x799548u: goto label_799548;
        case 0x79955cu: goto label_79955c;
        case 0x799570u: goto label_799570;
        case 0x799580u: goto label_799580;
        case 0x799588u: goto label_799588;
        case 0x799594u: goto label_799594;
        case 0x7995a8u: goto label_7995a8;
        case 0x7995c8u: goto label_7995c8;
        case 0x7995f8u: goto label_7995f8;
        case 0x799630u: goto label_799630;
        case 0x799660u: goto label_799660;
        case 0x799698u: goto label_799698;
        case 0x7996c8u: goto label_7996c8;
        case 0x799700u: goto label_799700;
        case 0x799730u: goto label_799730;
        default: break;
    }

    ctx->pc = 0x799290u;

    // 0x799290: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x799290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x799294: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799298: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x799298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x79929c: 0x24040120  addiu       $a0, $zero, 0x120
    ctx->pc = 0x79929cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x7992a0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x7992a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x7992a4: 0x2454ae80  addiu       $s4, $v0, -0x5180
    ctx->pc = 0x7992a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946432));
    // 0x7992a8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x7992a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x7992ac: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x7992acu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x7992b0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x7992b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x7992b4: 0x3c12005f  lui         $s2, 0x5F
    ctx->pc = 0x7992b4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)95 << 16));
    // 0x7992b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x7992b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x7992bc: 0x3c130075  lui         $s3, 0x75
    ctx->pc = 0x7992bcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)117 << 16));
    // 0x7992c0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x7992c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x7992c4: 0x3c15007a  lui         $s5, 0x7A
    ctx->pc = 0x7992c4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)122 << 16));
    // 0x7992c8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x7992c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x7992cc: 0x3c16007a  lui         $s6, 0x7A
    ctx->pc = 0x7992ccu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)122 << 16));
    // 0x7992d0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x7992d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x7992d4: 0x3c17007a  lui         $s7, 0x7A
    ctx->pc = 0x7992d4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
    // 0x7992d8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x7992d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x7992dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7992dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7992e0: 0xc1e6460  jal         func_799180
    ctx->pc = 0x7992E0u;
    SET_GPR_U32(ctx, 31, 0x7992E8u);
    ctx->pc = 0x7992E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992E0u;
    // 0x7992e4: 0x3c1e007a  lui         $fp, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x7992E0u, 0x7992E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992E8u;
label_7992e8:
    // 0x7992e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7992e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992ec: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x7992ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7992f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7992f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7992f4: 0x0  nop
    ctx->pc = 0x7992f4u;
    // NOP
label_7992f8:
    // 0x7992f8: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x7992f8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7992fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x7992fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x799300: 0x0  nop
    ctx->pc = 0x799300u;
    // NOP
    // 0x799304: 0x0  nop
    ctx->pc = 0x799304u;
    // NOP
    // 0x799308: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799308u;
    {
        const bool branch_taken_0x799308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x79930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799308u;
        // 0x79930c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799308) {
            ctx->pc = 0x7992F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7992f8;
        }
    }
    ctx->pc = 0x799310u;
    // 0x799310: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x799310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x799314: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x799314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799318: 0x24a60080  addiu       $a2, $a1, 0x80
    ctx->pc = 0x799318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x79931c: 0x24a700d0  addiu       $a3, $a1, 0xD0
    ctx->pc = 0x79931cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    // 0x799320: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x799320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799324: 0x0  nop
    ctx->pc = 0x799324u;
    // NOP
label_799328:
    // 0x799328: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x799328u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79932c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x79932cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x799330: 0x0  nop
    ctx->pc = 0x799330u;
    // NOP
    // 0x799334: 0x0  nop
    ctx->pc = 0x799334u;
    // NOP
    // 0x799338: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799338u;
    {
        const bool branch_taken_0x799338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x79933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799338u;
        // 0x79933c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799338) {
            ctx->pc = 0x799328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799328;
        }
    }
    ctx->pc = 0x799340u;
    // 0x799340: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x799340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799344: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x799344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799348: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x799348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79934c: 0x0  nop
    ctx->pc = 0x79934cu;
    // NOP
label_799350:
    // 0x799350: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x799350u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799354: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x799354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x799358: 0x0  nop
    ctx->pc = 0x799358u;
    // NOP
    // 0x79935c: 0x0  nop
    ctx->pc = 0x79935cu;
    // NOP
    // 0x799360: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799360u;
    {
        const bool branch_taken_0x799360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x799364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799360u;
        // 0x799364: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799360) {
            ctx->pc = 0x799350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799350;
        }
    }
    ctx->pc = 0x799368u;
    // 0x799368: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x799368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79936c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x79936cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799370: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x799370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799374: 0x0  nop
    ctx->pc = 0x799374u;
    // NOP
label_799378:
    // 0x799378: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x799378u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79937c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x79937cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x799380: 0x0  nop
    ctx->pc = 0x799380u;
    // NOP
    // 0x799384: 0x0  nop
    ctx->pc = 0x799384u;
    // NOP
    // 0x799388: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799388u;
    {
        const bool branch_taken_0x799388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x79938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799388u;
        // 0x79938c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799388) {
            ctx->pc = 0x799378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799378;
        }
    }
    ctx->pc = 0x799390u;
    // 0x799390: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x799390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x799394: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x799394u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x799398: 0x2450ea60  addiu       $s0, $v0, -0x15A0
    ctx->pc = 0x799398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
    // 0x79939c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79939cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7993a0: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x7993A0u;
    SET_GPR_U32(ctx, 31, 0x7993A8u);
    ctx->pc = 0x7993A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993A0u;
    // 0x7993a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x7993A0u, 0x7993A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993A8u;
label_7993a8:
    // 0x7993a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7993a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993ac: 0xc0b0a3e  jal         func_2C28F8
    ctx->pc = 0x7993ACu;
    SET_GPR_U32(ctx, 31, 0x7993B4u);
    ctx->pc = 0x7993B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993ACu;
    // 0x7993b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C28F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C28F8u, 0x7993ACu, 0x7993B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993B4u;
label_7993b4:
    // 0x7993b4: 0x8e438658  lw          $v1, -0x79A8($s2)
    ctx->pc = 0x7993b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
    // 0x7993b8: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x7993b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x7993bc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7993bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7993c0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x7993c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x7993c4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x7993C4u;
    {
        const bool branch_taken_0x7993c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7993c4) {
            ctx->pc = 0x7993C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7993C4u;
            // 0x7993c8: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7993FCu;
            goto label_7993fc;
        }
    }
    ctx->pc = 0x7993CCu;
    // 0x7993cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7993ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993d0: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x7993D0u;
    SET_GPR_U32(ctx, 31, 0x7993D8u);
    ctx->pc = 0x7993D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993D0u;
    // 0x7993d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x7993D0u, 0x7993D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993D8u;
label_7993d8:
    // 0x7993d8: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x7993d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x7993dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7993dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7993e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993e4: 0x24e79d10  addiu       $a3, $a3, -0x62F0
    ctx->pc = 0x7993e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941968));
    // 0x7993e8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7993e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7993ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7993ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993f0: 0xc0b09d4  jal         func_2C2750
    ctx->pc = 0x7993F0u;
    SET_GPR_U32(ctx, 31, 0x7993F8u);
    ctx->pc = 0x7993F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993F0u;
    // 0x7993f4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2750u, 0x7993F0u, 0x7993F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993F8u;
label_7993f8:
    // 0x7993f8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x7993f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_7993fc:
    // 0x7993fc: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x7993fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x799400: 0x240503b3  addiu       $a1, $zero, 0x3B3
    ctx->pc = 0x799400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 947));
    // 0x799404: 0x24840d20  addiu       $a0, $a0, 0xD20
    ctx->pc = 0x799404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3360));
    // 0x799408: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x799408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x79940c: 0xc07fa28  jal         func_1FE8A0
    ctx->pc = 0x79940Cu;
    SET_GPR_U32(ctx, 31, 0x799414u);
    ctx->pc = 0x799410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79940Cu;
    // 0x799410: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x79940Cu, 0x799414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799414u;
label_799414:
    // 0x799414: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799418: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799418u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79941c: 0x24a5aa08  addiu       $a1, $a1, -0x55F8
    ctx->pc = 0x79941cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945288));
    // 0x799420: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799420u;
    SET_GPR_U32(ctx, 31, 0x799428u);
    ctx->pc = 0x799424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799420u;
    // 0x799424: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799420u, 0x799428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799428u;
label_799428:
    // 0x799428: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x79942c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x79942cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x799430: 0xc0a421a  jal         func_290868
    ctx->pc = 0x799430u;
    SET_GPR_U32(ctx, 31, 0x799438u);
    ctx->pc = 0x799434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799430u;
    // 0x799434: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799430u, 0x799438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799438u;
label_799438:
    // 0x799438: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x799438u;
    {
        const bool branch_taken_0x799438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799438u;
        // 0x79943c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799438) {
            ctx->pc = 0x79947Cu;
            goto label_79947c;
        }
    }
    ctx->pc = 0x799440u;
    // 0x799440: 0x3c014228  lui         $at, 0x4228
    ctx->pc = 0x799440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16936 << 16));
    // 0x799444: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x799444u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x799448: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x799448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x79944c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79944cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x799450: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799454: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x799454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799458: 0x3c01431c  lui         $at, 0x431C
    ctx->pc = 0x799458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17180 << 16));
    // 0x79945c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79945cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799460: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799464: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799468: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x799468u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x79946c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x79946cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x799470: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x799470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x799474: 0xc0a240e  jal         func_289038
    ctx->pc = 0x799474u;
    SET_GPR_U32(ctx, 31, 0x79947Cu);
    ctx->pc = 0x799478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799474u;
    // 0x799478: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x289038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289038u, 0x799474u, 0x79947Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79947Cu;
label_79947c:
    // 0x79947c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x79947cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x799480: 0x3c100100  lui         $s0, 0x100
    ctx->pc = 0x799480u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)256 << 16));
    // 0x799484: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x799484u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x799488: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x799488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x79948c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79948Cu;
    {
        const bool branch_taken_0x79948c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79948Cu;
        // 0x799490: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79948c) {
            ctx->pc = 0x7994C8u;
            goto label_7994c8;
        }
    }
    ctx->pc = 0x799494u;
    // 0x799494: 0x240503d9  addiu       $a1, $zero, 0x3D9
    ctx->pc = 0x799494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 985));
    // 0x799498: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x799498u;
    SET_GPR_U32(ctx, 31, 0x7994A0u);
    ctx->pc = 0x79949Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799498u;
    // 0x79949c: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x799498u, 0x7994A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994A0u;
label_7994a0:
    // 0x7994a0: 0x8e428658  lw          $v0, -0x79A8($s2)
    ctx->pc = 0x7994a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
    // 0x7994a4: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x7994a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x7994a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7994a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7994acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994b0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7994b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7994b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7994b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994b8: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x7994b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x7994bc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x7994bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x7994c0: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x7994C0u;
    SET_GPR_U32(ctx, 31, 0x7994C8u);
    ctx->pc = 0x7994C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994C0u;
    // 0x7994c4: 0x8d04264c  lw          $a0, 0x264C($t0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x7994C0u, 0x7994C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994C8u;
label_7994c8:
    // 0x7994c8: 0x8e428658  lw          $v0, -0x79A8($s2)
    ctx->pc = 0x7994c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
    // 0x7994cc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x7994ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7994d0: 0x901824  and         $v1, $a0, $s0
    ctx->pc = 0x7994d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    // 0x7994d4: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x7994D4u;
    {
        const bool branch_taken_0x7994d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994D4u;
        // 0x7994d8: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994d4) {
            ctx->pc = 0x79952Cu;
            goto label_79952c;
        }
    }
    ctx->pc = 0x7994DCu;
    // 0x7994dc: 0xc1e6976  jal         func_79A5D8
    ctx->pc = 0x7994DCu;
    SET_GPR_U32(ctx, 31, 0x7994E4u);
    ctx->pc = 0x79A5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A5D8u, 0x7994DCu, 0x7994E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994E4u;
label_7994e4:
    // 0x7994e4: 0xc1e6998  jal         func_79A660
    ctx->pc = 0x7994E4u;
    SET_GPR_U32(ctx, 31, 0x7994ECu);
    ctx->pc = 0x79A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A660u, 0x7994E4u, 0x7994ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994ECu;
label_7994ec:
    // 0x7994ec: 0xc1e65e0  jal         func_799780
    ctx->pc = 0x7994ECu;
    SET_GPR_U32(ctx, 31, 0x7994F4u);
    ctx->pc = 0x799780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799780u, 0x7994ECu, 0x7994F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994F4u;
label_7994f4:
    // 0x7994f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7994f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994f8: 0x240503d9  addiu       $a1, $zero, 0x3D9
    ctx->pc = 0x7994f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 985));
    // 0x7994fc: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x7994FCu;
    SET_GPR_U32(ctx, 31, 0x799504u);
    ctx->pc = 0x799500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994FCu;
    // 0x799500: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x7994FCu, 0x799504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799504u;
label_799504:
    // 0x799504: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799508: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799508u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79950c: 0x24a5a190  addiu       $a1, $a1, -0x5E70
    ctx->pc = 0x79950cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943120));
    // 0x799510: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799510u;
    SET_GPR_U32(ctx, 31, 0x799518u);
    ctx->pc = 0x799514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799510u;
    // 0x799514: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799510u, 0x799518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799518u;
label_799518:
    // 0x799518: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79951c: 0xc1e69ba  jal         func_79A6E8
    ctx->pc = 0x79951Cu;
    SET_GPR_U32(ctx, 31, 0x799524u);
    ctx->pc = 0x799520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79951Cu;
    // 0x799520: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A6E8u, 0x79951Cu, 0x799524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799524u;
label_799524:
    // 0x799524: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x799524u;
    {
        const bool branch_taken_0x799524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799524u;
        // 0x799528: 0x82a2adb0  lb          $v0, -0x5250($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 4294946224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799524) {
            ctx->pc = 0x7995ACu;
            goto label_7995ac;
        }
    }
    ctx->pc = 0x79952Cu;
label_79952c:
    // 0x79952c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x79952cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x799530: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x799530u;
    {
        const bool branch_taken_0x799530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799530u;
        // 0x799534: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799530) {
            ctx->pc = 0x799578u;
            goto label_799578;
        }
    }
    ctx->pc = 0x799538u;
    // 0x799538: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79953c: 0x24a59e08  addiu       $a1, $a1, -0x61F8
    ctx->pc = 0x79953cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942216));
    // 0x799540: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799540u;
    SET_GPR_U32(ctx, 31, 0x799548u);
    ctx->pc = 0x799544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799540u;
    // 0x799544: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799540u, 0x799548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799548u;
label_799548:
    // 0x799548: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79954c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79954cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799550: 0x24a5a290  addiu       $a1, $a1, -0x5D70
    ctx->pc = 0x799550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943376));
    // 0x799554: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799554u;
    SET_GPR_U32(ctx, 31, 0x79955Cu);
    ctx->pc = 0x799558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799554u;
    // 0x799558: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799554u, 0x79955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79955Cu;
label_79955c:
    // 0x79955c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79955cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799560: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799564: 0x24a5a0e8  addiu       $a1, $a1, -0x5F18
    ctx->pc = 0x799564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942952));
    // 0x799568: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799568u;
    SET_GPR_U32(ctx, 31, 0x799570u);
    ctx->pc = 0x79956Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799568u;
    // 0x79956c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799568u, 0x799570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799570u;
label_799570:
    // 0x799570: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x799570u;
    {
        const bool branch_taken_0x799570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799570u;
        // 0x799574: 0x82a2adb0  lb          $v0, -0x5250($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 4294946224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799570) {
            ctx->pc = 0x7995ACu;
            goto label_7995ac;
        }
    }
    ctx->pc = 0x799578u;
label_799578:
    // 0x799578: 0xc1e6976  jal         func_79A5D8
    ctx->pc = 0x799578u;
    SET_GPR_U32(ctx, 31, 0x799580u);
    ctx->pc = 0x79A5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A5D8u, 0x799578u, 0x799580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799580u;
label_799580:
    // 0x799580: 0xc1e6998  jal         func_79A660
    ctx->pc = 0x799580u;
    SET_GPR_U32(ctx, 31, 0x799588u);
    ctx->pc = 0x79A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A660u, 0x799580u, 0x799588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799588u;
label_799588:
    // 0x799588: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79958c: 0xc1e69ba  jal         func_79A6E8
    ctx->pc = 0x79958Cu;
    SET_GPR_U32(ctx, 31, 0x799594u);
    ctx->pc = 0x799590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79958Cu;
    // 0x799590: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A6E8u, 0x79958Cu, 0x799594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799594u;
label_799594:
    // 0x799594: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799598: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79959c: 0x24a5a0e8  addiu       $a1, $a1, -0x5F18
    ctx->pc = 0x79959cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942952));
    // 0x7995a0: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7995A0u;
    SET_GPR_U32(ctx, 31, 0x7995A8u);
    ctx->pc = 0x7995A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995A0u;
    // 0x7995a4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7995A0u, 0x7995A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995A8u;
label_7995a8:
    // 0x7995a8: 0x82a2adb0  lb          $v0, -0x5250($s5)
    ctx->pc = 0x7995a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 4294946224)));
label_7995ac:
    // 0x7995ac: 0x26684c58  addiu       $t0, $s3, 0x4C58
    ctx->pc = 0x7995acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 19544));
    // 0x7995b0: 0x26a3adb0  addiu       $v1, $s5, -0x5250
    ctx->pc = 0x7995b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946224));
    // 0x7995b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7995b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995b8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7995B8u;
    {
        const bool branch_taken_0x7995b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995B8u;
        // 0x7995bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995b8) {
            ctx->pc = 0x7995F0u;
            goto label_7995f0;
        }
    }
    ctx->pc = 0x7995C0u;
    // 0x7995c0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7995c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995c4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7995c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7995c8:
    // 0x7995c8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7995c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x7995cc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7995ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x7995d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7995d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7995d4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7995d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x7995d8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7995d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x7995dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7995DCu;
    {
        const bool branch_taken_0x7995dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995DCu;
        // 0x7995e0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995dc) {
            ctx->pc = 0x7995F0u;
            goto label_7995f0;
        }
    }
    ctx->pc = 0x7995E4u;
    // 0x7995e4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7995e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7995e8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7995E8u;
    {
        const bool branch_taken_0x7995e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7995e8) {
            ctx->pc = 0x7995ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7995E8u;
            // 0x7995ec: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7995C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7995c8;
        }
    }
    ctx->pc = 0x7995F0u;
label_7995f0:
    // 0x7995f0: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x7995F0u;
    SET_GPR_U32(ctx, 31, 0x7995F8u);
    ctx->pc = 0x7995F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995F0u;
    // 0x7995f4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x7995F0u, 0x7995F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995F8u;
label_7995f8:
    // 0x7995f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7995f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995fc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7995FCu;
    {
        const bool branch_taken_0x7995fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995FCu;
        // 0x799600: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995fc) {
            ctx->pc = 0x79960Cu;
            goto label_79960c;
        }
    }
    ctx->pc = 0x799604u;
    // 0x799604: 0xac8205ec  sw          $v0, 0x5EC($a0)
    ctx->pc = 0x799604u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1516), GPR_U32(ctx, 2));
    // 0x799608: 0xac8205f0  sw          $v0, 0x5F0($a0)
    ctx->pc = 0x799608u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1520), GPR_U32(ctx, 2));
label_79960c:
    // 0x79960c: 0x82c2adb8  lb          $v0, -0x5248($s6)
    ctx->pc = 0x79960cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 4294946232)));
    // 0x799610: 0x26684c58  addiu       $t0, $s3, 0x4C58
    ctx->pc = 0x799610u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 19544));
    // 0x799614: 0x26c3adb8  addiu       $v1, $s6, -0x5248
    ctx->pc = 0x799614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946232));
    // 0x799618: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79961c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79961Cu;
    {
        const bool branch_taken_0x79961c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79961Cu;
        // 0x799620: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79961c) {
            ctx->pc = 0x799658u;
            goto label_799658;
        }
    }
    ctx->pc = 0x799624u;
    // 0x799624: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799628: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799628u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79962c: 0x0  nop
    ctx->pc = 0x79962cu;
    // NOP
label_799630:
    // 0x799630: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799630u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799634: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799638: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79963c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79963cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799640: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799640u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799644: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799644u;
    {
        const bool branch_taken_0x799644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799644u;
        // 0x799648: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799644) {
            ctx->pc = 0x799658u;
            goto label_799658;
        }
    }
    ctx->pc = 0x79964Cu;
    // 0x79964c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79964cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799650: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799650u;
    {
        const bool branch_taken_0x799650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799650) {
            ctx->pc = 0x799654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799650u;
            // 0x799654: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799630;
        }
    }
    ctx->pc = 0x799658u;
label_799658:
    // 0x799658: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799658u;
    SET_GPR_U32(ctx, 31, 0x799660u);
    ctx->pc = 0x79965Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799658u;
    // 0x79965c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799658u, 0x799660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799660u;
label_799660:
    // 0x799660: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x799660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799664: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799664u;
    {
        const bool branch_taken_0x799664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799664u;
        // 0x799668: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799664) {
            ctx->pc = 0x799678u;
            goto label_799678;
        }
    }
    ctx->pc = 0x79966Cu;
    // 0x79966c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79966cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799670: 0xac8205ec  sw          $v0, 0x5EC($a0)
    ctx->pc = 0x799670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1516), GPR_U32(ctx, 2));
    // 0x799674: 0xac8305f0  sw          $v1, 0x5F0($a0)
    ctx->pc = 0x799674u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1520), GPR_U32(ctx, 3));
label_799678:
    // 0x799678: 0x82e2adc0  lb          $v0, -0x5240($s7)
    ctx->pc = 0x799678u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 4294946240)));
    // 0x79967c: 0x26684c58  addiu       $t0, $s3, 0x4C58
    ctx->pc = 0x79967cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 19544));
    // 0x799680: 0x26e3adc0  addiu       $v1, $s7, -0x5240
    ctx->pc = 0x799680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946240));
    // 0x799684: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799688: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799688u;
    {
        const bool branch_taken_0x799688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799688u;
        // 0x79968c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799688) {
            ctx->pc = 0x7996C0u;
            goto label_7996c0;
        }
    }
    ctx->pc = 0x799690u;
    // 0x799690: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799694: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799694u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799698:
    // 0x799698: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799698u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79969c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79969cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x7996a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7996a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7996a4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7996a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x7996a8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7996a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x7996ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7996ACu;
    {
        const bool branch_taken_0x7996ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996ACu;
        // 0x7996b0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996ac) {
            ctx->pc = 0x7996C0u;
            goto label_7996c0;
        }
    }
    ctx->pc = 0x7996B4u;
    // 0x7996b4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7996b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7996b8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7996B8u;
    {
        const bool branch_taken_0x7996b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7996b8) {
            ctx->pc = 0x7996BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7996B8u;
            // 0x7996bc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799698;
        }
    }
    ctx->pc = 0x7996C0u;
label_7996c0:
    // 0x7996c0: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x7996C0u;
    SET_GPR_U32(ctx, 31, 0x7996C8u);
    ctx->pc = 0x7996C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996C0u;
    // 0x7996c4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x7996C0u, 0x7996C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996C8u;
label_7996c8:
    // 0x7996c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7996c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996cc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7996CCu;
    {
        const bool branch_taken_0x7996cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996CCu;
        // 0x7996d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996cc) {
            ctx->pc = 0x7996E0u;
            goto label_7996e0;
        }
    }
    ctx->pc = 0x7996D4u;
    // 0x7996d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x7996d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7996d8: 0xac8205ec  sw          $v0, 0x5EC($a0)
    ctx->pc = 0x7996d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1516), GPR_U32(ctx, 2));
    // 0x7996dc: 0xac8305f0  sw          $v1, 0x5F0($a0)
    ctx->pc = 0x7996dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1520), GPR_U32(ctx, 3));
label_7996e0:
    // 0x7996e0: 0x83c2adc8  lb          $v0, -0x5238($fp)
    ctx->pc = 0x7996e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294946248)));
    // 0x7996e4: 0x26684c58  addiu       $t0, $s3, 0x4C58
    ctx->pc = 0x7996e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 19544));
    // 0x7996e8: 0x27c3adc8  addiu       $v1, $fp, -0x5238
    ctx->pc = 0x7996e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294946248));
    // 0x7996ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7996ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996f0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7996F0u;
    {
        const bool branch_taken_0x7996f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996F0u;
        // 0x7996f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996f0) {
            ctx->pc = 0x799728u;
            goto label_799728;
        }
    }
    ctx->pc = 0x7996F8u;
    // 0x7996f8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7996f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996fc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7996fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799700:
    // 0x799700: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799700u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799704: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799708: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79970c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79970cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799710: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799710u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799714: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799714u;
    {
        const bool branch_taken_0x799714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799714u;
        // 0x799718: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799714) {
            ctx->pc = 0x799728u;
            goto label_799728;
        }
    }
    ctx->pc = 0x79971Cu;
    // 0x79971c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79971cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799720: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799720u;
    {
        const bool branch_taken_0x799720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799720) {
            ctx->pc = 0x799724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799720u;
            // 0x799724: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799700;
        }
    }
    ctx->pc = 0x799728u;
label_799728:
    // 0x799728: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799728u;
    SET_GPR_U32(ctx, 31, 0x799730u);
    ctx->pc = 0x79972Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799728u;
    // 0x79972c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799728u, 0x799730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799730u;
label_799730:
    // 0x799730: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x799730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799734: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799734u;
    {
        const bool branch_taken_0x799734 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799734u;
        // 0x799738: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799734) {
            ctx->pc = 0x799748u;
            goto label_799748;
        }
    }
    ctx->pc = 0x79973Cu;
    // 0x79973c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x79973cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799740: 0xac8205ec  sw          $v0, 0x5EC($a0)
    ctx->pc = 0x799740u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1516), GPR_U32(ctx, 2));
    // 0x799744: 0xac8305f0  sw          $v1, 0x5F0($a0)
    ctx->pc = 0x799744u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1520), GPR_U32(ctx, 3));
label_799748:
    // 0x799748: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x799748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79974c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x79974cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799750: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x799750u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799754: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x799754u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799758: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x799758u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79975c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x79975cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799760: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x799760u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799764: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x799764u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799768: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x799768u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79976c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79976cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799770: 0x3e00008  jr          $ra
    ctx->pc = 0x799770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799770u;
        // 0x799774: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799778u;
}
} // namespace gh_r300
