#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r105_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r105
{
// Function: R105Init__Fv
// Address: 0x799228 - 0x799418
void R105Init__Fv_0x799228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R105Init__Fv_0x799228");
#endif

    switch (ctx->pc) {
        case 0x799250u: goto label_799250;
        case 0x7992d8u: goto label_7992d8;
        case 0x799308u: goto label_799308;
        case 0x79931cu: goto label_79931c;
        case 0x799354u: goto label_799354;
        case 0x79935cu: goto label_79935c;
        case 0x799398u: goto label_799398;
        case 0x7993a4u: goto label_7993a4;
        case 0x7993d8u: goto label_7993d8;
        case 0x7993e8u: goto label_7993e8;
        case 0x7993fcu: goto label_7993fc;
        default: break;
    }

    ctx->pc = 0x799228u;

    // 0x799228: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x799228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79922c: 0x24040170  addiu       $a0, $zero, 0x170
    ctx->pc = 0x79922cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    // 0x799230: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x799230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x799234: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x799234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x799238: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799238u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79923c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79923cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x799240: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x799240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x799244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799248: 0xc1e6460  jal         func_799180
    ctx->pc = 0x799248u;
    SET_GPR_U32(ctx, 31, 0x799250u);
    ctx->pc = 0x79924Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799248u;
    // 0x79924c: 0x2613a900  addiu       $s3, $s0, -0x5700 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799248u, 0x799250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799250u;
label_799250:
    // 0x799250: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x799250u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799254: 0xf8600050  sqc2        $vf0, 0x50($v1)
    ctx->pc = 0x799254u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799258: 0xf8600060  sqc2        $vf0, 0x60($v1)
    ctx->pc = 0x799258u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79925c: 0xf8600070  sqc2        $vf0, 0x70($v1)
    ctx->pc = 0x79925cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799260: 0xf8600080  sqc2        $vf0, 0x80($v1)
    ctx->pc = 0x799260u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799264: 0xf8600090  sqc2        $vf0, 0x90($v1)
    ctx->pc = 0x799264u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799268: 0xf86000a0  sqc2        $vf0, 0xA0($v1)
    ctx->pc = 0x799268u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79926c: 0xf86000b0  sqc2        $vf0, 0xB0($v1)
    ctx->pc = 0x79926cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799270: 0xf86000c0  sqc2        $vf0, 0xC0($v1)
    ctx->pc = 0x799270u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799274: 0xf86000d0  sqc2        $vf0, 0xD0($v1)
    ctx->pc = 0x799274u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799278: 0xf86000e0  sqc2        $vf0, 0xE0($v1)
    ctx->pc = 0x799278u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 224), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79927c: 0xf86000f0  sqc2        $vf0, 0xF0($v1)
    ctx->pc = 0x79927cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 240), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799280: 0xf8600100  sqc2        $vf0, 0x100($v1)
    ctx->pc = 0x799280u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 256), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799284: 0xf8600110  sqc2        $vf0, 0x110($v1)
    ctx->pc = 0x799284u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 272), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799288: 0xf8600120  sqc2        $vf0, 0x120($v1)
    ctx->pc = 0x799288u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 288), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79928c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x79928cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799290: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x799290u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x799294: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x799294u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x799298: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x799298u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79929c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x79929cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x7992a0: 0x3c12005f  lui         $s2, 0x5F
    ctx->pc = 0x7992a0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)95 << 16));
    // 0x7992a4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x7992a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x7992a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7992a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992ac: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x7992acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x7992b0: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x7992b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x7992b4: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x7992b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x7992b8: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x7992b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x7992bc: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x7992bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x7992c0: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x7992c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x7992c4: 0xac600130  sw          $zero, 0x130($v1)
    ctx->pc = 0x7992c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 304), GPR_U32(ctx, 0));
    // 0x7992c8: 0xac600134  sw          $zero, 0x134($v1)
    ctx->pc = 0x7992c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 0));
    // 0x7992cc: 0xac600138  sw          $zero, 0x138($v1)
    ctx->pc = 0x7992ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 312), GPR_U32(ctx, 0));
    // 0x7992d0: 0xac60013c  sw          $zero, 0x13C($v1)
    ctx->pc = 0x7992d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 316), GPR_U32(ctx, 0));
    // 0x7992d4: 0x0  nop
    ctx->pc = 0x7992d4u;
    // NOP
label_7992d8:
    // 0x7992d8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x7992d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x7992dc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x7992dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x7992e0: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x7992e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x7992e4: 0x0  nop
    ctx->pc = 0x7992e4u;
    // NOP
    // 0x7992e8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7992E8u;
    {
        const bool branch_taken_0x7992e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7992ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992E8u;
        // 0x7992ec: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992e8) {
            ctx->pc = 0x7992D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7992d8;
        }
    }
    ctx->pc = 0x7992F0u;
    // 0x7992f0: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x7992f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x7992f4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7992f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7992f8: 0x24a5a090  addiu       $a1, $a1, -0x5F70
    ctx->pc = 0x7992f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942864));
    // 0x7992fc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x7992fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x799300: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799300u;
    SET_GPR_U32(ctx, 31, 0x799308u);
    ctx->pc = 0x799304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799300u;
    // 0x799304: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799300u, 0x799308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799308u;
label_799308:
    // 0x799308: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79930c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79930cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799310: 0x24a59b38  addiu       $a1, $a1, -0x64C8
    ctx->pc = 0x799310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941496));
    // 0x799314: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799314u;
    SET_GPR_U32(ctx, 31, 0x79931Cu);
    ctx->pc = 0x799318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799314u;
    // 0x799318: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799314u, 0x79931Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79931Cu;
label_79931c:
    // 0x79931c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x79931cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x799320: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x799320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x799324: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x799324u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x799328: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x799328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x79932c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79932Cu;
    {
        const bool branch_taken_0x79932c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79932Cu;
        // 0x799330: 0x8e448658  lw          $a0, -0x79A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79932c) {
            ctx->pc = 0x799364u;
            goto label_799364;
        }
    }
    ctx->pc = 0x799334u;
    // 0x799334: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x799334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x799338: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x799338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79933c: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x79933cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x799340: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x799340u;
    {
        const bool branch_taken_0x799340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799340) {
            ctx->pc = 0x799344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799340u;
            // 0x799344: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799378u;
            goto label_799378;
        }
    }
    ctx->pc = 0x799348u;
    // 0x799348: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x799348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x79934c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79934Cu;
    SET_GPR_U32(ctx, 31, 0x799354u);
    ctx->pc = 0x799350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79934Cu;
    // 0x799350: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79934Cu, 0x799354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799354u;
label_799354:
    // 0x799354: 0xc04b236  jal         func_12C8D8
    ctx->pc = 0x799354u;
    SET_GPR_U32(ctx, 31, 0x79935Cu);
    ctx->pc = 0x799358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799354u;
    // 0x799358: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C8D8u, 0x799354u, 0x79935Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79935Cu;
label_79935c:
    // 0x79935c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79935Cu;
    {
        const bool branch_taken_0x79935c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79935Cu;
        // 0x799360: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79935c) {
            ctx->pc = 0x799378u;
            goto label_799378;
        }
    }
    ctx->pc = 0x799364u;
label_799364:
    // 0x799364: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x799364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x799368: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x799368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79936c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79936cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x799370: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x799370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x799374: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_799378:
    // 0x799378: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799378u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x79937c: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x79937cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x799380: 0x24e79508  addiu       $a3, $a3, -0x6AF8
    ctx->pc = 0x799380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939912));
    // 0x799384: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799388: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79938c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79938cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799390: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x799390u;
    SET_GPR_U32(ctx, 31, 0x799398u);
    ctx->pc = 0x799394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799390u;
    // 0x799394: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799390u, 0x799398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799398u;
label_799398:
    // 0x799398: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x799398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x79939c: 0xc1e659e  jal         func_799678
    ctx->pc = 0x79939Cu;
    SET_GPR_U32(ctx, 31, 0x7993A4u);
    ctx->pc = 0x7993A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79939Cu;
    // 0x7993a0: 0x24509b70  addiu       $s0, $v0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799678u, 0x79939Cu, 0x7993A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993A4u;
label_7993a4:
    // 0x7993a4: 0x8e22a900  lw          $v0, -0x5700($s1)
    ctx->pc = 0x7993a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945024)));
    // 0x7993a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7993a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x7993acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x7993b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7993b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7993b4: 0xac400160  sw          $zero, 0x160($v0)
    ctx->pc = 0x7993b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 0));
    // 0x7993b8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x7993b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x7993bc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x7993bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x7993c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7993c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7993c4: 0x8e22a900  lw          $v0, -0x5700($s1)
    ctx->pc = 0x7993c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945024)));
    // 0x7993c8: 0xe4400164  swc1        $f0, 0x164($v0)
    ctx->pc = 0x7993c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 356), bits); }
    // 0x7993cc: 0x8e23a900  lw          $v1, -0x5700($s1)
    ctx->pc = 0x7993ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945024)));
    // 0x7993d0: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x7993D0u;
    SET_GPR_U32(ctx, 31, 0x7993D8u);
    ctx->pc = 0x7993D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993D0u;
    // 0x7993d4: 0xe4610168  swc1        $f1, 0x168($v1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 360), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x7993D0u, 0x7993D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993D8u;
label_7993d8:
    // 0x7993d8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x7993D8u;
    {
        const bool branch_taken_0x7993d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7993d8) {
            ctx->pc = 0x7993DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7993D8u;
            // 0x7993dc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799400u;
            goto label_799400;
        }
    }
    ctx->pc = 0x7993E0u;
    // 0x7993e0: 0xc07e99e  jal         func_1FA678
    ctx->pc = 0x7993E0u;
    SET_GPR_U32(ctx, 31, 0x7993E8u);
    ctx->pc = 0x7993E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993E0u;
    // 0x7993e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA678u, 0x7993E0u, 0x7993E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993E8u;
label_7993e8:
    // 0x7993e8: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x7993e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x7993ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7993ECu;
    {
        const bool branch_taken_0x7993ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993ECu;
        // 0x7993f0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993ec) {
            ctx->pc = 0x799400u;
            goto label_799400;
        }
    }
    ctx->pc = 0x7993F4u;
    // 0x7993f4: 0xc1e650e  jal         func_799438
    ctx->pc = 0x7993F4u;
    SET_GPR_U32(ctx, 31, 0x7993FCu);
    ctx->pc = 0x799438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799438u, 0x7993F4u, 0x7993FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993FCu;
label_7993fc:
    // 0x7993fc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x7993fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_799400:
    // 0x799400: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x799400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799404: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x799404u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799408: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x799408u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79940c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79940cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799410: 0x3e00008  jr          $ra
    ctx->pc = 0x799410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799410u;
        // 0x799414: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799418u;
}
} // namespace gh_r105
